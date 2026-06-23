from operator import ge
import re
import numpy as np

class extraction_tools:
    def __init__(self) -> None:
        pass
    
    def get_info(self, stdout_path):
        try :
            iterators, stmts, deps, schedules, _, loop_types = self.extract_stdout_from_file(stdout_path) # 目前尚未用到cst信息，先不提取
        except ValueError as e:
            raise e

        if (not iterators) or (not stmts) or (not schedules):
            raise ValueError("info extract fails")

        nstmts = len(stmts)
        # print(nstmts)
        arrays_write = [[] for _ in range(nstmts)]
        arrays_read = [[] for _ in range(nstmts)]
        for dep in deps:
            # print(dep)
            s2t = re.search(r'from S(\d+) to S(\d+);', dep[0], re.DOTALL) # extract source and target stmt for dep
            if s2t:
                source_id, target_id = s2t.group(1, 2)
                # print(source_id, target_id, dep[1][13:-1])
                dep_type = re.findall(r'Type: ([WR]A[WR])', dep[0], re.DOTALL)[0] # extract dep property
                
                if dep_type[-1] == 'W':
                    arrays_write[int(source_id) - 1].append(dep[1][13:-1]) # on variable: A
                else:
                    arrays_read[int(source_id) - 1].append(dep[1][13:-1])
                    
                if dep_type[0] == 'W':
                    arrays_write[int(target_id) - 1].append(dep[1][13:-1]) # on variable: A
                else:
                    arrays_read[int(target_id) - 1].append(dep[1][13:-1])
            else:
                raise ValueError(f"Dependence extraction failed in {dep}") 

        niterators = len(iterators)
        info = []
        max_depth = (len(schedules[0][0]) - 1) // 2 
        for i in range(nstmts):
            
            # print(stmts[i])
            # get indexes
            indexes_write = re.findall(r'\w+(?:\[[^\[\]]+\])+(?=[\+\-\*/]?=)', stmts[i], re.DOTALL) # extract array before = (considering += etc.)
            indexes_read = re.findall(r'\w+(?:\[[^\[\]]+\])+', stmts[i], re.DOTALL) # extract all arrays
            if indexes_write and not re.search(r'[\+\-\*/]=', stmts[i], re.DOTALL): # extract read array if exists += etc.
                indexes_read = indexes_read[1:]
            
            # print(indexes_write, indexes_read)
            # print(schedules[0][i])
            
            # cst to matrix: todo: if needed
            
            # schedule to matrix
            iterators_stmt = dict()
            coefs_schedule = np.zeros([2 * max_depth + 1, niterators + 1], dtype = int)
            coefs_schedule[0][niterators] = schedules[0][i][0] # dim 0
            for j in range(max_depth): # for iterator dim in src
                coefs_schedule[2 * j + 2][niterators] = schedules[0][i][2 * j + 2] # dim 2(d-1) + 2
                # print(schedules[0][i][2 * j + 1])
                if not schedules[0][i][2 * j + 1] == "0": # dim 2(d-1)+1
                    for k in range(niterators):
                        if iterators[k] in schedules[0][i][2 * j + 1]:
                            coefs_schedule[2 * j + 1][k] = 1 # todo: only single iterator and coef 1 now
                            iterators_stmt[iterators[k]] = j
            
            schedule = np.array2string(coefs_schedule, separator = ',').replace(' ', '')
            schedule_const = [np.array2string(coefs_schedule[2 * i], separator = ',').replace(' ', '') for i in range(max_depth + 1)]
            schedule_iterator = [np.array2string(coefs_schedule[2 * i + 1], separator = ',').replace(' ', '') for i in range(max_depth)]
            
            
            # indexes to matrix
            indexes_read_id_dep, coefs_indexes_dep_read, coefs_indexes_nodep_read = self.indexes_coef_compute(arrays_read[i], iterators_stmt, indexes_read)
            indexes_write_id_dep, coefs_indexes_dep_write, coefs_indexes_nodep_write = self.indexes_coef_compute(arrays_write[i], iterators_stmt, indexes_write)
            
            # indexes attribute split
            coefs_indexes_const_dep_read = []
            coefs_indexes_nonzero_iterator_dep_read = []
            for coefs in coefs_indexes_dep_read:
                coefs_indexes_const_dep_read.append(coefs[:, -1])
                if len(coefs) > 1:
                    nonzero_cols = np.any(coefs[:,:-1] != 0, axis=0)
                    coefs_indexes_nonzero_iterator_dep_read.append(coefs[:,:-1][:, nonzero_cols]) # remove all zeros columns if row > 1
                else:
                    coefs_indexes_nonzero_iterator_dep_read.append(coefs[:,:-1])
            
            coefs_indexes_const_dep_write = []
            coefs_indexes_nonzero_iterator_dep_write = []
            for coefs in coefs_indexes_dep_write:
                coefs_indexes_const_dep_write.append(coefs[:, -1])
                if len(coefs) > 1:
                    nonzero_cols = np.any(coefs[:,:-1] != 0, axis=0)
                    coefs_indexes_nonzero_iterator_dep_write.append(coefs[:,:-1][:, nonzero_cols])
                else:
                    coefs_indexes_nonzero_iterator_dep_write.append(coefs[:,:-1])
            
            
            coefs_indexes_const_nodep_read = []
            coefs_indexes_nonzero_iterator_nodep_read = []
            for coefs in coefs_indexes_nodep_read:
                if self.check_indexes_order(coefs):
                    coefs_indexes_const_nodep_read.append(coefs[:, -1])
                    if len(coefs) > 1:
                        nonzero_cols = np.any(coefs[:,:-1] != 0, axis=0)
                        coefs_indexes_nonzero_iterator_nodep_read.append(coefs[:,:-1][:, nonzero_cols]) # remove all zeros columns if row > 1
                    else:
                        coefs_indexes_nonzero_iterator_nodep_read.append(coefs[:,:-1])
            
            coefs_indexes_const_nodep_write = []
            coefs_indexes_nonzero_iterator_nodep_write = []
            for coefs in coefs_indexes_nodep_write:
                if self.check_indexes_order(coefs):
                    coefs_indexes_const_nodep_write.append(coefs[:, -1])
                    if len(coefs) > 1:
                        nonzero_cols = np.any(coefs[:,:-1] != 0, axis=0)
                        coefs_indexes_nonzero_iterator_nodep_write.append(coefs[:,:-1][:, nonzero_cols]) # remove all zeros columns if row > 1
                    else:
                        coefs_indexes_nonzero_iterator_nodep_write.append(coefs[:,:-1])
                        
            
            # for json
            # indexes_read = [np.array2string(x, separator = ',').replace(' ', '') for x in coefs_indexes_dep_read]
            indexes_const_dep_read = [np.array2string(x, separator = ',').replace(' ', '') for x in coefs_indexes_const_dep_read]
            indexes_nonzero_iterator_dep_read = [np.array2string(x, separator = ',').replace(' ', '') for x in coefs_indexes_nonzero_iterator_dep_read]
            
            # indexes_const_nodep_read = [np.array2string(x, separator = ',').replace(' ', '') for x in coefs_indexes_const_nodep_read]
            indexes_nonzero_iterator_nodep_read = [np.array2string(x, separator = ',').replace(' ', '') for x in coefs_indexes_nonzero_iterator_nodep_read]
            
            
            # indexes_write = [np.array2string(x, separator = ',').replace(' ', '') for x in coefs_indexes_dep_write]
            indexes_const_dep_write = [np.array2string(x, separator = ',').replace(' ', '') for x in coefs_indexes_const_dep_write]
            indexes_nonzero_iterator_dep_write = [np.array2string(x, separator = ',').replace(' ', '') for x in coefs_indexes_nonzero_iterator_dep_write]
            
            # indexes_const_nodep_write = [np.array2string(x, separator = ',').replace(' ', '') for x in coefs_indexes_const_nodep_write]
            indexes_nonzero_iterator_nodep_write = [np.array2string(x, separator = ',').replace(' ', '') for x in coefs_indexes_nonzero_iterator_nodep_write]
            
            
            
            info.append({'schedule_const': schedule_const, 'schedule_iterator': schedule_iterator, 'indexes_const_dep_read': indexes_const_dep_read, 'indexes_nonzero_iterator_dep_read': indexes_nonzero_iterator_dep_read, 'indexes_nonzero_iterator_nodep_read': indexes_nonzero_iterator_nodep_read, 'indexes_const_dep_write': indexes_const_dep_write, 'indexes_nonzero_iterator_dep_write': indexes_nonzero_iterator_dep_write, 'indexes_nonzero_iterator_nodep_write': indexes_nonzero_iterator_nodep_write})
        
        return info
    
    def check_indexes_order(self, arr):
        '''
        check whether iterator order reversal in indexes
        '''
        rows, cols = arr.shape
        for i in range(rows):
            for j in range(cols):
                if arr[i, j] != 0:
                    # Check if any element below and to the left is non-zero
                    if np.any(arr[i+1:, :j] != 0):
                        return True
        return False
    
    def indexes_coef_compute(self, arrays, iterators_stmt, indexes):
        coefs_indexes_dep = []
        coefs_indexes_nodep = []
        indexes_id_dep = []
        niterators_stmt = len(iterators_stmt)
        for i in range(len(indexes)):
            iterators_index = re.findall(r'\[(.*?)\]', indexes[i].replace(' ', ''))
            
            coefs_index = np.zeros([len(iterators_index), niterators_stmt+1], dtype = int)
            for k in range(len(iterators_index)):
                const = re.findall(r'(\-?\d+)(?![\d\*])', iterators_index[k])
                if const:
                    coefs_index[k][niterators_stmt] = int(bool(const[0])) # 暂时只考虑0和非0
                for l in range(niterators_stmt):
                    
                    name_iterators = list(iterators_stmt.keys())
                    # print(iterators_index[k], name_iterators[l])
                    iterator = re.findall(rf'(\-?(?:\d+\*)?){name_iterators[l]}', iterators_index[k])
                    if iterator:
                        iterator = iterator[0].replace('*', '')
                        if not iterator:
                            iterator = '1'
                        elif iterator == '-':
                            iterator = '-1'
                            
                        coefs_index[k][l] = int(iterator)
            
            var = re.findall(r'(\w+)\[', indexes[i].replace(' ', ''))[0]
            if var in arrays:
                indexes_id_dep.append(i)
                coefs_indexes_dep.append(coefs_index)
            else:
                coefs_indexes_nodep.append(coefs_index)
            
        return indexes_id_dep, coefs_indexes_dep, coefs_indexes_nodep

    def extract_stdout_from_string(self, stdout_content):
        """
        从字符串中提取stdout信息（类似extract_stdout，但不需要文件）
        """
        lines = stdout_content.splitlines()
        if not lines:
            raise ValueError("Stdout内容为空！")

        return self.extract_stdout(lines)

    def extract_stdout_from_file(self, stdout_path):
        with open(stdout_path, 'r') as file:
            lines = file.readlines()

        if not lines:
            raise ValueError("The stdout file in empty!") 
        
        return self.extract_stdout(lines)

    def extract_stdout(self, lines):
        text_schedules = '\n'
        text_stmts = []
        text_deps = []
        csts_stmts = []
        iterators = []

        nlines = len(lines)
        i = 0
        while i < nlines:
            if lines[i][:3] == 'T(S' or lines[i][:10] == 'loop types':
                text_schedules += lines[i] + '\n'
            elif lines[i][:11] == '[plcg-info]':
                text_schedules += lines[i] + '\n'
                generator_id = "plcg"
            elif lines[i][:11] == '[zyj-debug]':
                text_schedules += lines[i] + '\n'
                generator_id = "looprag"
            elif re.match(r'S\d+ \".*\"\n', lines[i]): # 获取语句调度约束矩阵（plcg为数字，looprag为字符串）
                text_stmts.append(lines[i].replace(' ', ''))
                if generator_id == "plcg":
                    indent_cst = 4
                elif generator_id == "looprag":
                    indent_cst = 5
                else:
                    raise ValueError("Unknown generator id!")
                
                if i + indent_cst >= nlines:
                    raise ValueError("语句信息不完整，如有必要，请手动确认pluto优化结果")
                
                iterators_info = re.search(r'iterators: (.+)\n', lines[i + 2])
                if iterators_info:
                    iterators += iterators_info[1].split(', ')
                    
                if lines[i + 3] == 'Index set\n':
                    if "No constraints" not in lines[i + indent_cst]: # 提取存在约束的情况
                        csts = lines[i + indent_cst + 1: i + int(lines[i + indent_cst][indent_cst - 4])] # TODO: plcg获取第0个字符为行数，looprag获取第1个字符为行数， 此处取巧采用indent_cst-4
                        # csts_stmts.append(np.array([x.split() for x in csts], dtype=int)) # 目前尚未用到cst信息，先不提取
                        i += indent_cst + int(lines[i + indent_cst][indent_cst - 4]) # 同上，取巧获取cst行数
                    else: #无约束情况，跳过
                        i += indent_cst # TODO: looprag展示为Universal polyhedron -- No constraints (1 dims)!，plcg尚未确认
                else:
                    raise ValueError("语句调度约束信息不完整，如有必要，请手动确认pluto优化结果")
                
            elif lines[i][:8] == '--- Dep ':
                if i + 1 >= nlines:
                    raise ValueError("依赖信息不完整，如有必要，请手动确认pluto优化结果")
                text_deps.append([lines[i], lines[i + 1]])
                i += 1
            i += 1

        iterators_set = list(set(iterators))
        iterators_set.sort(key=iterators.index)
        iterators = iterators_set

        scops = []
        info_before = re.findall(r'\[(?:plcg-info|zyj-debug)\] Before affine transformations\n(.*?)(?=\[(?:plcg-info|zyj-debug)\] After affine transformations\n)', text_schedules, re.DOTALL)
        info_after = re.findall(r'\[(?:plcg-info|zyj-debug)\] After affine transformations\n(.*)', text_schedules, re.DOTALL)
        if info_before and info_after:
            scops.append(info_before[0])
            scops.append(info_after[0])
        else:
            raise ValueError("优化前后调度信息不完整，如有必要，请手动确认pluto优化结果")

        schedules = []
        loop_types = []
        for i in range(2):
            stmts = re.findall(r'T\(S\d+\):\s\((.*?)\)', scops[i])
            schedules.append([stmt.split(', ') for stmt in stmts])
            types_stmts = re.findall(r'loop types\s\((.*?)\)', scops[i])
            loop_types.append([types_stmt.split(', ') for types_stmt in types_stmts])

        # return iterators, text_stmts, text_deps, schedules, csts_stmts, loop_types
        return iterators, text_stmts, text_deps, schedules, None, loop_types # 目前尚未用到cst信息，先不提取
    
    def extract_codelet_from_file(self, code_path, compare_option = 0):
        '''
        compare_option:
        0 -> "pragma scop";
        1 -> "CLooG"
        '''
        with open(code_path, 'r') as file:
            lines = file.readlines()

        if not lines:
            raise ValueError("The pluto file is empty!")
        
        codelet = []
        if compare_option == 0:
            compare_start = '#pragma scop'
            compare_end = '#pragma endscop'
        elif compare_option == 1:
            compare_start = '/* Start of CLooG code */'
            compare_end = '/* End of CLooG code */'

        for i in range(len(lines)):
            if lines[i].strip() == compare_start:
                if compare_option == 1:
                    codelet.append(lines[i-3])
                    codelet.append(lines[i-2])
                    codelet.append(lines[i-1])
                i += 1
                while lines[i].strip() != compare_end:
                    codelet.append(lines[i])
                    i += 1
                    if i >= len(lines):
                        raise ValueError("The pluto file is inconsistent!")
                break

        return ''.join(codelet)
