import os
import random
from generate_json import Json_generator
from code_generator import CodeGenerator
from settings import DATASET_PATH, json_input_path, target_path
import multiprocessing as mp
import itertools as it
import time
import subprocess as sp
import datetime

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

random_json_generator = Json_generator()
c_code_generator = CodeGenerator()

random.seed(0)

def pool_err_call_back(err):
    print(f'error while multiprocessing: {str(err)}.\n')

def count_files(path):
    result = sp.run(['ls', '-l', path], capture_output=True, text=True)
    file_count = sum(1 for line in result.stdout.splitlines() if line.startswith('-'))
    return file_count

def generate_files(arg_depth, arg_nstmts, arg_bounds_index, arg_prob_bounds_exist, arg_narrays_per_dim, arg_narrays_read, arg_bounds_coef, arg_ndeps_read, arg_bounds_distance, arg_prob_dep_write_exist, id):
    file_path = random_json_generator.generate_json_file(arg_depth, arg_nstmts, arg_bounds_index, arg_prob_bounds_exist, arg_narrays_per_dim, arg_narrays_read, arg_bounds_coef, arg_ndeps_read, arg_bounds_distance, arg_prob_dep_write_exist, id)
    c_code_generator.generate_c_code(file_path)

def main(option = 1):

    time_start = time.time()

    if option == 1:
        # 36
        for arg_depth in range(3, 4):
            for arg_nstmts in range(1, 7):
                for arg_bounds_index in range(1, 4):
                    for _ in range(2, 7, 2):
                        for arg_narrays_per_dim in range(1, 4):
                            # print(arg_depth, arg_nstmts, arg_bounds_index, arg_narrays_per_dim)
                            file_path = random_json_generator.generate_json_file(arg_depth=arg_depth, arg_nstmts=arg_nstmts, arg_bounds_index=arg_bounds_index, arg_narrays_per_dim=arg_narrays_per_dim, arg_prob_dep_write_exist=_)
                            try:
                                c_code_generator.generate_c_code(file_path)
                            except Exception as e:
                                print(f"An unexpected error occurred for {file_path}: {str(e)}")

    # (*)arg_depth暂定为2,表示循环维度范围为(1,2)
    # (*)arg_nstmts暂定为3,表示语句数量为3
    # (*)arg_bounds_index暂定为2,表示调度序号范围为(0,1,2),影响语句的疏密程度
    # arg_prob_bounds_exist暂定为4,表示循环边界被指定的几率为40%
    # (*)arg_narrays_per_dim暂定为2,表示每种数组维度下待选数组数量为2,影响数组的疏密程度
    # arg_narrays_read暂定为2,表示每条语句读数组数量范围为(0,1,2)
    # arg_bounds_coef暂定为2,表示数组下标常量系数范围为(-2,-1,0,1,2)
    # arg_ndeps_read暂定为2,表示每条语句读依赖数量范围为(0,1,2)
    # arg_bounds_distance暂定为2,表示依赖距离范围为(-2,-1,0,1,2)
    # (*)arg_dep_write_exist暂定为4,表示每条语句写依赖存在概率为40%

    elif option == 2:
        # 349920
        pool = mp.Pool()
        pool.starmap_async(generate_files, it.product( \
            range(2, 5), \
            range(1, 5), \
            range(1, 4), \
            range(2, 7, 2), \
            range(1, 4), \
            range(1, 6, 2), \
            range(1, 3), \
            range(1, 4), \
            range(1, 3), \
            range(2, 7, 2), \
            range(10)
            ), error_callback=pool_err_call_back)
        pool.close()
        pool.join()
        
    elif option == 3:
        # 349920
        pool = mp.Pool()
        pool.starmap_async(generate_files, it.product( \
            range(3, 6), \
            range(3, 6), \
            range(1, 3), \
            range(4, 9, 2), \
            range(3, 5), \
            range(1, 3), \
            range(2, 3), \
            range(2, 4), \
            range(2, 3), \
            range(4, 9, 2), \
            range(100)
            ), error_callback=pool_err_call_back)
        pool.close()
        pool.join()

    time_end = time.time()
    with open(f"{DATASET_PATH}/time_syn_{today}.txt", "w") as f:
        f.write(f"Time for loop synthesis: {time_end - time_start} s\n")
        json_count = count_files(json_input_path)
        target_count = count_files(target_path)
        f.write(f"Files in {json_input_path}: {json_count}\n")
        f.write(f"Files in {target_path}: {target_count}\n")
        
if __name__ == "__main__":
    
    option = 1 # 2
    
    main(option)