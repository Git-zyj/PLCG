import re
import os
import numpy as np
import argparse as ap
import pandas as pd
import logging
import datetime
import sys
import gc
import shutil
import time

from pathlib import Path
from concurrent.futures import ProcessPoolExecutor, as_completed

from path_settings import DATASET_PATH
from extraction_tools import extraction_tools

TODAY = datetime.datetime.now().strftime('%Y%m%d')

tile_keywords = ['zT', '/32']  # 'zT' in pluto 0.11.4， '/32' in pluto 0.12.0

def setup_logging(log_dir):
    """配置日志系统"""
    log_file = log_dir / f'classification_{TODAY}.log'

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
    parser_description = '''
    Distinguish types of loop transformations applied by PLuTo. Here are type could be identified now:
    1. no loop transformation
    2. loop tiling
    3. loop interchange
    4. loop skewing
    5. loop fusion
    6. loop distribution
    7. loop reverse
    8. loop shifting
    9. other loop transformation
    '''

    parser = ap.ArgumentParser(description=parser_description)
    parser.add_argument("-i", "--input-path", dest="dataset_path",
                       help="path of the folder of stdout info and pluto code",
                       type=str, default=DATASET_PATH)
    parser.add_argument("-o", "--output", dest="output",
                       help="output csv file for classification results",
                       type=str, default="classification_output.csv")
    parser.add_argument("-j", "--processes", dest="num_processes",
                       help="number of parallel processes",
                       type=int, default=min(os.cpu_count(), 16))
    parser.add_argument("--batch-size", dest="batch_size",
                       help="batch size to reduce memory usage",
                       type=int, default=5000)

    args = parser.parse_args()

    return args

class Loop_Transformation_Classifier:
    def __init__(self, stmts, schedules, loop_types, c_codelet, filename=None):
        """初始化分类器"""

        self.filename = filename
        self.c_codelet = c_codelet.replace(';;', ';')  # for pluto+cloog
        self.answer = [0] * 9
        self.context = stmts
        self.schedules = schedules  # 2 * self.nstmts * var dim in src
        self.loop_types = loop_types
        self.max_loop_depth = (len(self.schedules[0][0]) - 1) // 2
        self.nstmts = len(self.schedules[0])

        # 初始化 numpy 数组
        self.consts = np.zeros([2, self.nstmts, self.max_loop_depth + 1], dtype=int) # 2 * self.nstmts * var dim in src
        self.coefs = np.zeros([self.nstmts, self.max_loop_depth, self.max_loop_depth], dtype=int) # self.nstmts * var dim in dst * var dim in src
        self.var_neg = np.zeros([self.nstmts, self.max_loop_depth, self.max_loop_depth])

    def detect_fusion_distribution(self):
        """
        检测调度常量维矩阵中发生的 fusion 和 distribution 变换。

        参数:
            before: 形状 (n_statements, n_scalar_dims) 的 numpy 数组，变换前的标量值。
            after:  形状相同的 numpy 数组，变换后的标量值。

        返回:
            [fusion, distribution]: 两个布尔值。
        """
        before, after = self.consts
        n_stmts, n_dims = before.shape
        if after.shape != before.shape:
            raise ValueError("before and after must have the same shape")

        fusion = distribution = 0

        # 初始组：所有语句，空前缀
        groups = {(): list(range(n_stmts))}

        for d in range(n_dims):
            # print(f"groups til the {d}-th const dim:", groups)
            new_groups = {}
            for prefix, stmt_list in groups.items():
                if len(stmt_list) < 2:
                    continue

                before_vals = before[stmt_list, d]
                after_vals = after[stmt_list, d]

                changed = set()   # 存储需要剔除的语句在 stmt_list 中的索引

                # ---- 检测 distribution (before相同 -> after不同) ----
                before_map = {}
                for idx, stmt in enumerate(stmt_list):
                    bv = before_vals[idx]
                    before_map.setdefault(bv, []).append(idx)
                for bv, indices in before_map.items():
                    if len(indices) > 1:
                        # 取第一个 after 值作为参考
                        ref_after = after_vals[indices[0]]
                        for idx in indices:
                            if after_vals[idx] != ref_after:
                                distribution = 1
                                changed.add(idx)

                # ---- 检测 fusion (after相同 -> before不同) ----
                after_map = {}
                for idx, stmt in enumerate(stmt_list):
                    av = after_vals[idx]
                    after_map.setdefault(av, []).append(idx)
                for av, indices in after_map.items():
                    if len(indices) > 1:
                        ref_before = before_vals[indices[0]]
                        for idx in indices:
                            if before_vals[idx] != ref_before:
                                fusion = 1
                                changed.add(idx)

                # 未变化的语句继续进入下一维度
                unchanged = [i for i in range(len(stmt_list)) if i not in changed]
                if unchanged:
                    # 按 after_vals 分组，形成新的前缀
                    after_sub = {}
                    for i in unchanged:
                        stmt_global = stmt_list[i]
                        av = after_vals[i]
                        new_prefix = prefix + (av,)
                        after_sub.setdefault(new_prefix, []).append(stmt_global)
                    for new_prefix, sublist in after_sub.items():
                        if len(sublist) >= 2:
                            new_groups[new_prefix] = sublist

            groups = new_groups
            if not groups:
                break
            if fusion and distribution:
                return [fusion, distribution]

        return [fusion, distribution]

    def check_nstmts_after(self):
        """检查赋值表达式数量"""
        try:
            return extraction_tools().count_codelet_array_assignments(self.c_codelet)
        except Exception as e:
            logging.warning(f"Failed to parse codelet for statement counting: {e}")
            return 0

    def check_tiling(self):
        """检查是否应用了平铺优化"""
        for i in range(self.nstmts):
            for j in range(len(self.schedules[1][i])):
                if any([key in str(self.schedules[1][i][j]) for key in tile_keywords]):
                    self.answer[1] = 1  # tiling
                    return

    def normalize_schedules(self):
        schedules = self.schedules[1]
        loop_types = self.loop_types[1]
        nstmts = self.nstmts
        max_loop_depth = self.max_loop_depth

        # 分解
        scalars = []
        loops = []
        for stmt in range(nstmts):
            sch = schedules[stmt]
            ltypes = loop_types[stmt]
            blocks = []
            cur = []
            loops_stmt = []
            for val, typ in zip(sch, ltypes):
                if typ == 'scalar':
                    cur.append(val)
                else:
                    blocks.append(cur)
                    cur = []
                    loops_stmt.append(val)
            blocks.append(cur)
            scalars.append(blocks)
            loops.append(loops_stmt)

        # 统一深度
        for stmt in range(nstmts):
            while len(loops[stmt]) < max_loop_depth:
                loops[stmt].append('0')
            while len(scalars[stmt]) < max_loop_depth + 1:
                scalars[stmt].append([])
            for i in range(len(scalars[stmt])):
                if not scalars[stmt][i]:
                    scalars[stmt][i] = ['0']

        # 逐层前缀压缩
        new_scalar_blocks = [[None] * (max_loop_depth + 1) for _ in range(nstmts)]
        # 初始组：所有语句，空前缀
        groups = {(): list(range(nstmts))}
        for depth in range(max_loop_depth + 1):
            next_groups = {}
            for prefix, stmt_list in groups.items():
                # 获取当前深度块
                blocks = [tuple(scalars[stmt][depth]) for stmt in stmt_list]
                unique = sorted(set(blocks))
                rank = {b: str(i) for i, b in enumerate(unique)}
                for stmt in stmt_list:
                    new_scalar_blocks[stmt][depth] = [rank[tuple(scalars[stmt][depth])]]
                # 按当前块分组，形成新前缀
                sub = {}
                for stmt in stmt_list:
                    key = prefix + (tuple(scalars[stmt][depth]),)
                    sub.setdefault(key, []).append(stmt)
                # 将大小>1的组加入下一层（如果还有下一层）
                if depth < max_loop_depth:
                    for key, sublist in sub.items():
                        if len(sublist) > 1:
                            next_groups[key] = sublist
                        else:
                            # 单个语句，剩余深度清零
                            for stmt in sublist:
                                for nd in range(depth+1, max_loop_depth+1):
                                    new_scalar_blocks[stmt][nd] = ['0']
                else:
                    # 最后一层，无需处理
                    pass
            groups = next_groups

        # 组合输出
        new_schedules = []
        new_loop_types = []
        for stmt in range(nstmts):
            sch = []
            ltypes = []
            for d in range(max_loop_depth):
                sch.append(new_scalar_blocks[stmt][d][0])
                ltypes.append('scalar')
                sch.append(loops[stmt][d])
                ltypes.append('loop')
            sch.append(new_scalar_blocks[stmt][max_loop_depth][0])
            ltypes.append('scalar')
            new_schedules.append(sch)
            new_loop_types.append(ltypes)

        self.schedules[1] = new_schedules
        self.loop_types[1] = new_loop_types
        return new_schedules

    def loop_transformation_analysis(self):
        """主分析函数"""
        self.check_tiling()

        # 过滤掉平铺相关的调度和循环类型
        self.loop_types[1] = [
            [t for s, t in zip(sched, types) if all([key not in str(s) for key in tile_keywords])]
            for sched, types in zip(self.schedules[1], self.loop_types[1])
        ]
        self.schedules[1] = [
            [s for s in row if all([key not in str(s) for key in tile_keywords])] for row in self.schedules[1]
        ]

        # # 统一调度长度
        # min_len = min(len(row) for row in self.schedules[1])
        # self.schedules[1] = [row[:min_len] for row in self.schedules[1]]
        # self.loop_types[1] = [row[:min_len] for row in self.loop_types[1]]

        # print(self.filename)
        # print("Original schedules:")
        # print(self.schedules)

        self.normalize_schedules()

        # print("Normalized schedules:")
        # print(self.schedules)

        # 更新系数矩阵
        for i in range(self.max_loop_depth):
            for j in range(self.nstmts):
                for k in range(self.max_loop_depth):
                    if (self.schedules[0][j][2 * k + 1] != "0" and
                        self.schedules[0][j][2 * k + 1] in self.schedules[1][j][2 * i + 1]):
                        self.coefs[j][i][k] = 1 # TODO: 目前只考虑有无，后续考虑加上系数
                    elif (self.schedules[0][j][2 * k + 1][0] == "-" and
                            self.schedules[0][j][2 * k + 1][1:] in self.schedules[1][j][2 * i + 1]): # 当前i--时，pluto会识别调度为-i
                        self.coefs[j][i][k] = 1
                        self.var_neg[j][i][k] = -1

        # print(self.schedules)

        # 调整调度长度
        if len(self.loop_types[1][0]) == len(self.loop_types[0][0]) - 1:
            for stmt in range(self.nstmts):
                self.schedules[1][stmt].append('0')
                self.loop_types[1][stmt].append("scalar")
        elif len(self.loop_types[1][0]) != len(self.loop_types[0][0]):
            self.answer[8] = 1  # other
            return self.answer

        # print(self.schedules)

        # 转换为 numpy 数组
        self.schedules = np.array(self.schedules, dtype=object)
        org_coefs = ~(self.schedules[0][:, 1::2] == '0')

        # 重新排列调度
        for stmt in range(self.nstmts):
            for i in range(0, len(self.schedules[1][0]), 2):
                if (i < len(self.loop_types[1][stmt]) and
                    self.loop_types[1][stmt][i] != 'scalar'):
                    if i > 0 and self.schedules[1][stmt][i - 1] == '0':
                        self.schedules[1][stmt][i - 1] = self.schedules[1][stmt][i]
                        self.schedules[1][stmt][i] = '0'
                        self.loop_types[1][stmt][i - 1] = 'loop'
                        self.loop_types[1][stmt][i] = 'scalar'
                    elif (i < len(self.schedules[1][0]) - 1 and
                            self.schedules[1][stmt][i + 1] == '0'):
                        self.schedules[1][stmt][i + 1] = self.schedules[1][stmt][i]
                        self.schedules[1][stmt][i] = '0'
                        self.loop_types[1][stmt][i + 1] = 'loop'
                        self.loop_types[1][stmt][i] = 'scalar'
                    else:
                        self.answer[8] = 1  # other
                        return self.answer

        # print(self.schedules)

        # 提取常量部分
        self.consts[0] = self.schedules[0][:, ::2].astype(int)
        self.consts[1] = self.schedules[1][:, ::2].astype(int)

        # 检查语句数量
        if self.nstmts != self.check_nstmts_after():
            self.answer[8] = 1  # other

        # 检查是否没有循环变换
        if (np.array_equal(self.schedules[0], self.schedules[1]) and
            self.answer[1] == 0 and self.answer[8] == 0):
            self.answer[0] = 1  # no loop transformation
        else:
            # 检查各种循环变换
            for i in range(self.nstmts):
                if not (np.diag(self.coefs[i][:len(org_coefs[i])]) == org_coefs[i]).all():
                    self.answer[2] = 1  # interchange
                    break

            if (self.coefs.sum(axis=2).T > 1).any():
                self.answer[3] = 1  # skewing

            if np.any(self.var_neg):
                self.answer[6] = 1  # reverse

            if any(re.findall(r'[+-][0-9]+$', str(var)) for var in self.schedules[1][:, 1::2].reshape(-1)):
                self.answer[7] = 1  # shifting

            self.answer[4:6] = self.detect_fusion_distribution()

        return self.answer

class Classification_Batch_Processor:
    def __init__(self, args):
        self.args = args
        self.dataset_path = Path(args.dataset_path).resolve()
        self.folder_stdout_path = self.dataset_path / 'stdout'
        self.folder_code_path = self.dataset_path / 'pluto_code'
        self.output_file = self.dataset_path / self.args.output

        self.logger = setup_logging(self.dataset_path)

        # 统计信息
        self.success_count = 0
        self.fail_count = 0
        self.skip_count = 0

        self._validate_directories()

    def _validate_directories(self):
        """验证输入目录"""
        if not self.folder_stdout_path.exists():
            raise FileNotFoundError(f"Stdout目录不存在: {self.folder_stdout_path}")
        if not self.folder_code_path.exists():
            raise FileNotFoundError(f"代码目录不存在: {self.folder_code_path}")

    def get_file_pairs(self):
        """获取stdout和代码文件对"""
        stdout_files = [f for f in self.folder_stdout_path.iterdir()
                       if f.suffix == ".stdout" and f.stat().st_size > 0]

        file_pairs = []
        for stdout_file in stdout_files:
            filename = stdout_file.stem
            code_file = self.folder_code_path / f'{filename}.pluto.c'

            if code_file.exists():
                file_pairs.append((stdout_file, code_file, filename))
            else:
                self.logger.warning(f"代码文件不存在: {code_file}")
                self.skip_count += 1

        return file_pairs

    def classify_single_file(self, stdout_file, code_file, filename):
        """处理单个文件分类"""
        try:
            _, stmts, _, schedules, _, loop_types, _, _ = extraction_tools().extract_stdout_from_file(str(stdout_file))
            c_codelet = extraction_tools().extract_codelet_from_file(str(code_file), 1)

            classifier = Loop_Transformation_Classifier(stmts, schedules, loop_types, c_codelet, filename)
            answer = classifier.loop_transformation_analysis()

            return filename, answer, "success"

        except Exception as e:
            error_msg = f"classification failed: {str(e)}"
            self.logger.error(f"✗ {filename}: {error_msg}")
            return filename, [0]*9, error_msg

    def process_batch(self, batch_files):
        """处理一个批次的文件"""
        batch_success = 0
        batch_fail = 0

        self.logger.info(f"Processing batch with {len(batch_files)} files...")

        with ProcessPoolExecutor(max_workers=self.args.num_processes) as executor:
            # 提交所有任务
            future_to_file = {
                executor.submit(self.classify_single_file, stdout_file, code_file, filename):
                (stdout_file, code_file, filename)
                for stdout_file, code_file, filename in batch_files
            }

            # 处理完成的任务
            results = []
            for i, future in enumerate(as_completed(future_to_file), 1):
                stdout_file, code_file, filename = future_to_file[future]

                try:
                    filename, answer, status = future.result()

                    if status == "success":
                        batch_success += 1
                        results.append([filename] + answer)
                    else:
                        batch_fail += 1
                        self.logger.error(f"✗ {filename}: {status}")

                    # 进度报告
                    length_report_section = len(batch_files) // 4
                    if i % length_report_section == 0:
                        progress = i / len(batch_files) * 100
                        self.logger.info(f"Batch progress: {i}/{len(batch_files)} ({progress:.1f}%)")

                except Exception as e:
                    batch_fail += 1
                    self.logger.error(f"✗ {filename}: future exception - {str(e)}")

        return results, batch_success, batch_fail

    def run_classification(self):
        """运行批量分类"""
        file_pairs = self.get_file_pairs()
        total_files = len(file_pairs)

        if total_files == 0:
            self.logger.error("没有找到有效的文件对进行处理")
            return

        self.logger.info("=" * 60)
        self.logger.info("Starting Loop Transformation Classification")
        self.logger.info(f"Total file pairs: {total_files}")
        self.logger.info(f"Processes: {self.args.num_processes}, Batch size: {self.args.batch_size}")
        self.logger.info("=" * 60)

        start_time = time.time()
        all_results = []

        # 分批处理
        batches = []
        for i in range(0, total_files, self.args.batch_size):
            batch = file_pairs[i:i + self.args.batch_size]
            batches.append(batch)

        for i, batch in enumerate(batches, 1):
            batch_start_time = time.time()

            self.logger.info(f"\n--- Processing Batch {i}/{len(batches)} ---")

            batch_results, batch_success, batch_fail = self.process_batch(batch)

            all_results.extend(batch_results)
            self.success_count += batch_success
            self.fail_count += batch_fail

            batch_time = time.time() - batch_start_time

            self.logger.info(f"Batch {i} completed: "
                           f"Success: {batch_success}/{len(batch)}, "
                           f"Fail: {batch_fail}, Time: {batch_time:.1f}s")

            # 强制垃圾回收
            gc.collect()

        total_time = time.time() - start_time
        self.save_results(all_results, total_time, total_files)

    def save_results(self, results, total_time, total_files):
        """保存结果并生成报告"""
        if results:
            columns = ['file_name', 'no loop transformation', 'loop tiling', 'loop interchange',
                       'loop skewing', 'loop fusion', 'loop distribution', 'loop reverse', 'loop shifting',
                       'other loop transformation']
            df = pd.DataFrame(results, columns=columns)

            df.to_csv(self.output_file, index=False)

            # 生成统计报告
            report = self._generate_summary_report(total_time, total_files, len(results))
            self.logger.info("\n" + report)
        else:
            self.logger.warning("没有找到有效的处理结果")

    def _generate_summary_report(self, total_time, total_files, processed_files):
        """生成总结报告"""
        report = [
            "=" * 60,
            "LOOP TRANSFORMATION CLASSIFICATION REPORT",
            "=" * 60,
            f"Command: {'python ' + ' '.join(sys.argv)}",
            f"Processing time: {total_time:.2f} seconds",
            f"Total file pairs: {total_files}",
            f"Successfully processed: {self.success_count} ({self.success_count/total_files*100:.1f}%)",
            f"Failed: {self.fail_count} ({self.fail_count/total_files*100:.1f}%)",
            f"Skipped: {self.skip_count} ({self.skip_count/total_files*100:.1f}%)",
            f"Output file: {self.output_file}",
            f"Dataset path: {self.dataset_path}",
            "=" * 60
        ]

        return "\n".join(report)

def classify_from_strings(stdout_content, code_content):
    """
    直接根据stdout内容和代码内容进行分类
    """
    tool = extraction_tools()
    _, stmts, _, schedules, _, loop_types, _, _ = tool.extract_stdout_from_string(stdout_content)
    c_codelet = code_content  # 直接使用传入的代码字符串
    classifier = Loop_Transformation_Classifier(stmts, schedules, loop_types, c_codelet)
    answer = classifier.loop_transformation_analysis()
    return answer

def main():
    """主函数"""
    args = parse_arguments()

    try:
        processor = Classification_Batch_Processor(args)
        processor.run_classification()

    except KeyboardInterrupt:
        logging.getLogger().error("\nClassification interrupted by user")
    except Exception as e:
        logging.getLogger().error(f"Fatal error in main: {str(e)}")

if __name__ == "__main__":
    main()
