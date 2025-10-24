import itertools
import json
import random
import os
import math
from typing import List, Dict, Tuple, Set, Any, Optional
import logging
import sys

from settings import json_input_path, ArrayData, Arrays_total, depth_min, Schedule_tree, indexed_array_names, indexed_parameter_names, params_multiplier, params_range, prob_array_depth, prob_dep_region, enable_if_branch, max_degree, enable_multi_terms, max_terms_per_func
import time

from collections import defaultdict
import numpy as np
from scipy import stats
from itertools import combinations_with_replacement, product


class Json_generator:
    def __init__(self, log_level: int = logging.WARNING) -> None:
        """初始化JSON生成器，设置默认数据结构"""
        self._reset_data()
        self._setup_logging(log_level)
    
    def _setup_logging(self, log_level: int) -> None:
        """独立的日志设置方法"""
        self.logger = logging.getLogger("Json_generator")
        self.logger.setLevel(log_level)
        
        # 确保有handler
        if not self.logger.handlers:
            handler = logging.StreamHandler(sys.stdout)
            formatter = logging.Formatter(f'{self.filename} - %(name)s - %(levelname)s - %(message)s')
            handler.setFormatter(formatter)
            self.logger.addHandler(handler)
    
    def update_logging(self) -> None:
        """更新文件名并立即更新logger格式"""
        
        # 如果logger已创建，更新其formatter
        if hasattr(self, 'logger') and self.logger.handlers:
            new_format = f'{os.path.basename(self.filename)} - %(name)s - %(levelname)s - %(message)s'
            new_formatter = logging.Formatter(new_format)
            
            for handler in self.logger.handlers:
                handler.setFormatter(new_formatter)
    
    def _reset_data(self) -> None:
        """重置数据，但不影响logger"""
        self.filename = ""
        self.arrays_total = Arrays_total()
        self.schedules = []
        self.branchs = []
        self.params_info = {}
        self.loop_bounds = defaultdict(list)
        self.arrays_info = defaultdict(list)

    def generate_schedule(self, arg_depth: int = 2, arg_nstmts: int = 3, arg_bounds_index: int = 3, arg_prob_bounds_exist: int = 4, arg_prob_branch: int = 1) -> None:
        '''
        生成调度树和分支信息
        
        Args:
            arg_depth: 循环维度范围，暂定为2，表示循环维度范围为(2)
            arg_nstmts: 语句数量，暂定为3，表示语句数量为3
            arg_bounds_index: 调度序号范围，暂定为3，表示调度序号范围为(0,1,2,3)，影响语句的疏密程度
            arg_prob_bounds_exist: 循环边界被指定为循环变量的基础几率，暂定为4，表示40%
            arg_prob_branch: if分支出现的基础几率，暂定为1，表示10%
        '''
        
        depth_max = arg_depth  # 指定最大维度①
        nstmts = arg_nstmts  # 指定语句数量②
        
        schedules_init = -np.ones([nstmts, 2 * depth_max + 1])
        
        for i in range(nstmts):
            depth = random.randint(depth_min, depth_max)  # 指定各个语句所处维度
            for j in range(depth + 1):
                index = random.randint(0, arg_bounds_index)  # 指定该维度下语句的具体序号③
                schedules_init[i][2 * j] = index  # 在调度的常量维进行记录
        
        # self.logger.debug(f'Initial schedules:\n{schedules_init}')
        schedule_tree_init = Schedule_tree()
        schedule_tree_init.add_paths(schedules_init)
        schedule_tree_init.standardize_node()  # 并进行排序号重编（不影响顺序）
        schedule_tree_init.check_tree()
        
        scop_init = '\n'.join(schedule_tree_init.extract_tree('code'))
        # self.logger.debug(f'Initial scop:\n{scop_init}')
        
        if not enable_if_branch:
            arg_prob_branch = 0
            
        # TODO:目前propagate_cond_attribute为必须项，之后要试图剥离？
        schedule_tree_init.propagate_cond_attribute(base_prob=arg_prob_branch/10)
        scop_branch = '\n'.join(schedule_tree_init.extract_tree('branch'))
        # self.logger.debug(f'Scop with branch:\n{scop_branch}')
        
        schedules, self.branchs = schedule_tree_init.extract_stmt_infos()  # 提取重排序和重命名后的调度以及分支信息
        self.schedules = [s[:-1] for s in schedules]
        # self.logger.debug(f'Schedules:\n{self.schedules}')
        # self.logger.debug(f'Branchs:\n{self.branchs}')
        
        for child in schedule_tree_init.root.children:  # loop_bounds固定
            self.generate_loop_bounds(arg_prob_bounds_exist, child)
            
    def generate_loop_bounds(self, prob_bounds_exist: float, node: object, ancestors: List = []) -> None:
        '''
        生成循环边界信息
        
        Args:
            prob_bounds_exist: 循环边界存在的概率
            node: 当前调度树节点
            ancestors: 祖先节点列表，用于边界引用
        '''
            
        if node.children and (isinstance(ancestors, list) and len(ancestors) > 0):
            bounds_exist = random.random()
            if bounds_exist < prob_bounds_exist / 10:
                prob_bounds_exist *= 0.5  # 后续继续指定的几率*50%
                tmp_bound = random.choice(ancestors)
                self.loop_bounds[node.content] = [0, tmp_bound]  # TODO: 目前只有右下三角值域（有待扩充）
                
        for child in node.children:
            self.generate_loop_bounds(prob_bounds_exist, child, ancestors + [node.content])
            
    def generate_additional_computation(self, arg_narrays_per_dim: int = 2, arg_avg_narrays_read_per_stmt: int = 1, arg_bounds_coef: int = 2) -> None:
        '''
        生成额外的计算信息，包括数组读写访问函数
        
        Args:
            arg_narrays_per_dim: 每种数组维度下待选数组数量，暂定为2
            arg_avg_narrays_read_per_stmt: 每条语句平均读数组数量，暂定为1，表示指定生成的读数组数量（additional_computation类的）应当为1*arg_nstmts
            arg_bounds_coef: 数组下标常量系数范围，暂定为2，表示范围为(-2,-1,0,1,2)
        '''
        
        nstmts = len(self.schedules)
        
        # 预计算access_function变量维和常量维系数取值和权重
        prob_vars = {}
        for i in range(1, arg_bounds_coef + 1): # TODO: consider allow negative coefficients for variables
            prob_vars[i] = 1  # prob for value as coef for variables in indexes.
        
        prob_consts = {}
        for i in range(-arg_bounds_coef, arg_bounds_coef + 1):
            if i == 0:
                prob_consts[i] = 2/3  # 0 for 66.7%
            else:
                prob_consts[i] = 1/3/(2 * arg_bounds_coef)  # prob for value in const coef in indexes
        
        # 预计算变量基项和权重
        prob_terms = self._prepare_base_terms(nstmts)
        
        
        
        arrays_write = defaultdict(ArrayData)
        
        for i in range(nstmts):
            depth_stmt = len(self.schedules[i]) // 2
            
            # 优化数组位置选择逻辑
            if depth_stmt > 1:
                depth_array_write = random.choices([depth_stmt - 1, depth_stmt, depth_stmt + 1], prob_array_depth)[0] # TODO: 数组维度目前只允许出现相同和相对于循环维度+-1的情况，其概率由prob_array_depth决定；write确保不重复，不再从range(arg_narrays_per_dim)中选择
            else:
                depth_array_write = random.choices([depth_stmt, depth_stmt + 1], prob_array_depth[1:])[0] #循环维数为1时，只允许相同和相对于循环维度+1的情况
            
            # self.logger.debug(f"depth_array_write for array_write in stmt {i}: {depth_array_write}")
            array_write_access_function = self.generate_access_function(
                (i, 0), depth_stmt, depth_array_write, prob_terms[i], prob_vars, prob_consts
            )  # 指定语句写数组访存⑧(有待扩充)
            
            array_write = ArrayData(
                array_id=(i, 0), # 0表示首个数组，即写数组
                array_name=indexed_array_names[i],  # 指定语句写数组名⑦(必定存在)
                array_access_function=array_write_access_function
            )
            arrays_write[i] = array_write # 先对每条语句的write_array都生成一个comp，作为后续依赖生成失败的回退
        
        
        
        arrays_read = defaultdict(list)
        arrays_name = defaultdict(str)
        array_name_id = nstmts  # 读数组命名从nstmts开始编号，即写数组之后
        
        # TODO: 是直接指定读依赖数量还是限制范围？
        narrays_read = np.random.multinomial(nstmts * arg_avg_narrays_read_per_stmt, [1/nstmts] * nstmts) # 指定语句读数组个数⑨
        
        for i in range(nstmts):
            depth_stmt = len(self.schedules[i]) // 2
              
            # narrays_read = random.randint(0, arg_avg_narrays_read_per_stmt)  # 指定语句读数组个数⑨
            # self.logger.debug(f"narrays_read in stmt {i}:{narrays_read[i]}")
            
            for j in range(narrays_read[i]):
                
                if array_name_id >= len(indexed_array_names):
                    raise IndexError(f'需要更多数组名称，当前有{len(indexed_array_names)}个，实际需要{array_name_id}个')
                
                if depth_stmt > 1:
                    depth_array_read = random.choices([depth_stmt - 1, depth_stmt, depth_stmt + 1], prob_array_depth)[0] # 同上depth_array_write
                else:
                    depth_array_read = random.choices([depth_stmt, depth_stmt + 1], prob_array_depth[1:])[0]
                
                array_read_id = random.randint(0, arg_narrays_per_dim - 1)
                
                if not arrays_name[(depth_array_read, array_read_id)]:  # 尚未分配
                    arrays_name[(depth_array_read, array_read_id)] = indexed_array_names[array_name_id] # 指定语句读数组名⑩
                    array_name_id += 1
                
                # self.logger.debug(f"Start array_access_function generation for the {j}th array_read in stmt {i}")
                array_read_access_function = self.generate_access_function(
                    (i, j + 1), depth_stmt, depth_array_read, prob_terms[i], prob_vars, prob_consts
                )  # 指定语句读数组访存⑾(有待扩充)
                    
                array_read = ArrayData(
                    array_id=(i, j + 1), # 先分配additional_computation标识，后续再分配dependency标识，+1避免和write冲突
                    array_name=arrays_name[(depth_array_read, array_read_id)], 
                    array_access_function=array_read_access_function
                )
                arrays_read[i].append(array_read)

        self.arrays_total = Arrays_total(arrays_write, arrays_read)

    def generate_terms(self, num_variables: int, max_degree: int) -> List[Tuple]:
        """
        生成所有可能的项（常数项、线性项、二次项等）
        
        Args:
            num_variables: 变量数量
            max_degree: 最大次数
            
        Returns:
            所有可能的项列表，按次数排序
        """
        terms = [()]  # 常数项
        
        for degree in range(1, max_degree + 1):
            # 生成所有可能的d次项（允许重复变量）
            terms.extend(list(combinations_with_replacement(range(num_variables), degree)))
        
        return terms

    def _prepare_base_terms(self, nstmts: int) -> List[Dict[Tuple[int], float]]:
        """预计算所有语句的基项和权重"""
        prob_terms_all = []
        
        for i in range(nstmts):
            depth_stmt = len(self.schedules[i]) // 2
            
            # 基项生成
            terms = self.generate_terms(depth_stmt, max_degree)
                
            # 创建项到权重的映射字典
            prob_terms = {}
            for term in terms:
                prob_weight = 1
                if len(term) == 1:  # 一次项
                    prob_weight *= 1/math.comb(depth_stmt+len(term)-1, len(term))
                elif len(term) == 2:  # 二次项
                    prob_weight *= 1/4/math.comb(depth_stmt+len(term)-1, len(term))
                
                prob_terms[term] = prob_weight
            
            prob_terms_all.append(prob_terms)
        
        return prob_terms_all

    def generate_access_function(self, array_id: Tuple[int, int], depth_stmt: int, depth_array: int, prob_terms: Dict[Tuple, float], prob_vars: Dict[int, float], prob_consts: Dict[int, float]) -> List[List[int]]:
        '''
        生成数组访问函数
        
        Args:
            array_id: 数组id
            depth_stmt: 语句深度
            depth_array: 数组维度
            prob_terms: 基项列表（常数项、线性项、二次项）: 基项权重列表
            prob_vars: 变量系数取值对应概率分布
            prob_consts: 常量系数取值对应概率分布
            
        Returns:
            List[List[int]]: 数组访问函数，每个子列表表示一个维度的访问模式，例如[[2, 0, 0], [1, 1, 1]]对应二维数组访问函数[2][1 + 1*i + 1*j]
        '''
        
        # self.logger.debug(f"prob_vars: {prob_vars}")
        # self.logger.debug(f"prob_consts: {prob_consts}")
        # self.logger.debug(f"prob_terms: {prob_terms}\n")
        
        array_access_function = []  # 指定语句数组访存
        
        # 记录每个循环维度中被选取的变量
        selected_variables = set()
        
        # TODO: 常数项（即prob_terms[()]）实际上无意义，此处作为空选占位
        prob_terms_var = {k: v for k, v in prob_terms.items()}
        prob_terms_var[()] *= 1/32 # TODO: 空选概率设置暂定为1/32
        
        # TODO: 调整多余变量权重(暂定从最外层开始，即previous_var_index之前的变量视作多余变量)
        previous_var_index = depth_stmt - depth_array
        for term in prob_terms_var.keys():
            if any(var_idx < previous_var_index for var_idx in term):  # 检查是否包含多余变量
                # 包含多余变量：权重除以4
                prob_terms_var[term] *= 1/4
        
        prob_terms_var_copy = prob_terms_var.copy() # 备份
        
        for i in range(depth_array):
            access_function = [0] * len(prob_terms)
            selected_indices = [()]  # 必定包含常数项，关键在于取值
            
            # 确认当前维度对应循环变量：
            corresponding_var_index = i + previous_var_index
            
            # 根据对应变量调整权重
            prob_terms_var = prob_terms_var_copy.copy() # 初始化，避免前一维度选择影响当前维度
            for term in prob_terms_var.keys():
                if corresponding_var_index in term:  # 检查当前基项是否包含对应循环变量
                    # 包含对应变量：权重乘以2
                    prob_terms_var[term] *= 2
            
            # self.logger.debug(f"Adjusted prob_terms_var for dimension {i}: {prob_terms_var}")
            
            j = 0
            continue_prob = 1.0  # 初始继续选择基项概率为1*(2/3)^j
            
            # TODO: 目前一定会至少选择一个基项，即A[i][0]不会在comp中出现
            
            while True:
                # 决定是否继续选择基项（不满足概率或者不允许多基项或超过最大基项数）
                if not enable_multi_terms and j >= 1:
                    # self.logger.debug(f"Stop the {j}th term selection because multi_terms is disabled")
                    break  # 不允许多基项
                
                if j >= max_terms_per_func - 1:
                    # self.logger.debug(f"Stop the {j}th term selection because exceed max_terms_per_func")
                    break  # 超过最大基项数
                
                if random.random() > continue_prob:
                    # self.logger.debug(f"Stop the {j}th term selection because not meet selection prob")
                    break  # 终止选择

                idx = random.choices(list(prob_terms_var.keys()), weights=prob_terms_var.values())[0]
                
                selected_prob = prob_terms_var[idx]/8 # TODO: 目前对于已选项，采用/8以减小继续出现概率，但不为0（即目前会有重复变量出现在数组不同维度中）
                prob_terms_var_copy[idx] = prob_terms_var[idx] = selected_prob  

                if idx != (): # 空选即类似A[0]的结果
                    selected_indices.append(idx)
                else:
                    self.logger.warning(f"No terms are selected in the {j}th term selection for the {i}th dim in array {array_id}")

                # 衰减继续概率：(2/3)^n
                continue_prob *= 2/3
                
                j += 1

            # 为选中的基项分配系数
            for i, term in enumerate(selected_indices):
                if term == ():  # consts
                    coef = random.choices(list(prob_consts.keys()), prob_consts.values())[0]
                else:  # vars
                    coef = random.choices(list(prob_vars.keys()), prob_vars.values())[0]
                access_function[list(prob_terms.keys()).index(term)] = coef

            # self.logger.debug(f"The {i}th dim in access_function for array {array_id}: {access_function}")
            
            selected_variables.update(selected_indices)
            array_access_function.append(access_function)
        
        # self.logger.debug(f"Generated array_access_function for array {array_id}: {array_access_function}")
        
        return array_access_function

    def generate_dependency(self, arg_avg_ndeps_read_per_stmt: int = 2, arg_bounds_distance: int = 2, arg_prob_dep_write_exist: int = 4) -> None:
        '''
        生成依赖关系信息
        
        Args:
            arg_avg_ndeps_read_per_stmt: 每条语句平均读依赖数量，暂定为2，表示指定生成的读依赖数量（validate之前）应当为2*arg_nstmts
            arg_bounds_distance: 依赖距离范围，暂定为2，表示范围为(-2,-1,0,1,2)
            arg_prob_dep_write_exist: 每条语句写依赖存在概率，暂定为4，表示40%
        '''
        
        
        nstmts = len(self.schedules)
        
        # 计算调度变量和前缀
        schedules_var = []
        schedules_var_prefix = []
        for s in self.schedules:
            # 计算完整调度变量
            var_full = [s[i] for i in range(1, len(s), 2)]
            schedules_var.append(var_full)
            # 计算前缀（避免空范围）
            if len(var_full) > 1:
                schedules_var_prefix.append(var_full[:-1])
            else:
                schedules_var_prefix.append([])

        # self.logger.debug(f'schedules: {self.schedules}')
        # self.logger.debug(f'schedules_var: {schedules_var}')
        # self.logger.debug(f'schedules_var_prefix: {schedules_var_prefix}')

        # 预计算依赖距离参数
        prob_consts = {}
        for i in range(-arg_bounds_distance, arg_bounds_distance + 1):
            if i == 0:
                prob_consts[i] = 2/3  # 0 for 66.7%
            else:
                prob_consts[i] = 1/3/(2 * arg_bounds_distance)  # prob for value in const coef in indexes
        
        for i in range(nstmts):
            # 确认读、写依赖数量
            dep_write_exist = random.random() > arg_prob_dep_write_exist / 10 # 指定语句写依赖是否存在，影响依赖密度
                
            if dep_write_exist:
                
                candidates_var_write = [
                    j for j in range(nstmts) 
                    if i != j and 
                    (
                        schedules_var[j] == schedules_var[i] or 
                        schedules_var[j] == schedules_var_prefix[i]
                    )
                ] # TODO: 寻找自身i之外j为共享变量维或者共享变量维的除去最后一维的部分（配合之前的loc_array_write中允许出现相同和相对于循环维度+-1的情况，但目前仅限于j=i-1）（限制依赖必须在同一loop之间）
                
                candidates_dim_write = [
                    j for j in range(nstmts) 
                    if i != j and
                    not j in candidates_var_write and 
                    (len(schedules_var[j]) - len(schedules_var[i]) == -1 or
                    len(schedules_var[j]) - len(schedules_var[i]) == 0)
                ] # 寻找自身i之外j为调度变量维维数近似的语句（目前仅限于j=i-1）（将依赖放宽至全局）
                
                if not candidates_var_write and not candidates_dim_write:
                    self.logger.warning(f'no available stmts in candidates_write for stmt {i} to construct WAW dep')
                else:
                    prob_weights_write = [0] * nstmts  # 概率初始化
                    
                    num_var, num_dim = len(candidates_var_write), len(candidates_dim_write)
                    
                    # 权重分配
                    for j in range(nstmts):
                        if j in candidates_var_write:
                            prob_weights_write[j] = prob_dep_region[0] / num_var
                        elif j in candidates_dim_write:
                            prob_weights_write[j] = prob_dep_region[1] / num_dim
                        else:
                            pass # 依然为0
                    
                    # self.logger.debug(f"candidates_write for stmt{i}: {candidates_var_write + candidates_dim_write}")
                    # self.logger.debug(f"prob_weights_write for stmt{i}: {prob_weights_write}")
                    
                    dep_write_id = random.choices(range(nstmts), weights=prob_weights_write, k=1)[0]  # 指定写依赖的source语句⑿
                    
                    self.arrays_total.arrays_write[i] = ArrayData(array_id=(i, 0), array_name=self.arrays_total.arrays_write[i].array_name, array_access_function=self.arrays_total.arrays_write[i].array_access_function, write_stmt_id=dep_write_id) # 保留先前生成的comp信息作为依赖生成失败的回退
            
            else:
                # self.logger.debug(f'stmt {i} has no WAW dep due to arg_prob_dep_write_exist')
                pass
            
            
                    
        # TODO: 是直接指定读依赖数量还是限制范围？(和narrays_read类似)
        ndeps_read = np.random.multinomial(nstmts * arg_avg_ndeps_read_per_stmt, [1/nstmts] * nstmts) # 指定读依赖数量⒁
        
        
        for i in range(nstmts):
            
            # ndeps_read = random.randint(0, arg_avg_ndeps_read_per_stmt)  # 指定读依赖数量⒁
            # self.logger.debug(f"ndeps_read in stmt {i}:{ndeps_read[i]}")
            
            if ndeps_read[i]: # 确认读依赖数量非零
                candidates_var_read = [
                    j for j in range(nstmts) 
                    if (
                        schedules_var[j] == schedules_var[i] or 
                        schedules_var[j] == schedules_var_prefix[i]
                    )
                ] # 和candidates_write略有不同，允许同语句的读写数组之间的依赖
                
                candidates_dim_read = [
                    j for j in range(nstmts) 
                    if not j in candidates_var_read and
                    (len(schedules_var[j]) - len(schedules_var[i]) == -1 or
                    len(schedules_var[j]) - len(schedules_var[i]) == 0)
                ] # 同上
                
                # 无需判断是否为空列表，因为至少有语句自身
                
                prob_weights_read = [0] * nstmts  # 概率初始化
                
                num_var, num_dim = len(candidates_var_read), len(candidates_dim_read)
                
                # 权重分配
                for j in range(nstmts):
                    if j in candidates_var_read:
                        prob_weights_read[j] = prob_dep_region[0] / num_var
                    elif j in candidates_dim_read:
                        prob_weights_read[j] = prob_dep_region[1] / num_dim
                    else:
                        pass # 仍然为0
                
                # self.logger.debug(f"candidates_read for stmt{i}: {candidates_var_read + candidates_dim_read}")
                # self.logger.debug(f"prob_weights_read for stmt{i}: {prob_weights_read}")
                
                # self.logger.debug(f'ndeps_read for stmt{i}: {ndeps_read[i]}')
                
                narrays_read_comp = len(self.arrays_total.arrays_read[i])
                
                for j in range(ndeps_read[i]):
                    
                    dep_read_id = random.choices(range(nstmts), weights=prob_weights_read, k=1)[0]  # 指定读依赖的write语句⒂
                    
                    self.arrays_total.arrays_read[i].append(ArrayData(array_id=(i, narrays_read_comp + j + 1), write_stmt_id=dep_read_id)) # 依赖读数组标识在computation读数组标识基础上继续编号
            else:
                self.logger.debug(f'stmt {i} has no RAW or WAR dep due to ndeps_read=0')
        
        # self.logger.debug(f'arrays_write before validation: {self.arrays_total.arrays_write}')
        # self.logger.debug(f'arrays_read before validation: {self.arrays_total.arrays_read}')
        
        # 检查依赖合理性
        self.arrays_total.validate_dependence(self.filename)
        
        # self.logger.debug(f'arrays after validation: {self.arrays_total}')
        
        # 处理依赖距离
        self._process_dependency_distances(prob_consts)
        
        # self.logger.debug(f'arrays after distance assign: {self.arrays_total}')

    def _process_dependency_distances(self, prob_consts: Dict[int, float]) -> None:
        """处理依赖距离计算"""
        # 处理写依赖距离
        # 用于记录每个源数组已分配的依赖距离
        parent_array_distances = defaultdict(list)  # key: parent_array(source array for WAW, write array for WAR and RAW)标识, value: 已分配的distance列表
        for i, array_write in list(self.arrays_total.arrays_write.items()):
            if array_write.write_stmt_id is not None:
                parent_array = self._get_parent_array_for_mapping(array_write)
                distance_dep_write = self._calculate_dependency_distance(
                    parent_array, array_write, parent_array_distances[parent_array.array_id], prob_consts
                )
                self.arrays_total.arrays_write[i] = ArrayData(
                    array_id=array_write.array_id, 
                    # array_name=parent_array.array_name, 
                    # array_access_function=parent_array.array_access_function, 
                    distance=distance_dep_write, 
                    write_stmt_id=array_write.write_stmt_id
                )
                
                # 更新已分配距离记录，array_write的dep要完全避免重复
                parent_array_distances[parent_array.array_id].append(tuple(distance_dep_write))
                
                # self.logger.debug(f"array_write in stmt {i} with dep distance: {self.arrays_total.arrays_write[i]}")
        
        # 处理读依赖距离
        parent_array_distances = defaultdict(list)  # 重置，允许读依赖和写依赖距离相同，但同语句读依赖之间依然不能重复
        for i, arrays_read in list(self.arrays_total.arrays_read.items()):
            for j, array_read in enumerate(arrays_read):
                if array_read.write_stmt_id is not None:
                    parent_array = self._get_parent_array_for_mapping(array_read)
                    distance_dep_read = self._calculate_dependency_distance(
                        parent_array, array_read, parent_array_distances[(parent_array.array_id, i)], prob_consts
                    )
                    self.arrays_total.arrays_read[i][j] = ArrayData(
                        array_id=array_read.array_id,
                        # array_name=parent_array.array_name, 
                        # array_access_function=parent_array.array_access_function, 
                        distance=distance_dep_read, 
                        write_stmt_id=array_read.write_stmt_id
                    )
                    
                    # 更新已分配距离记录
                    parent_array_distances[(parent_array.array_id, i)].append(tuple(distance_dep_read))
                    
                    # self.logger.debug(f"The {j}th array_read in stmt {i} with dep distance: {self.arrays_total.arrays_read[i][j]}")

    def _calculate_dependency_distance(self, parent_array: ArrayData, child_array: ArrayData, used_distances: List[Tuple[int]], prob_consts: Dict[int, float]) -> List[int]:
        """计算依赖距离"""
        
        depth, dim = len(parent_array.array_access_function), len(parent_array.array_access_function[0]) # 获取依赖中source数组的维度
        
        terms = self.generate_terms(dim, max_degree)
        
        # 步骤1: 确定需要随机化的变量维度位置
        randomize_positions_terms = set()
        for j in range(1, dim):  # 从第1列开始，跳过首列常数项，另外dim=len(terms)
            if any(parent_array.array_access_function[k][j] != 0 for k in range(depth)):
                randomize_positions_terms.update(terms[j])
        
        randomize_positions_vars = list(randomize_positions_terms)
        
        # 如果没有需要随机化的维度，返回全0距离
        if not randomize_positions_vars:
            self.logger.warning('No variable dimensions to randomize, returning zero distance')
            return [0] * (dim - 1) # 同样不考虑常数维度
        
        # 步骤2: 生成所有可能的distance组合
        all_possible_distances = self._generate_all_distance_combinations(dim - 1, randomize_positions_vars, list(prob_consts.keys())) # 注意维度要-1，去掉常数维度
        
        if parent_array.array_id[0] == child_array.array_id[0]:
            # 如果是同一语句的依赖，调整权重，避免0距离依赖(实际上这就不是依赖了)
            # self.logger.debug(f'Parent and child arrays are in the same stmt for array {child_array.array_id}')
            all_possible_distances[(0,) * (dim - 1)] = 0
        
        # 步骤3: 根据used_distances调整权重
        all_possible_distances_weighted = self._calculate_weights_for_combinations(all_possible_distances, prob_consts, used_distances)
        
        # self.logger.debug(f'Weights after adjust for array {child_array.array_id}: {all_possible_distances_weighted}')
        
        # 步骤4: 根据调整后的权重进行随机选择
        if sum(all_possible_distances_weighted.values()) > 0:
            dep_distance = random.choices(list(all_possible_distances_weighted.keys()), weights=list(all_possible_distances_weighted.values()))[0]
        else:
            # 如果没有可用组合，回退到原始方法
            self.logger.warning(f"No available unique distance combinations for array {child_array.array_id}, using fallback:\n{all_possible_distances_weighted}\n")
            dep_distance = random.choices(list(all_possible_distances.keys()), weights=list(all_possible_distances.values()))[0]
            
        return list(dep_distance)

    def _generate_all_distance_combinations(self, dim_var: int, randomize_positions_vars: List[int], value_consts: List[int]) -> Dict[Tuple[int], float]:
        """生成所有可能的距离组合"""
        
        # 为每个需要随机化的位置生成可能的值
        position_values = [value_consts for _ in randomize_positions_vars]
        
        all_combinations = defaultdict(float)
        for value_combination in product(*position_values):
            distance = [0] * dim_var
            for pos_idx, position in enumerate(randomize_positions_vars):
                distance[position] = value_combination[pos_idx]
            all_combinations[tuple(distance)] = 1.0 # 权重初始化
        
        return all_combinations

    def _calculate_weights_for_combinations(self, all_combinations: Dict[Tuple[int], float], prob_consts: Dict[int, float], used_distances: List[Tuple[int]]) -> Dict[Tuple[int], float]:
        """计算所有可能组合的权重，已使用的组合权重设为0"""
        
        all_combinations = all_combinations.copy()
        
        for combination in all_combinations.keys():
            # 如果该组合已被使用，权重设为0
            if combination in used_distances:
                all_combinations[combination] = 0
                continue
            
            if all_combinations[combination] == 0:
                continue
            
            # 计算该组合的原始概率权重（各维度值的概率乘积）
            prob_weight = 1.0
            for value in combination:
                prob_weight *= prob_consts[value]
            all_combinations[combination] = prob_weight
        
        return all_combinations

    def _fallback_distance_calculation(self, dim_var: int, randomize_positions_vars: List[int], prob_consts:Dict[int, float]) -> List[int]:
        """回退方案：当没有可用唯一组合时使用"""
        distance = [0] * dim_var
        
        for position in randomize_positions_vars:
            # 简单随机选择，但记录警告
            distance[position] = random.choices(list(prob_consts.keys()), weights=list(prob_consts.values()))[0]
        
        return distance

    def generate_arrays(self) -> None:
        '''
        生成数组信息和参数信息，包括数组维度映射和参数值设置
        '''
        # 初始化参数信息
        for i, param in enumerate(indexed_parameter_names):
            self.params_info[param] = i

        params_unused = set(indexed_parameter_names)
        num_params = len(self.params_info)
         
        # 处理写数组
        for array in self.arrays_total.arrays_write.values():
            parent_array = self._get_parent_array_for_mapping(array)
            if self.arrays_info[parent_array.array_name] == []:
                params_unused = self._assign_array_dimensions(parent_array, num_params, params_unused)
        
        # 处理读数组
        for arrays in self.arrays_total.arrays_read.values():
            for array in arrays:
                parent_array = self._get_parent_array_for_mapping(array)
                if self.arrays_info[parent_array.array_name] == []:
                    params_unused = self._assign_array_dimensions(parent_array, num_params, params_unused)

        # 清理未使用的参数
        for param in params_unused:
            del self.params_info[param]
        
        # 设置参数值
        self._set_parameter_values()
        
        # self.logger.debug(f'params_info:\n{self.params_info}\n')
        # self.logger.debug(f'arrays_info:\n{self.arrays_info}\n')

    def _get_parent_array_for_mapping(self, array: ArrayData) -> ArrayData:
        """获取用于维度映射的源数组"""
        if array.write_stmt_id is not None: # write_stmt_id优先
            parent_array = self.arrays_total.arrays_write[array.write_stmt_id]
            while parent_array.array_access_function is None:
                parent_array = self.arrays_total.arrays_write[parent_array.write_stmt_id]
            return parent_array
        elif array.array_access_function:
            return array
        else:
            raise ValueError("Array must have either write_stmt_id or array_access_function defined.")

    def _assign_array_dimensions(self, array: ArrayData, num_params: int, params_unused: Set[str]) -> Set[str]:
        """为数组分配维度参数"""        
        id = 0
        for _ in range(len(array.array_access_function)):
            if id < num_params:
                tmp_weights = [stats.norm.cdf(i + 0.5, 1, 0.5) - stats.norm.cdf(i - 0.5, 1, 0.5) for i in range(num_params - id)]
                tmp_weights /= sum(tmp_weights)
                id += random.choices(range(num_params - id), weights=tmp_weights)[0]  # 采用泊松分布取数，确保数组size中前一维度小于等于后续维度，方便loop_bounds的指定
            param_name = indexed_parameter_names[id]
            params_unused.discard(param_name)
            self.arrays_info[array.array_name].append(param_name)
        return params_unused

    def _set_parameter_values(self) -> None:
        """设置参数值"""
        loc = len(max(self.schedules, key=len)) // 2 - 1
        for param in self.params_info:
            self.params_info[param] = random.choice(params_range[loc]) * int(params_multiplier[loc])

    def generate_json_info(self, arg_depth: int, arg_nstmts: int, arg_bounds_index: int, arg_prob_bounds_exist: int, arg_narrays_per_dim: int, arg_avg_narrays_read_per_stmt: int, arg_bounds_coef: int, arg_avg_ndeps_read_per_stmt: int, arg_bounds_distance: int, arg_prob_dep_write_exist: int, arg_prob_branch: int) -> Dict[str, Any]:
        '''
        生成完整的JSON信息字典
        
        Args:
            arg_depth: 循环维度范围
            arg_nstmts: 语句数量
            arg_bounds_index: 调度序号范围
            arg_prob_bounds_exist: 循环边界存在概率
            arg_narrays_per_dim: 每种维度数组数量
            arg_avg_narrays_read_per_stmt: 平均读数组数量
            arg_bounds_coef: 数组下标系数范围
            arg_avg_ndeps_read_per_stmt: 平均读依赖数量
            arg_bounds_distance: 依赖距离范围
            arg_prob_dep_write_exist: 写依赖存在概率
            arg_prob_branch: 分支概率
            
        Returns:
            Dict: 包含完整调度信息的字典
        '''
        
        self.generate_schedule(arg_depth, arg_nstmts, arg_bounds_index, arg_prob_bounds_exist, arg_prob_branch)  # 首先生成调度
        self.generate_additional_computation(arg_narrays_per_dim, arg_avg_narrays_read_per_stmt, arg_bounds_coef)  # 生成未指定依赖计算
        self.generate_dependency(arg_avg_ndeps_read_per_stmt, arg_bounds_distance, arg_prob_dep_write_exist)  # 生成指定依赖计算
        self.generate_arrays()  # 最后生成参数和部分数组信息？
        
        return self._build_json_output()

    def _build_json_output(self) -> Dict[str, Any]:
        """构建JSON输出字典"""
        json_info = {}
        
        json_info['params'] = self.params_info
        json_info['max_degree'] = max_degree
        json_info['loop_bounds'] = self.loop_bounds
        json_info['arrays'] = self._build_arrays_list()
        
        nstmts = len(self.schedules)
        additional_computations, dependencies = self._categorize_computations_and_dependencies()
        
        json_info['instructions'] = []
        for i in range(nstmts):
            instructions = {
                'schedule': self.schedules[i],
                'additional_computation': additional_computations[i],
                'dependency': dependencies[i]
            }
            
            if enable_if_branch:
                instructions['branch'] = self.branchs[i],  # b1, b2, b3分别对应if-true分支部分，if-false分支部分和outside-if部分，且为d+1调度矩阵格式
            
            json_info['instructions'].append(instructions)
        
        return json_info

    def _build_arrays_list(self) -> List[str]:
        """构建数组列表"""
        arrays_list = []
        for array_name, array_indexes in self.arrays_info.items():
            array_str = f"{array_name}[{','.join(array_indexes)}]"
            arrays_list.append(array_str)
        return arrays_list

    def _categorize_computations_and_dependencies(self) -> Tuple[Dict[int, List], Dict[int, List]]:
        """分类计算和依赖信息"""
        additional_computations = defaultdict(list)
        dependencies = defaultdict(list)
        
        # 处理写数组
        for i, array in self.arrays_total.arrays_write.items():
            if array.array_access_function:
                additional_computation = {
                    'array_id': array.array_id, 
                    'array_name': array.array_name,
                    'array_type': 'write',
                    'array_access_function': array.array_access_function
                }
                additional_computations[i].append(additional_computation)
            else:
                dependency = {
                    'array_id': array.array_id, 
                    'category': 'write',
                    'distance': array.distance,
                    'write_stmt_id': array.write_stmt_id
                }
                dependencies[i].append(dependency)
                
        # 处理读数组
        for i, arrays in self.arrays_total.arrays_read.items():
            for array in arrays:
                if array.array_access_function:
                    additional_computation = {
                        'array_id': array.array_id, 
                        'array_name': array.array_name,
                        'array_type': 'read',
                        'array_access_function': array.array_access_function
                    }
                    additional_computations[i].append(additional_computation)
                else:
                    dependency = {
                        'array_id': array.array_id, 
                        'category': 'read',
                        'distance': array.distance,
                        'write_stmt_id': array.write_stmt_id
                    }
                    dependencies[i].append(dependency)
        
        return additional_computations, dependencies

    def generate_json_file(self, arg_depth: int = 2, arg_nstmts: int = 3, arg_bounds_index: int = 2, arg_prob_bounds_exist: int = 4, arg_narrays_per_dim: int = 2, arg_avg_narrays_read_per_stmt: int = 1, arg_bounds_coef: int = 1, arg_avg_ndeps_read_per_stmt: int = 2, arg_bounds_distance: int = 1, arg_prob_dep_write_exist: int = 4, arg_prob_branch: int = 1, id: int = 0) -> str:
        '''
        生成JSON文件并保存到磁盘
        
        Args:
            arg_depth: 循环维度范围，暂定为2，表示循环维度范围为(1,2)
            arg_nstmts: 语句数量，暂定为3，表示语句数量为3
            arg_bounds_index: 调度序号范围，暂定为2，表示调度序号范围为(0,1,2)，影响语句的疏密程度
            arg_prob_bounds_exist: 循环边界被指定的几率，暂定为4，表示40%
            arg_narrays_per_dim: 每种数组维度下待选数组数量，暂定为2，影响数组的疏密程度
            arg_avg_narrays_read_per_stmt: 每条语句平均读数组数量，暂定为1，表示指定生成的读数组数量（additional_computation类的）应当为1*arg_nstmts
            arg_bounds_coef: 数组下标常量系数范围，暂定为1，表示范围为(-1,0,1)
            arg_avg_ndeps_read_per_stmt: 每条语句平均读依赖数量，暂定为2，表示指定生成的读依赖数量（validate之前）应当为2*arg_nstmts
            arg_bounds_distance: 依赖距离范围，暂定为1，表示范围为(-1,0,1)
            arg_prob_dep_write_exist: 每条语句写依赖存在概率，暂定为4，表示40%
            arg_prob_branch: if分支出现的基础几率，暂定为1，表示10%
            id: 文件标识符，用于生成唯一文件名
            
        Returns:
            str: 生成的JSON文件路径
        '''
        
        self._reset_data()

        self.filename = f'{arg_depth}{arg_nstmts}{arg_bounds_index}{arg_prob_bounds_exist}{arg_narrays_per_dim}{arg_avg_narrays_read_per_stmt}{arg_bounds_coef}{arg_avg_ndeps_read_per_stmt}{arg_bounds_distance}{arg_prob_dep_write_exist}{arg_prob_branch}_{id:02d}.json'
        self.update_logging()
        # self.logger.debug("Start json generation for file {self.filename}\n")

        file_content = self.generate_json_info(
            arg_depth, arg_nstmts, arg_bounds_index, arg_prob_bounds_exist,
            arg_narrays_per_dim, arg_avg_narrays_read_per_stmt, arg_bounds_coef, arg_avg_ndeps_read_per_stmt,
            arg_bounds_distance, arg_prob_dep_write_exist, arg_prob_branch
        )
    
        file_destination = os.path.join(json_input_path, self.filename)
        with open(file_destination, 'w') as fp:
            json.dump(file_content, fp, indent=4)
            
        # self.logger.debug(f'Random json generation done in "{file_destination}".\n')
        return file_destination