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

class LoopTransformationClassifier:
    def __init__(self, stmts, schedules, loop_types, c_codelet):
        self.c_codelet = c_codelet.replace(';;', ';')  # for pluto+cloog
        self.answer = [0] * 9
        self.context = stmts
        self.schedules = schedules
        self.loop_types = loop_types
        self.d = (len(self.schedules[0][0]) - 1) // 2
        self.nstmts = len(self.schedules[0])
        self.consts = np.zeros([2, self.nstmts, self.d + 1], dtype=int)
        self.coefs = np.zeros([self.nstmts, self.d, self.d], dtype=int)
        self.var_neg = np.zeros([self.nstmts, self.d, self.d])

    def check_fusion_distribution(self, i, check_list, flags):
        if i >= np.shape(self.consts)[2]:
            return flags

        if set(self.consts[0, check_list, i]) == set(self.consts[1, check_list, i]) == {0}:
            flags = self.check_fusion_distribution(i + 1, check_list, flags)
            if flags == [1, 1]:
                return flags
        else:
            co_loop = [[], []]
            for j in set(self.consts[0, check_list, i]):
                co_loop[0].append(np.where(self.consts[0, check_list, i] == j)[0].tolist())
            for j in set(self.consts[1, check_list, i]):
                co_loop[1].append(np.where(self.consts[1, check_list, i] == j)[0].tolist())

            if len(co_loop[0]) < len(co_loop[1]):
                flags[1] = 1
            elif len(co_loop[0]) > len(co_loop[1]):
                flags[0] = 1
            elif not co_loop[0] == co_loop[1] and set([str(x) for x in co_loop[0]]) != set([str(x) for x in co_loop[1]]):
                return [1, 1]

            for group_src in co_loop[0]:
                for group_dst in co_loop[1]:
                    if len(group_src) > 1 and len(group_dst) > 1:
                        new_check_list = list(set(group_src) & set(group_dst))
                        if len(new_check_list) > 1:
                            flags = self.check_fusion_distribution(i + 1, new_check_list, flags)
                            if flags == [1, 1]:
                                return flags
        return flags

    def check_nstmts_after(self):
        C_LANGUAGE = ts.Language(tsc.language())
        c_parser = ts.Parser(C_LANGUAGE)
        c_query_text = '''
        (assignment_expression [left: (subscript_expression)@1 right: (subscript_expression)@2])
        '''
        c_query = C_LANGUAGE.query(c_query_text)
        c_tree = c_parser.parse(bytes(self.c_codelet, "utf8"))
        c_capture = c_query.captures(c_tree.root_node)
        return len(c_capture)

    def check_tiling(self):
        for i in range(self.nstmts):
            for j in range(len(self.schedules[1][i])):
                if "zT" in self.schedules[1][i][j]:
                    self.answer[1] = 1
                    return

    def loop_transformation_analysis(self):
        self.check_tiling()

        self.loop_types[1] = [[t for s, t in zip(sched, types) if "zT" not in s] 
                              for sched, types in zip(self.schedules[1], self.loop_types[1])]
        self.schedules[1] = [[s for s in row if "zT" not in s] for row in self.schedules[1]]

        min_len = min(len(row) for row in self.schedules[1])
        self.schedules[1] = [row[:min_len] for row in self.schedules[1]]
        self.loop_types[1] = [row[:min_len] for row in self.loop_types[1]]

        for i in range(self.d):
            for j in range(self.nstmts):
                if self.loop_types[1][j][2 * i] == 'scalar':
                    for stmt in range(self.nstmts):
                        self.schedules[1][stmt].insert(2 * i, '0')
                        self.loop_types[1][stmt].insert(2 * i, "scalar")

                if 2 * i + 1 < len(self.loop_types[1][j]):
                    if self.loop_types[1][j][2 * i + 1] == 'scalar':
                        if all(self.loop_types[1][stmt][2 * i + 1] == 'scalar' for stmt in range(self.nstmts)):
                            seq = 1
                            while 2 * i + 1 + seq < len(self.loop_types[1][j]):
                                if any(self.loop_types[1][stmt][2 * i + 1 + seq] == 'loop' for stmt in range(self.nstmts)):
                                    tmp_consts = {}
                                    for stmt in range(self.nstmts):
                                        tmp_consts[stmt] = tuple(self.schedules[1][stmt][2 * i: 2 * i + 1 + seq])
                                    sorted_consts = sorted(set(tmp_consts.values()))
                                    for stmt in range(self.nstmts):
                                        self.schedules[1][stmt][2 * i] = str(sorted_consts.index(tmp_consts[stmt]))
                                        for _ in range(seq):
                                            del self.schedules[1][stmt][2 * i + 1]
                                            del self.loop_types[1][stmt][2 * i + 1]
                                    for k in range(self.d):
                                        if (self.schedules[0][j][2 * k + 1] != "0" and 
                                            self.schedules[0][j][2 * k + 1] in self.schedules[1][j][2 * i + 1]):
                                            self.coefs[j][i][k] = 1
                                        elif (self.schedules[0][j][2 * k + 1][0] == "-" and 
                                              self.schedules[0][j][2 * k + 1][1:] in self.schedules[1][j][2 * i + 1]):
                                            self.coefs[j][i][k] = 1
                                            self.var_neg[j][i][k] = -1
                                    break
                                seq += 1
                    else:
                        for k in range(self.d):
                            if (self.schedules[0][j][2 * k + 1] != "0" and 
                                self.schedules[0][j][2 * k + 1] in self.schedules[1][j][2 * i + 1]):
                                self.coefs[j][i][k] = 1
                            elif (self.schedules[0][j][2 * k + 1][0] == "-" and 
                                  self.schedules[0][j][2 * k + 1][1:] in self.schedules[1][j][2 * i + 1]):
                                self.coefs[j][i][k] = 1
                                self.var_neg[j][i][k] = -1

        if len(self.loop_types[1][0]) == len(self.loop_types[0][0]) - 1:
            for stmt in range(self.nstmts):
                self.schedules[1][stmt].append('0')
                self.loop_types[1][stmt].append("scalar")
        elif len(self.loop_types[1][0]) != len(self.loop_types[0][0]):
            self.answer[8] = 1
            return self.answer

        self.schedules = np.array(self.schedules, dtype=object)
        org_coefs = ~(self.schedules[0][:, 1::2] == '0')

        for stmt in range(self.nstmts):
            for i in range(0, len(self.schedules[1][0]), 2):
                if self.loop_types[1][stmt][i] != 'scalar':
                    if i > 0 and self.schedules[1][stmt][i - 1] == '0':
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
                        self.answer[8] = 1
                        return self.answer

        self.consts[0] = self.schedules[0][:, ::2].astype(int)
        self.consts[1] = self.schedules[1][:, ::2].astype(int)

        if self.nstmts != self.check_nstmts_after():
            self.answer[8] = 1

        if (self.schedules[0] == self.schedules[1]).all() and self.answer[1] == 0 and self.answer[8] == 0:
            self.answer[0] = 1
        else:
            for i in range(self.nstmts):
                if not (np.diag(self.coefs[i]) == org_coefs[i]).all():
                    self.answer[2] = 1
                    break

            if (self.coefs.sum(axis=2).T > 1).any():
                self.answer[3] = 1

            if any('-' in var for var in np.extract(self.coefs.sum(axis=2).T == 1, self.schedules[1][:, 1::2])):
                self.answer[6] = 1
            elif ((self.coefs.sum(axis=2).T == 1) * (self.var_neg.sum(axis=2).T < 0)).any():
                self.answer[6] = 1

            if any(re.findall(r'[+-][0-9]+$', var) for var in self.schedules[1][:, 1::2].reshape(-1)):
                self.answer[7] = 1

            flags = [0, 0]
            check_list = list(range(self.nstmts))
            self.answer[4:6] = self.check_fusion_distribution(0, check_list, flags)

        return self.answer

def classify_from_strings(stdout_content, code_content):
    """
    直接根据stdout内容和代码内容进行分类
    """
    tool = extraction_tools()
    try:
        _, stmts, _, schedules, _, loop_types = tool.extract_stdout_from_string(stdout_content)
        c_codelet = code_content  # 直接使用传入的代码字符串
        classifier = LoopTransformationClassifier(stmts, schedules, loop_types, c_codelet)
        answer = classifier.loop_transformation_analysis()
        return answer
    except Exception as e:
        logging.error(f"分类失败: {e}")
        return [0] * 8 + [1]  # 返回“其他”

if __name__ == "__main__":
    TODAY = datetime.datetime.now().strftime('%Y%m%d')
    parser = ap.ArgumentParser(description='识别Pluto应用的循环变换类型')
    parser.add_argument("-fo", dest="folder_stdout_path", default='./stdout')
    parser.add_argument("-fc", dest="folder_code_path", default='./pluto_code')
    parser.add_argument("-so", dest="suff_out", default='.stdout')
    parser.add_argument("-sc", dest="suff_code", default='.pluto.c')
    parser.add_argument("-o", dest="output", default=f'./classification_output_{TODAY}.csv')
    args = parser.parse_args()

    log_path = 'exceptions.log'
    with open(log_path, 'w') as f:
        pass

    record = []
    for file_name in os.listdir(args.folder_stdout_path):
        if file_name.endswith(args.suff_out) and os.path.getsize(f'{args.folder_stdout_path}/{file_name}') > 0:
            record.append(file_name[:-len(args.suff_out)])

    answers = []
    for file_name in record:
        tool = extraction_tools()
        try:
            _, stmts, _, schedules, _, loop_types = tool.extract_stdout(file_name + args.suff_out, args.folder_stdout_path)
            c_codelet = tool.extract_codelet(file_name + args.suff_code, args.folder_code_path, 1)
            classifier = LoopTransformationClassifier(stmts, schedules, loop_types, c_codelet)
            answer = classifier.loop_transformation_analysis()
            answers.append([file_name] + answer)
        except Exception as e:
            logging.error(f"处理文件 {file_name} 时出错: {e}")

    columns = ['file_name', 'no loop transformation', 'loop tiling', 'loop interchange',
               'loop skewing', 'loop fusion', 'loop distribution', 'loop reverse', 'loop shifting',
               'other loop transformation']
    pd.DataFrame(answers, columns=columns).to_csv(args.output, index=False)