import os
from dataclasses import dataclass
from typing import List, Dict, Tuple, Set, Union, Optional

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

depth_min = 1

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
        self.sequence = sequence
        self.content = content 
        self.schedule_dim = schedule_dim
        self.stmt_id = stmt_id
        self.children = []

class Schedule_tree:
    def __init__(self):
        self.root = Schdule_node(-1)
        self.content_vars: dict = None
        self.content_stmts: dict = None
        self.code = []
    
    def add_paths(self, paths):
        for id, path in enumerate(paths):
            current_node = self.root
            if len(path) % 2 == 0:
                path.append(float("inf")) # auto-fill the last dim with schedule "inf"
            for i in range(0, len(path), 2):
                if (i < len(path) - 2 and path[i + 2] == -1) or i == len(path) - 1:
                    new_node = Schdule_node(path[i], 'stmt' + str(id), i, id)
                    current_node.children.append(new_node)
                    break
                else:
                    for child in current_node.children:
                        if child.sequence == path[i] and child.content == path[i+1]:
                            current_node = child
                            break
                    else:
                        new_node = Schdule_node(path[i], path[i+1], i, id)
                        current_node.children.append(new_node)
                        current_node = new_node                    

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
    
    def extract_paths(self, node = None):
        if not node:
            node = self.root
            current_path = []
        else:
            current_path = [node.sequence, node.content]
            
        if not node.children:
            return [[node.sequence, node.content]]
        
        paths = []
        for child in node.children:
            for sub_path in self.extract_paths(child):
                path = current_path + sub_path
                paths.append(path)
            
        return paths
        
    def standardize_node(self, node = None, var_id = 0):
        '''reorder sequence (constants) and rename content (variables)'''
        if not node:
            node = self.root
        
        node.children.sort(key = lambda x: x.sequence) # reorder to get actual schedule
        
        for i, child in enumerate(node.children):
            child.sequence = i
            if child.children:
                child.content = indexed_letters_sequence[var_id] # rename iterator
                var_id = self.standardize_node(child, var_id + 1)
            
        return var_id
        
    def extract_code(self, node = None, level = -1):
        '''preparation for printing SCoP'''
        if node:
            self.code.append('    ' * level + str(node.content))
        else:
            node = self.root
            
        if node.children and not level == -1:
            self.code[-1] += ' {'
        for child in node.children:
            self.extract_code(child, level + 1)
        if node.children and not level == -1:
            self.code.append('    ' * level + '}')
             
        return self.code

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
                node.content = self.content_vars[node.content]
        else:
            node = self.root
            
        for child in node.children:
            self.update_content(child)