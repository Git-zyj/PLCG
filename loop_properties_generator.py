import json
import random
import os
import math
import logging
import sys
import numpy as np

from bidict import bidict
from typing import List, Dict, Tuple, Set, Any, Optional
from collections import defaultdict
from scipy import stats
from itertools import combinations_with_replacement, product

from path_settings import json_input_path
from params_settings import depth_min, indexed_array_names, indexed_parameter_names, params_multiplier, params_range, prob_array_depth, prob_dep_region, enable_if_branch, max_degree, enable_multi_terms, max_terms_per_func
from schedule import Schedule_tree
from array_data import ArrayData

class Loop_Properties_Generator:
    def __init__(self, log_level: int = logging.WARNING) -> None:
        """初始化JSON生成器，设置默认数据结构"""
        self._reset_data()
        self._setup_logging(log_level)
    
    def _setup_logging(self, log_level: int) -> None:
        """独立的日志设置方法"""
        self.logger = logging.getLogger("Properties")
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
        self.arrays_write = defaultdict(ArrayData)
        self.arrays_reads = defaultdict(lambda: defaultdict(ArrayData))
        self.schedules = []
        self.iterators_stmts = []
        self.branchs = []
        self.params_info = {}
        self.special_loop_bounds = defaultdict(list)
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
        
        for stmt_id in range(nstmts):
            depth = random.randint(depth_min, depth_max)  # 指定各个语句所处维度
            for schedule_dim_iterator_id in range(depth + 1):
                index = random.randint(0, arg_bounds_index)  # 指定该维度下语句的具体序号③
                schedules_init[stmt_id][2 * schedule_dim_iterator_id] = index  # 在调度的常量维进行记录
        
        # self.logger.debug(f'Initial schedules:\n{schedules_init}')
        schedule_tree_init = Schedule_tree()
        schedule_tree_init.add_paths(schedules_init)
        schedule_tree_init.standardize_node()  # 并进行排序号重编（不影响顺序）
        schedule_tree_init.check_tree()
        
        scop_init = '\n'.join(schedule_tree_init.extract_tree('code'))
        self.logger.debug(f'\nInitial scop:\n{scop_init}\n')
        
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
                self.special_loop_bounds[node.content] = [0, tmp_bound]  # TODO: 目前只有右下三角值域（有待扩充）
                
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
        
        # 预计算access_function各基项（包括循环变量维和常量维）系数取值和权重
        prob_coef_iterator = {}
        for i in range(1, arg_bounds_coef + 1): # TODO: consider allow negative coefficients for iterator terms
            prob_coef_iterator[i] = 1  # prob for value as coef for iterator terms in indexes.
        
        prob_coef_const = {}
        for i in range(-arg_bounds_coef, arg_bounds_coef + 1):
            if i == 0:
                prob_coef_const[i] = 2/3  # 0 for 66.7%
            else:
                prob_coef_const[i] = 1/3/(2 * arg_bounds_coef)  # prob for value in const coef in indexes
        
        # 预计算变量基项和权重
        prob_terms = self._prepare_base_terms(nstmts)
        
        
        
        for stmt_id in range(nstmts):
            depth_stmt = len(self.schedules[stmt_id]) // 2
            
            # 优化数组位置选择逻辑
            if depth_stmt > 1:
                depth_array_write = random.choices([depth_stmt - 1, depth_stmt, depth_stmt + 1], prob_array_depth)[0] # TODO: 数组维度目前只允许出现相同和相对于循环维度+-1的情况，其概率由prob_array_depth决定；write确保不重复，不再从range(arg_narrays_per_dim)中选择
            else:
                depth_array_write = random.choices([depth_stmt, depth_stmt + 1], prob_array_depth[1:])[0] #循环维数为1时，只允许相同和相对于循环维度+1的情况
            
            # self.logger.debug(f"depth_array_write for array_write in stmt {stmt_id}: {depth_array_write}")
            array_write_access_function = self.generate_access_function(
                (stmt_id, 0), depth_stmt, depth_array_write, prob_terms[stmt_id], prob_coef_iterator, prob_coef_const
            )  # 指定语句写数组访存⑧(有待扩充)
            
            array_write = ArrayData(
                array_id=(stmt_id, 0), # 0表示首个数组，即写数组
                array_name=indexed_array_names[stmt_id],  # 指定语句写数组名⑦(必定存在)
                array_access_function=array_write_access_function
            )
            self.arrays_write[stmt_id] = array_write # 先对每条语句的write_array都生成一个comp，作为后续依赖生成失败的回退
        
        
        
        arrays_name = defaultdict(str)
        array_name_id = nstmts  # 读数组命名从nstmts开始编号，即写数组之后
        
        # TODO: 是直接指定读数组数量还是限制范围？
        narrays_read = np.random.multinomial(nstmts * arg_avg_narrays_read_per_stmt, [1/nstmts] * nstmts) # 指定语句读数组个数⑨
        
        for stmt_id in range(nstmts):
            depth_stmt = len(self.schedules[stmt_id]) // 2
              
            # narrays_read = random.randint(0, arg_avg_narrays_read_per_stmt)  # 指定语句读数组个数⑨
            # self.logger.debug(f"narrays_read in stmt {stmt_id}:{narrays_read[stmt_id]}")
            
            for comp_read_id in range(narrays_read[stmt_id]):
                
                if array_name_id >= len(indexed_array_names):
                    raise IndexError(f'需要更多数组名称，当前有{len(indexed_array_names)}个，实际需要{array_name_id}个')
                
                if depth_stmt > 1:
                    depth_array_read = random.choices([depth_stmt - 1, depth_stmt, depth_stmt + 1], prob_array_depth)[0] # 同上depth_array_write
                else:
                    depth_array_read = random.choices([depth_stmt, depth_stmt + 1], prob_array_depth[1:])[0]
                
                array_read_id = random.randint(0, arg_narrays_per_dim - 1)
                
                loc_array_name = (depth_array_read, array_read_id)
                if loc_array_name not in arrays_name:  # 尚未分配
                    arrays_name[loc_array_name] = indexed_array_names[array_name_id] # 指定语句读数组名⑩
                    array_name_id += 1
                
                # self.logger.debug(f"Start array_access_function generation for the {comp_read_id}th array_read in stmt {stmt_id}")
                
                array_read_access_function = self.generate_access_function(
                    (stmt_id, comp_read_id + 1), depth_stmt, depth_array_read, prob_terms[stmt_id], prob_coef_iterator, prob_coef_const
                )  # 指定语句读数组访存⑾(有待扩充)
                    
                array_read = ArrayData(
                    array_id=(stmt_id, comp_read_id + 1), # 先分配additional_computation标识，后续再分配dependency标识，+1避免和write冲突
                    array_name=arrays_name[loc_array_name], 
                    array_access_function=array_read_access_function
                )
                self.arrays_reads[stmt_id][comp_read_id + 1] = array_read

    def generate_terms(self, num_iterators: int, max_degree: int) -> List[Tuple]:
        """
        生成所有可能的项（常数项、线性项、二次项等）
        
        Args:
            num_iterators: 循环变量数量
            max_degree: 最大次数
            
        Returns:
            所有可能的项列表，按次数排序
        """
        terms = [()]  # 常数项
        
        for degree in range(1, max_degree + 1):
            # 生成所有可能的d次项（允许重复变量）
            terms.extend(combinations_with_replacement(range(num_iterators), degree))
        
        return terms

    def _prepare_base_terms(self, nstmts: int) -> List[Dict[Tuple[int], float]]:
        """预计算所有语句的基项和权重"""
        prob_terms_all = []
        
        for stmt_id in range(nstmts):
            depth_stmt = len(self.schedules[stmt_id]) // 2
            
            # 基项生成
            terms = self.generate_terms(depth_stmt, max_degree)
                
            # 创建项到权重的映射字典
            prob_terms = {}
            for term in terms:
                prob_weight = 1
                len_term = len(term)
                
                if len_term == 1:  # 一次项
                    prob_weight *= 1/math.comb(depth_stmt+len_term-1, len_term)
                elif len_term == 2:  # 二次项
                    prob_weight *= 1/4/math.comb(depth_stmt+len_term-1, len_term)
                
                prob_terms[term] = prob_weight
            
            prob_terms_all.append(prob_terms)
        
        return prob_terms_all

    def generate_access_function(self, array_id: Tuple[int, int], depth_stmt: int, depth_array: int, prob_terms: Dict[Tuple, float], prob_coef_iterator: Dict[int, float], prob_coef_const: Dict[int, float]) -> List[List[int]]:
        '''
        生成数组访问函数
        
        Args:
            array_id: 数组id
            depth_stmt: 语句深度
            depth_array: 数组维度
            prob_terms: 基项列表（常数项、线性项、二次项）: 基项权重列表
            prob_coef_iterator: 基项中循环变量系数取值对应概率分布
            prob_coef_const: 基项中常量系数取值对应概率分布
            
        Returns:
            List[List[int]]: 数组访问函数，每个子列表表示一个维度的访问模式，例如[[2, 0, 0], [1, 1, 1]]对应二维数组访问函数[2][1 + 1*i + 1*j]
        '''
        
        # self.logger.debug(f"prob_coef_iterator: {prob_coef_iterator}")
        # self.logger.debug(f"prob_coef_const: {prob_coef_const}")
        # self.logger.debug(f"prob_terms: {prob_terms}\n")
        
        array_access_function = []  # 指定语句数组访存
        
        prob_terms_adjusted = prob_terms.copy()
        prob_terms_adjusted[()] *= 1/32 # TODO: 空选概率设置暂定为1/32
        
        # TODO: 调整包含多余循环变量的基项权重(暂定从最外层开始，即previous_iterator_index之前的循环变量视作多余)
        previous_iterator_index = depth_stmt - depth_array
        for term in prob_terms_adjusted.keys():
            if any(iterator_idx < previous_iterator_index for iterator_idx in term):
                prob_terms_adjusted[term] *= 1/4 # 检查是否包含多余循环变量：权重除以4
        
        prob_terms_adjusted_copy = prob_terms_adjusted.copy() # 备份
        
        for array_dim_id in range(depth_array):
            
            # 确认当前维度对应循环变量：
            corresponding_iterator_index = array_dim_id + previous_iterator_index
            
            prob_terms_adjusted = prob_terms_adjusted_copy.copy() # 初始化，避免前一维度选择影响当前维度
            
            # 根据对应变量调整权重
            for term in prob_terms_adjusted.keys():
                if corresponding_iterator_index in term:  # 检查当前基项是否包含对应循环变量
                    # 对于写数组，包含对应变量：权重乘以2；对于无依赖读数组，包含对应变量：权重乘以1/2
                    if array_id[1] == 0:
                        prob_terms_adjusted[term] *= 2
                    else:
                        prob_terms_adjusted[term] *= 1/2
            
            # self.logger.debug(f"Adjusted prob_terms for dimension {array_dim_id}: {prob_terms_adjusted}")
            
            selected_indices = [()]  # 必定包含常数项，关键在于取值
            selection_turn = 0
            continue_prob = 1.0  # 初始继续选择基项概率为1*(2/3)^selection_turn
            
            while True:
                # 决定是否继续选择基项（不满足概率或者不允许多基项或超过最大基项数）
                if not enable_multi_terms and selection_turn >= 1:
                    # self.logger.debug(f"Stop the {selection_turn}th term selection because multi_terms is disabled")
                    break  # 不允许多基项
                
                if selection_turn >= max_terms_per_func - 1:
                    # self.logger.debug(f"Stop the {selection_turn}th term selection because exceed max_terms_per_func")
                    break  # 超过最大基项数
                
                if random.random() > continue_prob:
                    # self.logger.debug(f"Stop the {selection_turn}th term selection because not meet selection prob")
                    break  # 终止选择

                # self.logger.debug(f'Adjusted prob_terms:\n{prob_terms_adjusted}\n')

                selected_term = random.choices(list(prob_terms_adjusted.keys()), weights=prob_terms_adjusted.values())[0]  

                if selected_term != ():
                    selected_indices.append(selected_term)
                else: # 空选即类似A[0]的结果
                    self.logger.warning(f"No iterator terms are selected in the {selection_turn}th term selection for the {array_dim_id}th dim in array {array_id}\n")

                selected_prob = prob_terms_adjusted[selected_term]/8 # TODO: 目前对于已选项，采用/8以减小继续出现概率，但不为0（即目前会有重复变量出现在数组不同维度中）
                prob_terms_adjusted_copy[selected_term] = prob_terms_adjusted[selected_term] = selected_prob

                # 衰减继续概率：(2/3)^n
                continue_prob *= 2/3
                
                selection_turn += 1

            # 为选中的基项分配系数
            access_function = [0] * len(prob_terms_adjusted)
            for term in selected_indices:
                if term == ():  # consts
                    coef = random.choices(list(prob_coef_const.keys()), prob_coef_const.values())[0]
                else:  # iterators
                    coef = random.choices(list(prob_coef_iterator.keys()), prob_coef_iterator.values())[0]
                access_function[list(prob_terms_adjusted.keys()).index(term)] = coef

            # self.logger.debug(f"The {array_dim_id}th dim in access_function for array {array_id}: {access_function}")
            
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
        
        # 计算调度的循环变量维和其前缀
        iterators_stmts_prefix = []
        for schedule in self.schedules:
            # 计算完整调度变量
            iterators_stmt = [schedule[i] for i in range(1, len(schedule), 2)]
            self.iterators_stmts.append(iterators_stmt)
            # 计算前缀（避免空范围）
            if len(iterators_stmt) > 1:
                iterators_stmts_prefix.append(iterators_stmt[:-1])
            else:
                iterators_stmts_prefix.append([])

        # self.logger.debug(f'schedules: {self.schedules}')
        # self.logger.debug(f'iterators_stmts: {iterators_stmts}')
        # self.logger.debug(f'iterators_stmts_prefix: {iterators_stmts_prefix}')

        # 预计算依赖距离参数
        prob_coef_const = {}
        for i in range(-arg_bounds_distance, arg_bounds_distance + 1):
            if i == 0:
                prob_coef_const[i] = 2/3  # 0 for 66.7%
            else:
                prob_coef_const[i] = 1/3/(2 * arg_bounds_distance)  # prob for value in const coef in indexes
        
        
        
        # 从尾部开始生成写依赖，child->parent
        visited, finished = set(), set()
        for child_stmt_id in range(nstmts - 1, -1, -1):  # 从nstmts-1到0倒序
            array_write = self.arrays_write[child_stmt_id]
            # 递归获取parent_array并生成依赖链
            _, visited, finished = self._generate_dep_write_recursively(
                array_write, iterators_stmts_prefix, arg_prob_dep_write_exist, visited, finished
            )   
            
        # 读依赖生成，parent->child
        
        # 初始化权重系统
        global_weights = [1.0] * nstmts  # 全局权重，初始相等
        current_weights = {}  # 每个语句的parent_array（即写数组）所有的权重
        
        # 为每个写数组（parent）初始化当前权重
        for i in range(nstmts):
            current_weights[i] = global_weights.copy()
        
        # 计算每个parent要分配的读依赖数量
        
        ndeps_read_by_parent = np.random.multinomial(nstmts * arg_avg_ndeps_read_per_stmt, [1/nstmts] * nstmts) # 指定读依赖数量⒁
        
        # 为每个parent依次分配读依赖
        for parent_stmt_id in range(nstmts):
            
            parent_array = self.arrays_write[parent_stmt_id]
            
            ndeps_read = ndeps_read_by_parent[parent_stmt_id]
            
            if ndeps_read == 0:
                self.logger.debug(f'Array {parent_array.array_id} has no RAW or WAR dep due to ndeps_read=0')
                continue
            
            ancestor_array = self._get_ancestor_array_for_mapping(parent_array)
            
            # 获取当前parent的候选child语句，且后续无需判断是否为空列表，因为至少有语句自身
            candidates_iterator_read = self._get_dep_stmt_candidates_iterators(parent_stmt_id, iterators_stmts_prefix, allow_same_stmt=True)
            candidates_dim_read = self._get_dep_stmt_candidates_dims(parent_stmt_id, allow_same_stmt=True)
                
            # 构建当前parent的选择权重
            prob_weights_read = [0.0] * nstmts
            for stmt_id in range(nstmts):
                if stmt_id in candidates_iterator_read:
                    # 使用全局权重和当前parent权重的组合
                    base_weight = prob_dep_region[0] / len(candidates_iterator_read) # 基于iterator属性的基础权重
                    
                    prob_weights_read[stmt_id] = base_weight * global_weights[stmt_id] * current_weights[parent_stmt_id][stmt_id]
                elif stmt_id in candidates_dim_read: # 类似，但基于dim属性
                    base_weight = prob_dep_region[1] / len(candidates_dim_read)
                    
                    prob_weights_read[stmt_id] = base_weight * global_weights[stmt_id] * current_weights[parent_stmt_id][stmt_id]
            
            # 为当前parent分配读依赖
            for _ in range(ndeps_read):
                # 根据权重选择child语句
                prob_weights_read_copy = prob_weights_read.copy()
                condition = True
                while condition:
                    if not sum(prob_weights_read) > 0:
                        self.logger.warning(f'parent_array {parent_array.array_id} has no available child_array to construct WAR or RAW dep.')
                        break
                    
                    dep_read_child_stmt_id = random.choices(range(nstmts), weights=prob_weights_read_copy, k=1)[0]
                    
                    prob_weights_read_copy[dep_read_child_stmt_id] = 0  # 避免再次选择语句

                    condition = self._check_used_iterators(ancestor_array, candidates_iterator_read, candidates_dim_read, dep_read_child_stmt_id, dep_read_child_stmt_id, is_write=False)
                    
                if not condition:
                    narrays_read_comp = len(self.arrays_reads[dep_read_child_stmt_id])
                    
                    self.arrays_reads[dep_read_child_stmt_id][narrays_read_comp + 1] = ArrayData(array_id=(dep_read_child_stmt_id, narrays_read_comp + 1), parent_stmt_id=parent_stmt_id)
                
                    # 更新权重系统
                    # 全局权重下降：减少该child被其他parent选择的概率
                    global_weights[dep_read_child_stmt_id] *= 1/2
                    
                    # 当前child权重上升：增加该child继续选择同一parent的概率
                    current_weights[parent_stmt_id][dep_read_child_stmt_id] *= 4
                    
                    # 等价于直接×2
                    prob_weights_read[dep_read_child_stmt_id] *= 2
        
        
        
        # 处理依赖距离
        self._process_dependency_distances(prob_coef_const)
        
        # self.logger.debug(f'arrays_write: {self.arrays_write}')
        # self.logger.debug(f'arrays_reads: {self.arrays_reads}')

    def _generate_dep_write_recursively(self, child_array: ArrayData, iterators_stmts_prefix: List, arg_prob_dep_write_exist: float, visited: Set, finished: Set) -> Tuple[ArrayData, Set]:
        """
        递归获取parent_array并生成依赖链
        
        Args:
            child_stmt_id: 当前子语句ID
            child_array: 当前子数组
            iterators_stmts_prefix: 所有语句的循环变量的列表前缀部分
            arg_prob_dep_write_exist: 写依赖存在概率
            visited: 已访问的语句集合，用于检测是否正在生成写依赖
            finished: 已完成生成的语句集合，用于检测是否生成过写依赖
            
        Returns:
            Tuple[ArrayData, Set]: (最终的parent_array, 已访问的语句集合)
        """
        
        # self.logger.debug(f'Start _generate_dep_write_recursively for child_array {child_array.array_id}:\nvisited: {visited}\nfinished: {finished}\n')
        
        child_stmt_id = child_array.array_id[0]
        
        # 检测循环是否生成过
        if child_stmt_id in finished:
            # self.logger.debug(f'array {child_array.array_id} 已进行过依赖生成，跳过生成步骤')
            
            # 检查当前数组是否已有parent_stmt_id
            if child_array.parent_stmt_id is not None:
                # 如果已有parent，递归寻找和处理parent
                
                parent_array = self.arrays_write[child_array.parent_stmt_id]
                
                # self.logger.debug(f'已获取array {child_array.array_id}的parent_array {parent_array.array_id}，继续递归处理其parent')
                
                ancestor_array, visited, finished = self._generate_dep_write_recursively(parent_array, iterators_stmts_prefix, arg_prob_dep_write_exist, visited, finished
                )
                return ancestor_array, visited, finished
            
            # 没有ancestor，返回自身
            return child_array, visited, finished
        elif child_stmt_id in visited:
            # self.logger.debug(f'array {child_array.array_id} 正在生成依赖，检测到循环，跳过生成步骤以避免环路')
            return child_array, visited, finished
        
        else:
            # self.logger.debug(f'array {child_array.array_id} 开始进行依赖生成')
                     
            if random.random() < arg_prob_dep_write_exist / 10: # 决定是否生成新的写依赖，影响依赖密度
                finished.add(child_stmt_id)
                self.logger.debug(f'stmt {child_stmt_id} has no WAW dep due to arg_prob_dep_write_exist')
                return child_array, visited, finished
            
            # 决定要生成，寻找候选parent语句
            candidates_iterator_write = self._get_dep_stmt_candidates_iterators(
                child_stmt_id, iterators_stmts_prefix, allow_same_stmt=False
            )
            candidates_dim_write = self._get_dep_stmt_candidates_dims(
                child_stmt_id, allow_same_stmt=False
            )
            
            # self.logger.debug(f'candidates_iterator_write: {candidates_iterator_write}\ncandidates_dim_write: {candidates_dim_write}\nvisited: {visited}')
            
            if not ((candidates_iterator_write.keys() | candidates_dim_write.keys()) - visited):
                finished.add(child_stmt_id)
                self.logger.warning(f'no available stmts in candidates_write for stmt {child_stmt_id} to construct WAW dep')
                return child_array, visited, finished
            
            nstmts = len(self.schedules)
            prob_weights_write = [0] * nstmts  # 概率初始化
            
            num_iterator, num_dim = len(candidates_iterator_write), len(candidates_dim_write)
            
            # 权重分配
            for stmt_id in range(nstmts):
                if stmt_id in visited:
                    continue
                elif stmt_id in candidates_iterator_write:
                    prob_weights_write[stmt_id] = prob_dep_region[0] / num_iterator
                elif stmt_id in candidates_dim_write:
                    prob_weights_write[stmt_id] = prob_dep_region[1] / num_dim
            
            
            condition = True
            while condition: # 确保parent_array不会溯源到自身，即依赖不会成环
            
                # self.logger.debug(f'prob_weights_write: {prob_weights_write}')
                
                if sum(prob_weights_write) == 0:
                    self.logger.warning(f'To avoid dpendence cycle, stmt {child_stmt_id} can not have WAW dep.')
                    dep_write_parent_stmt_id = None
                    break
                
                dep_write_parent_stmt_id = random.choices(range(nstmts), weights=prob_weights_write, k=1)[0]  # 指定写依赖的source语句⑿
                
                # self.logger.debug(f"start check parent_array {(dep_write_parent_stmt_id, 0)} for child_array {child_array.array_id}")
                
                ancestor_array, visited, finished = self._generate_dep_write_recursively(self.arrays_write[dep_write_parent_stmt_id], iterators_stmts_prefix, arg_prob_dep_write_exist, visited | {child_stmt_id}, finished
                )
                
                # self.logger.debug(f'ancestor_array: {ancestor_array}\nchild_array: {child_array}')
                
                prob_weights_write[dep_write_parent_stmt_id] = 0  # 避免再次选择语句
                
                condition = self._check_used_iterators(ancestor_array, candidates_iterator_write, candidates_dim_write, dep_write_parent_stmt_id, child_stmt_id, is_write=True)

            self.arrays_write[child_stmt_id] = ArrayData(array_id=(child_stmt_id, 0), array_name=child_array.array_name, array_access_function=child_array.array_access_function, parent_stmt_id=dep_write_parent_stmt_id) # 保留先前生成的comp信息作为依赖生成失败的回退

            finished.add(child_stmt_id)

            return ancestor_array, visited, finished

    def _get_dep_stmt_candidates_iterators(self, stmt_id: int, iterators_stmts_prefix: List, allow_same_stmt: bool = False) -> Dict[int, int]:
        """
        获取基于调度变量相似性的候选语句
        
        Args:
            stmt_id: 依赖构建的发起方（WAW的target写数组，WAR的target写数组和RAW的source写数组）所在语句ID
            iterators_stmts_prefix: 所有语句的循环变量的列表前缀部分
            allow_same_stmt: 是否允许选择同一语句
            
        Returns:
            候选语句ID和相似性字典
        """
        
         # TODO: 寻找自身child_stmt_id之外stmt_id为共享变量维或者共享变量维的除去最后一维的部分，即限制依赖必须在同一loop之间（配合之前的loc_array_write中允许出现相同和相对于循环维度+-1的情况，但目前仅限于+-1）
        
        candidates = {}
        nstmts = len(self.iterators_stmts)
        
        for select_stmt_id in range(nstmts):
            if not allow_same_stmt and select_stmt_id == stmt_id:
                continue
                
            # 共享变量维或者共享变量维的除去最后一维的部分
            if self.iterators_stmts[select_stmt_id] == self.iterators_stmts[stmt_id]:
                candidates[select_stmt_id] = 0
            elif self.iterators_stmts[select_stmt_id] == iterators_stmts_prefix[stmt_id]:
                candidates[select_stmt_id] = -1
            elif iterators_stmts_prefix[select_stmt_id] == self.iterators_stmts[stmt_id]:
                candidates[select_stmt_id] = 1
        
        return candidates

    def _get_dep_stmt_candidates_dims(self, stmt_id: int, allow_same_stmt: bool = False) -> Dict[int, int]:
        """
        获取基于调度维度相似性的候选语句
        
        Args:
            stmt_id: 依赖构建的发起方（WAW的target写数组，WAR的target写数组和RAW的source写数组）所在语句ID
            allow_same_stmt: 是否允许选择同一语句
            
        Returns:
            候选语句ID和相似性情况字典
        """
        
         # TODO: 寻找自身child_stmt_id之外stmt_id为调度变量维维数近似的语句，将依赖放宽至全局（目前仅限于+-1）
        
        candidates = {}
        nstmts = len(self.iterators_stmts)
        depth_current = len(self.iterators_stmts[stmt_id])
        
        for select_stmt_id in range(nstmts):
            if not allow_same_stmt and select_stmt_id == stmt_id:
                continue
                
            depth_candidate = len(self.iterators_stmts[select_stmt_id])
            # 调度变量维数近似（相差+1或0）
            if depth_candidate - depth_current in [-1, 0, 1]:
                candidates[select_stmt_id] = depth_candidate - depth_current
        
        return candidates

    def _check_used_iterators(self, ancestor_array: ArrayData, candidates_iterator: Dict[int, int], candidates_dim: Dict[int, int], select_stmt_id: int, child_stmt_id: int, is_write: bool) -> bool:
        diff = 1 if is_write else -1
        
        if candidates_iterator.get(select_stmt_id, -2) == diff or candidates_dim.get(select_stmt_id, -2) == diff:
            # 计算ancestor的access_functions使用的循环变量数量是否小于等于child的情况
            
            terms_ancestor = self.generate_terms(len(self.iterators_stmts[ancestor_array.array_id[0]]), max_degree)
            
            used_iterators = self._get_used_iterators(ancestor_array.array_access_function, terms_ancestor)
            
            if len(used_iterators) > len(self.iterators_stmts[child_stmt_id]):
                # self.logger.debug(f'More iterators used in ancestor_array {ancestor_array.array_id} than child_array in{child_stmt_id}')
                return True
            else:
                # self.logger.debug(f'No more iterators used in ancestor_array {ancestor_array.array_id} than child_array in{child_stmt_id}')
                pass           
            
        return False

    def _process_dependency_distances(self, prob_coef_const: Dict[int, float]) -> None:
        """处理依赖距离计算"""
        # 处理写依赖距离
        parent_array_distances = defaultdict(lambda: defaultdict(list))  # 用于记录每个源数组已分配的依赖距离
        for child_stmt_id, array_write in self.arrays_write.items():
            if array_write.parent_stmt_id is not None:
                parent_array = self._get_ancestor_array_for_mapping(array_write)
                distance_dep_write, mapping = self._calculate_dependency_distance(
                    parent_array, array_write, parent_array_distances[parent_array.array_id], prob_coef_const
                )
                self.arrays_write[child_stmt_id] = ArrayData(
                    array_id=array_write.array_id, 
                    distance=distance_dep_write, 
                    mapping=mapping, 
                    parent_stmt_id=array_write.parent_stmt_id
                )
                
                parent_array_distances[parent_array.array_id][tuple(sorted(mapping.items()))].append(distance_dep_write)
                
                # self.logger.debug(f"array_write in stmt {child_stmt_id} with dep distance: {self.arrays_write[child_stmt_id]}")
        
        # 处理读依赖距离
        for child_stmt_id, arrays_read in self.arrays_reads.items():
            parent_array_distances_per_child = defaultdict(lambda: defaultdict(list))  # 重置，允许其他重复，但同语句相同parent的读依赖之间依然不能重复（重复是指相同变量选择且相同依赖距离）
            for dep_read_id, array_read in arrays_read.items():
                if array_read.parent_stmt_id is not None:
                    parent_array = self._get_ancestor_array_for_mapping(array_read)
                    distance_dep_read, mapping = self._calculate_dependency_distance(
                        parent_array, array_read, parent_array_distances_per_child[parent_array.array_id], prob_coef_const
                    )
                    self.arrays_reads[child_stmt_id][dep_read_id] = ArrayData(
                        array_id=array_read.array_id,
                        distance=distance_dep_read, 
                        mapping=mapping, 
                        parent_stmt_id=array_read.parent_stmt_id
                    )
                    
                    # 更新已分配距离记录
                    parent_array_distances_per_child[parent_array.array_id][tuple(sorted(mapping.items()))].append(distance_dep_read)
                    
                    # self.logger.debug(f"The {dep_read_id}th array_read in stmt {child_stmt_id} with dep distance: {self.arrays_reads[child_stmt_id][dep_read_id]}")

    def _calculate_dependency_distance(self, parent_array: ArrayData, child_array: ArrayData, used_distances_all: Dict[Tuple[Tuple[int]], List[List[int]]], prob_coef_const: Dict[int, float]) -> Tuple[Optional[List[int]], Optional[Dict[int, int]]]:
        """计算依赖距离"""
        
        index_letters_parent, index_letters_child = self.iterators_stmts[parent_array.array_id[0]], self.iterators_stmts[child_array.array_id[0]]
        
        depth_stmt_child, depth_stmt_parent = len(index_letters_child), len(index_letters_parent)
        
        depth_array_parent = len(parent_array.array_access_function)
        
        terms_parent = self.generate_terms(depth_stmt_parent, max_degree)
        
        # self.logger.debug(f'Generate dep distance:\nparent_array.array_id:{parent_array.array_id}\nchild_array.array_id:{child_array.array_id}\naccess_functions:\n{parent_array.array_access_function}\nindex_letters_parent: {index_letters_parent}\nindex_letters_child: {index_letters_child}\nused_distances_all:\n{used_distances_all}\n')
        
        # 确定需要随机化的变量维度位置
        used_iterators_parent = self._get_used_iterators(parent_array.array_access_function, terms_parent, depth_array_parent)
        
        # 如果没有需要随机化的维度，返回全0距离和空映射
        if not used_iterators_parent:
            self.logger.warning(f'No iterators to randomize due to access_functions {parent_array.array_access_function} from array {parent_array.array_id}, returning None')
            return (0,), bidict({0:0}) # TODO: 目前对于无法生成带循环变量依赖距离的依赖的数组，分配0进行占位
        
        # 构建循环变量映射和填充的距离向量
        mapping = self._build_iterator_mapping(
            index_letters_parent, index_letters_child, used_iterators_parent, depth_stmt_child, depth_array_parent
        )
        
        # 提取当前mapping下的used_distances
        used_distances = used_distances_all.get(tuple(sorted(mapping.items())), [])
        
        mapping_presentation = [(f'x{k}: i{v}(即{index_letters_child[v]})') for k, v in mapping.items()]
        
        # self.logger.debug(f'used_iterators_parent: {used_iterators_parent}\nterms_parent: {terms_parent}\nmapping: {mapping_presentation}\nused_distances:\n{used_distances}\n')
        
        # 生成所有可能的distance组合
        prob_all_possible_distances = self._generate_weights_all_distance_combinations(used_iterators_parent, list(prob_coef_const.keys()))
        
        if parent_array.array_id[0] == child_array.array_id[0]:
            # 如果是同一语句的依赖，调整权重，避免0距离依赖(实际上这就不是依赖了)
            
            # self.logger.debug(f'parent and child arrays are in the same stmt for array {child_array.array_id}')
            
            prob_all_possible_distances[(0,) * len(used_iterators_parent)] = 0
        
        # 步骤3: 根据used_distances调整权重
        prob_all_possible_distances_weighted = self._calculate_weights_for_combinations(prob_all_possible_distances, prob_coef_const, used_distances)
        
        # self.logger.debug(f'Weights after adjusting for array {child_array.array_id}:\npast:\n{prob_all_possible_distances}\nnow:\n{prob_all_possible_distances_weighted}\n')
        
        # 步骤4: 根据调整后的权重进行随机选择
        if sum(prob_all_possible_distances_weighted.values()) > 0:
            dep_distance = random.choices(list(prob_all_possible_distances_weighted.keys()), weights=list(prob_all_possible_distances_weighted.values()))[0]
        else:
            # 如果没有可用组合，回退到原始方法
            self.logger.warning(f"No available unique distance combinations for array {child_array.array_id}, using fallback:\n{prob_all_possible_distances_weighted}\n")
            dep_distance = random.choices(list(prob_all_possible_distances.keys()), weights=list(prob_all_possible_distances.values()))[0]
            
        return dep_distance, mapping

    def _get_used_iterators(self, access_functions: List[List[int]], terms_parent: List[Tuple], depth_array: int = None) -> Tuple[List[int], List[List]]:
        """确定需要随机化的变量维度位置"""
        
        num_columns = len(terms_parent)
        
        if depth_array is None:
            depth_array = len(access_functions)
        
        # 单次遍历找出所有需要的信息
        non_zero_columns = []
        used_terms = set()
        
        for dim_id in range(1, num_columns):
            has_non_zero = False
            for depth_id in range(depth_array):
                if access_functions[depth_id][dim_id] != 0:
                    has_non_zero = True
                    break
            
            if has_non_zero:
                non_zero_columns.append(dim_id)
                used_terms.update(terms_parent[dim_id])
        
        used_iterators = sorted(used_terms)
        
        return used_iterators

    def _build_iterator_mapping(self, index_letters_parent: List[str], index_letters_child: List[str], used_iterators_parent: List[int], depth_stmt_child: int, depth_array_parent: int) -> bidict[int, int]:
        """
        构建变量映射
        
        Returns:
            循环变量i对基项一次项x的一一映射字典
        """
        mapping = bidict({})
        
        # 初始化child所在语句的循环变量的选取权重
        prob_iterators = self._initialize_iterator_weights(depth_stmt_child, depth_array_parent)
        prob_iterators_copy = prob_iterators.copy()
        
        for parent_iterator_id in used_iterators_parent:  # 仅对需要随机化的循环变量维度进行处理
            if parent_iterator_id >= len(index_letters_parent):
                continue
                
            # 调整权重并选择映射
            
            # self.logger.debug(f'prob_iterators: {prob_iterators_copy}\n')
            
            child_iterator_id = self._select_iterator_mapping(parent_iterator_id, index_letters_parent, index_letters_child, depth_array_parent, prob_iterators_copy)
            
            mapping[parent_iterator_id] = child_iterator_id
            prob_iterators_copy[child_iterator_id] = 0  # 避免重复选择
        
        return mapping

    def _initialize_iterator_weights(self, depth_stmt_child: int, depth_array_parent: int) -> Dict[int, float]:
        """初始化变量权重"""
        prob_iterators = {k: 1.0 for k in range(depth_stmt_child)}
        
        # TODO: 调整多余循环变量权重(暂定从最外层开始，即previous_iterator_index之前的循环变量视作多余)
        previous_iterator_index = depth_stmt_child - depth_array_parent
        for iterator in prob_iterators:
            if iterator < previous_iterator_index:  # 检查是否为多余变量：权重除以4
                prob_iterators[iterator] *= 0.25
        
        return prob_iterators

    def _select_iterator_mapping(self, parent_iterator_id: int, index_letters_parent: List[str], index_letters_child: List[str], depth_array_parent: int, prob_iterators_copy: Dict[int, float]) -> int:
        """选择变量映射"""
        # 重置权重
        child_iterator_weights = prob_iterators_copy.copy()
        
        # 确认当前维度对应循环变量并调整权重
        previous_iterator_index = len(index_letters_child) - depth_array_parent
        corresponding_iterator_index = parent_iterator_id + previous_iterator_index
        
        for iterator_id in child_iterator_weights:
            if corresponding_iterator_index == iterator_id:  # 检查是否为对应循环变量：权重乘以2
                child_iterator_weights[iterator_id] *= 2
                
            if index_letters_child[iterator_id] == index_letters_parent[parent_iterator_id]: # 检查是否为相同变量：权重乘以4
                child_iterator_weights[iterator_id] *= 4

        # 根据权重随机选择变量
        child_iterator_id = random.choices(list(child_iterator_weights.keys()), weights=list(child_iterator_weights.values()))[0]
        
        # self.logger.debug(f'parent_iterator_id: {parent_iterator_id}\nchild_iterator_weights: {child_iterator_weights}\nchild_iterator_id: {child_iterator_id}')
        
        return child_iterator_id

    def _generate_weights_all_distance_combinations(self, used_iterators_parent: List[int], value_consts: List[int]) -> Dict[Tuple[int], float]:
        """生成所有可能的距离组合"""
        
        # 为每个需要随机化的位置生成可能的值
        position_values = [value_consts for _ in used_iterators_parent]
        
        prob_all_possible_distances = defaultdict(float)
        for value_combination in product(*position_values):
            distance = [0] * len(value_combination)
            for iterator_id in range(len(used_iterators_parent)):
                distance[iterator_id] = value_combination[iterator_id]
            prob_all_possible_distances[tuple(distance)] = 1.0 # 权重初始化
        
        return prob_all_possible_distances

    def _calculate_weights_for_combinations(self, all_combinations: Dict[Tuple[int], float], prob_coef_const: Dict[int, float], used_distances: List[List[int]]) -> Dict[Tuple[int], float]:
        """计算所有可能组合的权重，已使用的组合权重设为0"""
        
        all_combinations = all_combinations.copy()
        
        if used_distances:
        
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
                    prob_weight *= prob_coef_const[value]
                all_combinations[combination] = prob_weight
        else:
            for combination in all_combinations.keys():
                if all_combinations[combination] == 0:
                    continue
                
                # 计算该组合的原始概率权重（各维度值的概率乘积）
                prob_weight = 1.0
                for value in combination:
                    prob_weight *= prob_coef_const[value]
                all_combinations[combination] = prob_weight
        
        return all_combinations

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
        for array in self.arrays_write.values():
            parent_array = self._get_ancestor_array_for_mapping(array)
            if self.arrays_info[parent_array.array_name] == []:
                params_unused = self._assign_array_dimensions(parent_array, num_params, params_unused)
        
        # 处理读数组
        for arrays in self.arrays_reads.values():
            for array in arrays.values():
                parent_array = self._get_ancestor_array_for_mapping(array)
                if self.arrays_info[parent_array.array_name] == []:
                    params_unused = self._assign_array_dimensions(parent_array, num_params, params_unused)

        # 清理未使用的参数
        for param in params_unused:
            del self.params_info[param]
        
        # 设置参数值
        self._set_parameter_values()
        
        # self.logger.debug(f'params_info:\n{self.params_info}\n')
        # self.logger.debug(f'arrays_info:\n{self.arrays_info}\n')

    def _get_ancestor_array_for_mapping(self, array: ArrayData) -> ArrayData:
        """获取用于维度映射的源数组"""
        if array.parent_stmt_id is not None: # parent_stmt_id优先
            parent_array = self.arrays_write[array.parent_stmt_id]
            while parent_array.parent_stmt_id is not None:
                parent_array = self.arrays_write[parent_array.parent_stmt_id]
            return parent_array
        elif array.array_access_function:
            return array
        else:
            raise ValueError("Array must have either parent_stmt_id or array_access_function defined.")

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

    def generate_info(self, arg_depth: int, arg_nstmts: int, arg_bounds_index: int, arg_prob_bounds_exist: int, arg_narrays_per_dim: int, arg_avg_narrays_read_per_stmt: int, arg_bounds_coef: int, arg_avg_ndeps_read_per_stmt: int, arg_bounds_distance: int, arg_prob_dep_write_exist: int, arg_prob_branch: int) -> Dict[str, Any]:
        '''
        生成完整的loop_properties信息字典
        
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
            Dict: 包含完整loop_properties信息的字典
        '''
        
        self.generate_schedule(arg_depth, arg_nstmts, arg_bounds_index, arg_prob_bounds_exist, arg_prob_branch)  # 首先生成调度
        self.generate_additional_computation(arg_narrays_per_dim, arg_avg_narrays_read_per_stmt, arg_bounds_coef)  # 生成未指定依赖计算
        self.generate_dependency(arg_avg_ndeps_read_per_stmt, arg_bounds_distance, arg_prob_dep_write_exist)  # 生成指定依赖计算
        self.generate_arrays()  # 最后生成参数和部分数组信息

    def _build_json_output(self) -> Dict[str, Any]:
        """构建JSON输出字典"""
        json_info = {}
        
        json_info['params'] = self.params_info
        json_info['max_degree'] = max_degree
        json_info['special_loop_bounds'] = self.special_loop_bounds
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
        for stmt_id, array in self.arrays_write.items():
            if array.parent_stmt_id is not None: # parent_stmt_id优先
                dependency = {
                    'array_id': array.array_id, 
                    'category': 'write', 
                    'distance': array.distance, 
                    'mapping': dict(array.mapping), 
                    'parent_stmt_id': array.parent_stmt_id
                }
                dependencies[stmt_id].append(dependency)
            else:
                additional_computation = {
                    'array_id': array.array_id, 
                    'array_name': array.array_name, 
                    'array_type': 'write', 
                    'array_access_function': array.array_access_function
                }
                additional_computations[stmt_id].append(additional_computation)
                
        # 处理读数组
        for stmt_id, arrays_read in self.arrays_reads.items():
            for array_read in arrays_read.values():
                if array_read.parent_stmt_id is not None: # 同理
                    dependency = {
                        'array_id': array_read.array_id, 
                        'category': 'read', 
                        'distance': array_read.distance, 
                        'mapping': dict(array_read.mapping), 
                        'parent_stmt_id': array_read.parent_stmt_id
                    }
                    dependencies[stmt_id].append(dependency)
                else:
                    additional_computation = {
                        'array_id': array_read.array_id, 
                        'array_name': array_read.array_name, 
                        'array_type': 'read', 
                        'array_access_function': array_read.array_access_function
                    }
                    additional_computations[stmt_id].append(additional_computation)
        
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

        self.generate_info(
            arg_depth, arg_nstmts, arg_bounds_index, arg_prob_bounds_exist,
            arg_narrays_per_dim, arg_avg_narrays_read_per_stmt, arg_bounds_coef, arg_avg_ndeps_read_per_stmt,
            arg_bounds_distance, arg_prob_dep_write_exist, arg_prob_branch
        )
    
        file_content = self._build_json_output()
    
        file_destination = os.path.join(json_input_path, self.filename)
        with open(file_destination, 'w') as fp:
            json.dump(file_content, fp, indent=4)
            
        # self.logger.debug(f'Random json generation done in "{file_destination}".\n')
        return file_destination