import pandas as pd
import os
import json
import datetime
import re
import argparse as ap
import multiprocessing as mp
import logging
import gc
import sys

from pathlib import Path
from collections import defaultdict, Counter
from concurrent.futures import ProcessPoolExecutor, as_completed

from extraction_tools import extraction_tools

today = datetime.datetime.now().strftime('%Y%m%d')

def setup_logging(log_dir):
    """配置日志系统"""
    log_file = log_dir / f'rag_preprocess_{today}.log'
    
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
    RAG preprocess: select datasets based on applied loop transformations, and extract loop features into json
    '''
    
    parser = ap.ArgumentParser(description=parser_description)
    parser.add_argument("-i", "--input-path", dest="dataset_path", 
                       help="path of the folder of dataset containing poly_code", 
                       type=str, default="examples")
    parser.add_argument("-o", "--output-path", dest="output_path", 
                       help="path of the folder of output of codes selected", 
                       type=str, default=None)
    parser.add_argument("-c", "--classification_file", dest="classification_file", 
                       help="name of classification_output file", 
                       type=str, default='classification_output.csv')
    parser.add_argument("-d", "--dataset", dest="dataset", 
                       help="name of generator", 
                       choices=["plcg-v1", "plcg-v2", "colagen", "yarpgen"], 
                       default="plcg-v2")
    parser.add_argument("-j", "--processes", dest="num_processes", 
                       help="number of parallel processes", 
                       type=int, default=min(mp.cpu_count(), 16))
    parser.add_argument("--batch-size", dest="batch_size", 
                       help="batch size to reduce memory usage", 
                       type=int, default=1000)
    
    args = parser.parse_args()
    
    if args.output_path is None:
        args.output_path = args.dataset_path
        
    return args

def for_loop_post_process(code):
    """
    Add int for code like "for (i...)" in opt code for RAG
    Example: post_process("for (t = 0;)")
    """
    pattern = r'(for \()(?!int)'
    replacement = r'\1int '
    return re.sub(pattern, replacement, code)

class RAG_Preprocessor:
    def __init__(self, args):
        self.args = args
        self.dataset_path = Path(args.dataset_path).resolve()
        self.output_path = Path(args.output_path).resolve()
        
        # 设置路径
        self.pluto_path = self.dataset_path / 'pluto_code'
        self.stdout_path = self.dataset_path / 'stdout'
        self.poly_path = self.dataset_path / 'poly_code'
        self.classification_file = self.dataset_path / args.classification_file
        
        self.logger = setup_logging(self.output_path)
        
        # 统计信息
        self.success_count = 0
        self.fail_count = 0
        self.skip_count = 0
        
        self._validate_paths()
    
    def _validate_paths(self):
        """验证所有必要的路径是否存在"""
        required_paths = [self.pluto_path, self.stdout_path, self.poly_path]
        for path in required_paths:
            if not path.exists():
                raise FileNotFoundError(f"Required path does not exist: {path}")
        
        if not self.classification_file.exists():
            raise FileNotFoundError(f"Classification file not found: {self.classification_file}")
    
    def load_classification_data(self):
        """加载分类数据并筛选有价值的文件"""
        self.logger.info("Loading classification data...")
        classification = pd.read_csv(self.classification_file)
        
        # 根据数据集类型进行筛选
        if "plcg" in self.args.dataset:
            classification['orig_file'] = classification['file_name'].apply(lambda x: x[:-2])
            classification['idx'] = classification['file_name'].apply(lambda x: x[-1])
            
            # 筛选应用了有价值变换的文件
            transformation_cols = ['loop interchange', 'loop skewing', 'loop fusion', 'loop distribution', 'loop shifting']
            valuable = classification[classification[transformation_cols].sum(axis=1) > 0]
            self.logger.info(f"Found {len(valuable)} valuable files with transformations")
        else:
            valuable = classification
            self.logger.info(f"Using all {len(valuable)} files for non-plcg dataset")
        
        valuable.loc[:, 'file_name'] = valuable['file_name'].astype('str')
        return valuable
    
    def get_available_files(self, valuable_files):
        """获取可用的文件列表（同时存在于pluto_code和stdout中）"""
        pluto_files = {f.name.removesuffix('.pluto.c') for f in self.pluto_path.glob('*.pluto.c')}
        stdout_files = {f.name.removesuffix('.stdout') for f in self.stdout_path.glob('*.stdout')}
        
        # print(valuable_files)
        # print(pluto_files)
        # print(stdout_files)
        
        available_files = list(set(valuable_files) & pluto_files & stdout_files)
        self.logger.info(f"Available files: {len(available_files)} "
                        f"(pluto: {len(pluto_files)}, stdout: {len(stdout_files)}, "
                        f"valuable: {len(valuable_files)})")
        
        return available_files
    
    def process_single_file(self, filename):
        """处理单个文件的信息提取"""
        tool = extraction_tools()
        content = defaultdict(list)
        content['filename'] = filename
        
        # 提取原始代码
        try:
            original_code = tool.extract_codelet_from_file(str(self.poly_path / f'{filename}.c'), 0)
            if not original_code:
                return False, "original code extract failed", filename
            content['code'] = original_code
        except Exception as e:
            return False, f"original code extraction error: {str(e)}", filename
        
        # 提取优化后代码
        try:
            opt_codelet = tool.extract_codelet_from_file(str(self.pluto_path / f'{filename}.pluto.c'), 1)
            content['opt_code'] = for_loop_post_process(opt_codelet)
            
            # 验证优化代码
            if 'i' not in content['opt_code']:
                return False, "opt codelet content is wrong (no 'i' variable)", filename
                
        except ValueError as e:
            if str(e) == "The pluto file is empty!":
                return False, "pluto file is empty", filename
            else:
                return False, f'opt codelet extract fails: {str(e)}', filename
        except Exception as e:
            return False, f'opt codelet extraction error: {str(e)}', filename
        
        # 提取stdout信息
        try:
            info = tool.get_info(str(self.stdout_path / f'{filename}.stdout'))
            content['info'] = info
        except ValueError as e:
            return False, f'stdout info extraction failed: {str(e)}', filename
        except Exception as e:
            return False, f'stdout info extraction error: {str(e)}', filename
        
        return True, content, filename
    
    def process_batch(self, batch_files):
        """处理一个批次的文件"""
        batch_success = 0
        batch_fail = 0
        batch_contents = {}
        batch_errors = []
        
        self.logger.info(f"Processing batch with {len(batch_files)} files...")
        
        with ProcessPoolExecutor(max_workers=self.args.num_processes) as executor:
            # 提交所有任务
            future_to_file = {
                executor.submit(self.process_single_file, filename): filename 
                for filename in batch_files
            }
            
            # 处理完成的任务
            for i, future in enumerate(as_completed(future_to_file), 1):
                filename = future_to_file[future]
                
                try:
                    success, result, file = future.result()
                    
                    if success:
                        batch_success += 1
                        batch_contents[file] = result
                    else:
                        batch_fail += 1
                        batch_errors.append((file, result))
                        self.logger.error(f"✗ {file}: {result}")
                    
                    # 进度报告
                    if i % 50 == 0:
                        progress = i / len(batch_files) * 100
                        self.logger.info(f"Batch progress: {i}/{len(batch_files)} ({progress:.1f}%)")
                        
                except Exception as e:
                    batch_fail += 1
                    error_msg = f"future exception: {str(e)}"
                    batch_errors.append((filename, error_msg))
                    self.logger.error(f"✗ {filename}: {error_msg}")
        
        return batch_contents, batch_errors, batch_success, batch_fail
    
    def select_plcg_files(self, valuable_df, all_contents):
        """为PLCG数据集选择生成代码（每个使用相同参数的生成代码最多选择4个变体，即id），349920->~100000"""
        self.logger.info("Selecting PLCG files with diversity...")
        
        valuable_with_content = valuable_df[valuable_df['file_name'].isin(all_contents.keys())]
        selected_files = []
        
        # 分层选择：每个相同参数的生成代码最多选择4个不同的变体
        for i in range(4):
            # 选择当前层中不重复的生成代码
            unique_files = valuable_with_content.drop_duplicates(subset='orig_file')
            selected_files.extend(unique_files['file_name'].tolist())
            
            # 移除已选择的生成代码，继续处理剩余生成代码
            valuable_with_content = valuable_with_content[
                valuable_with_content.duplicated(subset='orig_file', keep=False)
            ]
            
            self.logger.info(f"Selection round: {len(unique_files)} files selected, "
                           f"{len(valuable_with_content)} files remaining")
            
            if len(valuable_with_content) == 0:
                self.logger.info(f"Selection finished after the {i+1}th filter.")
                break
        
        self.logger.info(f"Total selected files for PLCG: {len(selected_files)}")
        return {key: all_contents[key] for key in selected_files}
    
    def run_preprocess(self):
        """运行数据集选择流程"""
        self.logger.info("=" * 60)
        self.logger.info(f"Starting RAG preprocess for {self.args.dataset}")
        self.logger.info("=" * 60)
        
        # 加载分类数据
        valuable_df = self.load_classification_data()
        available_files = self.get_available_files(valuable_df['file_name'].tolist())
        
        if not available_files:
            self.logger.error("No available files found for processing")
            return
        
        start_time = datetime.datetime.now()
        all_contents = {}
        all_errors = []
        
        # 分批处理
        batches = []
        for i in range(0, len(available_files), self.args.batch_size):
            batch = available_files[i:i + self.args.batch_size]
            batches.append(batch)
        
        for i, batch in enumerate(batches, 1):
            batch_start_time = datetime.datetime.now()
            
            self.logger.info(f"\n--- Processing Batch {i}/{len(batches)} ---")
            
            batch_contents, batch_errors, batch_success, batch_fail = self.process_batch(batch)
            
            all_contents.update(batch_contents)
            all_errors.extend(batch_errors)
            self.success_count += batch_success
            self.fail_count += batch_fail
            
            batch_time = (datetime.datetime.now() - batch_start_time).total_seconds()
            
            self.logger.info(f"Batch {i} completed: "
                           f"Success: {batch_success}/{len(batch)}, "
                           f"Fail: {batch_fail}, Time: {batch_time:.1f}s")
            
            # 强制垃圾回收
            gc.collect()
        
        # 根据数据集类型选择最终文件
        if "plcg" in self.args.dataset:
            final_contents = self.select_plcg_files(valuable_df, all_contents)
        else:
            final_contents = all_contents
        
        total_time = (datetime.datetime.now() - start_time).total_seconds()
        
        # 保存结果
        self.save_results(final_contents, total_time, len(available_files))
    
    def save_results(self, contents, total_time, total_files):
        """保存结果并生成报告"""
        # 保存JSON文件
        json_filename = f'{self.args.dataset}_{len(contents)}_{today}.json'
        json_path = self.output_path / json_filename
        
        with open(json_path, 'w', encoding='utf-8') as f:
            json.dump(list(contents.values()), f)
        
        # 生成报告
        report = self._generate_summary_report(total_time, total_files, len(contents), )
        self.logger.info("\n" + report)
        
        # # 保存错误日志
        # if errors:
        #     error_log_path = self.output_path / f'extraction_errors_{today}.txt'
        #     with open(error_log_path, 'w', encoding='utf-8') as f:
        #         f.write("File\tError\n")
        #         for file, error in errors:
        #             f.write(f"{file}\t{error}\n")
        #     self.logger.info(f"Error log saved to: {error_log_path}")
    
    def _generate_summary_report(self, total_time, total_files, final_files):
        """生成总结报告"""
        report = [
            "=" * 60,
            "RAG PREPROCESS SUMMARY REPORT",
            "=" * 60,
            f"Command: {'python ' + ' '.join(sys.argv)}", 
            f"Dataset: {self.args.dataset}",
            f"Processing time: {total_time:.2f} seconds",
            f"Total files processed: {total_files}",
            f"Successfully extracted: {self.success_count} ({self.success_count/total_files*100:.1f}%)",
            f"Failed: {self.fail_count} ({self.fail_count/total_files*100:.1f}%)",
            f"Final selected files: {final_files}",
            f"Output JSON: {self.args.dataset}_{final_files}_{today}.json",
            f"Dataset path: {self.dataset_path}",
            f"Output path: {self.output_path}",
            "=" * 60
        ]
        
        return "\n".join(report)

def main():
    """主函数"""
    args = parse_arguments()
    
    try:
        preprocessor = RAG_Preprocessor(args)
        preprocessor.run_preprocess()
        
    except KeyboardInterrupt:
        print("\nRAG preprocess interrupted by user")
    except Exception as e:
        print(f"Fatal error: {e}")
        logging.getLogger().error(f"Fatal error in main: {str(e)}")

if __name__ == "__main__":
    main()