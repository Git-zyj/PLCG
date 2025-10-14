import itertools
import json
import random
import os
import math
from typing import List, Dict, Tuple, Set, Any, Optional
import logging

from settings import json_input_path, ArrayData, Arrays_total, depth_min, Schedule_tree, indexed_array_names, indexed_parameter_names, params_multiplier, params_range, prob_array_depth, max_degree, enable_multi_terms, max_terms_per_func
import time

from collections import defaultdict
import numpy as np
from scipy import stats
from itertools import combinations_with_replacement


class Json_generator:
    def __init__(self, log_level: int = logging.WARNING) -> None:
        """初始化JSON生成器，设置默认数据结构"""
        self._setup_logging(log_level)
        self._reset_data()
    
    def _setup_logging(self, log_level: int) -> None:
        """独立的日志设置方法"""
        self.logger = logging.getLogger("Json_generator")
        self.logger.setLevel(log_level)
        
        # 确保有handler
        if not self.logger.handlers:
            handler = logging.StreamHandler()
            formatter = logging.Formatter('%(name)s - %(levelname)s - %(message)s')
            handler.setFormatter(formatter)
            self.logger.addHandler(handler)
    
    def _reset_data(self) -> None:
        """重置数据，但不影响logger"""
        self.filename = None
        self.arrays_total = Arrays_total()
        self.schedules = []
        self.branchs = []
        self.params_info = {}
        self.loop_bounds = defaultdict(list)
        self.arrays_info = defaultdict(list)

    def generate_schedule(self, arg_depth: int = 2, arg_nstmts: int = 3, arg_bounds_index: int = 3, arg_prob_bounds_exist: int = 4, arg_prob_branch: int = 2) -> None:
        '''
        生成调度树和分支信息
        
        Args:
            arg_depth: 循环维度范围，暂定为2，表示循环维度范围为(2)
            arg_nstmts: 语句数量，暂定为3，表示语句数量为3
            arg_bounds_index: 调度序号范围，暂定为3，表示调度序号范围为(0,1,2,3)，影响语句的疏密程度
            arg_prob_bounds_exist: 循环边界被指定为循环变量的基础几率，暂定为4，表示40%
            arg_prob_branch: if分支出现的基础几率，暂定为2，表示20%
        '''
        
        depth_max = arg_depth  # 指定最大维度①
        nstmts = arg_nstmts  # 指定语句数量②
        
        schedules_init = -np.ones([nstmts, 2 * depth_max + 1])
        
        for i in range(nstmts):
            depth = random.randint(depth_min, depth_max)  # 指定各个语句所处维度
            for j in range(depth + 1):
                index = random.randint(0, arg_bounds_index)  # 指定该维度下语句的具体序号③
                schedules_init[i][2 * j] = index  # 在调度的常量维进行记录
        
        self.logger.debug(f'Initial schedules:\n{schedules_init}')
        schedule_tree_init = Schedule_tree()
        schedule_tree_init.add_paths(schedules_init)
        schedule_tree_init.standardize_node()  # 并进行排序号重编（不影响顺序）
        schedule_tree_init.check_tree()
        
        scop_init = '\n'.join(schedule_tree_init.extract_tree('code'))
        self.logger.debug(f'Initial scop:\n{scop_init}')
        
        schedule_tree_init.propagate_cond_attribute(base_prob=arg_prob_branch/10)
        scop_branch = '\n'.join(schedule_tree_init.extract_tree('branch'))
        self.logger.debug(f'Scop with branch:\n{scop_branch}')
        
        schedules, self.branchs = schedule_tree_init.extract_stmt_infos()  # 提取重排序和重命名后的调度以及分支信息
        self.schedules = [s[:-1] for s in schedules]
        self.logger.debug(f'Schedules:\n{self.schedules}')
        self.logger.debug(f'Branchs:\n{self.branchs}')
        
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
            
    def generate_additional_computation(self, arg_narrays_per_dim: int = 2, arg_narrays_read: int = 2, arg_bounds_coef: int = 2) -> None:
        '''
        生成额外的计算信息，包括数组读写访问函数
        
        Args:
            arg_narrays_per_dim: 每种数组维度下待选数组数量，暂定为2
            arg_narrays_read: 每条语句读数组数量范围，暂定为2，表示范围为(0,1,2)
            arg_bounds_coef: 数组下标常量系数范围，暂定为2，表示范围为(-2,-1,0,1,2)
        '''
        
        nstmts = len(self.schedules)
        
        arrays_write = defaultdict(ArrayData)
        arrays_read = defaultdict(list)
        arrays_name = defaultdict(str)
        idx = 0
        
        # 预计算常用值
        value_vars = list(range(1, arg_bounds_coef + 1))  # TODO: consider allow negative coef
        prob_vars = [1] * len(value_vars)  # prob for value as coef for variables in indexes.
        
        value_consts = list(range(-arg_bounds_coef, arg_bounds_coef + 1))
        prob_consts = [1/3/(2 * arg_bounds_coef)] * (2 * arg_bounds_coef + 1)  # prob for value in const coef in indexes 
        prob_consts[arg_bounds_coef] = 2/3  # 0 for 66.7%
        
        # 预计算基项和权重
        base_terms, base_term_weights = self._prepare_base_terms(nstmts)
        
        for i in range(nstmts):
            depth_stmt = len(self.schedules[i]) // 2
            
            # 优化数组位置选择逻辑
            if depth_stmt > 1:
                loc_array_write = (random.choices([depth_stmt - 1, depth_stmt], prob_array_depth)[0], 
                                 random.randint(0, arg_narrays_per_dim - 1))  # TODO: 第一个表示数组维度，目前只允许出现相同和相对于循环维度-1的情况，其概率由prob_array_depth决定；第二个表示该维度下的数组id，从range(arg_narrays_per_dim)中选择
            else:
                loc_array_write = (depth_stmt, random.randint(0, arg_narrays_per_dim - 1))
            
            if arrays_name[loc_array_write] == '':
                arrays_name[loc_array_write] = indexed_array_names[idx] # 指定语句写数组名⑦(必定存在)
                idx += 1
            
            depth_array_write = loc_array_write[0]  # 数组维度
            
            self.logger.debug(f"Start array_access_function generation for array_write in stmt {i}")
            array_write_access_function = self.generate_access_function(
                depth_stmt, depth_array_write, base_terms[i], base_term_weights[i], 
                value_vars, prob_vars, value_consts, prob_consts
            )  # 指定语句写数组访存⑧(有待扩充)
            
            array_write = ArrayData(
                array_name=arrays_name[loc_array_write], 
                array_access_function=array_write_access_function
            )
            arrays_write[i] = array_write
            
            narrays_read = random.randint(0, arg_narrays_read)  # 指定语句读数组个数⑨
            # self.logger.debug(f"narrays_read:\n{narrays_read}")
            
            for j in range(narrays_read):
                if depth_stmt > 1:
                    loc_array_read = (random.choices([depth_stmt - 1, depth_stmt], prob_array_depth)[0], 
                                    random.randint(0, arg_narrays_per_dim - 1))  # 同上loc_array_write
                else:
                    loc_array_read = (depth_stmt, random.randint(0, arg_narrays_per_dim - 1))
                
                if not arrays_name[loc_array_read]:
                    arrays_name[loc_array_read] = indexed_array_names[idx] # 指定语句读数组名⑩
                    idx += 1
                
                depth_array_read = loc_array_read[0]  # 数组维度
                
                self.logger.debug(f"Start array_access_function generation for the {j}th array_read in stmt {i}")
                array_read_access_function = self.generate_access_function(
                    depth_stmt, depth_array_read, base_terms[i], base_term_weights[i], 
                    value_vars, prob_vars, value_consts, prob_consts
                )  # 指定语句读数组访存⑾(有待扩充)
                    
                array_read = ArrayData(
                    array_name=arrays_name[loc_array_read], 
                    array_access_function=array_read_access_function
                )
                arrays_read[i].append(array_read)

        self.arrays_total = Arrays_total(arrays_write, arrays_read)

    def _prepare_base_terms(self, nstmts: int) -> Tuple[List[List[Tuple]], List[List[float]]]:
        """预计算所有语句的基项和权重"""
        base_terms = []
        base_term_weights = []
        
        for i in range(nstmts):
            depth_stmt = len(self.schedules[i]) // 2
            variables = list(range(depth_stmt))
            
            # 基项生成：常数项 + 线性项 + 二次项
            terms = [()]  # 常数项
            terms.extend([(v,) for v in variables])  # 线性项
            
            if max_degree >= 2:
                terms.extend(combinations_with_replacement(variables, 2))  # 二次项
                
            term_weights = [1] * len(terms)  # 实际上常数项另外计算，此处仅为占位
            for j, term in enumerate(terms):
                if len(term) == 1:  # 一次项
                    term_weights[j] *= 1/math.comb(depth_stmt+len(term)-1, len(term))  # 总体一次项概率为基准1.0
                elif len(term) == 2:  # 二次项
                    term_weights[j] *= 1/4/math.comb(depth_stmt+len(term)-1, len(term))  # 总体二次项概率调整为一次项的1/4倍
            
            base_terms.append(terms)
            base_term_weights.append(term_weights)
        
        return base_terms, base_term_weights

    def generate_access_function(self, depth_stmt: int, depth_array: int, terms: List[Tuple], term_weights: List[float], value_vars: List[int], prob_vars: List[float], value_consts: List[int], prob_consts: List[float]) -> List[List[int]]:
        '''
        生成数组访问函数
        
        Args:
            depth_stmt: 语句深度
            depth_array: 数组维度
            terms: 基项列表（常数项、线性项、二次项）
            term_weights: 基项权重列表
            value_vars: 变量系数取值范围
            prob_vars: 变量系数概率分布
            value_consts: 常量系数取值范围
            prob_consts: 常量系数概率分布
            
        Returns:
            List[List[int]]: 数组访问函数，每个子列表表示一个维度的访问模式，例如[[2, 0, 0], [1, 1, 1]]对应二维数组访问函数[2][1 + 1*i + 1*j]
        '''
        
        
        # self.logger.debug(f"value_vars: {value_vars}")
        # self.logger.debug(f"prob_vars: {prob_vars}")
        # self.logger.debug(f"value_consts: {value_consts}")
        # self.logger.debug(f"prob_consts: {prob_consts}")
        # self.logger.debug(f"terms: {terms}")
        # self.logger.debug(f"term_weights: {term_weights}\n")
        
        array_access_function = []  # 指定语句数组访存
        
        # 记录每个循环维度中被选取的变量
        selected_variables = set()
        previous_var_index = depth_stmt - depth_array
        
        # 排除常数项（即term_weights[0]）实际上无意义
        terms_var = terms[1:]
        remaining_weights = term_weights[1:]
        
        # TODO: 调整多余变量权重(暂定从最外层开始，即previous_var_index之前的变量)
        for term_idx, term in enumerate(terms_var):
            if any(var_idx < previous_var_index for var_idx in term):  # 检查是否包含多余变量
                # 包含多余变量：权重除以2
                remaining_weights[term_idx] *= 1/2
        
        for i in range(depth_array):
            access_function = [0] * len(terms)
            selected_indices = [0]  # 必定包含常数项，关键在于取值
            
            # 确认当前维度对应循环变量：
            corresponding_var_index = i + depth_stmt - depth_array
            
            # 第一步：根据之前维度选择的变量调整权重（除以4）
            # self.logger.debug(f"selected_variables: {selected_variables}")
            for term_idx, term in enumerate(terms_var):
                # 检查当前基项是否包含之前维度选择的变量
                if any(var_idx in selected_variables for var_idx in term):
                    remaining_weights[term_idx] /= 4
            
            # 第二步：根据对应变量调整权重
            for term_idx, term in enumerate(terms_var):
                if corresponding_var_index in term:  # 检查当前基项是否包含对应循环变量
                    # 包含对应变量：权重乘以2
                    remaining_weights[term_idx] *= 2
            
            # self.logger.debug(f"Adjusted remaining_weights for dimension {i}: {remaining_weights}")
            
            j = 0
            continue_prob = 1.0  # 初始继续选择基项概率为1*(2/3)^j
            
            while True:
                # 决定是否继续选择基项（不满足概率或者不允许多基项或超过最大基项数）
                if not enable_multi_terms and j >= 1:
                    self.logger.debug(f"Stop the {j}th term selection because multi_terms is disabled")
                    break  # 不允许多基项
                
                if j >= max_terms_per_func - 1:
                    self.logger.debug(f"Stop the {j}th term selection because exceed max_terms_per_func")
                    break  # 超过最大基项数
                
                if random.random() > continue_prob:
                    self.logger.debug(f"Stop the {j}th term selection because not meet selection prob")
                    break  # 终止选择

                # TODO: 选择基项（目前排除常数项和已选项）
                valid_indices = [k for k in range(len(terms_var)) if remaining_weights[k] > 0]
                if not valid_indices:
                    break

                idx = random.choices(valid_indices, weights=[remaining_weights[i] for i in valid_indices])[0]
                selected_indices.append(idx + 1)  # +1因为terms_var不包含常数项
                remaining_weights[idx] = 0  # 禁用已选项

                # 衰减继续概率：(2/3)^n
                continue_prob *= 2/3
                
                j += 1

            # 为选中的基项分配系数
            for idx in selected_indices:
                if idx:  # vars > 0
                    coef = random.choices(value_vars, prob_vars)[0]
                else:  # consts = 0
                    coef = random.choices(value_consts, prob_consts)[0]
                access_function[idx] = coef

            # self.logger.debug(f"The {i}th dim in access_function: {access_function}")
            
            selected_variables.update(terms_var[idx - 1] for idx in selected_indices)
            array_access_function.append(access_function)
        
        self.logger.debug(f"Generated array_access_function: {array_access_function}")
        
        return array_access_function

    def generate_dependency(self, arg_ndeps_read: int = 2, arg_bounds_distance: int = 2, arg_prob_dep_write_exist: int = 4) -> None:
        '''
        生成依赖关系信息
        
        Args:
            arg_ndeps_read: 每条语句读依赖数量范围，暂定为2，表示范围为(0,1,2)
            arg_bounds_distance: 依赖距离范围，暂定为2，表示范围为(-2,-1,0,1,2)
            arg_prob_dep_write_exist: 每条语句写依赖存在概率，暂定为4，表示40%
        '''
        
        nstmts = len(self.schedules)
        schedules_var = [[s[i] for i in range(1, len(s), 2)] for s in self.schedules] # 各调度变量维取值

        # 预计算依赖距离参数
        value_consts = list(range(-arg_bounds_distance, arg_bounds_distance + 1))
        prob_conts = [1/3/(2 * arg_bounds_distance)] * (2 * arg_bounds_distance + 1)  # prob for value in const coef in indexes 
        prob_conts[arg_bounds_distance] = 2/3  # 0 for 66.7%
        
        for i in range(nstmts):
            # 确认读、写依赖数量
            dep_write_exist = random.random()  # 指定语句写依赖是否存在，影响依赖密度
            
            if dep_write_exist < arg_prob_dep_write_exist / 10:
                choice_list_write = [
                    j for j in range(nstmts) 
                    if i != j and (
                        schedules_var[j] == schedules_var[i] or 
                        schedules_var[j] == schedules_var[i][:-1]
                    )
                ] # 寻找自身之外共享变量维或者共享其变量维的前一维开始部分（配合之前的loc_array_write中允许出现相同和相对于循环维度-1的情况）
                self.logger.debug(f"choice_list_write for stmt{i}: {choice_list_write}")
                
                if choice_list_write == []:
                    dep_write_id = random.choice(choice_list_write)  # 指定依赖语句⑿
                    self.arrays_total.arrays_write[i] = ArrayData(
                        array_name=self.arrays_total.arrays_write[i].array_name, 
                        array_access_function=self.arrays_total.arrays_write[i].array_access_function, 
                        write_stmt_id=dep_write_id
                    )
                else:
                    self.logger.debug(f'no available stmt for stmt {i} to construct WAW dep')
            
            # TODO: 是直接指定读依赖数量还是现在这样限制范围？
            ndeps_read = random.randint(0, arg_ndeps_read)  # 指定读依赖数量⒁
            # self.logger.debug(f'ndeps_read for stmt{i}: {ndeps_read}')
            
            # 预计算读依赖选择列表
            choice_list_read = [
                j for j in range(nstmts) 
                if (schedules_var[j] == schedules_var[i] or schedules_var[j] == schedules_var[i][:-1])
            ] # 和choice_list_write略有不同，允许同语句的读写数组之间的依赖
            # self.logger.debug(f"choice_list_read for stmt{i}: {choice_list_read}")
            
            for _ in range(ndeps_read):
                # 无需判断choice_list_read是否为空列表，因为至少有语句自身
                dep_read_id = random.choice(choice_list_read)  # 指定依赖语句⒂
                self.arrays_total.arrays_read[i].append(ArrayData(write_stmt_id=dep_read_id))
        
        # 检查依赖合理性
        self.arrays_total.validate_dependence(self.filename)
        
        # 处理依赖距离
        self._process_dependency_distances(value_consts, prob_conts)

    def _process_dependency_distances(self, value_consts: List[int], prob_conts: List[float]) -> None:
        """处理依赖距离计算"""
        # 处理写依赖距离
        for i, array_write in list(self.arrays_total.arrays_write.items()):
            if array_write.write_stmt_id is not None:
                source_array = self._get_source_array_for_mapping(array_write)
                distance_dep_write = self._calculate_dependency_distance(
                    source_array.array_access_function, value_consts, prob_conts
                )
                self.arrays_total.arrays_write[i] = ArrayData(
                    array_name=array_write.array_name, 
                    array_access_function=array_write.array_access_function, 
                    distance=distance_dep_write, 
                    write_stmt_id=array_write.write_stmt_id
                )
        
        # 处理读依赖距离
        for i, arrays_read in list(self.arrays_total.arrays_read.items()):
            for j, array_read in enumerate(arrays_read):
                if array_read.write_stmt_id is not None:
                    source_array = self._get_source_array_for_mapping(array_read)
                    distance_dep_read = self._calculate_dependency_distance(
                        source_array.array_access_function, value_consts, prob_conts
                    )
                    self.arrays_total.arrays_read[i][j] = ArrayData(
                        distance=distance_dep_read, 
                        write_stmt_id=array_read.write_stmt_id
                    )

    def _calculate_dependency_distance(self, array_access_function: List[List[int]], value_consts: List[int], prob_conts: List[float]) -> List[int]:
        """计算依赖距离"""
        depth, dim = len(array_access_function), len(array_access_function[0]) # 获取依赖中source数组的维度
        distance = [0] * dim
        for j in range(1, dim):  # 从第1列开始，跳过首列（索引0）常数项
            # 检查当前列是否有任何非零元素
            column_has_non_zero = any(array_access_function[k][j] != 0 for k in range(depth))
            
            if column_has_non_zero:
                distance[j] = random.choices(value_consts, weights=prob_conts)[0]  # 指定依赖距离
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
            source_array = self._get_source_array_for_mapping(array)
            if self.arrays_info[source_array.array_name] == []:
                params_unused = self._assign_array_dimensions(source_array, num_params, params_unused)
        
        # 处理读数组
        for arrays in self.arrays_total.arrays_read.values():
            for array in arrays:
                source_array = self._get_source_array_for_mapping(array)
                if self.arrays_info[source_array.array_name] == []:
                    params_unused = self._assign_array_dimensions(source_array, num_params, params_unused)

        # 清理未使用的参数
        for param in params_unused:
            del self.params_info[param]
        
        # 设置参数值
        self._set_parameter_values()
        
        # self.logger.debug(f'params_info:\n{self.params_info}\n')
        # self.logger.debug(f'arrays_info:\n{self.arrays_info}\n')

    def _get_source_array_for_mapping(self, array: ArrayData) -> Optional[ArrayData]:
        """获取用于维度映射的源数组"""
        if array.write_stmt_id is not None:
            source_array = self.arrays_total.arrays_write[array.write_stmt_id]
            while source_array.array_access_function is None:
                source_array = self.arrays_total.arrays_write[source_array.write_stmt_id]
            return source_array
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

    def generate_json_info(self, arg_depth: int, arg_nstmts: int, arg_bounds_index: int, arg_prob_bounds_exist: int, arg_narrays_per_dim: int, arg_narrays_read: int, arg_bounds_coef: int, arg_ndeps_read: int, arg_bounds_distance: int, arg_prob_dep_write_exist: int, arg_prob_branch: int) -> Dict[str, Any]:
        '''
        生成完整的JSON信息字典
        
        Args:
            arg_depth: 循环维度范围
            arg_nstmts: 语句数量
            arg_bounds_index: 调度序号范围
            arg_prob_bounds_exist: 循环边界存在概率
            arg_narrays_per_dim: 每种维度数组数量
            arg_narrays_read: 读数组数量范围
            arg_bounds_coef: 数组下标系数范围
            arg_ndeps_read: 读依赖数量范围
            arg_bounds_distance: 依赖距离范围
            arg_prob_dep_write_exist: 写依赖存在概率
            arg_prob_branch: 分支概率
            
        Returns:
            Dict: 包含完整调度信息的字典
        '''
        
        self.generate_schedule(arg_depth, arg_nstmts, arg_bounds_index, arg_prob_bounds_exist, arg_prob_branch)  # 首先生成调度
        self.generate_additional_computation(arg_narrays_per_dim, arg_narrays_read, arg_bounds_coef)  # 生成未指定依赖计算(可能有依赖,考虑避免？)
        self.generate_dependency(arg_ndeps_read, arg_bounds_distance, arg_prob_dep_write_exist)  # 生成指定依赖计算
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
                'branch': self.branchs[i],  # b1, b2, b3分别对应if-true分支部分，if-false分支部分和outside-if部分，且为d+1调度矩阵格式
                'additional_computation': additional_computations[i],
                'dependency': dependencies[i]
            }
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
                    'array_name': array.array_name,
                    'array_type': 'write',
                    'array_access_function': array.array_access_function
                }
                additional_computations[i].append(additional_computation)
            else:
                dependency = {
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
                        'array_name': array.array_name,
                        'array_type': 'read',
                        'array_access_function': array.array_access_function
                    }
                    additional_computations[i].append(additional_computation)
                else:
                    dependency = {
                        'category': 'read',
                        'distance': array.distance,
                        'write_stmt_id': array.write_stmt_id
                    }
                    dependencies[i].append(dependency)
        
        return additional_computations, dependencies

    def generate_json_file(self, arg_depth: int = 2, arg_nstmts: int = 3, arg_bounds_index: int = 2, arg_prob_bounds_exist: int = 4, arg_narrays_per_dim: int = 2, arg_narrays_read: int = 2, arg_bounds_coef: int = 1, arg_ndeps_read: int = 2, arg_bounds_distance: int = 1, arg_prob_dep_write_exist: int = 4, arg_prob_branch: int = 2, id: int = 0) -> str:
        '''
        生成JSON文件并保存到磁盘
        
        Args:
            arg_depth: 循环维度范围，暂定为2，表示循环维度范围为(1,2)
            arg_nstmts: 语句数量，暂定为3，表示语句数量为3
            arg_bounds_index: 调度序号范围，暂定为2，表示调度序号范围为(0,1,2)，影响语句的疏密程度
            arg_prob_bounds_exist: 循环边界被指定的几率，暂定为4，表示40%
            arg_narrays_per_dim: 每种数组维度下待选数组数量，暂定为2，影响数组的疏密程度
            arg_narrays_read: 每条语句读数组数量范围，暂定为2，表示范围为(0,1,2)
            arg_bounds_coef: 数组下标常量系数范围，暂定为1，表示范围为(-1,0,1)
            arg_ndeps_read: 每条语句读依赖数量范围，暂定为2，表示范围为(0,1,2)
            arg_bounds_distance: 依赖距离范围，暂定为1，表示范围为(-1,0,1)
            arg_prob_dep_write_exist: 每条语句写依赖存在概率，暂定为4，表示40%
            arg_prob_branch: if分支出现的基础几率，暂定为2，表示20%
            id: 文件标识符，用于生成唯一文件名
            
        Returns:
            str: 生成的JSON文件路径
        '''
        
        self._reset_data()

        self.logger.debug("Start json generation\n")

        self.filename = f'{arg_depth}{arg_nstmts}{arg_bounds_index}{arg_prob_bounds_exist}{arg_narrays_per_dim}{arg_narrays_read}{arg_bounds_coef}{arg_ndeps_read}{arg_bounds_distance}{arg_prob_dep_write_exist}{arg_prob_branch}_{id:02d}.json'

        file_content = self.generate_json_info(
            arg_depth, arg_nstmts, arg_bounds_index, arg_prob_bounds_exist,
            arg_narrays_per_dim, arg_narrays_read, arg_bounds_coef, arg_ndeps_read,
            arg_bounds_distance, arg_prob_dep_write_exist, arg_prob_branch
        )
    
        file_destination = os.path.join(json_input_path, self.filename)
        with open(file_destination, 'w') as fp:
            json.dump(file_content, fp)
            
        self.logger.debug(f'Random generation done in "{file_destination}".\n')
        return file_destination