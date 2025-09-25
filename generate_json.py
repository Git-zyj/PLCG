import itertools
import json
import random
from typing import List, Dict, Tuple, Set
from settings import *
import time

from collections import defaultdict
from dataclasses import dataclass
import numpy as np
from scipy import stats

class Json_generator:
    def __init__(self) -> None:
        self.arrays_total = Arrays_total()
        self.schedules = []
        self.params_info = dict()
        self.loop_bounds = defaultdict(list)
        self.arrays_info = defaultdict(list)

    def generate_schedule(self, arg_depth, arg_nstmts, arg_bounds_index, arg_prob_bounds_exist):
        '''
        arg_depth暂定为2,表示循环维度范围为(2)
        arg_nstmts暂定为3,表示语句数量为3
        arg_bounds_index暂定为3,表示调度序号范围为(0,1,2,3),影响语句的疏密程度
        arg_prob_bounds_exist暂定为4,表示循环边界被指定的几率为40%
        '''
        
        depth_max = arg_depth # 指定最大维度①
        nstmts = arg_nstmts # 指定语句数量②
        # print(f'[zyj-debug] nstmts:\n{nstmts}\n')
        schedules_init = -np.ones([nstmts, 2 * depth_max + 1])
        
        for i in range(nstmts):
            depth = random.randint(depth_min, depth_max) # 指定各个语句维度
            for j in range(depth + 1):
                index = random.randint(0, arg_bounds_index) # 指定具体序号③
                schedules_init[i][2 * j] = index
        
        schedule_tree_init = Schedule_tree()
        schedule_tree_init.add_paths(schedules_init)
        schedule_tree_init.standardize_node() # 并进行重排序
        schedule_tree_init.check_tree()
        # scop = '\n'.join(schedule_tree_init.extract_code())
        # print(f'[zyj-debug] initial scop:\n{scop}\n')
        schedules = schedule_tree_init.extract_paths() # 提取重排序和重命名后的调度
        self.schedules = [s[:-1] for s in schedules]
        # print(f'[zyj-debug] schedules:\n{self.schedules}\n')
        
        for child in schedule_tree_init.root.children: # loop_bounds固定
            self.generate_loop_bounds(arg_prob_bounds_exist, child)
            

    def generate_loop_bounds(self, prob_bounds_exist, node, ancestors = []):
        if node.children and ancestors:
            bounds_exist = random.random()
            if bounds_exist < prob_bounds_exist / 10:
                prob_bounds_exist *= 0.5 # 后续继续指定的几率*50%
                tmp_bound = random.choice(ancestors)
                self.loop_bounds[node.content] = [0, tmp_bound] # 目前只有右下三角值域（有待扩充）
                
        for child in node.children:
            self.generate_loop_bounds(prob_bounds_exist, child, ancestors + [node.content])
            

    def generate_additional_computation(self, arg_narrays_per_dim, arg_narrays_read, arg_bounds_coef):
        '''
        arg_narrays_per_dim暂定为2,表示每种数组维度下待选数组数量为2
        arg_narrays_read暂定为2,表示每条语句读数组数量范围为(0,1,2)
        arg_bounds_coef暂定为2,表示数组下标常量系数范围为(-2,-1,0,1,2)
        '''
        
        nstmts = len(self.schedules)
        
        arrays_write = defaultdict(ArrayData)
        arrays_read = defaultdict(list)
        arrays_name = defaultdict(str)
        idx = 0
        
        value_consts = range(-arg_bounds_coef, arg_bounds_coef + 1)
        prob_conts = [1/3/(2 * arg_bounds_coef)] * (2 * arg_bounds_coef + 1) # prob for value in const coef in indexes 
        prob_conts[arg_bounds_coef] = 2/3 # 0 for 66.7%
        
        for i in range(nstmts):
            depth_stmt = len(self.schedules[i]) // 2
            if depth_stmt > 1:
                loc_array_write = (random.choices([depth_stmt - 1, depth_stmt], [0.2, 0.8])[0], random.randint(0, arg_narrays_per_dim - 1)) # 第一个表示数组维度，允许出现相对于循环维度-1的情况，有待观察！！！第二个表示该维度下的数组id
            else:
                loc_array_write = (depth_stmt, random.randint(0, arg_narrays_per_dim - 1))
            
            if arrays_name[loc_array_write] == '':
                arrays_name[loc_array_write] = indexed_array_names[idx]
                idx += 1
            
            depth_array_write = loc_array_write[0] # 数组维度
            
            array_write_access_function = [] # 指定语句写数组访存⑧(有待扩充)
            index_dims = range(0, depth_stmt)
            prob_dims = [1/depth_stmt] * depth_stmt # prob for iterator in indexes
            
            for _ in range(depth_array_write):
                access_function = [0] * depth_stmt
                select_dim = random.choices(index_dims, prob_dims)[0]
                prob_dims[select_dim] /= 3 # 相同循环变量出现的机率每次/2
                access_function[select_dim] = 1 # 固定数组下标变量系数为0或1，方便计算（有待扩充）
                select_const = random.choices(value_consts, prob_conts)[0]
                access_function.append(select_const)
                array_write_access_function.append(access_function)  
            
            array_write = ArrayData(array_name = arrays_name[loc_array_write], array_access_function = array_write_access_function)
            arrays_write[i] = array_write
            
            narrays_read = random.randint(0, arg_narrays_read) # 指定语句读数组个数⑨
            # print(f'[zyj-debug] narrays_read:\n{narrays_read}\n')
            for _ in range(narrays_read):
                
                if depth_stmt > 1:
                    loc_array_read = (random.choices([depth_stmt - 1, depth_stmt], [0.2, 0.8])[0], random.randint(0, arg_narrays_per_dim - 1)) # 第一个表示数组维度，允许出现相对于循环维度-1的情况，有待观察！！！第二个表示该维度下的数组id
                else:
                    loc_array_read = (depth_stmt, random.randint(0, arg_narrays_per_dim - 1))
                
                if arrays_name[loc_array_read] == '':
                    arrays_name[loc_array_read] = indexed_array_names[idx]
                    idx += 1
                
                depth_array_read = loc_array_read[0] # 数组维度
                
                array_read_access_function = [] # 指定语句读数组访存⑾(有待扩充)
                index_dims = range(0, depth_stmt)
                prob_dims = [1/depth_stmt] * depth_stmt # prob for iterator in indexes
                
                for _ in range(depth_array_read):
                    access_function = [0] * depth_stmt
                    select_dim = random.choices(index_dims, prob_dims)[0]
                    prob_dims[select_dim] /= 3 # 每两次连续相同循环变量出现的机率为1/4
                    access_function[select_dim] = 1
                    select_const = random.choices(value_consts, prob_conts)[0]
                    access_function.append(select_const)
                    array_read_access_function.append(access_function)
                    
                array_read = ArrayData(array_name = arrays_name[loc_array_read], array_access_function = array_read_access_function)
                arrays_read[i].append(array_read)

        # for i in range(len(arrays_write)): # 指定语句写数组名⑦(必定存在)
        #     arrays_write[i] = ArrayData(array_name = arrays_name[arrays_write[i].array_name], array_access_function = arrays_write[i].array_access_function)
        
        # for arrays in arrays_read.values(): # 指定语句读数组名⑩
        #     for i in range(len(arrays)):
        #         arrays[i] = ArrayData(array_name = arrays_name[arrays[i].array_name], array_access_function = arrays[i].array_access_function)
                
        self.arrays_total = Arrays_total(arrays_write, arrays_read)
        # print(f'[zyj-debug] arrays_write for additional_computation:\n{arrays_write}\n')
        # print(f'[zyj-debug] arrays_read for additional_computation:\n{arrays_read}\n')

    def generate_dependency(self, arg_ndeps_read, arg_bounds_distance,arg_prob_dep_write_exist):
        '''
        arg_ndeps_read暂定为2,表示每条语句读依赖数量范围为(0,1,2)
        arg_bounds_distance暂定为2,表示依赖距离范围为(-2,-1,0,1,2)
        arg_prob_dep_write_exist暂定为4,表示每条语句写依赖存在概率为40%
        '''
        
        nstmts = len(self.schedules)
        schedules_var = [[s[i] for i in range(1, len(s), 2)] for s in self.schedules]

        for i in range(nstmts):
            
            dep_write_exist = random.random() # 指定语句写依赖是否存在，影响依赖密度，有待观察！！！
            
            if dep_write_exist < arg_prob_dep_write_exist / 10:
                choice_list_write = [j for j in range(nstmts) if i != j and (schedules_var[j] == schedules_var[i] or schedules_var[j] == schedules_var[i][:-1])]
                # print(f'[zyj-debug] choice_list_write for stmt{i}: {choice_list_write}\n')
                if choice_list_write != []:
                    dep_write_id = random.choice(choice_list_write) # 指定依赖语句⑿

                    self.arrays_total.arrays_write[i] = ArrayData(array_name = self.arrays_total.arrays_write[i].array_name, array_access_function = self.arrays_total.arrays_write[i].array_access_function, write_stmt_id = dep_write_id)
                
            ndeps_read = random.randint(0, arg_ndeps_read) # 指定读依赖数量⒁
            # print(f'[zyj-debug] ndeps_read for stmt{i}: {ndeps_read}\n')
            choice_list_read = [j for j in range(nstmts) if (schedules_var[j] == schedules_var[i] or schedules_var[j] == schedules_var[i][:-1])]
            # print(f'[zyj-debug] choice_list_read for stmt{i}: {choice_list_read}\n')
            
            for _ in range(ndeps_read):
                dep_read_id = random.choice(choice_list_read) # 指定依赖语句⒂
                
                self.arrays_total.arrays_read[i].append(ArrayData(write_stmt_id = dep_read_id))
        
        for stmt_id in range(nstmts):
            self.arrays_total.check_array_dependence(stmt_id) # 先试一下大部分依赖能不能留下？

        value_consts = range(-arg_bounds_distance, arg_bounds_distance + 1)
        prob_conts = [1/3/(2 * arg_bounds_distance)] * (2 * arg_bounds_distance + 1) # prob for value in const coef in indexes 
        prob_conts[arg_bounds_distance] = 2/3 # 0 for 66.7%
        
        for i in self.arrays_total.arrays_write.keys():
            dep_write_id = self.arrays_total.arrays_write[i].write_stmt_id
            if dep_write_id != None:
                array = self.arrays_total.arrays_write[dep_write_id]
                while not array.array_access_function:
                    array = self.arrays_total.arrays_write[array.write_stmt_id]
                depth_dep_write = len(array.array_access_function) # 获取写依赖中source数组的维度
                distance_dep_write = [random.choices(value_consts, prob_conts)[0] for _ in range(depth_dep_write)] # 指定写依赖距离⒀
                self.arrays_total.arrays_write[i] = ArrayData(array_name = self.arrays_total.arrays_write[i].array_name, array_access_function = self.arrays_total.arrays_write[i].array_access_function, distance = distance_dep_write, write_stmt_id = dep_write_id)

        for i in self.arrays_total.arrays_read.keys():
            for j in range(len(self.arrays_total.arrays_read[i])):
                dep_read_id = self.arrays_total.arrays_read[i][j].write_stmt_id
                if dep_read_id != None:
                    array = self.arrays_total.arrays_write[dep_read_id]
                    while not array.array_access_function:
                        array = self.arrays_total.arrays_write[array.write_stmt_id]
                    depth_dep_read = len(array.array_access_function) # 获取读依赖中source数组的维度
                    distance_dep_read = [random.choices(value_consts, prob_conts)[0] for _ in range(depth_dep_read)] # 指定读依赖距离⒃
                    self.arrays_total.arrays_read[i][j] = ArrayData(distance = distance_dep_read, write_stmt_id = dep_read_id)

        # print(f'[zyj-debug] arrays_write for additional_computation & dependency:\n{self.arrays_total.arrays_write}\n')
        # print(f'[zyj-debug] arrays_read for additional_computation & dependency:\n{self.arrays_total.arrays_read}\n')

    def generate_arrays(self):

        for i, param in enumerate(indexed_parameter_names):
            self.params_info[param] = i

        params_unused = set(indexed_parameter_names)
        num_params = len(self.params_info)
         
        for array in self.arrays_total.arrays_write.values():
            while not array.array_access_function:
                array = self.arrays_total.arrays_write[array.write_stmt_id]
            if self.arrays_info[array.array_name] == []:
                id = 0
                for _ in range(len(array.array_access_function)):
                    if id < num_params:
                        tmp_weights = [stats.norm.cdf(i + 0.5, 1, 0.5) - stats.norm.cdf(i - 0.5, 1, 0.5) for i in range(num_params - id)]
                        tmp_weights /= sum(tmp_weights)
                        id += random.choices(range(num_params - id), weights = tmp_weights)[0] # 采用泊松分布取数，确保数组size中前一维度小于等于后续维度，方便loop_bounds的指定
                    params_unused.discard(indexed_parameter_names[id])
                    self.arrays_info[array.array_name].append(indexed_parameter_names[id])
        
        for arrays in self.arrays_total.arrays_read.values():
            for array in arrays:
                while not array.array_access_function:
                    array = self.arrays_total.arrays_write[array.write_stmt_id]
                if self.arrays_info[array.array_name] == []:
                    id = 0
                    for _ in range(len(array.array_access_function)):
                        if id < num_params:
                            tmp_weights = [stats.norm.cdf(i + 0.5, 1, 0.5) - stats.norm.cdf(i - 0.5, 1, 0.5) for i in range(num_params - id)]
                            tmp_weights /= sum(tmp_weights)
                            id += random.choices(range(num_params - id), weights = tmp_weights)[0]
                        params_unused.discard(indexed_parameter_names[id])
                        self.arrays_info[array.array_name].append(indexed_parameter_names[id])

        for param in params_unused:
            del self.params_info[param] # 删除未使用的边界参数
        
        for param in self.params_info:
            loc = len(max(self.schedules, key=len)) // 2 - 1
            # print(self.params_info[param], params_range[loc])
            self.params_info[param] = random.choice(params_range[loc]) * int(params_multiplier[loc])
        # print(f'[zyj-debug] params_info:\n{self.params_info}\n')
        # print(f'[zyj-debug] arrays_info:\n{self.arrays_info}\n')

    def generate_json_info(self, arg_depth, arg_nstmts, arg_bounds_index, arg_prob_bounds_exist, arg_narrays_per_dim, arg_narrays_read, arg_bounds_coef, arg_ndeps_read, arg_bounds_distance, arg_prob_dep_write_exist):
        
        self.generate_schedule(arg_depth, arg_nstmts, arg_bounds_index, arg_prob_bounds_exist) # 首先生成调度
        self.generate_additional_computation(arg_narrays_per_dim, arg_narrays_read, arg_bounds_coef) # 生成未指定依赖计算(可能有依赖,考虑避免？)
        self.generate_dependency(arg_ndeps_read, arg_bounds_distance, arg_prob_dep_write_exist) # 生成指定依赖计算
        self.generate_arrays() # 最后生成参数和部分数组信息？
        
        json_info = dict()
        
        json_info['params'] = self.params_info
      
        json_info['loop_bounds'] = self.loop_bounds
      
        json_info['arrays'] = []  
        for array_name, array_indexes in self.arrays_info.items():
            array = array_name + '['
            for index in array_indexes:
                array += index + ','
            array = array[:-1] + ']'
            json_info['arrays'].append(array)
        
        
        nstmts = len(self.schedules)
        additional_computations = defaultdict(list)
        dependencies = defaultdict(list)
        
        for i, array in self.arrays_total.arrays_write.items():
            if array.array_access_function:
                additional_computation = dict()
                additional_computation['array_name'] = array.array_name
                additional_computation['array_type'] = 'write'
                additional_computation['array_access_function'] = array.array_access_function
                
                additional_computations[i].append(additional_computation)
            else:
                dependency = dict()
                dependency['category'] = 'write'
                dependency['distance'] = array.distance
                dependency['write_stmt_id'] = array.write_stmt_id
                
                dependencies[i].append(dependency)
                
        for i, arrays in self.arrays_total.arrays_read.items():
            for array in arrays:
                if array.array_access_function:
                    additional_computation = dict()
                    additional_computation['array_name'] = array.array_name
                    additional_computation['array_type'] = 'read'
                    additional_computation['array_access_function'] = array.array_access_function
                    
                    additional_computations[i].append(additional_computation)
                else:
                    dependency = dict()
                    dependency['category'] = 'read'
                    dependency['distance'] = array.distance
                    dependency['write_stmt_id'] = array.write_stmt_id
                    
                    dependencies[i].append(dependency)
        
        json_info['instructions'] = []
        for i in range(nstmts):
            instructions = dict()
            instructions['schedule'] = self.schedules[i]
            instructions['additional_computation'] = additional_computations[i]
            instructions['dependency'] = dependencies[i]
            json_info['instructions'].append(instructions)
        
        return json_info

    def generate_json_file(self, arg_depth = 2, arg_nstmts = 3, arg_bounds_index = 2, arg_prob_bounds_exist = 4, arg_narrays_per_dim = 2, arg_narrays_read = 2, arg_bounds_coef = 1, arg_ndeps_read = 2, arg_bounds_distance = 2, arg_prob_dep_write_exist = 4, id = 0):
        '''
        (*)arg_depth暂定为2,表示循环维度范围为(1,2)
        (*)arg_nstmts暂定为3,表示语句数量为3
        (*)arg_bounds_index暂定为2,表示调度序号范围为(0,1,2),影响语句的疏密程度
        arg_prob_bounds_exist暂定为4,表示循环边界被指定的几率为40%
        (*)arg_narrays_per_dim暂定为2,表示每种数组维度下待选数组数量为2,影响数组的疏密程度
        arg_narrays_read暂定为2,表示每条语句读数组数量范围为(0,1,2)
        arg_bounds_coef暂定为2,表示数组下标常量系数范围为(-2,-1,0,1,2)
        arg_ndeps_read暂定为2,表示每条语句读依赖数量范围为(0,1,2)
        arg_bounds_distance暂定为2,表示依赖距离范围为(-2,-1,0,1,2)
        (*)arg_dep_write_exist暂定为4,表示每条语句写依赖存在概率为40%
        '''
        
        self.__init__()

        file = self.generate_json_info(arg_depth, arg_nstmts, arg_bounds_index, arg_prob_bounds_exist, arg_narrays_per_dim, arg_narrays_read, arg_bounds_coef, arg_ndeps_read, arg_bounds_distance, arg_prob_dep_write_exist)
    
        filename = f'{arg_depth}{arg_nstmts}{arg_bounds_index}{arg_prob_bounds_exist}{arg_narrays_per_dim}{arg_narrays_read}{arg_bounds_coef}{arg_ndeps_read}{arg_bounds_distance}{arg_prob_dep_write_exist}_{id:02d}.json'
        file_destination = os.path.join(json_input_path, filename)
        with open(file_destination, 'w') as fp:
            json.dump(file, fp)
            
        # print(f'Random generation done in "{file_destination}".\n')
        return file_destination