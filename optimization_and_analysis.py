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

from concurrent.futures import ProcessPoolExecutor, as_completed

from path_settings import PROJECT_PATH, DATASET_PATH

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
        epilog='Example: python optimization_and_analysis.py -d ./poly_code -p ./pluto'
    )
    parser.add_argument("-i", "--input-path", dest="dataset_path", 
                       help="path of the folder containing kernel_list file", 
                       type=str, default=DATASET_PATH)
    parser.add_argument("-o", "--output-path", dest="output_path", 
                       help="path for output files", 
                       type=str, default=None)
    parser.add_argument("-p", "--pluto-path", dest="pluto_path", 
                       help="path to pluto binaries", 
                       type=str, default=os.path.join(PROJECT_PATH, "Compilers/pluto"))
    parser.add_argument("-j", "--processes", dest="num_processes", 
                       help="number of parallel processes", 
                       type=int, default=min(mp.cpu_count(), 16))
    parser.add_argument("-t", "--timeout", dest="timeout", 
                       help="timeout duration in seconds per file", 
                       type=int, default=120)
    parser.add_argument("-c", "--command-options", dest="command_options",
                        help="options for pluto in command",
                        type=str, default='-q --parallel --tile --nocloogbacktrack --plcg-info')
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
        self.setup_paths()
        self.setup_environment()
        self.create_directories()
        
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
        
    def setup_environment(self):
        """设置环境变量"""
        if self.pluto_path not in os.environ.get('PATH', ''):
            os.environ['PATH'] = f"{os.environ.get('PATH', '')}:{self.pluto_path}"
            
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
        
        if self.args.command_options:
            command_options = self.args.command_options.split()
        else:
            command_options = []
        
        command = ['polycc_parallel', source_file] + command_options + ['-o', target_file]
        
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
                    
                    if process.returncode == 0:
                        if os.path.exists(target_file) and os.path.getsize(target_file) > 0:
                            return source_name, 'success', "optimization successful"
                        else:
                            return source_name, 'fail', "output file not generated or empty"
                    else:
                        error_msg = stderr.strip() if stderr else "unknown error"
                        return source_name, 'fail', f"pluto failed (returncode={process.returncode}): {error_msg}"
                            
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
                    
                    return source_name, 'timeout', f"timeout after {self.args.timeout}s"
                    
        except Exception as e:
            return source_name, 'fail', f"unexpected error: {str(e)}"
    
    def process_batch(self, batch_files):
        """处理一个批次的文件"""
        batch_success = 0
        batch_fail = 0  
        batch_skip = 0
        batch_timeout = 0
        
        self.logger.info(f"Processing batch with {len(batch_files)} files...")
        
        # 切换到临时目录
        original_cwd = os.getcwd()
        os.chdir(self.tmp_path)
        
        try:
            with ProcessPoolExecutor(max_workers=self.args.num_processes) as executor:
                # 提交所有任务
                future_to_file = {
                    executor.submit(self.pluto_transformation_single, file): file 
                    for file in batch_files
                }
                
                # 处理完成的任务
                for i, future in enumerate(as_completed(future_to_file), 1):
                    file = future_to_file[future]
                    
                    try:
                        file_name, status, message = future.result()
                        
                        if status == 'success':
                            batch_success += 1
                        elif status == 'timeout':
                            batch_timeout += 1
                            self.logger.info(f"⌛ {file_name}: {message}")
                        elif status == 'fail':
                            batch_fail += 1
                            self.logger.info(f"✗ {file_name}: {message}")
                        else:
                            batch_fail += 1
                            self.logger.error(f"— {file_name}: unexpected condition: {message}")
                        
                        # 进度报告
                        length_report_section = len(batch_files) // 4
                        if i % length_report_section == 0:
                            progress = i / len(batch_files) * 100
                            self.logger.info(f"Batch progress: {i}/{len(batch_files)} ({progress:.1f}%)")
                            
                    except Exception as e:
                        batch_fail += 1
                        file_name = self.get_filename_without_extension(file)
                        self.logger.error(f"✗ {file_name}: future exception - {str(e)}")
                        
        finally:
            os.chdir(original_cwd)
            
        return batch_success, batch_fail, batch_skip, batch_timeout
    
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
        
        # 处理每个批次
        for i, batch in enumerate(batches, 1):
            batch_start_time = time.time()
            
            self.logger.info(f"\n--- Processing Batch {i}/{len(batches)} ---")
            
            try:
                batch_success, batch_fail, batch_skip, batch_timeout = self.process_batch(batch)
                
                # 更新全局统计
                self.success_count += batch_success
                self.fail_count += batch_fail
                self.skip_count += batch_skip  
                self.timeout_count += batch_timeout
                
                batch_time = time.time() - batch_start_time
                batch_total = len(batch)
                
                self.logger.info(f"Batch {i} completed: "
                               f"Success: {batch_success}/{batch_total}, "
                               f"Fail: {batch_fail}, Timeout: {batch_timeout}, "
                               f"Time: {batch_time:.1f}s")
                
            except Exception as e:
                self.logger.error(f"Batch {i} failed: {e}")
                self.fail_count += len(batch)
            
            # 强制垃圾回收以释放内存
            gc.collect()
        
        total_time = time.time() - start_time
        self.generate_final_report(total_time, total_files)
    
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