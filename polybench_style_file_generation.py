import os
from typing import *

from path_settings import kernel_list_path
from header_settings import header_string
from code_files_settings import *

def add_includes(generated_code: List[str], kernel_name):
    """
    This function adds all necessary includes that we have in polybench
    :param generated_code: list, list of strings that contain already generated code
    :param kernel_name: string, kernel name
    """
    generated_code.append('#include <stdio.h>')
    generated_code.append('#include <unistd.h>')
    generated_code.append('#include <string.h>')
    generated_code.append('#include <math.h>')
    generated_code.append('#include <polybench.h>')
    generated_code.append('#include <time.h>')
    generated_code.append('#include <stdlib.h>')
    generated_code.append(f'#include "{kernel_name}.h"')
    generated_code.append('#define max(x,y)    ((x) > (y)? (x) : (y))')
    generated_code.append('#define min(x,y)    ((x) < (y)? (x) : (y))')
    generated_code.append('#ifndef USE_INIT_SEED\n#define INIT_SEED time(NULL)\n#else\n#define INIT_SEED atoi(argv[1])\n#endif')

def generate_header(kernel_name, arrays, params):
    vars_assignement = create_var_defines_for_header(arrays)
    params_assignment = []
    params_assignment.append('/* params start */')
    for key, val in params.items():
        params_assignment.append(f'# define {key} {val}')
    params_assignment.append('/* params end */')
    header_code = [f'#ifndef _{kernel_name}_H', f'#define _{kernel_name}_H'] + params_assignment + vars_assignement + [header_string]
    return header_code


def create_var_defines_for_header(arrays):
    vars_assignement = []
    for array in arrays:
        vars = array[1]
        for key in vars.keys():
            vars_assignement.append(f'# define {key} {vars[key]}')
    return vars_assignement


def generate_source_code_and_header(kernel_name, func_body, arrays, params, writing_path):
    """
    This function creates codes for header and source file and writes them to correspoding files
    :param kernel_name: string, kernel name
    :param func_body: list of strings, kernel function body code
    :param arrays: list of tuples, information about array names and it's dimensions
    :param writing_path: path, path to the directory with target files
    """
    generated_code = []
    add_comments(generated_code, kernel_name)
    add_includes(generated_code, kernel_name)
    generated_code += generate_source_code(kernel_name, arrays, func_body)
    
    header_code = generate_header(kernel_name, arrays, params)
    generated_code_path = os.path.join(writing_path, kernel_name + '.c')
    generated_header_path = os.path.join(writing_path, kernel_name + '.h')
    with open(generated_code_path, 'w') as f:
        for item in generated_code:
            f.write("%s\n" % item)
    with open(generated_header_path, 'w') as f:
        for item in header_code:
            f.write("%s\n" % item)

def polybench_style_file_generation(filename: str, json_path: str, func_body: List[str], target_path: str):
    kernel_name = filename[filename.rfind('/') + 1:filename.rfind('.')].replace(".", "")
    with open(kernel_list_path, 'a') as f:
        f.write(f'{kernel_name}\n')
    json_file = os.path.join(json_path, kernel_name + '.json')
    arrays, params = get_array_information_from_json(json_file)
    generate_source_code_and_header(kernel_name, func_body, arrays, params, target_path)