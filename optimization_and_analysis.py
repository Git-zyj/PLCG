import os
import multiprocessing as mp
import subprocess as sp
import time
import logging
import datetime
import argparse as ap
import gc
import sys
import signal
import json

from concurrent.futures import (ProcessPoolExecutor, ThreadPoolExecutor, as_completed,
                                wait, FIRST_COMPLETED)

from path_settings import PROJECT_PATH, DATASET_PATH

# the in-process pluto driver (scripts/pluto_driver.py) replaces the shell
# wrapper on the hot path; see scripts/compare_drivers.sh
sys.path.insert(0, os.path.join(PROJECT_PATH, 'scripts'))
from pluto_driver import PlutoDriver, PlutoDriverError  # noqa: E402
import machine_profile  # noqa: E402
from pluto_driver import driver_task  # noqa: E402


def _is_nonempty(path) -> bool:
    """True when *path* exists and is not empty (used by --skip-existing)."""
    try:
        return os.path.getsize(path) > 0
    except OSError:
        return False


def setup_logging(log_dir):
    """配置日志系统"""
    today = datetime.datetime.now().strftime('%Y%m%d')
    log_file = os.path.join(log_dir, f'pluto_optimization_{today}.log')
    
    # 清除根日志器的所有处理器
    logger = logging.getLogger()
    for handler in logger.handlers[:]:
        logger.removeHandler(handler)
    
    # 文件处理器 - 详细日志
    file_handler = logging.FileHandler(log_file, mode='w', encoding='utf-8')
    file_handler.setLevel(logging.DEBUG)
    
    # 控制台处理器 - 关键信息
    stream_handler = logging.StreamHandler()
    stream_handler.setLevel(logging.INFO)
    
    formatter = logging.Formatter('%(asctime)s - %(levelname)s - %(message)s')
    file_handler.setFormatter(formatter)
    stream_handler.setFormatter(formatter)
    
    logger.setLevel(logging.DEBUG)
    logger.addHandler(file_handler)
    logger.addHandler(stream_handler)
    
    return logger

def parse_arguments():
    """解析命令行参数"""
    parser = ap.ArgumentParser(
        description='Pluto code optimization with batch processing and detailed logging',
        epilog='Example: python optimization_and_analysis.py -d ./poly_code -p ./pluto/polycc'
    )
    parser.add_argument("-i", "--input-path", dest="dataset_path", 
                       help="path of the folder containing kernel_list file", 
                       type=str, default=DATASET_PATH)
    parser.add_argument("-o", "--output-path", dest="output_path", 
                       help="path for output files", 
                       type=str, default=None)
    parser.add_argument("-p", "--pluto-path", dest="pluto_path", 
                       help="path to pluto binaries", 
                       type=str, default=os.path.join(PROJECT_PATH, "Compilers/pluto/polycc_parallel"))
    parser.add_argument("--driver", dest="driver",
                       help="python: call the pluto binary directly (fast); "
                            "wrapper: use the polycc_parallel shell wrapper (reference implementation)",
                       type=str, choices=["python", "wrapper"], default="python")
    parser.add_argument("-j", "--processes", dest="num_processes", 
                       help="number of parallel processes", 
                       type=int, default=None)
    parser.add_argument("-t", "--timeout", dest="timeout", 
                       help="timeout duration in seconds per file", 
                       type=int, default=30)
    parser.add_argument("--skip-existing", dest="skip_existing", action="store_true",
                       help="skip kernels whose .pluto.c/.stdout already exist (resume a long run); "
                            "implies --no-clean. Outputs are deterministic for a given kernel.")
    parser.add_argument("--chunk-size", dest="chunk_size", type=int, default=8,
                       help="kernels per worker task on the python driver path; larger chunks "
                            "amortise process and gcc start-up, smaller chunks balance load")
    parser.add_argument("-c", "--command-options", dest="command_options",
                        help="options for pluto in command",
                        type=str, default='-q --parallel --tile --nocloogbacktrack --custom-context --plcg-info')
    parser.add_argument("--batch-size", dest="batch_size", 
                       help="batch size to reduce memory usage", 
                       type=int, default=500)
    parser.add_argument("--no-clean", action="store_true",
                       help="do not clean output directories before processing")
    
    args = parser.parse_args()
        
    return args

class PlutoBatchOptimizer:
    def __init__(self, args):
        self.args = args

        # resume mode must be decided *before* the output directories are wiped
        self.skip_existing = getattr(self.args, "skip_existing", False)
        if self.skip_existing:
            self.args.no_clean = True

        self.setup_paths()
        self.create_directories()

        # manifest: one JSON line per kernel (status + duration). It gives the
        # resume path a real record of what is done, and the final report a
        # duration distribution instead of just totals.
        self.manifest_path = os.path.join(self.output_path, 'optimization_manifest.jsonl')
        self.manifest_handle = None
        self.manifest_lines = 0
        self.durations: dict[str, list[float]] = {}
        self.manifest_done: set[str] = set()
        if self.skip_existing and os.path.exists(self.manifest_path):
            with open(self.manifest_path, encoding='utf-8') as handle:
                for line in handle:
                    try:
                        entry = json.loads(line)
                    except ValueError:
                        continue
                    if entry.get('status') == 'success':
                        self.manifest_done.add(entry.get('name'))
        
        # 先初始化logger
        self.logger = setup_logging(self.output_path)
        
        # 然后进行清理操作（如果需要）
        if not self.args.no_clean:
            self.clean_output_directories()
            
        # 统计信息
        self.success_count = 0
        self.fail_count = 0
        self.skip_count = 0
        self.timeout_count = 0

        # fast path: drive the pluto binary directly instead of going through
        # the polycc_parallel shell wrapper (one pluto + one gcc per kernel
        # instead of ~20 helper forks)
        self.driver = None
        self.pluto_dir = os.path.dirname(os.path.abspath(self.args.pluto_path))
        if getattr(self.args, "driver", "python") == "python":
            try:
                self.driver = PlutoDriver(self.pluto_dir)
            except PlutoDriverError as exc:
                self.logger.warning(
                    f"python driver unavailable ({exc}); falling back to the shell wrapper"
                )

        # workers: probe the machine unless the user passed -j explicitly
        kind = "subprocess" if self.driver is not None else "cpu"
        override = self.args.num_processes
        self.args.num_processes = machine_profile.recommend(kind, override)
        self.logger.info(f"workers: {machine_profile.describe(kind, override)}")

    def __getstate__(self):
        """Drop the open manifest handle before pickling.

        The process pool (``--driver wrapper``) pickles this object for every
        task, and an open file cannot be pickled; the handle is only used by
        the parent process anyway.
        """
        state = self.__dict__.copy()
        state['manifest_handle'] = None
        return state

    def setup_paths(self):
        """设置所有路径"""
        self.base_dir = os.path.abspath(self.args.dataset_path)
        
        self.dataset_list = os.path.join(self.base_dir, 'kernel_list')
        
        if self.args.output_path is None:
            self.output_path = self.base_dir
        else:
            self.output_path = self.args.output_path
        
        self.pluto_path = os.path.abspath(self.args.pluto_path)
        self.pluto_code_path = os.path.join(self.output_path, 'pluto_code')
        self.stdout_path = os.path.join(self.output_path, 'stdout')  
        self.tmp_path = os.path.join(self.output_path, 'tmp_files')
            
    def create_directories(self):
        """创建必要的目录"""
        for path in [self.pluto_code_path, self.stdout_path, self.tmp_path]:
            os.makedirs(path, exist_ok=True)
            
    def clean_output_directories(self):
        """清空输出目录"""
        self.logger.info("Cleaning output directories...")
        for path in [self.pluto_code_path, self.stdout_path, self.tmp_path]:
            if os.path.exists(path):
                sp.run(['rm', '-rf', str(path)])
            os.makedirs(path, exist_ok=True)
    
    def get_source_files(self):
        """获取所有源文件并分批"""
        source_files = []
        try:
            with open(self.dataset_list, 'r', encoding='utf-8') as f:
                for line in f:
                    path = line.strip()
                    # 跳过空行和注释行（以#开头的行）
                    if path and not path.startswith('#'):
                        source_files.append(path)
        except FileNotFoundError:
            raise ValueError(f"错误：文件 {self.dataset_list} 不存在")
        except Exception as e:
            raise Exception(f"读取文件时出错：{e}")
            
        self.logger.info(f"Found {len(source_files)} source files")
        
        # 分批处理
        batches = []
        for i in range(0, len(source_files), self.args.batch_size):
            batch = source_files[i:i + self.args.batch_size]
            batches.append(batch)
            
        self.logger.info(f"Split into {len(batches)} batches (size: {self.args.batch_size})")
        return batches
    
    def get_filename_without_extension(self, filepath):
        """从文件路径中提取文件名（不含扩展名）"""
        filename = os.path.basename(filepath)
        name_without_ext = os.path.splitext(filename)[0]
        return name_without_ext
    
    def pluto_transformation_single(self, source_file):
        """处理单个文件的Pluto转换（带完整进程清理）"""
        source_name = self.get_filename_without_extension(source_file)
        target_file = os.path.join(self.pluto_code_path, f'{source_name}.pluto.c')
        stdout_file = os.path.join(self.stdout_path, f'{source_name}.stdout')

        if self.skip_existing and (source_name in self.manifest_done
                                   or (_is_nonempty(target_file) and _is_nonempty(stdout_file))):
            return source_name, 'skipped', "already optimized", 0.0

        if self.args.command_options:
            command_options = self.args.command_options.split()
        else:
            command_options = []
        
        command = [self.pluto_path, source_file] + command_options + ['-o', target_file]
        started = time.perf_counter()
        
        try:
            with open(stdout_file, 'w') as f:
                process = sp.Popen(
                    command, 
                    stdout=f, 
                    stderr=sp.PIPE,
                    text=True, 
                    preexec_fn=os.setsid
                )
                
                try:
                    _, stderr = process.communicate(timeout=self.args.timeout)
                    elapsed = time.perf_counter() - started
                    
                    if process.returncode == 0:
                        if os.path.exists(target_file) and os.path.getsize(target_file) > 0:
                            return source_name, 'success', "optimization successful", elapsed
                        else:
                            return source_name, 'fail', "output file not generated or empty", elapsed
                    else:
                        error_msg = stderr.strip() if stderr else "unknown error"
                        return source_name, 'fail', \
                            f"pluto failed (returncode={process.returncode}): {error_msg}", elapsed
                            
                except sp.TimeoutExpired:
                    self.logger.debug(f"Timeout detected for {source_name}, killing process group...")
                    try:
                        os.killpg(os.getpgid(process.pid), signal.SIGKILL)
                    except ProcessLookupError:
                        pass
                    except Exception as kill_error:
                        self.logger.warning(f"Error killing process group for {source_name}: {kill_error}")
                    
                    try:
                        process.wait(timeout=5)
                    except sp.TimeoutExpired:
                        self.logger.warning(f"Process group for {source_name} unresponsive after SIGKILL (D-state?)")
                    
                    return source_name, 'timeout', \
                        f"timeout after {self.args.timeout}s", time.perf_counter() - started
                    
        except Exception as e:
            return source_name, 'fail', f"unexpected error: {str(e)}", time.perf_counter() - started

    def pluto_transformation_driver(self, source_file):
        """单个文件的转换，直接调用 pluto 二进制（无 shell wrapper）。

        与 pluto_transformation_single 的输出逐字节一致（scripts/compare_drivers.sh
        在参考语料上做过对拍），但每个 kernel 只起 1 个 pluto + 1 个 gcc 进程。
        """
        source_name = self.get_filename_without_extension(source_file)
        target_file = os.path.join(self.pluto_code_path, f'{source_name}.pluto.c')
        stdout_file = os.path.join(self.stdout_path, f'{source_name}.stdout')

        if self.skip_existing and (source_name in self.manifest_done
                                   or (_is_nonempty(target_file) and _is_nonempty(stdout_file))):
            return source_name, 'skipped', "already optimized", 0.0

        command_options = self.args.command_options.split() if self.args.command_options else []
        started = time.perf_counter()

        try:
            self.driver.run(source_file, target_file, stdout_file,
                            command_options, timeout=self.args.timeout)
        except sp.TimeoutExpired:
            return source_name, 'timeout', \
                f"timeout after {self.args.timeout}s", time.perf_counter() - started
        except PlutoDriverError as e:
            return source_name, 'fail', f"pluto failed: {e}", time.perf_counter() - started
        except Exception as e:
            return source_name, 'fail', f"unexpected error: {str(e)}", time.perf_counter() - started

        elapsed = time.perf_counter() - started
        if os.path.exists(target_file) and os.path.getsize(target_file) > 0:
            return source_name, 'success', "optimization successful", elapsed
        return source_name, 'fail', "output file not generated or empty", elapsed
    
    def record_manifest(self, name, status, seconds, reason):
        """Append one manifest line and keep the duration distribution."""
        self.durations.setdefault(status, []).append(seconds)
        if self.manifest_handle is None:
            return
        self.manifest_handle.write(json.dumps({
            'name': name, 'status': status,
            'seconds': round(seconds, 4), 'reason': reason,
        }) + '\n')
        self.manifest_lines += 1
        if self.manifest_lines % 256 == 0:
            self.manifest_handle.flush()

    def wrapper_task(self, source_file):
        """Run the shell wrapper in the shared temp directory (per worker)."""
        original_cwd = os.getcwd()
        os.chdir(self.tmp_path)
        try:
            return self.pluto_transformation_single(source_file)
        finally:
            os.chdir(original_cwd)

    def run_optimization(self):
        """运行批量优化过程"""
        try:
            batches = self.get_source_files()
        except Exception as e:
            self.logger.error(f"Failed to get source files: {e}")
            return
            
        total_files = sum(len(batch) for batch in batches)
        
        self.logger.info("=" * 60)
        self.logger.info("Starting Pluto Batch Optimization")
        self.logger.info(f"Total files: {total_files}")
        self.logger.info(f"Batches: {len(batches)}, Processes: {self.args.num_processes}")
        self.logger.info(f"Timeout: {self.args.timeout}s per file")
        self.logger.info("=" * 60)
        
        start_time = time.time()

        files = [f for batch in batches for f in batch]
        if self.skip_existing:
            before = len(files)
            files = [f for f in files if not self.already_done(f)]
            if before != len(files):
                self.logger.info(f"resume: {before - len(files)} kernels already done, "
                                 f"{len(files)} left")
        total_files = len(files) or total_files

        # chunks amortise process pickling and let one gcc serve many kernels;
        # a sliding window keeps every worker busy (no per-batch barrier)
        chunk_size = max(1, self.args.chunk_size) if self.driver is not None else 1
        chunks = [files[i:i + chunk_size] for i in range(0, len(files), chunk_size)]
        engine = ("python driver (chunked processes)" if self.driver is not None
                  else "shell wrapper (processes)")
        self.logger.info(f"Engine: {engine}, workers: {self.args.num_processes}, "
                         f"chunks: {len(chunks)} x {chunk_size}")

        options = self.args.command_options.split() if self.args.command_options else []
        executor = ProcessPoolExecutor(max_workers=self.args.num_processes)
        done_kernels = 0
        last_report = time.time()
        try:
            self.manifest_handle = open(self.manifest_path, 'a', encoding='utf-8')
            pending = {}
            queue = iter(chunks)

            def submit_next():
                chunk = next(queue, None)
                if chunk is None:
                    return False
                if self.driver is not None:
                    items = []
                    for source_file in chunk:
                        name = self.get_filename_without_extension(source_file)
                        items.append((
                            source_file,
                            os.path.join(self.pluto_code_path, f'{name}.pluto.c'),
                            os.path.join(self.stdout_path, f'{name}.stdout'),
                        ))
                    future = executor.submit(driver_task, self.pluto_dir, items,
                                             options, self.args.timeout, self.driver.cc)
                else:
                    future = executor.submit(self.wrapper_task, chunk[0])
                pending[future] = chunk
                return True

            for _ in range(max(4, self.args.num_processes * 4)):
                if not submit_next():
                    break

            while pending:
                finished, _ = wait(list(pending), return_when=FIRST_COMPLETED)
                for future in finished:
                    chunk = pending.pop(future)
                    try:
                        results = future.result()
                    except Exception as e:
                        results = [(self.get_filename_without_extension(f), 'fail',
                                    f"future exception - {type(e).__name__}: {e}", 0.0)
                                   for f in chunk]
                    if not isinstance(results, list):
                        results = [results]
                    for name, status, message, seconds in results:
                        self.record_result(name, status, message, seconds)
                        done_kernels += 1
                    submit_next()

                if done_kernels and time.time() - last_report > 15:
                    elapsed = time.time() - start_time
                    rate = done_kernels / elapsed if elapsed else 0
                    self.logger.info(
                        f"progress: {done_kernels}/{len(files)} kernels "
                        f"({rate:.1f}/s, success={self.success_count}, fail={self.fail_count}, "
                        f"timeout={self.timeout_count}, skipped={self.skip_count})")
                    last_report = time.time()
                    gc.collect()
        finally:
            if self.manifest_handle is not None:
                self.manifest_handle.flush()
                self.manifest_handle.close()
                self.manifest_handle = None
            executor.shutdown(wait=True)

        total_time = time.time() - start_time
        self.log_manifest_summary()
        self.generate_final_report(total_time, total_files)

    def already_done(self, source_file) -> bool:
        """Has this kernel already been optimized (manifest or artefacts)?"""
        name = self.get_filename_without_extension(source_file)
        if name in self.manifest_done:
            return True
        target = os.path.join(self.pluto_code_path, f'{name}.pluto.c')
        stdout = os.path.join(self.stdout_path, f'{name}.stdout')
        return _is_nonempty(target) and _is_nonempty(stdout)

    def record_result(self, name, status, message, seconds):
        """Update the counters and the manifest for one finished kernel."""
        if status == 'success':
            self.success_count += 1
        elif status == 'timeout':
            self.timeout_count += 1
            self.logger.info(f"⌛ {name}: {message}")
        elif status == 'skipped':
            self.skip_count += 1
        else:
            self.fail_count += 1
            self.logger.info(f"✗ {name}: {message}")
        self.record_manifest(name, status, seconds, message)

    def log_manifest_summary(self):
        """Log per-status counts and duration percentiles from the manifest."""
        def percentile(values, q):
            if not values:
                return 0.0
            ordered = sorted(values)
            return ordered[min(len(ordered) - 1, int(q * len(ordered)))]

        parts = []
        for status, values in sorted(self.durations.items()):
            parts.append(f"{status}={len(values)} p50={percentile(values, 0.5):.3f}s "
                         f"p95={percentile(values, 0.95):.3f}s max={max(values):.3f}s")
        if parts:
            self.logger.info("duration stats: " + " | ".join(parts))
            self.logger.info(f"manifest: {self.manifest_path} "
                             f"({self.manifest_lines} lines written this run)")
    
    def generate_final_report(self, total_time, total_files):
        """生成最终报告"""
        # 计算百分比
        success_pct = (self.success_count / total_files * 100) if total_files > 0 else 0
        fail_pct = (self.fail_count / total_files * 100) if total_files > 0 else 0
        timeout_pct = (self.timeout_count / total_files * 100) if total_files > 0 else 0
        skip_pct = (self.skip_count / total_files * 100) if total_files > 0 else 0
        
        report = [
            "=" * 60,
            "PLUTO OPTIMIZATION FINAL REPORT",
            "=" * 60,
            f"Command: {'python ' + ' '.join(sys.argv)}",
            f"Optimization_option: {self.args.command_options}",
            f"Total processing time: {total_time:.2f} seconds",
            f"Total files processed: {total_files}",
            f"Successfully optimized: {self.success_count} ({success_pct:.1f}%)",
            f"Failed: {self.fail_count} ({fail_pct:.1f}%)",
            f"Timeout: {self.timeout_count} ({timeout_pct:.1f}%)",
            f"Skipped: {self.skip_count} ({skip_pct:.1f}%)",
            f"Output directory: {self.output_path}",
            f"Optimized codes: {self.pluto_code_path}",
            f"Stdout logs: {self.stdout_path}",
            "=" * 60
        ]
        
        report_text = "\n".join(report)
        self.logger.info("\n" + report_text)

def main():
    """主函数"""
    args = parse_arguments()
    
    try:
        optimizer = PlutoBatchOptimizer(args)
        optimizer.run_optimization()
        
    except KeyboardInterrupt:
        print("\nOptimization interrupted by user")
        # 尝试获取logger实例来记录中断信息
        try:
            logger = logging.getLogger()
            logger.info("Optimization interrupted by user")
        except:
            pass
    except Exception as e:
        print(f"Fatal error: {e}")
        # 尝试获取logger实例来记录错误信息
        try:
            logger = logging.getLogger()
            logger.error(f"Fatal error in main: {str(e)}", exc_info=True)
        except:
            import traceback
            traceback.print_exc()

if __name__ == "__main__":
    main()
