import re
import numpy as np


class extraction_tools:
    def __init__(self) -> None:   
        pass
    
    def get_info(self, file_name, folder_stdout_path = './'):
        try :
            iterators, stmts, deps, schedules, csts, _ = self.extract_stdout(file_name, folder_stdout_path)
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
    
    def extract_stdout(self, file_name, folder_stdout_path = './'):
        
        file_path = folder_stdout_path + '/' + file_name
        with open(file_path, 'r') as file:
            lines = file.readlines()

        if not lines:
            raise ValueError("The stdout file in empty!") 

        text_schedules = '\n'
        text_stmts = []
        text_deps = []
        csts_stmts = []
        iterators = []
        
        nlines = len(lines)
        i = 0
        while i < nlines:
            # print(lines[i])
            if lines[i][:3] == 'T(S' or lines[i][:11] == '[zyj-debug]' or lines[i][:10] == 'loop types':
                text_schedules += lines[i]
            elif re.match(r'S\d+ \".*\"\n', lines[i]):
                text_stmts.append(lines[i].replace(' ', ''))
                if i + 4 >= nlines:
                    raise ValueError("pluto optimization fail!")
                elif i + int(lines[i + 4][0]) >= nlines:
                    raise ValueError("pluto optimization fail!")
                
                output = re.search(r'iterators: (.+)\n', lines[i + 2])
                if output:
                    iterators += output[1].split(', ')
                
                if lines[i + 3] == 'Index set\n':
                    csts = lines[i + 5: i + int(lines[i + 4][0])]
                    csts_stmts.append(np.array([x.split() for x in csts], dtype=int))
                
                i += 4 + int(lines[i + 4][0])
            elif lines[i][:8] == '--- Dep ':
                if i + 1 >= nlines:
                    raise ValueError("pluto optimization fail!")
                
                text_deps.append([lines[i], lines[i + 1]])
                i += 1
            
            i += 1

        iterators_set = list(set(iterators))
        iterators_set.sort(key=iterators.index)
        iterators = iterators_set

        # print(text_schedules)
        
        scops = []
        info_before = re.findall(r'\[zyj-debug\] Before affine transformations\n(.*)(?=\[zyj-debug\] After affine transformations\n)', text_schedules, re.DOTALL)
        info_after = re.findall(r'\[zyj-debug\] After affine transformations\n(.*)', text_schedules, re.DOTALL)
        if info_before and info_after:
            scops.append(info_before)
            scops.append(info_after)
        else:
            raise ValueError("pluto optimization fail!")

        schedules = []
        loop_types = []
        
        for i in range(2):
            stmts = re.findall(r'T\(S\d+\):\s\((.*?)\)', str(scops[i]))
            schedules.append([stmt.split(', ') for stmt in stmts])
            
            types_stmts = re.findall(r'loop types\s\((.*?)\)', str(scops[i]))
            loop_types.append([types_stmt.split(', ') for types_stmt in types_stmts])

        # print(schedules)
        return iterators, text_stmts, text_deps, schedules, csts_stmts, loop_types
    
    def extract_codelet(self, file_name, folder_code_path = './', compare_option = 0):
        '''
        compare_option:
        0 -> "pragma scop";
        1 -> "CLooG"
        '''
        file_path = folder_code_path + '/' + file_name
        with open(file_path, 'r') as file:
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
