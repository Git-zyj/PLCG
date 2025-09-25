import os
import re

def code_recombine(code, filename, org_folder_path, opt_folder_path):
    '''
    recombine code from llm into scop part of .c file.
    params:
    1. code: code scop from llm (must have \n at the beginning and end);
    2. filename: basename of file;
    3. org_folder_path: path of original code file;
    4. opt_folder_path: path of opt code file.
    example:
    code_recombine("\ntest\n\test\n", "1222121111_0", "./poly_code", "./opt_code")

    '''

    pattern = r'(?<=#pragma scop).+(?=#pragma endscop)'
    replacement = code

    org_file_path = os.path.join(org_folder_path, filename + '.c')
    opt_file_path = os.path.join(opt_folder_path, filename + '.c')

    ceil_and_floor = f'#define ceild(n,d)  ceil(((double)(n))/((double)(d)))\n#define floord(n,d) floor(((double)(n))/((double)(d)))\n'

    with open(org_file_path, 'r') as f:
        code_org = f.read()
        
        code_opt = ceil_and_floor + re.sub(pattern, replacement, code_org, flags=re.DOTALL)

    with open(opt_file_path, 'w+') as f:
        f.write(code_opt)
