import re
import os
import numpy as np
import tree_sitter as ts
import argparse as ap
import pandas as pd
import logging
import tree_sitter_c as tsc
from extraction_tools import extraction_tools
import datetime

class loop_transformation_classifiers:
    def __init__(self, stmts, schedules, loop_types, c_codelet) -> None:
        
        self.c_codelet = c_codelet.replace(';;', ';') # for pluto+cloog
        # print(schedules)
        self.answer = [0] * 9
        self.context = stmts # context of stmts
        self.schedules = schedules # 2 * self.nstmts * var dim in src
        self.loop_types = loop_types
        self.d = (len(self.schedules[0][0]) - 1) // 2       
        self.nstmts = len(self.schedules[0])
        self.consts = np.zeros([2, self.nstmts, self.d + 1], dtype = int) # 2 * self.nstmts * var dim in src
        self.coefs = np.zeros([self.nstmts, self.d, self.d], dtype = int) # self.nstmts * var dim in dst * var dim in src
        self.var_neg = np.zeros([self.nstmts, self.d, self.d])    

    def check_fusion_distribution(self, i, check_list, flags):
        '''
        i: dimension\n
        check_list: groups of statements (share the same loop)\n
        flags: distinguish between fusion and distribution
        '''
        
        
        if i >= np.shape(self.consts)[2]:
            # print("over")
            return flags
        
        # print(i)
        
        if set(self.consts[0, check_list, i]) == set(self.consts[1, check_list, i]) == {0}:
            flags = self.check_fusion_distribution(i + 1, check_list, flags)
            if flags == [1, 1]:
                # print("fusion + distribution")
                return flags
        else:
            co_loop = [[],[]]

            for j in set(self.consts[0, check_list, i]):
                co_loop[0].append(np.where(self.consts[0, check_list, i] == j)[0].tolist())
            for j in set(self.consts[1, check_list, i]):
                co_loop[1].append(np.where(self.consts[1, check_list, i] == j)[0].tolist())

            # print(co_loop[0])
            # print(co_loop[1])

            if len(co_loop[0]) < len(co_loop[1]):
                flags[1] = 1
                # print("distribution")
            elif len(co_loop[0]) > len(co_loop[1]):
                flags[0] = 1
                # print("fusion")
            elif not co_loop[0] == co_loop[1] and set([str(x) for x in co_loop[0]]) != set([str(x) for x in co_loop[1]]):
                # print("fusion + distribution")
                return [1, 1]
            
            for group_src in co_loop[0]:
                for group_dst in co_loop[1]:
                    if len(group_src) - 1 and len(group_dst) - 1:
                        new_check_list = list(set(group_src) & set(group_dst))
                        if len(new_check_list) - 1:
                            # print(f'new_check_list:{new_check_list}\n')
                            flags = self.check_fusion_distribution(i + 1, new_check_list, flags) 
                            if flags == [1, 1]:
                                # print("fusion + distribution")
                                return flags
                
        return flags

    def check_nstmts_after(self):
        
        # c parser from tree-sitter
        C_LANGUAGE = ts.Language(tsc.language())
        c_parser = ts.Parser(C_LANGUAGE)

        c_query_text = '''
        (assignment_expression [left: (subscript_expression)@1 right: (subscript_expression)@2])
        '''
        c_query = C_LANGUAGE.query(c_query_text)

        c_tree = c_parser.parse(bytes(self.c_codelet, "utf8"))
        c_tree_root = c_tree.root_node

        # c_capture: list[Node, str]
        c_capture = c_query.captures(c_tree_root)
        # for node, alias in c_capture:
        #     print(node.type, alias)
        return len(c_capture)

    def check_tiling(self):
        for i in range(self.nstmts):
            for j in range(len(self.schedules[1][i])):
                if "zT" in self.schedules[1][i][j]:                   
                    self.answer[1] = 1 # "loop tiling"
                    # print("tiling")
                    return
                    

    def loop_transformation_analysis(self):
        
        self.check_tiling()
              
        self.loop_types[1] = [[element_type for element_schedule, element_type in zip(row_scheulde, row_type) if "zT" not in element_schedule] for row_scheulde, row_type in zip(self.schedules[1], self.loop_types[1])]      
        self.schedules[1] = [[element for element in row if "zT" not in element] for row in self.schedules[1]]
        
        
        # print(self.schedules[1])
        # print(self.loop_types[1])
        
        min_length_schedule = min(len(row) for row in self.schedules[1])
        
        self.schedules[1] = [row[:min_length_schedule] for row in self.schedules[1]]
        self.loop_types[1] = [row[:min_length_schedule] for row in self.loop_types[1]]
        
        # print(self.schedules[1])
        # print(self.loop_types[1])
        
        for i in range(self.d): # for var dim in dst

            for j in range(self.nstmts): # for stmts in src, also in dst
                
                ### 加入loop和scalar信息辅助判断
                
                # print(i)
                # print(self.schedules[1][j])
                # print(self.loop_types[1][j])
                
                if not self.loop_types[1][j][2 * i] == 'scalar':
                    for stmt in range(self.nstmts):
                        self.schedules[1][stmt].insert(2 * i, '0') # add const dim
                        self.loop_types[1][stmt].insert(2 * i, "scalar")
                
                if 2 * i + 1 < len(self.loop_types[1][j]):
                    if self.loop_types[1][j][2 * i + 1] == 'scalar': 
                        # scalar found in var dim in one stmt, check all
                        if all([self.loop_types[1][stmt][2 * i + 1] == 'scalar' for stmt in range(self.nstmts)]): 
                            # scalar found in var dim in all stmts, drop!
                            seq = 1
                            while 2 * i + 1 + seq < len(self.loop_types[1][j]):
                                if any([self.loop_types[1][stmt][2 * i + 1 + seq] == 'loop' for stmt in range(self.nstmts)]):
                                    # count scalar until meeting loop
                                    tmp_consts = dict()
                                    for stmt in range(self.nstmts):
                                        tmp_consts[stmt] = tuple(self.schedules[1][stmt][2 * i: 2 * i + 1 + seq])
                                    
                                    # print(tmp_consts)
                                    
                                    sorted_consts = sorted(set(tmp_consts.values()))
                                    
                                    # print(sorted_consts)
                                    
                                    for stmt in range(self.nstmts):
                                        # print(sorted_consts.index(tmp_consts[stmt]))
                                        self.schedules[1][stmt][2 * i] = str(sorted_consts.index(tmp_consts[stmt]))
                                        for _ in range(seq):
                                            del self.schedules[1][stmt][2 * i + 1]
                                            del self.loop_types[1][stmt][2 * i + 1]
                                
                                    for k in range(self.d): # for var dim in src
                                        if not self.schedules[0][j][2 * k + 1] == "0" and self.schedules[0][j][2 * k + 1] in self.schedules[1][j][2 * i + 1]:
                                            self.coefs[j][i][k] = 1 # 后续考虑加上系数
                                        elif self.schedules[0][j][2 * k + 1][0] == "-" and self.schedules[0][j][2 * k + 1][1:] in self.schedules[1][j][2 * i + 1]:
                                            self.coefs[j][i][k] = 1
                                            self.var_neg[j][i][k] = -1
                                    
                                    break
                                
                                seq += 1
                    else:
                        for k in range(self.d): # for var dim in src
                            if not self.schedules[0][j][2 * k + 1] == "0" and self.schedules[0][j][2 * k + 1] in self.schedules[1][j][2 * i + 1]: # find same iterator
                                self.coefs[j][i][k] = 1 # 后续考虑加上系数
                            elif self.schedules[0][j][2 * k + 1][0] == "-" and self.schedules[0][j][2 * k + 1][1:] in self.schedules[1][j][2 * i + 1]: # find same negative iterator 
                                self.coefs[j][i][k] = 1
                                self.var_neg[j][i][k] = -1
                                
                # print(self.schedules[1][j])
                # print(self.loop_types[1][j])    

        # print(self.schedules)
        # print(len(self.loop_types[1][0]), len(self.loop_types[0][0]))

        if len(self.loop_types[1][0]) == len(self.loop_types[0][0]) - 1:
            for stmt in range(self.nstmts):
                self.schedules[1][stmt].append('0') # add const dim
                self.loop_types[1][stmt].append("scalar")
        elif len(self.loop_types[1][0]) == len(self.loop_types[0][0]):
            pass
        else:
            self.answer[8] = 1 # other transformation
            return self.answer

        self.schedules = np.array(self.schedules, dtype = object)
        # print(self.schedules)
        org_coefs = ~(self.schedules[0][:,1::2] == '0')
        # print(org_coefs)
        
        for stmt in range(self.nstmts):
            for i in range(0, len(self.schedules[1][0]), 2):
                if self.loop_types[1][stmt][i] != 'scalar':
                    if self.schedules[1][stmt][i - 1] == '0':
                        self.schedules[1][stmt][i - 1] = self.schedules[1][stmt][i]
                        self.schedules[1][stmt][i] = '0'
                        self.loop_types[1][stmt][i - 1] = 'loop'
                        self.loop_types[1][stmt][i] = 'scalar'
                    elif i < len(self.schedules[1][0]) - 1 and self.schedules[1][stmt][i + 1] == '0':
                        self.schedules[1][stmt][i + 1] = self.schedules[1][stmt][i]
                        self.schedules[1][stmt][i] = '0'
                        self.loop_types[1][stmt][i + 1] = 'loop'
                        self.loop_types[1][stmt][i] = 'scalar'
                    else:
                        # print(i, self.schedules[1][stmt], self.loop_types[1][stmt])
                        self.answer[8] = 1 # other transformation
                        return self.answer
        
        self.consts[0] = self.schedules[0][:, ::2].astype(int)
        self.consts[1] = self.schedules[1][:, ::2].astype(int)

        
        # print(self.coefs)

        if not self.nstmts == self.check_nstmts_after():
            self.answer[8] = 1 # "other loop transformation"
            # print("other")

        if (self.schedules[0] == self.schedules[1]).all() and self.answer[1] == 0 and self.answer[8] == 0:
            self.answer[0] = 1 # "no loop transformation"
            # print("no loop transformation")
        else:
            for i in range(self.nstmts):
                if not (np.diag(self.coefs[i]) == org_coefs[i]).all():
                    # print(i)
                    # print(self.coefs[i])
                    # print(org_coefs[i])
                    self.answer[2] = 1 # "loop interchange"
                    # print("interchange")
                    break

            if (self.coefs.sum(axis = 2).T > 1).any():
                self.answer[3] = 1 # "loop skewing"
                # print("skew")

            if any(['-' in var for var in np.extract(self.coefs.sum(axis = 2).T == 1, self.schedules[1][:, 1::2])]):
                self.answer[6] = 1 # "loop reverse"
                # print("reverse")
            elif ((self.coefs.sum(axis = 2).T == 1) * (self.var_neg.sum(axis = 2).T < 0)).any():
                self.answer[6] = 1 # "loop reverse"
                # print("reverse")
                
            if not all([re.findall(r'[+-][0-9]+$', var) == [] for var in self.schedules[1][:, 1::2].reshape(-1)]):
                self.answer[7] = 1 # "loop shift"
                # print("shift")  
                
            # print('schedules_src:\n', self.schedules[0])
            # print('schedules_dst:\n', self.schedules[1])
            # print('coefs:(var_dim_dst, self.nstmts, var_dim_src)\n', self.coefs)
            # print('consts:\n', self.consts)

            flags = [0, 0]
            check_list = [i for i in range(self.nstmts)]
            self.answer[4:6] = self.check_fusion_distribution(0, check_list, flags) 

        
            
        return self.answer

    

if __name__ == "__main__":
    
    TODAY = datetime.datetime.now().strftime('%Y%m%d')
    
    parser_description = '''
    Distinguish types of loop transformations applied by pluto-0.11.4. Here are type could be identified now:
    1. no loop transformation
    2. loop tiling
    3. loop intertchange
    4. loop skewing
    5. loop fusion
    6. loop distribution
    7. loop reverse
    8. loop shifting
    9. other loop transformation
    '''
    
    parser = ap.ArgumentParser(parser_description)
    parser.add_argument("-fo", dest="folder_stdout_path", help="path of the folder of stdout info", type=str, default='./stdout')
    parser.add_argument("-fc", dest="folder_code_path", help="path of the folder of code after transformation", type=str, default='./pluto_code')
    parser.add_argument("-so", dest="suff_out", help="suffix of the file which contains stdout", type=str, default='.stdout')
    parser.add_argument("-sc", dest="suff_code", help="suffix of the file which contains code after transformation", type=str, default='.pluto.c')
    parser.add_argument("-o", dest="output", help="output of the classification answer", type=str, default=f'./classification_output_{TODAY}.csv')
    args = parser.parse_args()
      
    folder_stdout_path = args.folder_stdout_path # ./stdout
    folder_code_path = args.folder_code_path # ./pluto_code
    suffix_stdout = args.suff_out # '.stdout'
    suffix_code = args.suff_code # '.pluto.c'
    
    log_path = 'exceptions.log'
    os.system(f'echo "">{log_path}')
    
    record = []
    for file_name in os.listdir(folder_stdout_path):
        if file_name.endswith(suffix_stdout):
            if os.path.getsize(f'{folder_stdout_path}/{file_name}'):
                record.append(file_name[:-len(suffix_stdout)])
            
    answers = []
    for i in range(len(record)):
        file_name = record[i]
        # print("id:" + str(i) + ", name:" + str(file_name))
        tool = extraction_tools()
        try:
            _, stmts, _, schedules, _, loop_types = tool.extract_stdout(file_name + suffix_stdout, folder_stdout_path)
            c_codelet = tool.extract_codelet(file_name + suffix_code, folder_code_path, 1)
        
            task = loop_transformation_classifiers(stmts, schedules, loop_types, c_codelet)
            answer = task.loop_transformation_analysis()
            answers.append([file_name] + answer)
            # print("pass")
            
        except Exception as e:
            
            logging.basicConfig(filename=log_path, level=logging.ERROR)
            
            logging.exception('发生异常：')
            # print("fail")
            
    data_columns = ['file_name', 'no loop transformation', 'loop tiling', 'loop interchange', \
        'loop skewing', 'loop fusion', 'loop distribution', 'loop reverse', 'loop shifting', \
        'other loop transformation']
    data = pd.DataFrame(answers, index = None, columns = data_columns)
    data.to_csv(args.output)
        
    
    