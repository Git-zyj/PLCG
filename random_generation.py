import os
import random
import multiprocessing as mp
import itertools as it
import time
import subprocess as sp
import datetime
import logging
from matplotlib.pylab import str_
import numpy as np
import traceback
import sys
import gc
import shutil
import argparse as ap

from pathlib import Path
from concurrent.futures import ProcessPoolExecutor, as_completed
from collections import Counter

from loop_properties_generator import Loop_Properties_Generator
from c_code_generator import C_Code_Generator
from path_settings import DATASET_PATH, json_input_path, target_path, kernel_list_path

random.seed(0)
np.random.seed(0)

def setup_logging(log_dir):
    """配置日志系统"""
    today = datetime.datetime.now().strftime('%Y%m%d')
    log_filename = f'random_generation_{today}.log'
    log_file = log_dir / log_filename
    
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
    
    formatter = logging.Formatter('%(asctime)s - %(name)s - %(levelname)s - %(message)s')
    file_handler.setFormatter(formatter)
    stream_handler.setFormatter(formatter)
    
    logger.setLevel(logging.DEBUG)
    logger.addHandler(file_handler)
    logger.addHandler(stream_handler)
    
    return logger, log_file

def parse_arguments():
    """解析命令行参数"""
    parser_description = '''
    Loop code random generation with different scale options and parallel processing
    '''
    
    parser = ap.ArgumentParser(description=parser_description)
    parser.add_argument("--option", dest="option", 
                       help="generation option (0: single, 1: sequential 32, 2: parallel 2048, 3: parallel 34992, 4: parallel 349920, 5: parallel 129600)", 
                       type=int, choices=[0, 1, 2, 3, 4, 5], default=2)
    parser.add_argument("-j", "--processes", dest="num_processes", 
                       help="number of parallel processes", 
                       type=int, default=min(mp.cpu_count(), 16))
    parser.add_argument("--batch-size", dest="batch_size", 
                       help="batch size to reduce memory usage", 
                       type=int, default=2000)
    parser.add_argument("--no-clean", action="store_true",
                       help="do not clean output directories before generation")
    parser.add_argument("--seed", dest="seed",
                       help="random seed for reproducibility",
                       type=str, default=None)
    
    args = parser.parse_args()
    
    return args

class Random_Generator:
    def __init__(self, args):
        self.batch_size = args.batch_size
        self.num_processes = args.num_processes
        self.option = args.option
        
        if self.option == 0:
            self.seed = args.seed
        
        self.setup_paths()
        
        # 设置日志
        self.logger, self.log_file = setup_logging(self.dataset_path)
        
        if not args.no_clean:
            self.init_directories()
        
        # 统计信息
        self.success_count = 0
        self.error_count = 0
        self.error_types = Counter()
        
    def setup_paths(self):
        """设置所有路径为绝对路径"""
        self.dataset_path = Path(DATASET_PATH).resolve()
        self.json_input_path = Path(json_input_path).resolve()
        self.target_path = Path(target_path).resolve()
        
        # 创建必要的目录
        self.dataset_path.mkdir(parents=True, exist_ok=True)
        self.json_input_path.mkdir(parents=True, exist_ok=True)
        self.target_path.mkdir(parents=True, exist_ok=True)
    
    def init_directories(self):
        """重置输出目录"""
        self.logger.info("Initialize directories...")
        # clean
        self.kernel_list_path = Path(kernel_list_path).resolve()
        self.kernel_list_path.unlink(missing_ok=True)
        
        for path in [self.json_input_path, self.target_path]:
            if path.exists():
                sp.run(['rm', '-rf', str(path)])
            path.mkdir(parents=True, exist_ok=True)
        
        # copy polybench.c and .h
        polybench_c_src = Path('./polybench/polybench.c').resolve()
        polybench_h_src = Path('./polybench/polybench.h').resolve()
        polybench_c_dst = self.target_path / 'polybench.c'
        polybench_h_dst = self.target_path / 'polybench.h'
        shutil.copy(polybench_c_src, polybench_c_dst)
        shutil.copy(polybench_h_src, polybench_h_dst)
    
    def count_files(self, path, pattern="*.c"):
        """统计目录中的文件数量"""
        try:
            # 使用find命令进行高效统计
            cmd = ['find', str(path), '-type', 'f', '-name', pattern]
            result = sp.run(cmd, capture_output=True, text=True, check=True)
            
            if result.stdout.strip():
                # 使用wc统计行数，避免创建大列表
                line_count = len(result.stdout.strip().split('\n'))
                return line_count
            else:
                return 0
        except Exception as e:
            self.logger.error(f"Failed to count files in {path}: {e}")
            return 0
    
    def generate_single_file(self, task_index, params):
        """
        适用于并行生成的单个文件生成
        """
        (arg_depth, arg_nstmts, arg_bounds_index, arg_prob_bounds_exist, 
            arg_narrays_per_dim, arg_avg_narrays_read_per_stmt, arg_bounds_coef, 
            arg_avg_ndeps_read_per_stmt, arg_bounds_distance, arg_prob_dep_write_exist, id) = params
        
        task_seed = f"{arg_depth}{arg_nstmts}{arg_bounds_index}{arg_prob_bounds_exist}{arg_narrays_per_dim}{arg_avg_narrays_read_per_stmt}{arg_bounds_coef}{arg_avg_ndeps_read_per_stmt}{arg_bounds_distance}{arg_prob_dep_write_exist}"
        
        task_id = f"{task_seed}_{id:02d}"
        
        random.seed(task_index)
        np.random.seed(task_index)
        
        try:
            # 为每个进程创建独立的生成器实例，传入统一的日志文件位置
            loop_properties_generator = Loop_Properties_Generator(
                log_level=logging.WARNING, 
                log_path=str(self.log_file)
            )
            c_code_generator = C_Code_Generator(
                log_level=logging.WARNING, 
                log_path=str(self.log_file)
            )
            
            # 生成JSON文件
            file_path = loop_properties_generator.generate_json_file(
                arg_depth=arg_depth, 
                arg_nstmts=arg_nstmts, 
                arg_bounds_index=arg_bounds_index, 
                arg_prob_bounds_exist=arg_prob_bounds_exist,
                arg_narrays_per_dim=arg_narrays_per_dim, 
                arg_avg_narrays_read_per_stmt=arg_avg_narrays_read_per_stmt, 
                arg_bounds_coef=arg_bounds_coef,
                arg_avg_ndeps_read_per_stmt=arg_avg_ndeps_read_per_stmt, 
                arg_bounds_distance=arg_bounds_distance, 
                arg_prob_dep_write_exist=arg_prob_dep_write_exist, 
                id=id
            )
            
            # 生成C代码
            c_code_generator.generate_c_code(file_path)
            
            return "success", task_id, None
            
        except (IndexError, ValueError, KeyError) as e:
            error_type = type(e).__name__
            error_msg = f"{error_type} in {task_id}: {str(e)}"
            self.logger.error(error_msg)
            return "error", task_id, error_type
            
        except Exception as e:
            error_type = type(e).__name__
            error_msg = f"UNEXPECTED ERROR in {task_id}: {error_type}: {str(e)}"
            self.logger.error(error_msg)
            return "error", task_id, error_type
    
    def process_batch(self, batch_tasks, batch_num, total_batches):
        """处理一个批次的文件"""
        batch_success = 0
        batch_error = 0
        batch_errors = Counter()
        
        self.logger.info(f"Processing batch {batch_num}/{total_batches} with {len(batch_tasks)} tasks...")
        
        with ProcessPoolExecutor(max_workers=self.num_processes) as executor:
            # 提交所有任务
            future_to_task = {
                executor.submit(self.generate_single_file, task_index, params): (task_index, params) for task_index, params in batch_tasks
            }
            
            # 处理完成的任务
            for i, future in enumerate(as_completed(future_to_task), 1):
                task = future_to_task[future]
                
                try:
                    status, task_id, error_type = future.result()
                    
                    if status == "success":
                        batch_success += 1
                    else:
                        batch_error += 1
                        batch_errors[error_type] += 1
                        self.logger.error(f"✗ {task_id}: {error_type}")
                    
                    # 进度报告
                    length_report_section = len(batch_tasks) // 4
                    if i % length_report_section == 0:
                        progress = i / len(batch_tasks) * 100
                        self.logger.info(f"Batch {batch_num} progress: {i}/{len(batch_tasks)} ({progress:.1f}%)")
                        
                except Exception as e:
                    batch_error += 1
                    batch_errors["FutureException"] += 1
                    self.logger.error(f"✗ Future exception: {str(e)}")
        
        return batch_success, batch_error, batch_errors
    
    def get_parameter_ranges(self, option):
        """
        根据选项获取参数范围
        
        (*)arg_depth默认为2,表示循环维度范围为(1,2)\n
        (*)arg_nstmts默认为3,表示语句数量为3\n
        (*)arg_bounds_index默认为2,表示调度序号范围为(0,1,2),影响语句的疏密程度\n
        arg_prob_bounds_exist默认为4,表示循环边界被指定的几率为40%\n
        (*)arg_narrays_per_dim默认为2,表示每种数组维度下待选数组数量为2,影响数组的疏密程度\n
        arg_avg_narrays_read_per_stmt:每条语句平均读数组数量，默认为1，表示指定生成的读数组数量（additional_computation类的）应当为1*arg_nstmts\n
        arg_bounds_coef默认为2,表示数组下标常量系数范围为(-2,-1,0,1,2)\n
        arg_avg_ndeps_read_per_stmt:每条语句平均读依赖数量，默认为2，表示指定生成的读依赖数量（validate之前）应当为2*arg_nstmts\n
        arg_bounds_distance默认为2,表示依赖距离范围为(-2,-1,0,1,2)\n
        (*)arg_dep_write_exist默认为4,表示每条语句写依赖存在概率为40%
        
        """
        if option == 1:
            # 小规模测试 - 32
            return [
                range(2, 4),      # arg_depth
                range(1, 3),      # arg_nstmts  
                range(1, 3),      # arg_bounds_index
                [4],              # arg_prob_bounds_exist (固定值)
                range(1, 3),      # arg_narrays_per_dim
                [1],              # arg_avg_narrays_read_per_stmt (固定值)
                [2],              # arg_bounds_coef (固定值)
                [2],              # arg_avg_ndeps_read_per_stmt (固定值)
                [2],              # arg_bounds_distance (固定值)
                range(2, 5, 2),   # arg_prob_dep_write_exist
                [0]               # id
            ]
        elif option == 2:
            # 小规模并行 - 1024 tasks
            return [
                range(2, 4),      # arg_depth
                range(1, 3),      # arg_nstmts  
                range(1, 3),      # arg_bounds_index
                range(2, 5, 2),   # arg_prob_bounds_exist
                range(1, 3),      # arg_narrays_per_dim
                range(1, 4, 2),   # arg_avg_narrays_read_per_stmt
                range(1, 3),      # arg_bounds_coef
                range(1, 3),      # arg_avg_ndeps_read_per_stmt
                range(1, 3),      # arg_bounds_distance
                range(1, 4, 2),   # arg_prob_dep_write_exist
                range(2)               # id
            ]
        elif option == 3:
            # 中规模并行 - 34992 tasks
            return [
                range(2, 5),      # arg_depth
                range(1, 5),      # arg_nstmts  
                range(1, 4),      # arg_bounds_index
                range(2, 7, 2),   # arg_prob_bounds_exist
                range(1, 4),      # arg_narrays_per_dim
                range(1, 6, 2),   # arg_avg_narrays_read_per_stmt
                range(1, 3),      # arg_bounds_coef
                range(1, 4),      # arg_avg_ndeps_read_per_stmt
                range(1, 3),      # arg_bounds_distance
                range(1, 6, 2),   # arg_prob_dep_write_exist
                [0]               # id
            ]
        elif option == 4:
            # 大规模并行 - 349920 tasks
            return [
                range(2, 5),      # arg_depth
                range(1, 5),      # arg_nstmts  
                range(1, 4),      # arg_bounds_index
                range(2, 7, 2),   # arg_prob_bounds_exist
                range(1, 4),      # arg_narrays_per_dim
                range(1, 6, 2),   # arg_avg_narrays_read_per_stmt
                range(1, 3),      # arg_bounds_coef
                range(1, 4),      # arg_avg_ndeps_read_per_stmt
                range(1, 3),      # arg_bounds_distance
                range(1, 6, 2),   # arg_prob_dep_write_exist
                range(10)         # id
            ]
        elif option == 5:
            # 超大规模并行 - 129600 tasks
            return [
                range(3, 6),      # arg_depth
                range(3, 6),      # arg_nstmts  
                range(1, 3),      # arg_bounds_index
                range(4, 9, 2),   # arg_prob_bounds_exist
                range(3, 5),      # arg_narrays_per_dim
                range(1, 3),      # arg_avg_narrays_read_per_stmt
                range(2, 3),      # arg_bounds_coef
                range(2, 4),      # arg_avg_ndeps_read_per_stmt
                range(2, 3),      # arg_bounds_distance
                range(4, 9, 2),   # arg_prob_dep_write_exist
                range(100)        # id
            ]
        else:
            raise ValueError(f"Unsupported option: {option}")
    
    def run_single_generation(self, params):
        """单次运行生成（用于调试）"""
        self.logger.info("Starting single generation for debugging...")
        
        loop_properties_generator = Loop_Properties_Generator(
            log_level=logging.DEBUG, 
            log_path=str(self.log_file)
        )
        c_code_generator = C_Code_Generator(
            log_level=logging.DEBUG, 
            log_path=str(self.log_file)
        )
        
        if params is None:
            params = []
        else:
            params = [int(param) for param in params]
        
        file_path = loop_properties_generator.generate_json_file(*params)
        c_code_generator.generate_c_code(file_path)
        
        self.success_count = 1
    
    def run_sequential_generation(self):
        """运行小规模串行生成"""
        self.logger.info("Starting sequential generation (32 tasks)...")
        
        param_ranges = self.get_parameter_ranges(1)
        
        loop_properties_generator = Loop_Properties_Generator(
            log_level=logging.DEBUG, 
            log_path=str(self.log_file)
        )
        c_code_generator = C_Code_Generator(
            log_level=logging.DEBUG, 
            log_path=str(self.log_file)
        )
        
        for params in it.product(*param_ranges):
            
            file_path = loop_properties_generator.generate_json_file(
                arg_depth=params[0], arg_nstmts=params[1], 
                arg_bounds_index=params[2], arg_narrays_per_dim=params[4], 
                arg_prob_dep_write_exist=params[9]
            )
            c_code_generator.generate_c_code(file_path)
            self.success_count += 1
    
    def run_parallel_generation(self, option):
        """运行并行生成"""
        param_ranges = self.get_parameter_ranges(option)
        
        # 计算总任务数
        total_tasks = 1
        for r in param_ranges:
            total_tasks *= len(r)
        
        self.logger.info("=" * 60)
        self.logger.info(f"Starting parallel generation for option {option}")
        self.logger.info(f"Total tasks: {total_tasks}")
        self.logger.info(f"Processes: {self.num_processes}, Batch size: {self.batch_size}")
        self.logger.info("=" * 60)
        
        start_time = time.time()
        
        # 分批处理
        all_tasks = list(enumerate(it.product(*param_ranges)))
        batches = [all_tasks[i:i + self.batch_size] for i in range(0, len(all_tasks), self.batch_size)]
        
        for i, batch in enumerate(batches, 1):
            batch_start_time = time.time()
            
            batch_success, batch_error, batch_errors = self.process_batch(batch, i, len(batches))
            
            self.success_count += batch_success
            self.error_count += batch_error
            for error_type, count in batch_errors.items():
                self.error_types[error_type] += count
            
            batch_time = time.time() - batch_start_time
            
            self.logger.info(f"Batch {i} completed: "
                           f"Success: {batch_success}/{len(batch)}, "
                           f"Errors: {batch_error}, Time: {batch_time:.1f}s")
            
            # 强制垃圾回收
            gc.collect()
        
        total_time = time.time() - start_time
        self.generate_final_report(total_time, total_tasks)
    
    def generate_final_report(self, total_time, total_tasks):
        """生成最终报告"""
        json_count = self.count_files(self.json_input_path, "*.json")
        target_count = self.count_files(self.target_path, "*.c")
        
        report = [
            "=" * 60,
            "RANDOM GENERATION FINAL REPORT",
            "=" * 60,
            f"Command: {'python ' + ' '.join(sys.argv)}", 
            f"Total processing time: {total_time:.2f} seconds",
            f"Total tasks: {total_tasks}",
            f"Successfully generated: {self.success_count} ({self.success_count/total_tasks*100:.1f}%)",
            f"Errors: {self.error_count} ({self.error_count/total_tasks*100:.1f}%)",
            f"Error types: {dict(self.error_types)}",
            f"Files generated: JSON={json_count}, C={target_count}",
            f"Dataset path: {self.dataset_path}",
            f"JSON path: {self.json_input_path}",
            f"Target path: {self.target_path}",
            "=" * 60
        ]
        
        report_text = "\n".join(report)
        self.logger.info("\n" + report_text)
    
    def run(self):
        """运行生成流程"""
        try:
            if self.option == 0:
                self.run_single_generation(self.seed)
            elif self.option == 1:
                self.run_sequential_generation()
            elif self.option in [2, 3, 4, 5]:
                self.run_parallel_generation(self.option)
            else:
                raise ValueError(f"Unsupported option: {self.option}")
                
        except Exception as e:
            self.logger.error(f"Generation error: {type(e).__name__}: {str(e)}")
            self.logger.error(f"Traceback: {traceback.format_exc()}")

def main():
    """主函数"""
    args = parse_arguments()
    
    try:
        generator = Random_Generator(args)
        generator.run()
        
    except KeyboardInterrupt:
        print("\nGeneration interrupted by user")
    except Exception as e:
        print(f"Fatal error: {e}")
        logging.getLogger().error(f"Fatal error in main: {str(e)}")

if __name__ == "__main__":
    main()