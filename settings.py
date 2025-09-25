import os
from dataclasses import dataclass
from typing import List, Dict, Tuple, Set, Union, Optional
import math
import random
from collections import deque, defaultdict

PROJECT_PATH = os.path.dirname(os.path.abspath(__file__))
# DATASET_PATH = "/home/zyj/Data0/Dataset_fuzzing" # PROJECT_PATH replace if needed
DATASET_PATH = PROJECT_PATH
json_input_path = os.path.join(DATASET_PATH, 'input')
target_path = os.path.join(DATASET_PATH, 'poly_code')
kernel_list = os.path.join(target_path, 'kernel_list')

indexed_array_names = 'ABCDEFGHIJKLMNOPQRSTUVWXYZ'
indexed_letters_sequence = 'ijklmnopqrstuvwxyzabcdefgh'
indexed_parameter_names = ['PB_N', 'PB_M', 'PB_L', 'PB_P', 'PB_Q']
dimension_names = 'xyzvw'

params_range = [range(4, 9), range(6, 11), [3, 4, 5], [8, 9, 10]]
# params_multiplier = [1e7, 1e3, 1e2, 1e1]
params_multiplier = [1e3, 10, 10]
# params_multiplier = [10, 1, 1]

# 固定参数 （TODO 部分调整为可变参数）
depth_min = 1 # 最小循环深度
max_degree = 2 # 最高次数（1=线性，2=二次）
enable_multi_terms = True # 是否允许多基项
max_terms_per_func = 3 # 每个函数最多基项数（若启用多基项）

header_string = r'''# if !defined(DATA_TYPE_IS_FLOAT) && !defined(DATA_TYPE_IS_DOUBLE)
#  define DATA_TYPE_IS_DOUBLE
# endif
#ifdef DATA_TYPE_IS_FLOAT
#  define DATA_TYPE float
#  define DATA_PRINTF_MODIFIER "%f "
#  define SCALAR_VAL(x) x##f
#  define SQRT_FUN(x) sqrtf(x)
#  define EXP_FUN(x) expf(x)
#  define POW_FUN(x,y) powf(x,y)
# endif
#ifdef DATA_TYPE_IS_DOUBLE
#  define DATA_TYPE double
#  define DATA_PRINTF_MODIFIER "%lf "
#  define SCALAR_VAL(x) x
#  define SQRT_FUN(x) sqrt(x)
#  define EXP_FUN(x) exp(x)
#  define POW_FUN(x,y) pow(x,y)
# endif
# endif
'''

@dataclass(eq=True, frozen=True)
class ArrayData:
    array_name: Union[list, str] = None
    array_access_function: Tuple[Tuple] = None
    distance: Tuple = None
    write_stmt_id: int = None

@dataclass
class Arrays_total:
    arrays_write: Dict[int, ArrayData] = None
    arrays_read: Dict[int, List] = None
    
    def check_array_dependence(self, stmt_id: int, check_list: Set[int] = set()) -> Union[bool, List]:
        array_data = self.arrays_write[stmt_id]
        # print(f'[zyj-debug] check_array_dependence:\n array_data: {array_data}\n')
        if array_data.write_stmt_id == None:
            if not array_data.array_access_function:
                return [stmt_id, 0]
            else:
                return -1 # find available dest
            
        elif stmt_id in check_list:
            if not array_data.array_access_function:
                return [stmt_id, 1]
            else:
                # print(f'[zyj-debug] Stmt {stmt_id}: Drop the dependence info since get cycle dep here\n')
                self.arrays_write[stmt_id] = ArrayData(array_name = array_data.array_name, array_access_function = array_data.array_access_function)
                # print(f'[zyj-debug] check_array_dependence:\n new array_data: {self.arrays_write[stmt_id]}\n')
                return -2 # have to drop dependence  
        else:
            check_list.add(array_data.write_stmt_id)
            check_output = self.check_array_dependence(array_data.write_stmt_id, check_list)
            if check_output != -1:
                if check_output != -2:
                    if not array_data.array_access_function:
                        return [stmt_id, 1]
                    else:
                        # print(f'[zyj-debug] Stmt {stmt_id}: Drop the dependence info since dependence is not available here\n')
                        self.arrays_write[stmt_id] = ArrayData(array_name = array_data.array_name, array_access_function = array_data.array_access_function)
                        # print(f'[zyj-debug] check_array_dependence:\n new array_data: {self.arrays_write[stmt_id]}\n')
                        return -2 # have to drop dependence           
            elif array_data.array_access_function:
                # print(f'[zyj-debug] Stmt {stmt_id}: Drop the additional computation info since get available dependence here\n')
                self.arrays_write[stmt_id] = ArrayData(distance = array_data.distance, write_stmt_id = array_data.write_stmt_id)
                # print(f'[zyj-debug] check_array_dependence:\n new array_data: {self.arrays_write[stmt_id]}\n')
                
            return -1 # find available dependence path

class Schdule_node:
    def __init__(self, sequence: Optional[Union[int, str]] = None, content: Optional[Union[int, str]] = None, schedule_dim: Optional[int] = None, stmt_id: Optional[int] = None):
        self.sequence = sequence # 常量维序号
        self.content = content # 语句内容
        self.schedule_dim = schedule_dim # 维度
        self.stmt_id = stmt_id # 语句id（和调度无关）
        self.parent = None
        self.children = []
        
        # conditional branch
        self.cond = False # 是否拥有if分支
        self.cond_prob = 0.0   # if分支出现概率
        self.branch = defaultdict(list) # 分支信息

class Schedule_tree:
    def __init__(self):
        self.root = Schdule_node(-1)
        self.depth = 0
        self.content_vars: dict = None
        self.content_stmts: dict = None
    
    def add_paths(self, paths, branchs=None):
        for id, path in enumerate(paths):
            current_node = self.root
            if len(path) % 2 == 0:
                path.append(float("inf")) # auto-fill the last dim with schedule "inf"
            for i in range(0, len(path), 2):
                if (i < len(path) - 2 and path[i + 2] == -1) or i == len(path) - 1: # 提前结束或最后一维->stmt
                    new_node = Schdule_node(path[i], 'stmt' + str(id), i, id)
                    self.depth = max(self.depth, i // 2)
                    current_node.children.append(new_node)
                    if branchs:
                        # print(branchs[id], i)
                        current_node.branch[branchs[id][i // 2]].append(new_node)
                        if branchs[id][i // 2] != 'b3':
                            current_node.cond = True
                    new_node.parent = current_node
                    break
                else:
                    for child in current_node.children:
                        if child.sequence == path[i] and child.content == path[i+1]:
                            current_node = child
                            break
                    else:
                        new_node = Schdule_node(path[i], path[i+1], i, id)
                        current_node.children.append(new_node)
                        if branchs:
                            # print(branchs[id], i)
                            current_node.branch[branchs[id][i // 2]].append(new_node)
                            if branchs[id][i // 2] != 'b3':
                                current_node.cond = True
                        new_node.parent = current_node
                        current_node = new_node

    def calculate_weighted_cond_prob(self, child_count, base_prob=0.5):
        """基于子节点数量计算if分支出现的加权概率"""
        # # 对数加权
        # weight = math.log1p(child_count - 1) / math.log1p(5)  # 以log(1+5)为基
        # weighted_prob = base_prob + (1 - base_prob) * (1 - 1 / (1 + weight)) # 大致为1：50%，2：58%，3：64%，...，6：75%
        # 指数加权
        weighted_prob = 1 - (1 - base_prob) * 2 ** (1 - (child_count + 3) / 4) # 以2为底，大致为1：50%，2：58%，3：65%，...，5：75%
        print(base_prob, child_count, weighted_prob)
        # weighted_prob = base_prob
        return weighted_prob

    def split_children_into_branch(self, node):
        """
        对于if分支，将子节点分成连续的3组（组1非空），分别为if-true分支部分，if-false分支部分和outside-if部分。\n
        当前实现：在有序子节点列表中插入两个分隔符
        """
        if not node.children:
            return
        
        if node.cond:
        # 随机选择两个分割点（确保组1至少有1个节点）
            split1 = random.randint(1, len(node.children))  # if-true分支部分结束位置
            split2 = random.randint(split1, len(node.children))  # if-false分支部分结束位置
            
            node.branch['b1'] = node.children[:split1]
            node.branch['b2'] = node.children[split1:split2]
            node.branch["b3"] = node.children[split2:]
        else:
            node.branch["b3"] = node.children

    def propagate_cond_attribute(self, base_prob=0.5, decay_factor=0.25):
        """
        传播属性'if分支'的核心算法
        规则：
        1. 只有有子节点的节点才计算概率
        2. 概率基于子节点数量加权
        3. 每有一个子节点有'a'，父节点概率乘以衰减系数
        """
        
        # 第一阶段：后序遍历计算所有叶节点的初始标记
        stack = [(self.root, False)]
        post_stack = []
        
        while stack:
            node, visited = stack.pop()
            if visited:
                if not node.children:  # 叶节点
                    node.cond_prob = base_prob
                else:
                    post_stack.append(node)
                    
            else:
                stack.append((node, True))
                for child in reversed(node.children):
                    stack.append((child, False))
        
        # 第二阶段：从叶节点到根节点的反向传播
        for node in post_stack:
            
            # 计算基础概率（子节点概率平均值）
            node.cond_prob = sum(child.cond_prob for child in node.children) / len(node.children)
            
            # 计算衰减因子（每个有flag的子节点乘以decay）
            decay = 1.0
            for child in node.children:
                if child.cond:
                    decay *= decay_factor
            # print(node.content, node.cond_prob, decay)
            # 计算加权概率
            node.cond_prob = self.calculate_weighted_cond_prob(
                len(node.children), 
                node.cond_prob * decay
            )
            # print(decay)
            
            if node == self.root:
                node.con_prob = 0 #TODO 暂时不考虑根节点即最外层的if分支
            
            # 决定当前节点是否标记flag
            node.cond = random.random() < node.cond_prob
            self.split_children_into_branch(node)

    def check_tree(self, node = None, level = -1):
        if node:
            if not isinstance(node.sequence, int): # check const in even dim of schedule
                if not (isinstance(node.sequence, str) and node.sequence.isdigit()):
                    error_msg = f"The {node.schedule_dim}th dimension in schedule {node.stmt_id} is not an available number"
                    raise ValueError(error_msg) 
                else:
                    node.sequence = int(node.sequence)
                    
            if not node.content:
                if not isinstance(node.content, str) or len(node.content) > 1: # check var in odd dim of schedule
                    error_msg = f"[The {node.schedule_dim + 1}th dimension in schedule {node.stmt_id} is not an available vairable"
                    raise ValueError(error_msg)
        else:
            node = self.root
            
        for child in node.children:
            self.check_tree(child, level + 1)
            
    def extract_tree(self, flag, node = None, level = 0):
        '''preparation for printing tree structure in initial, with branch or in code'''
        prints = []
        prefix = '    ' * level
        
        if not node:
            node = self.root
            
        if flag == 'init':
            prints.append(f'{prefix}{node.sequence}')
        elif flag == 'branch':
            cond_prob = f" (Prob: {node.cond_prob:.2f})" if hasattr(node, 'cond_prob') else ""
            prints.append(f'{prefix}{node.sequence} {cond_prob}')
        elif flag == 'code':
            prints.append(f'{prefix}{node.content}')
        
        if flag == 'code' and node.children and not level == 0:
            prints[-1] += ' {'
            
        if node.cond and flag != 'init':
            prints.append(f'{prefix}    if')
            if flag == 'code' and not level == 0:
                prints[-1] += f' ({node.cond}) {{'
                
            for child in node.branch['b1']:
                prints.extend(self.extract_tree(flag, child, level + 2))
            
            if flag == 'code' and not level == 0:
                prints.append(f'{prefix}    }}')
            
            if node.branch['b2']:
                prints.append(f'{prefix}    else')
                if flag == 'code' and not level == 0:
                    prints[-1] += ' {'
                
                for child in node.branch['b2']:
                    prints.extend(self.extract_tree(flag, child, level + 2))
                    
                if flag == 'code' and not level == 0:
                    prints.append(f'{prefix}    }}')
            
            if node.branch['b3']:
                for child in node.branch['b3']:
                    prints.extend(self.extract_tree(flag, child, level + 1))
        else:
            for child in node.children:
                prints.extend(self.extract_tree(flag, child, level + 1))

            
        if flag == 'code' and node.children and not level == 0:
            prints.append(f'{prefix}}}')
            
        return prints
    
    def extract_stmt_infos(self, node = None, branch_id=None):
        if not node:
            node = self.root
            current_path = []
            current_branch = []
        else:
            current_path = [node.sequence, node.content]
            current_branch = [branch_id] # 默认是b3
            
        if not node.children:
            return [current_path], [current_branch]
        
        paths = []
        branchs = []
        for id in node.branch:
            for child in node.branch[id]:
                sub_paths, sub_branchs = self.extract_stmt_infos(child, id)
                for sub_path, sub_branch in zip(sub_paths, sub_branchs):
                    # print('sub:', sub_path, sub_branch)
                    path = current_path + sub_path
                    branch = current_branch + sub_branch
                    paths.append(path)
                    branchs.append(branch)
        # print(paths, branchs)
        return paths, branchs
        
    def standardize_node(self, node = None, var_id = 0):
        '''reorder sequence (constants) and rename content (variables)'''
        if not node:
            node = self.root
        
        node.children.sort(key = lambda x: x.sequence) # 调度根据序号重排序
        
        for i, child in enumerate(node.children):
            child.sequence = i
            if child.children:
                child.content = indexed_letters_sequence[var_id] # 对变量重命名
                var_id = self.standardize_node(child, var_id + 1)
            
        return var_id

    def update_tree(self, content_vars, content_stmts):
        '''schedule -> code all'''
        self.content_vars = content_vars
        self.content_stmts = content_stmts
        # print(f'[zyj-debug] content_vars: {self.content_vars}\n')
        # print(f'[zyj-debug] content_stmts: {self.content_stmts}\n')
        self.update_content()

    def update_content(self, node = None):
        '''schedule -> code by node'''
        if node:
            # print(f'[zyj-debug] node.content: {node.content}\n')
            
            if node.content[:4] == 'stmt':
                node.content = self.content_stmts[int(node.content[4:])]
            else:
                expr, lb, ub = self.content_vars[node.content]
                if node.cond:
                    # TODO 其他条件
                    # maths_symbols = ['+', '-', '*']
                    # random_maths_symbols = [random.choice(maths_symbols) for _ in range(num_of_calculations)]
                    thershold = params_multiplier[self.depth] * params_range[self.depth][0]
                    condition = random.randint(int(thershold * 0.25), int(thershold * 0.75))
                    node.cond = f'{node.content} > {condition}'
                node.content = expr
                
        else:
            node = self.root
            
        for child in node.children:
            self.update_content(child)