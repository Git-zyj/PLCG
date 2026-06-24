from operator import ge
import re
import numpy as np

class extraction_tools:
    def __init__(self) -> None:
        pass
    
    def get_info(self, stdout_path):
        iterators, stmts, deps, schedules, _, loop_types, stmt_arrays, _ = self.extract_stdout_from_file(stdout_path)
        return self._get_info_from_data(iterators, stmts, deps, schedules, stmt_arrays)

    def _get_info_from_data(self, iterators, stmts, deps, schedules, stmt_arrays):
        if (not iterators) or (not stmts) or (not schedules) or (len(stmt_arrays) != len(stmts)):
            raise ValueError("info extract fails")

        nstmts = len(stmts)
        # print(nstmts)
        arrays_write = [[] for _ in range(nstmts)]
        arrays_read = [[] for _ in range(nstmts)]
        for dep in deps:
            source_id = dep['source'][1:]
            target_id = dep['target'][1:]
            dep_type = dep['type']
            array_name = dep['array']
            
            if dep_type[-1] == 'W':
                arrays_write[int(source_id) - 1].append(array_name)
            else:
                arrays_read[int(source_id) - 1].append(array_name)
                
            if dep_type[0] == 'W':
                arrays_write[int(target_id) - 1].append(array_name)
            else:
                arrays_read[int(target_id) - 1].append(array_name) 

        niterators = len(iterators)
        info = []
        max_depth = (len(schedules[0][0]) - 1) // 2 
        for i in range(nstmts):
            
            # get indexes from stdout Read/Write accesses
            indexes_write = stmt_arrays[i]['write']
            indexes_read = stmt_arrays[i]['read']
            
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

    def split_top_level(self, text, sep=','):
        parts = []
        start = 0
        depth = 0
        for i, ch in enumerate(text):
            if ch == '(':
                depth += 1
            elif ch == ')':
                depth -= 1
            elif ch == sep and depth == 0:
                parts.append(text[start:i].strip())
                start = i + 1
        parts.append(text[start:].strip())
        return parts

    def is_array_assignment_stmt(self, line):
        stripped = line.strip().rstrip(';')
        return bool(re.match(r'^[A-Za-z_]\w*(?:\s*\[[^\]]+\])+\s*(?:[+\-*/%]?=)(?!=)', stripped))

    def count_codelet_array_assignments(self, c_codelet):
        return sum(1 for line in c_codelet.splitlines() if self.is_array_assignment_stmt(line))

    def parse_for_loop_bound(self, line):
        match = re.search(
            r'for\s*\(\s*(?:int\s+)?(?P<var>[A-Za-z_]\w*)\s*=\s*(?P<lower>[^;]+?)\s*;\s*'
            r'(?P=var)\s*(?P<op><=|<)\s*(?P<upper>[^;]+?)\s*;\s*'
            r'(?P=var)\s*(?:\+\+|\+=\s*1|=\s*(?P=var)\s*\+\s*1)\s*\)',
            line
        )
        if not match:
            return None

        lower = ' '.join(match.group('lower').strip().split())
        upper = ' '.join(match.group('upper').strip().split())
        var = match.group('var')
        op = match.group('op')
        if op == '<':
            return f'{lower} <= {var} < {upper}'
        return f'{lower} <= {var} <= {upper}'

    def _wrap_val(self, val):
        # Don't double-wrap if val already has matching outer parens
        if val.startswith('(') and val.endswith(')'):
            depth = 0
            for i, ch in enumerate(val):
                if ch == '(':
                    depth += 1
                elif ch == ')':
                    depth -= 1
                if depth == 0 and i < len(val) - 1:
                    return f'({val})'
            return val
        return f'({val})'

    def _resolve_var_in_expr(self, expr, var_assignments):
        prev = None
        result = expr
        while result != prev:
            prev = result
            for var in sorted(var_assignments.keys(), key=lambda k: -len(k)):
                val = var_assignments[var]
                result = re.sub(r'\b' + re.escape(var) + r'\b', self._wrap_val(val), result)
        return result

    def extract_loop_bounds_from_codelet(self, c_codelet):
        loop_stack = []
        stmt_loop_bounds = []
        brace_depth = 0
        var_assignments = {}

        for line in c_codelet.splitlines():
            line_no_comment = re.sub(r'//.*', '', line)
            stripped = line_no_comment.strip()

            if (not stripped.startswith('#')
                    and not self.is_array_assignment_stmt(stripped)):
                assign_match = re.match(
                    r'^([A-Za-z_]\w*)\s*=\s*(.+?)\s*;\s*$', stripped)
                if assign_match:
                    var_assignments[assign_match.group(1)] = assign_match.group(2)

            loop_bound = self.parse_for_loop_bound(line_no_comment)
            if loop_bound:
                loop_bound = self._resolve_var_in_expr(loop_bound, var_assignments)
                body_depth = brace_depth + line_no_comment.count('{') - line_no_comment.count('}')
                if '{' in line_no_comment:
                    loop_stack.append((body_depth, loop_bound))
                else:
                    loop_stack.append((brace_depth + 1, loop_bound))

            if self.is_array_assignment_stmt(line_no_comment):
                stmt_loop_bounds.append([bound for _, bound in loop_stack])

            brace_depth += line_no_comment.count('{') - line_no_comment.count('}')
            loop_stack = [(depth, bound) for depth, bound in loop_stack if depth <= brace_depth]

        return stmt_loop_bounds

    def extract_stmt_arrays(self, lines, start_idx):
        stmt_arrays = {'read': [], 'write': []}
        nlines = len(lines)
        i = start_idx

        while i < nlines:
            line = lines[i].strip()
            if line == 'Read accesses':
                i += 1
                while i < nlines and lines[i].strip() != 'Write accesses':
                    access = lines[i].strip()
                    if access:
                        stmt_arrays['read'].append(access.replace(' ', ''))
                    i += 1
            elif line == 'No Read accesses':
                i += 1
            elif line == 'Write accesses':
                i += 1
                while i < nlines:
                    access = lines[i].strip()
                    if (not access or access.startswith('Original loop:') or
                            re.match(r'S\d+ ".*"', access) or access.startswith('--- Dep ') or
                            access.startswith('[plcg-info]') or access.startswith('[zyj-debug]')):
                        break
                    stmt_arrays['write'].append(access.replace(' ', ''))
                    i += 1
                break
            elif (re.match(r'S\d+ ".*"', line) or line.startswith('--- Dep ') or
                    line.startswith('[plcg-info]') or line.startswith('[zyj-debug]')):
                break
            else:
                i += 1

        return stmt_arrays

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
        stmt_arrays = []
        iterators = []
        global_params = []

        nlines = len(lines)
        i = 0
        while i < nlines:
            if lines[i][:3] == 'T(S' or lines[i][:10] == 'loop types':
                text_schedules += lines[i] + '\n'
            elif lines[i][:11] == '[plcg-info]':
                text_schedules += lines[i] + '\n'
                generator_id = "plcg"
                if i + 2 < nlines and lines[i+2].startswith('Parameters:'):
                    global_params = [p.strip() for p in lines[i+2][11:].strip().split()]
            elif lines[i][:11] == '[zyj-debug]':
                text_schedules += lines[i] + '\n'
                generator_id = "looprag"
                if i + 2 < nlines and lines[i+2].startswith('Parameters:'):
                    global_params = [p.strip() for p in lines[i+2][11:].strip().split()]
            elif re.match(r'S\d+ \".*\"(?:\n)?$', lines[i]): # 获取语句调度约束矩阵（plcg为数字，looprag为字符串）
                stmt_line = lines[i].replace(' ', '')
                stmt_match = re.match(r'(S\d+)"(.*)"', stmt_line)
                if stmt_match:
                    text_stmts.append(stmt_match.group(2))
                if generator_id == "plcg":
                    indent_cst = 4
                elif generator_id == "looprag":
                    indent_cst = 5
                else:
                    raise ValueError("Unknown generator id!")
                
                if i + indent_cst >= nlines:
                    raise ValueError("语句信息不完整，如有必要，请手动确认pluto优化结果")
                
                iterators_info = re.search(r'iterators: (.+)', lines[i + 2])
                if iterators_info:
                    iterators += iterators_info[1].split(', ')
                    
                if lines[i + 3].strip() == 'Index set':
                    stmt_arrays.append(self.extract_stmt_arrays(lines, i + indent_cst))
                    if "No constraints" not in lines[i + indent_cst]: # 提取存在约束的情况
                        ncsts = int(lines[i + indent_cst].split()[0])
                        csts = lines[i + indent_cst + 1: i + indent_cst + 1 + ncsts]
                        csts_stmts.append(np.array([x.split() for x in csts], dtype=int))
                        i += indent_cst + ncsts
                    else: #无约束情况，跳过
                        csts_stmts.append(np.array([], dtype=int))
                        i += indent_cst # TODO: looprag展示为Universal polyhedron -- No constraints (1 dims)!，plcg尚未确认
                else:
                    raise ValueError("语句调度约束信息不完整，如有必要，请手动确认pluto优化结果")
                
            elif lines[i][:8] == '--- Dep ':
                if i + 1 >= nlines:
                    raise ValueError("依赖信息不完整，如有必要，请手动确认pluto优化结果")
                dep_header = lines[i]
                dep_var = lines[i + 1] if i + 1 < nlines else ''
                dm = re.match(r'--- Dep \d+ from (S\d+) to (S\d+);.*Type: ([WR]A[WR])', dep_header)
                vm = re.match(r'on variable: (\w+)', dep_var)
                if dm and vm:
                    text_deps.append({'source': dm.group(1), 'target': dm.group(2), 'type': dm.group(3), 'array': vm.group(1)})
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
            stmts = re.findall(r'T\(S\d+\):\s\((.*)\)', scops[i])
            schedules.append([self.split_top_level(stmt) for stmt in stmts])
            types_stmts = re.findall(r'loop types\s\((.*?)\)', scops[i])
            loop_types.append([self.split_top_level(types_stmt) for types_stmt in types_stmts])

        return iterators, text_stmts, text_deps, schedules, csts_stmts, loop_types, stmt_arrays, global_params
    
    def resolve_global_params(self, global_params, h_file_path):
        result = {}
        if not global_params:
            return result
        try:
            with open(h_file_path, 'r') as f:
                h_lines = f.readlines()
        except Exception:
            return result
        in_params = False
        for line in h_lines:
            stripped = line.strip()
            if stripped == '/* params start */':
                in_params = True
                continue
            if in_params and stripped == '/* params end */':
                break
            if in_params:
                m = re.match(r'#\s*define\s+(' + '|'.join(global_params) + r')\s+(\d+)', stripped)
                if m:
                    result[m.group(1)] = int(m.group(2))
        return result

    def get_all_info(self, stdout_path, h_file_path=None, poly_code_path=None, pluto_code_path=None):
        iterators, text_stmts, text_deps, schedules, csts_stmts, loop_types, stmt_arrays, global_params = self.extract_stdout_from_file(stdout_path)
        
        feature_info = self._get_info_from_data(iterators, text_stmts, text_deps, schedules, stmt_arrays)
        
        property_info = {
            'iterators': iterators,
            'text_stmts': text_stmts,
            'text_deps': text_deps,
            'schedules': schedules,
            csts_stmts: csts_stmts,
            'loop_types': loop_types,
            'stmt_arrays': stmt_arrays,
            'params': global_params,
            'params_with_value': {},
            'loop_bounds_before': [],
            'loop_bounds_after': [],
        }
        
        if h_file_path:
            property_info['params_with_value'] = self.resolve_global_params(global_params, h_file_path)
        if poly_code_path:
            codelet_before = self.extract_codelet_from_file(poly_code_path, 0)
            property_info['loop_bounds_before'] = self.extract_loop_bounds_from_codelet(codelet_before)
        if pluto_code_path:
            codelet_after = self.extract_codelet_from_file(pluto_code_path, 1)
            property_info['loop_bounds_after'] = self.extract_loop_bounds_from_codelet(codelet_after)
        
        return {'feature_info': feature_info, 'property_info': property_info}

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
