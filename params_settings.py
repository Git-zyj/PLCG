indexed_array_names = 'ABCDEFGHIJKLMNOPQRSTUVWXYZ'
indexed_letters_sequence = 'ijklmnopqrstuvwxyzabcdefgh'
indexed_parameter_names = ['PB_N', 'PB_M', 'PB_L', 'PB_P', 'PB_Q']
dimension_names = 'xyzvw'

params_range = [range(4, 9), range(6, 11), [3, 4, 5], [8, 9, 10]]
# params_multiplier = [1e7, 1e3, 1e2, 1e1]
params_multiplier = [1e3, 10, 10, 1]
# params_multiplier = [10, 1, 1]

# 固定参数 （TODO 部分调整为可变参数）
depth_min = 1 # 最小循环深度
prob_array_depth = [1.5, 8, 0.5] # 维数为循环维度-1的数组生成概率:维数为循环维度的数组生成概率:循环维度+1的数组生成概率为1.5:8:0.5
prob_dep_region = [4, 1] # 强相关（共享循环变量）依赖生成概率:全局依赖生成概率为4:1
enable_if_branch = False # 是否启用if分支
max_degree = 1 # 最高次数（1=线性，2=二次）
enable_multi_terms = False # 是否允许多基项
max_terms_per_func = 3 # 每个函数最多基项数（若启用多基项）
enable_reverse_dim = False