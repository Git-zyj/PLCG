import os
import random
import multiprocessing as mp
import itertools as it
import time
import subprocess as sp
import datetime
import logging
import numpy as np
import traceback
import sys

from loop_properties_generator import Loop_Properties_Generator
from c_code_generator import C_Code_Generator
from path_settings import DATASET_PATH, json_input_path, target_path

today = datetime.datetime.now().strftime('%m%d')

if not os.path.exists(DATASET_PATH):
    os.mkdir(DATASET_PATH)

empty_path = f'{DATASET_PATH}/empty'

if not os.path.exists(empty_path):
    os.mkdir(empty_path)
if not os.path.exists(json_input_path):
    os.mkdir(json_input_path)
if not os.path.exists(target_path):
    os.mkdir(target_path)

os.system(f'rsync -r --delete {empty_path}/ {json_input_path}/')
os.system(f'rsync -r --delete {empty_path}/ {target_path}/')

# 设置全局日志
logging.basicConfig(
    level=logging.INFO,
    format='%(asctime)s - %(name)s - %(levelname)s - %(message)s',
    handlers=[
        logging.FileHandler(f"{DATASET_PATH}/random_generation_{today}.log", mode='w', encoding='utf-8'),
        logging.StreamHandler(sys.stdout)
    ]
)
global_logger = logging.getLogger("RandomGeneration")

random.seed(0)
np.random.seed(0)

def pool_err_call_back(err):
    """改进的错误回调函数，提供更详细的错误信息"""
    error_msg = f'Error in multiprocessing: {str(err)}\n'
    error_msg += f'Error type: {type(err).__name__}\n'
    error_msg += f'Traceback:\n{traceback.format_exc()}'
    global_logger.error(error_msg)

def count_files(path):
    """统计目录中的文件数量"""
    try:
        result = sp.run(['ls', '-l', path], capture_output=True, text=True)
        file_count = sum(1 for line in result.stdout.splitlines() if line.startswith('-'))
        return file_count
    except Exception as e:
        global_logger.error(f"Error counting files in {path}: {e}")
        return 0

def generate_files_with_error_handling(args):
    """
    包装生成函数，添加详细的错误处理
    现在接收单个元组参数，动态处理参数数量
    """
    # 动态处理参数
    if len(args) == 10:
        # 中规模并行情况：没有id参数
        (arg_depth, arg_nstmts, arg_bounds_index, arg_prob_bounds_exist, 
         arg_narrays_per_dim, arg_avg_narrays_read_per_stmt, arg_bounds_coef, 
         arg_avg_ndeps_read_per_stmt, arg_bounds_distance, arg_prob_dep_write_exist) = args
        id = 0  # 设置默认id
    elif len(args) == 11:
        # 超大规模并行情况：包含id参数
        (arg_depth, arg_nstmts, arg_bounds_index, arg_prob_bounds_exist, 
         arg_narrays_per_dim, arg_avg_narrays_read_per_stmt, arg_bounds_coef, 
         arg_avg_ndeps_read_per_stmt, arg_bounds_distance, arg_prob_dep_write_exist, id) = args
    else:
        raise ValueError(f"Unexpected number of arguments: {len(args)}")
    
    process_name = f"Process-{mp.current_process().name}"
    task_id = f"{arg_depth}{arg_nstmts}{arg_bounds_index}{arg_prob_bounds_exist}{arg_narrays_per_dim}{arg_avg_narrays_read_per_stmt}{arg_bounds_coef}{arg_avg_ndeps_read_per_stmt}{arg_bounds_distance}{arg_prob_dep_write_exist}_{id:02d}"
    
    global_logger.info(f"{process_name}: Starting task {task_id}")
    
    try:
        # 为每个进程创建独立的生成器实例
        loop_properties_generator = Loop_Properties_Generator(log_level=logging.WARNING)
        c_code_generator = C_Code_Generator(log_level=logging.WARNING)
        
        # 记录参数信息
        global_logger.debug(f"{process_name}: Parameters - depth={arg_depth}, stmts={arg_nstmts}, bounds_index={arg_bounds_index}, "
                          f"prob_bounds={arg_prob_bounds_exist}, arrays_per_dim={arg_narrays_per_dim}, "
                          f"avg_read={arg_avg_narrays_read_per_stmt}, bounds_coef={arg_bounds_coef}, "
                          f"avg_deps={arg_avg_ndeps_read_per_stmt}, bounds_dist={arg_bounds_distance}, "
                          f"prob_write_dep={arg_prob_dep_write_exist}, id={id}")
        
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
        
        global_logger.info(f"{process_name}: Successfully generated JSON: {file_path}")
        
        # 生成C代码
        c_code_generator.generate_c_code(file_path)
        global_logger.info(f"{process_name}: Successfully generated C code for: {file_path}")
        
        return f"SUCCESS: {task_id}"
        
    except IndexError as e:
        error_msg = f"{process_name}: INDEX ERROR in {task_id}: {str(e)}"
        global_logger.error(error_msg)
        global_logger.error(f"Traceback: {traceback.format_exc()}")
        return f"INDEX_ERROR: {task_id}"
        
    except ValueError as e:
        error_msg = f"{process_name}: VALUE ERROR in {task_id}: {str(e)}"
        global_logger.error(error_msg)
        global_logger.error(f"Traceback: {traceback.format_exc()}")
        return f"VALUE_ERROR: {task_id}"
        
    except KeyError as e:
        error_msg = f"{process_name}: KEY ERROR in {task_id}: {str(e)}"
        global_logger.error(error_msg)
        global_logger.error(f"Traceback: {traceback.format_exc()}")
        return f"KEY_ERROR: {task_id}"
        
    except Exception as e:
        error_msg = f"{process_name}: UNEXPECTED ERROR in {task_id}: {type(e).__name__}: {str(e)}"
        global_logger.error(error_msg)
        global_logger.error(f"Traceback: {traceback.format_exc()}")
        return f"UNEXPECTED_ERROR: {task_id}"

def monitor_progress(results, total_tasks):
    """监控进度"""
    completed = len(results)
    if completed % 100 == 0:
        progress = (completed / total_tasks) * 100
        global_logger.info(f"Progress: {completed}/{total_tasks} ({progress:.1f}%)")
        
        # 统计错误类型
        error_counts = {}
        for result in results:
            if result.startswith(('INDEX_ERROR', 'VALUE_ERROR', 'KEY_ERROR', 'UNEXPECTED_ERROR')):
                error_type = result.split(':')[0]
                error_counts[error_type] = error_counts.get(error_type, 0) + 1
        
        if error_counts:
            global_logger.warning(f"Current errors: {error_counts}")

def main(option=0):
    """主函数"""
    time_start = time.time()
    global_logger.info(f"Starting random generation with option {option}")

    # (*)arg_depth暂定为2,表示循环维度范围为(1,2)
    # (*)arg_nstmts暂定为3,表示语句数量为3
    # (*)arg_bounds_index暂定为2,表示调度序号范围为(0,1,2),影响语句的疏密程度
    # arg_prob_bounds_exist暂定为4,表示循环边界被指定的几率为40%
    # (*)arg_narrays_per_dim暂定为2,表示每种数组维度下待选数组数量为2,影响数组的疏密程度
    # arg_avg_narrays_read_per_stmt:每条语句平均读数组数量，暂定为1，表示指定生成的读数组数量（additional_computation类的）应当为1*arg_nstmts
    # arg_bounds_coef暂定为2,表示数组下标常量系数范围为(-2,-1,0,1,2)
    # arg_avg_ndeps_read_per_stmt:每条语句平均读依赖数量，暂定为2，表示指定生成的读依赖数量（validate之前）应当为2*arg_nstmts
    # arg_bounds_distance暂定为2,表示依赖距离范围为(-2,-1,0,1,2)
    # (*)arg_dep_write_exist暂定为4,表示每条语句写依赖存在概率为40%

    try:
        if option == 0:
            # 默认参数单文件生成（用于调试）
            loop_properties_generator = Loop_Properties_Generator(log_level=logging.WARNING)
            c_code_generator = C_Code_Generator(log_level=logging.WARNING)
            file_path = loop_properties_generator.generate_json_file()
            c_code_generator.generate_c_code(file_path)

        elif option == 1:
            # 小规模测试 - 32
            for arg_depth in range(2, 4):
                for arg_nstmts in range(1, 3):
                    for arg_bounds_index in range(1, 3):
                        for arg_prob_dep_write_exist in range(2, 5, 2):
                            for arg_narrays_per_dim in range(1, 3):
                                loop_properties_generator = Loop_Properties_Generator(log_level=logging.WARNING)
                                c_code_generator = C_Code_Generator(log_level=logging.WARNING)
                                file_path = loop_properties_generator.generate_json_file(
                                    arg_depth=arg_depth, arg_nstmts=arg_nstmts, 
                                    arg_bounds_index=arg_bounds_index, arg_narrays_per_dim=arg_narrays_per_dim, 
                                    arg_prob_dep_write_exist=arg_prob_dep_write_exist
                                )
                                c_code_generator.generate_c_code(file_path)
        elif option == 2:
            # 中规模并行 - 34992 tasks
            global_logger.info("Starting medium-scale parallel generation (34992 tasks)")
            
            # 计算总任务数
            param_ranges = [
                range(2, 5),      # arg_depth
                range(1, 5),      # arg_nstmts  
                range(1, 4),      # arg_bounds_index
                range(2, 7, 2),   # arg_prob_bounds_exist
                range(1, 4),      # arg_narrays_per_dim
                range(1, 6, 2),   # arg_avg_narrays_read_per_stmt
                range(1, 3),      # arg_bounds_coef
                range(1, 4),      # arg_avg_ndeps_read_per_stmt
                range(1, 3),      # arg_bounds_distance
                range(1, 6, 2)    # arg_prob_dep_write_exist
            ]
            
            total_tasks = 1
            for r in param_ranges:
                total_tasks *= len(r)
                
            global_logger.info(f"Total tasks to process: {total_tasks}")
            
            # 使用更小的进程池和分批处理
            max_workers = min(mp.cpu_count(), 16)  # 限制最大workers
            global_logger.info(f"Using {max_workers} workers")
            
            pool = mp.Pool(processes=max_workers)
            results = []
            
            # 使用imap_unordered获取实时结果
            tasks = it.product(*param_ranges)
            for i, result in enumerate(pool.imap_unordered(generate_files_with_error_handling, tasks)):
                results.append(result)
                monitor_progress(results, total_tasks)
                
                # 每1000个任务保存一次进度
                if i % 1000 == 0:
                    success_count = sum(1 for r in results if r.startswith('SUCCESS'))
                    error_count = len(results) - success_count
                    global_logger.info(f"Checkpoint: {i}/{total_tasks}, Success: {success_count}, Errors: {error_count}")
            
            pool.close()
            pool.join()
            
            # 最终统计
            success_count = sum(1 for r in results if r.startswith('SUCCESS'))
            error_count = len(results) - success_count
            global_logger.info(f"Final results: Success: {success_count}, Errors: {error_count}")
            
        elif option == 3:
            # 大规模并行 - 349920 tasks
            global_logger.info("Starting large-scale parallel generation (349920 tasks)")
            
            # 计算总任务数
            param_ranges = [
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
            
            total_tasks = 1
            for r in param_ranges:
                total_tasks *= len(r)
                
            global_logger.info(f"Total tasks to process: {total_tasks}")
            
            # 使用更小的进程池和分批处理
            max_workers = min(mp.cpu_count(), 16)  # 限制最大workers
            global_logger.info(f"Using {max_workers} workers")
            
            pool = mp.Pool(processes=max_workers)
            results = []
            
            # 使用imap_unordered获取实时结果
            tasks = it.product(*param_ranges)
            for i, result in enumerate(pool.imap_unordered(generate_files_with_error_handling, tasks)):
                results.append(result)
                monitor_progress(results, total_tasks)
                
                # 每1000个任务保存一次进度
                if i % 1000 == 0:
                    success_count = sum(1 for r in results if r.startswith('SUCCESS'))
                    error_count = len(results) - success_count
                    global_logger.info(f"Checkpoint: {i}/{total_tasks}, Success: {success_count}, Errors: {error_count}")
            
            pool.close()
            pool.join()
            
            # 最终统计
            success_count = sum(1 for r in results if r.startswith('SUCCESS'))
            error_count = len(results) - success_count
            global_logger.info(f"Final results: Success: {success_count}, Errors: {error_count}")
            
        elif option == 4:
            # 超大规模并行 - 129600 tasks
            global_logger.info("Starting extra-large parallel generation (129600 tasks)")
            
            param_ranges = [
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
            
            total_tasks = 1
            for r in param_ranges:
                total_tasks *= len(r)
                
            global_logger.info(f"Total tasks to process: {total_tasks}")
            
            max_workers = min(mp.cpu_count(), 16)
            pool = mp.Pool(processes=max_workers)
            
            results = []
            tasks = it.product(*param_ranges)
            
            for i, result in enumerate(pool.imap_unordered(generate_files_with_error_handling, tasks)):
                results.append(result)
                monitor_progress(results, total_tasks)
                
                if i % 1000 == 0:
                    success_count = sum(1 for r in results if r.startswith('SUCCESS'))
                    error_count = len(results) - success_count
                    global_logger.info(f"Checkpoint: {i}/{total_tasks}, Success: {success_count}, Errors: {error_count}")
            
            pool.close()
            pool.join()
            
            success_count = sum(1 for r in results if r.startswith('SUCCESS'))
            error_count = len(results) - success_count
            global_logger.info(f"Final results: Success: {success_count}, Errors: {error_count}")

    except Exception as e:
        global_logger.error(f"Main function error: {type(e).__name__}: {str(e)}")
        global_logger.error(f"Traceback: {traceback.format_exc()}")

    finally:
        time_end = time.time()
        total_time = time_end - time_start
        
        # 记录统计信息
        json_count = count_files(json_input_path)
        target_count = count_files(target_path)
        
        global_logger.info(f"Generation completed in {total_time:.2f} seconds")
        global_logger.info(f"Files generated: JSON={json_count}, C={target_count}")

if __name__ == "__main__":
    option = 3
    main(option)