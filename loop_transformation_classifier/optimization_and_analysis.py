import os
import multiprocessing as mp
import itertools as it
import argparse as ap
import subprocess as sp

# src_path = '../poly_code'
# target_path = '..'
# PATH_pluto = '../Compilers/pluto_DA'

parser_description = '''
For optimized version of codes and data flow information from pluto, clan and candl\n
Example command:\n
python optimization_and_analysis.py -dp ./poly_code -pp ./pluto_DA
'''
    
parser = ap.ArgumentParser(parser_description)
parser.add_argument("-dp", dest="dataset_path", help="path of the folder of dataset containing poly_code", type=str, default='./Dataset')
parser.add_argument("-op", dest="output_path", help="path of the folder of output of codes selected", type=str)
parser.add_argument("-pp", dest="pluto_path", help="path of the folder of pluto (also clan and candl)", type=str, default="Compilers/pluto_DA")

args = parser.parse_args()

if args.output_path is None:
    args.output_path = args.dataset_path

code_source_files = [x for x in os.listdir(args.dataset_path) if x.endswith('.c')]

empty_path = f'{args.output_path}/empty'
pluto_code_path = f'{args.output_path}/pluto_code'
stdout_path = f'{args.output_path}/stdout'
tmp_path = f'{args.output_path}/tmp_files'

def pluto_transformation(code_source_file):
    # print(f'Start transformation for {id}th file:{code_source_file}')
    
    code_source_path = f'{args.dataset_path}/{code_source_file}'
    code_source_name = os.path.splitext(os.path.basename(code_source_path))[0]

    code_target_path = f'{pluto_code_path}/{code_source_name}.pluto.c'

    stdout_target_path = f'{stdout_path}/{code_source_name}.stdout'

    # cmd = ["polycc_multiprocessing", code_source_path, "-q", "--tile", "--parallel", "--custom-context", "--nocloogbacktrack", "-o", code_target_path]
    # try: 
    #     output = sp.run(cmd, capture_output=True, text=True, timeout=300)
    #     if not output.returncode:
    #         with open(stdout_target_path, "w") as f:
    #             f.write(output.stdout)
    # except sp.TimeoutExpired:
    #     pass # log fail
    # except:
    #     pass # log error

    os.system(f'timeout 300s polycc_multiprocessing {code_source_path} -q --tile --parallel --custom-context --nocloogbacktrack -o {code_target_path} -> {stdout_target_path}')
    
    # print(stdout_target_path)

def pool_err_call_back(err):
    print(f'error while multiprocessing: {str(err)}.\n')



if __name__ == "__main__":

    PATH = os.popen('echo $PATH').read()

    if not args.pluto_path in PATH:
        os.environ['PATH'] += f':{args.pluto_path}'

    if not os.path.exists(args.output_path):
        os.mkdir(args.output_path)

    if not os.path.exists(empty_path):
        os.mkdir(empty_path)
    if not os.path.exists(pluto_code_path):
        os.mkdir(pluto_code_path)
    if not os.path.exists(stdout_path):
        os.mkdir(stdout_path)
    if not os.path.exists(tmp_path):
        os.mkdir(tmp_path)

    os.system(f'rsync -r --delete {empty_path}/ {pluto_code_path}/')
    os.system(f'rsync -r --delete {empty_path}/ {stdout_path}/')
    os.system(f'rsync -r --delete {empty_path}/ {tmp_path}/')

    os.chdir(tmp_path)

    pool = mp.Pool(12)
    pool.starmap_async(pluto_transformation, it.product(code_source_files), error_callback=pool_err_call_back)
    pool.close()
    pool.join()

    print("all:")
    os.system(f'ls -l {args.dataset_path} | grep "^-" | wc -l')
    print('optimized (unchecked):')
    os.system(f'ls -l {pluto_code_path} | grep "^-" | wc -l')
    # os.system(f'rsync -r --delete {empty_path}/ {tmp_path}/')