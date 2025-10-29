import os
import json

from path_settings import kernel_list_path
from header_settings import header_string
from params_settings import dimension_names 

iterators = ['i', 'j', 'k', 'l']
lines_per_indent = '    '

def variable_assignment(tmp_main, arrays):
    """
    This function adds vars assignment + returns a list of variables that can be a left-value
    :param tmp_main: list, temporal list of strings of generated code for main function
    :param arrays: dict, dict that stores information about arrays
    :return: list, list of strings, each string - left value in assignment
    """
    code_vars = []
    for array in arrays:
        dims = array[1]
        for key in dims.keys():
            code_var = key.lower()
            code_vars.append(code_var)
            header_var = key
            tmp_main.append(f'int {code_var} = {header_var};')
    return code_vars


def array_declaration(tmp_main, arrays):
    """
    This function returns a list of strings, each string stores a proper format for array declaration
    This function appends strings to the list "generated_code" related to function that declares arrays
    :param tmp_main: temporal list of strings for main function, strings stores generated code
    :param arrays: dict, stores information about arrays
    :return: each string stores a proper format for array declaration
    """
    code_arrays = []
    for array in arrays:
        _, array_name, number_of_dims, argument_string = generate_argument_string(array)

        restricted_argument_string = argument_string[argument_string.index(',') + 1:]  # no array name

        tmp_main.append(
            f'POLYBENCH_{len(number_of_dims.keys())}D_ARRAY_DECL({array_name}, DATA_TYPE, {restricted_argument_string});')
        code_arrays.append(f'POLYBENCH_{len(number_of_dims.keys())}D({argument_string})')
    return code_arrays


def init_and_kernel_call(generated_code, arrays, code_vars, kernel_name):
    """
    This code appends to "generated_code" list strings related to calls of init functions + kernel call
    :param generated_code: list of strings, strings stores generated code:
    :param arrays: dict, stores information about arrays
    :param code_vars: list, list of strings, each string - left value in assignment
    :param kernel_name: string, name of our kernel
    """
    argument_string = ''
    final_index = 0
    for idx, array in enumerate(arrays):
        number_of_dim = len(array[1].keys())

        start_index = final_index
        final_index += number_of_dim

        for variable_index in range(start_index, final_index):
            argument_string += code_vars[variable_index] + ','

        argument_string += f'POLYBENCH_ARRAY({array[0]}), '

    generated_code.append(f'init_array({argument_string}INIT_SEED);')
    generated_code.append(f'kernel_{kernel_name}({argument_string[:-2]});')
    
    


def array_dealocation(generated_code, arrays):
    """
    This function deallocated all the arrays
    :param generated_code: list of strings, strings stores generated code
    :param arrays: dict, stores information about arrays
    """
    for array in arrays:
        generated_code.append(f'POLYBENCH_FREE_ARRAY({array[0]});')


def prevent_elimination(generated_code, arrays, code_vars):
    """
    This function apppends strings to generated code that prevent code elimination
    :param generated_code: list of strings, strings stores generated code
    :param arrays: dict, stores information about arrays
    """

    argument_string = ''
    final_index = 0
    for idx, array in enumerate(arrays):
        number_of_dim = len(array[1].keys())

        start_index = final_index
        final_index += number_of_dim

        for variable_index in range(start_index, final_index):
            argument_string += code_vars[variable_index] + ','

        argument_string += f'POLYBENCH_ARRAY({array[0]}), '

    generated_code.append(f'polybench_prevent_dce(print_array({argument_string[:-2]}));')


def add_includes(generated_code, kernel_name):
    """
    This function adds all necessary includes
    :param generated_code: list, list of strings that contain already generated code
    :param kernel_name: string, kernel name
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
    generated_code.append('#ifndef DUMP_ARRAYS\n#define DUMP 0\n#else\n#define DUMP 1\n#endif\n#ifndef CHECKSUM_ARRAYS\n#define CHECKSUM 0\n#else\n#define CHECKSUM 1\n#endif')

def generate_array_reference(name, array_dims):
    dims = len(array_dims.keys())
    reference_string = name
    for idx in range(dims):
        reference_string += '[' + iterators[idx] + ']'
    return reference_string


def print_array(generated_code, arrays):
    """
    This function generates code for printing all the arrays that we have
    :param generated_code: list, list of strings that store generated code
    :param arrays: dict, stores info about arrays
    """
    whole_argument = ''
    for array in arrays:
        argument_string, array_name, array_dim, _ = generate_argument_string(array)
        whole_argument += argument_string + ','
    whole_argument = whole_argument[:len(whole_argument) - 1]
    generated_code.append(f'static void print_array({whole_argument})')
    generated_code.append('{')
    generated_code.append('int i,j,k,l;')
    
    generated_code.append("POLYBENCH_DUMP_START;")
    
    # -DPOLYBENCH_DUMP_ARRAYS
    generated_code.append("if (DUMP) {")
    for array in arrays:
        argument_string, array_name, array_dim, _ = generate_argument_string(array)
        generated_code.append(f"{lines_per_indent}POLYBENCH_DUMP_BEGIN(\"{array_name}\");")
        for i in range(len(array_dim)):
            ub = list(array_dim.keys())[i].lower()
            generated_code.append(
                f'{lines_per_indent * (i+1)}for ({iterators[i]} = 0; {iterators[i]} < {ub}; {iterators[i]}++) {{')
            
        generated_code.append(fr'{lines_per_indent * (i + 2)}fprintf(POLYBENCH_DUMP_TARGET, "\n");')
        generated_code.append(f'{lines_per_indent * (i + 2)}fprintf (POLYBENCH_DUMP_TARGET, DATA_PRINTF_MODIFIER, {generate_array_reference(array_name, array_dim)});')
        for i in range(len(array_dim), 0, -1):
            generated_code.append(f'{lines_per_indent * (i)}}}')
        generated_code.append(f"{lines_per_indent}POLYBENCH_DUMP_END(\"{array_name}\");")
    generated_code.append("}")
        
    # -DPOLYBENCH_CHECKSUM_ARRAYS
    generated_code.append("if (CHECKSUM) {")
    for array in arrays:
        argument_string, array_name, array_dim, _ = generate_argument_string(array)
        generated_code.append(f"{lines_per_indent}POLYBENCH_DUMP_BEGIN(\"{array_name}\");")
        generated_code.append(f"{lines_per_indent}DATA_TYPE sum_{array_name} = 0;")
        for i in range(len(array_dim)):
            ub = list(array_dim.keys())[i].lower()
            generated_code.append(
                f'{lines_per_indent * (i + 1)}for ({iterators[i]} = 0; {iterators[i]} < {ub}; {iterators[i]}++) {{')
        
        generated_code.append(f'{lines_per_indent * (i + 2)}sum_{array_name} += {generate_array_reference(array_name, array_dim)};')
        for i in range(len(array_dim), 0, -1):
            generated_code.append(f'{lines_per_indent * (i)}}}')
            
        generated_code.append(fr'{lines_per_indent}fprintf(POLYBENCH_DUMP_TARGET, "\nsum: ");')
        generated_code.append(f'{lines_per_indent}fprintf (POLYBENCH_DUMP_TARGET, DATA_PRINTF_MODIFIER, sum_{array_name});')
        generated_code.append(f"{lines_per_indent}POLYBENCH_DUMP_END(\"{array_name}\");")
    generated_code.append("}")
    
    generated_code.append("POLYBENCH_DUMP_FINISH;")
    generated_code.append("}")


def generate_function_call(generated_code, kernel_name, code_vars, code_arrays, func_body):
    """
    This function creates a body of the function that contains all computational code
    :param generated_code: list, list of strings that store generated code
    :param kernel_name: string, name of our computational kernel
    :param code_vars: list, list of strings, each string - left value in assignment
    :param code_arrays: list, list of strings, each string stores a proper format for array declaration
    :param func_body: list of strings, kernel function body code
    """
    function_signature = f'void kernel_{kernel_name}('

    final_index = 0
    for code_array in code_arrays:
        number_of_dims = code_array[code_array.index('_') + 1:code_array.index('_') + 2]
        start_index = final_index
        final_index += int(number_of_dims)
        for idx in range(start_index, final_index):
            function_signature += f'int {code_vars[idx]},'
        function_signature += f'DATA_TYPE {code_array},'

    function_signature = function_signature[:-1]
    function_signature += '){'

    function_body = func_body
    modified_body = [function_signature, 'polybench_start_instruments;', '#pragma scop']
    modified_body += function_body
    modified_body.append('#pragma endscop')
    modified_body.append('polybench_stop_instruments;')
    modified_body.append('polybench_print_instruments;\n}')
    generated_code += modified_body


def generate_argument_string(array):
    """
    This function returns an argument string based on input arrays + array name + it's dimensions
    :param array: (array_name, {dims}), stores information about array
    :return: string, string, dict, string, first parameter to return is argument string, second is an array name,
    third one is dictionary of dimensions, the fourth is just argument string not inserted to argument string
    """
    name = array[0]
    dimension = array[1]
    argument_string = ''
    arguments = ''
    for dim in dimension.keys():
        argument_string += 'int ' + dim.lower() + ','
    arguments += name + ','
    for dim in dimension.keys():
        arguments += dim + ','
    for dim in dimension.keys():
        arguments += dim.lower() + ','
    arguments = arguments[:-1]
    argument_string += f'DATA_TYPE POLYBENCH_{len(dimension)}D({arguments})'
    return argument_string, name, dimension, arguments


def init_arrays(generated_code, arrays):
    """
    This code generates static declaration for the arrays in PolyBench style
    :param generated_code: list, list of strings of generated code
    :param arrays: list of tuples, information about array names and it's dimensions
    """
    whole_argument = ''
    for array in arrays:
        argument_string, array_name, array_dim, _ = generate_argument_string(array)
        whole_argument += argument_string + ','
    whole_argument += 'int seed'
    generated_code.append(f'static void init_array({whole_argument})')

    generated_code.append('{')
    generated_code.append('srand(seed);')
    generated_code.append('int i,j,k,l;')

    min_rand, max_rand = 0.9, 1.1
    random_function = f'{min_rand} + (rand() / (DATA_TYPE)RAND_MAX) * ({max_rand} - {min_rand})'

    for array in arrays:
        argument_string, array_name, array_dim, _ = generate_argument_string(array)
        for i in range(len(array_dim)):
            ub = list(array_dim.keys())[i].lower()
            generated_code.append(
                 f'{lines_per_indent * i}for ({iterators[i]} = 0; {iterators[i]} < {ub}; {iterators[i]}++) {{')
            
        generated_code.append(
            f'{lines_per_indent * (i + 1)}{generate_array_reference(array_name, array_dim)} = {random_function};')
        for i in range(len(array_dim), 0, -1):
            generated_code.append(f'{lines_per_indent * (i - 1)}}}')
    generated_code.append('}')


def add_main_begining(generated_code, tmp_main):
    """
    This function add the begining of the main function
    :param generated_code: list, list of strings of generated code
    :param tmp_main: list, temporal list of strings of generated code for main function
    """
    generated_code.append('int main(int argc, char** argv)')
    generated_code.append('{')
    generated_code.extend(tmp_main)


def add_main_end(generated_code):
    """
    This function add the end of the main function
    :param generated_code: list, list of strings of generated code
    """
    generated_code.append('return 0;')
    generated_code.append('}')


def generate_source_code(kernel_name, arrays, func_body):
    """
    All functions together in right order
    :param kernel_name: string, name of our computational kernel
    :param arrays: list of tuples, information about array names and it's dimensions
    :param func_body: list of strings, kernel function body code
    :return: list, list of strings of generated code
    """
    generated_code = []
    tmp_main = []
    add_includes(generated_code, kernel_name)
    init_arrays(generated_code, arrays)
    print_array(generated_code, arrays)
    code_vars = variable_assignment(tmp_main, arrays)
    code_arrays = array_declaration(tmp_main, arrays)
    generate_function_call(generated_code, kernel_name, code_vars, code_arrays, func_body)
    add_main_begining(generated_code, tmp_main)
    init_and_kernel_call(generated_code, arrays, code_vars, kernel_name)
    prevent_elimination(generated_code, arrays, code_vars)
    array_dealocation(generated_code, arrays)
    add_main_end(generated_code)
    
    # print('\n'.join(generated_code))
    return generated_code


def generate_header(kernel_name, arrays, params):
    vars_assignement = create_var_defines_for_header(arrays)
    params_assignment = []
    params_assignment.append('/* params start */')
    for key, val in params.items():
        params_assignment.append(f'# define {key} (long long){val}')
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
    generated_code = generate_source_code(kernel_name, arrays, func_body)
    header_code = generate_header(kernel_name, arrays, params)
    generated_code_path = os.path.join(writing_path, kernel_name + '.c')
    generated_header_path = os.path.join(writing_path, kernel_name + '.h')
    with open(generated_code_path, 'w') as f:
        for item in generated_code:
            f.write("%s\n" % item)
    with open(generated_header_path, 'w') as f:
        for item in header_code:
            f.write("%s\n" % item)


def get_array_information_from_json(file):
    arrays = []
    with open(file) as json_file:
        data = json.load(json_file)
    arrays_data = data['arrays']
    for unprocessed_array in arrays_data:
        name = unprocessed_array[:unprocessed_array.find('[')]
        dim_string = unprocessed_array[unprocessed_array.find('[') + 1:unprocessed_array.find(']')]
        dimensions = dim_string.replace(' ', '').split(',')
        dimension_dict = {}
        for idx, dim in enumerate(dimensions):
            dimension_dict[dimension_names[idx] + name] = dim
        arrays.append((name, dimension_dict))

    return arrays, data['params']


def fuzzing_pipeline_single_file(filename, json_path, func_body, target_path):
    kernel_name = filename[filename.rfind('/') + 1:filename.rfind('.')].replace(".", "")
    with open(kernel_list_path, 'a') as f:
        f.write(f'{filename}\n')
    json_file = os.path.join(json_path, kernel_name + '.json')
    arrays, params = get_array_information_from_json(json_file)
    generate_source_code(kernel_name, func_body, arrays, params, target_path)