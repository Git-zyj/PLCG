import re
import os
import numpy as np
import argparse as ap
import pandas as pd
import logging
import datetime
import tree_sitter as ts
import tree_sitter_c as tsc
import sys
import gc
import shutil
import time

from pathlib import Path
from concurrent.futures import ProcessPoolExecutor, as_completed

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
                       type=str, default="examples")
    parser.add_argument("-o", "--output", dest="output", 
                       help="output csv file for classification results", 
                       type=str, default="classification_output.csv")
    parser.add_argument("-j", "--processes", dest="num_processes", 
                       help="number of parallel processes", 
                       type=int, default=min(os.cpu_count(), 16))
    parser.add_argument("--batch-size", dest="batch_size", 
                       help="batch size to reduce memory usage", 
                       type=int, default=1000)
    
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

    def check_fusion_distribution(self, i, check_list, flags):
        """检查循环融合和分布"""
        if i >= self.consts.shape[2]:
            return flags

        if (set(self.consts[0, check_list, i]) == set(self.consts[1, check_list, i]) == {0}):
            flags = self.check_fusion_distribution(i + 1, check_list, flags)
            if flags == [1, 1]:  # fusion + distribution
                return flags
        else:
            co_loop = [[], []]
            for j in set(self.consts[0, check_list, i]):
                co_loop[0].append(np.where(self.consts[0, check_list, i] == j)[0].tolist())
            for j in set(self.consts[1, check_list, i]):
                co_loop[1].append(np.where(self.consts[1, check_list, i] == j)[0].tolist())

            if len(co_loop[0]) < len(co_loop[1]):
                flags[1] = 1  # distribution
            elif len(co_loop[0]) > len(co_loop[1]):
                flags[0] = 1  # fusion
            elif (not co_loop[0] == co_loop[1] and 
                  set([str(x) for x in co_loop[0]]) != set([str(x) for x in co_loop[1]])):
                return [1, 1]  # fusion + distribution

            for group_src in co_loop[0]:
                for group_dst in co_loop[1]:
                    if len(group_src) > 1 and len(group_dst) > 1:
                        new_check_list = list(set(group_src) & set(group_dst))
                        if len(new_check_list) > 1:
                            flags = self.check_fusion_distribution(i + 1, new_check_list, flags)
                            if flags == [1, 1]:  # fusion + distribution
                                return flags
        return flags

    def check_nstmts_after(self):
        """检查赋值表达式数量"""
        try:
            C_LANGUAGE = ts.Language(tsc.language())
            c_parser = ts.Parser(C_LANGUAGE)
            c_query_text = '''
            (assignment_expression [left: (subscript_expression)@1 right: (subscript_expression)@2])
            '''
            c_query = C_LANGUAGE.query(c_query_text)
            c_tree = c_parser.parse(bytes(self.c_codelet, "utf8"))
            c_capture = c_query.captures(c_tree.root_node)
            return len(c_capture)
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

        # 统一调度长度   
        min_len = min(len(row) for row in self.schedules[1])
        self.schedules[1] = [row[:min_len] for row in self.schedules[1]]
        self.loop_types[1] = [row[:min_len] for row in self.loop_types[1]]

        print(self.filename)
        print(self.schedules)

        # 处理调度和循环类型
        for i in range(self.max_loop_depth):
            for j in range(self.nstmts):
                # 添加边界检查
                if not self.loop_types[1][j][2 * i] == 'scalar':
                    for stmt in range(self.nstmts):
                        self.schedules[1][stmt].insert(2 * i, '0')
                        self.loop_types[1][stmt].insert(2 * i, "scalar")

                # 处理标量情况
                if 2 * i + 1 < len(self.loop_types[1][j]):
                    if self.loop_types[1][j][2 * i + 1] == 'scalar':
                        # 检查所有语句在相同位置是否都是标量
                        all_scalar = True
                        for stmt in range(self.nstmts):
                            if self.loop_types[1][stmt][2 * i + 1] != 'scalar':
                                all_scalar = False
                                break
                        
                        if all_scalar:  # 需要drop scalar
                            seq = 1
                            while 2 * i + 1 + seq < len(self.loop_types[1][j]):
                                found_loop = False
                                for stmt in range(self.nstmts):
                                    if self.loop_types[1][stmt][2 * i + 1 + seq] == 'loop':
                                        found_loop = True
                                        break
                                
                                if found_loop:
                                    # 处理标量序列
                                    tmp_consts = {}
                                    for stmt in range(self.nstmts):
                                        tmp_consts[stmt] = tuple(self.schedules[1][stmt][2 * i: 2 * i + 1 + seq])
                                    
                                    sorted_consts = sorted(set(tmp_consts.values()))
                                    for stmt in range(self.nstmts):
                                        self.schedules[1][stmt][2 * i] = str(sorted_consts.index(tmp_consts[stmt]))
                                        # 删除标量维度
                                        for _ in range(seq):
                                            del self.schedules[1][stmt][2 * i + 1]
                                            del self.loop_types[1][stmt][2 * i + 1]
                                    
                                    # 更新系数矩阵
                                    for k in range(self.max_loop_depth):
                                        if (self.schedules[0][j][2 * k + 1] != "0" and 
                                            self.schedules[0][j][2 * k + 1] in self.schedules[1][j][2 * i + 1]):
                                            self.coefs[j][i][k] = 1 # TODO: 目前只考虑有无，后续考虑加上系数
                                        elif (self.schedules[0][j][2 * k + 1][0] == "-" and 
                                                self.schedules[0][j][2 * k + 1][1:] in self.schedules[1][j][2 * i + 1]): # 当前i--时，pluto会识别调度为-i
                                            self.coefs[j][i][k] = 1
                                            self.var_neg[j][i][k] = -1
                                    break
                                seq += 1
                    else:
                        # 更新系数矩阵
                        for k in range(self.max_loop_depth):
                            if (self.schedules[0][j][2 * k + 1] != "0" and 
                                self.schedules[0][j][2 * k + 1] in self.schedules[1][j][2 * i + 1]):
                                self.coefs[j][i][k] = 1
                            elif (self.schedules[0][j][2 * k + 1][0] == "-" and
                                  self.schedules[0][j][2 * k + 1][1:] in self.schedules[1][j][2 * i + 1]):
                                self.coefs[j][i][k] = 1
                                self.var_neg[j][i][k] = -1

        print(self.schedules)

        # 调整调度长度
        if len(self.loop_types[1][0]) == len(self.loop_types[0][0]) - 1:
            for stmt in range(self.nstmts):
                self.schedules[1][stmt].append('0')
                self.loop_types[1][stmt].append("scalar")
        elif len(self.loop_types[1][0]) != len(self.loop_types[0][0]):
            self.answer[8] = 1  # other
            return self.answer

        print(self.schedules)

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

        print(self.schedules)
        print("end")

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

            flags = [0, 0]
            check_list = list(range(self.nstmts))
            self.answer[4:6] = self.check_fusion_distribution(0, check_list, flags)

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
            tool = extraction_tools()
            _, stmts, _, schedules, _, loop_types = tool.extract_stdout_from_file(str(stdout_file))
            c_codelet = tool.extract_codelet_from_file(str(code_file), 1)
            
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
                    if i % 50 == 0:
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
    _, stmts, _, schedules, _, loop_types = tool.extract_stdout_from_string(stdout_content)
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
        print("\nClassification interrupted by user")
    except Exception as e:
        print(f"Fatal error: {e}")
        logging.getLogger().error(f"Fatal error in main: {str(e)}")

if __name__ == "__main__":
    main()