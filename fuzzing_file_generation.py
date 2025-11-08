import os
from typing import *

from path_settings import kernel_list_path
from code_files_settings import *

def add_includes(generated_code: List[str]):
    """
    This function adds all necessary includes
    :param generated_code: list, list of strings that contain already generated code
    """
    generated_code.append('#include <stdio.h>')
    generated_code.append('#include <unistd.h>')
    generated_code.append('#include <string.h>')
    generated_code.append('#include <math.h>')
    generated_code.append('#include <time.h>')
    generated_code.append('#include <stdlib.h>')
    generated_code.append('#define max(x,y)    ((x) > (y)? (x) : (y))')
    generated_code.append('#define min(x,y)    ((x) < (y)? (x) : (y))')
    generated_code.append('#ifndef USE_INIT_SEED\n#define INIT_SEED time(NULL)\n#else\n#define INIT_SEED atoi(argv[1])\n#endif')

def generate_source_code_and_write(kernel_name, func_body, arrays, writing_path):
    """
    This function creates code and writes it to file
    :param kernel_name: string, kernel name
    :param func_body: list of strings, kernel function body code
    :param arrays: list of tuples, information about array names and it's dimensions
    :param writing_path: path, path to the directory with target files
    """
    generated_code = []
    add_comments(generated_code, kernel_name)
    add_includes(generated_code)
    generated_code += generate_source_code(kernel_name, arrays, func_body)
    
    generated_code_path = os.path.join(writing_path, kernel_name + '.c')
    with open(generated_code_path, 'w') as f:
        for item in generated_code:
            f.write("%s\n" % item)

def fuzzing_file_generation(filename: str, json_path: str, func_body: List[str], target_path: str):
    kernel_name = filename[filename.rfind('/') + 1:filename.rfind('.')].replace(".", "")
    with open(kernel_list_path, 'a') as f:
        f.write(f'{kernel_name}\n')
    json_file = os.path.join(json_path, kernel_name + '.json')
    arrays, params = get_array_information_from_json(json_file)
    generate_source_code_and_write(kernel_name, func_body, arrays, target_path)