import os
import multiprocessing as mp
import subprocess as sp
import itertools as it
import time
import logging
import datetime

today = datetime.datetime.now().strftime('%m%d')

# Configure logging
# logging.basicConfig(filename=f'exception_{today}.log', level=logging.ERROR)

# My Path
PATH_PLUTO = '/home/zyj/Data0/loop_transformation/Compilers/pluto_DA'
SRC_PATH = '/home/zyj/Data0/Dataset_2/poly_code'
TARGET_PATH = '/home/zyj/Data0/Dataset_2'
# SRC_PATH = '/home/zyj/Data0/loop_transformation/loop_generator/poly_code'
# TARGET_PATH = '/home/zyj/Data0/loop_transformation/loop_generator'

# Fixed Paths & Constants 
EMPTY_PATH = os.path.join(TARGET_PATH, 'empty')
PLUTO_CODE_PATH = os.path.join(TARGET_PATH, 'pluto_code')
STDOUT_PATH = os.path.join(TARGET_PATH, 'stdout')
TMP_PATH = os.path.join(TARGET_PATH, 'tmp_files')
TIMEOUT_DURATION = 60  # in seconds
NUM_PROCESSES = 48  # Change this to your desired number of processes

# Ensure PATH includes PATH_PLUTO
os.environ['PATH'] += f':{PATH_PLUTO}' if PATH_PLUTO not in os.environ['PATH'] else ''

# Create necessary directories
os.makedirs(PLUTO_CODE_PATH, exist_ok=True)
os.makedirs(STDOUT_PATH, exist_ok=True)
os.makedirs(TMP_PATH, exist_ok=True)

# Sync directories
def sync_empty_to_target(target_path):
    sp.run(['rsync', '-r', '--delete', f'{EMPTY_PATH}/', f'{target_path}/'], check=True)

sync_empty_to_target(PLUTO_CODE_PATH)
sync_empty_to_target(STDOUT_PATH)
sync_empty_to_target(TMP_PATH)

code_source_files = [x for x in os.listdir(SRC_PATH) if x.endswith('.c')]
os.chdir(TMP_PATH)

def pool_err_call_back(err):
    logging.error(f'Error while multiprocessing: {str(err)}')

def count_files(path):
    try:
        result = sp.run(['ls', '-l', path], capture_output=True, text=True, check=True)
        return sum(1 for line in result.stdout.splitlines() if line.startswith('-'))
    except Exception as e:
        logging.error(f"Failed to count files in {path}: {str(e)}")
        return 0

def pluto_transformation(code_source_file):
    '''
    mandatory if needed:\n
        --custom-context (for value of param), -q (for stdout info), --noprevector (no lb&ub)\n
    options:\n
        1. --tile(w:1/o:0)\n
        2. --nointratileopt(w:0/o:1)\n
        3. --innerpar(w:1/o:0)\n
        4. [--nofuse:0, --maxfuse:2, NULL:1](1 from 3)\n
    '''

    code_source_path = os.path.join(SRC_PATH, code_source_file)
    code_source_name = os.path.splitext(code_source_file)[0]
    code_target_path = os.path.join(PLUTO_CODE_PATH, f'{code_source_name}.pluto.c')
    stdout_target_path = os.path.join(STDOUT_PATH, f'{code_source_name}.stdout')

    command = [
        'timeout',
        '60s',
        'polycc_multiprocessing',
        code_source_path,
        '--custom-context',
        '-q',
        '--tile',
        '--parallel',
        '--nocloogbacktrack',
        '-o',
        code_target_path,
        '->',
        stdout_target_path
    ]

    os.system(' '.join(command))

    # with open(stdout_target_path, 'w') as stdout_file:
    #     try:
    #         result = sp.run(command, stdout=stdout_file, stderr=sp.PIPE, timeout=TIMEOUT_DURATION)
    #         if result.returncode != 0:
    #             logging.error(f"Command failed for {code_source_file} with return code {result.returncode}")
    #             logging.error(f"Error output: {result.stderr.decode().strip()}")
    #     except sp.TimeoutExpired:
    #         logging.error(f"Command for {code_source_file} timed out after {TIMEOUT_DURATION} seconds.")
    #     except Exception as e:
    #         logging.error(f"An unexpected error occurred for {code_source_file}: {str(e)}")

def main():
    time_start = time.time()

    with mp.Pool(NUM_PROCESSES) as pool:
        pool.starmap_async(pluto_transformation, it.product(code_source_files), error_callback=pool_err_call_back)
        pool.close()
        pool.join()

    time_end = time.time()
    
    with open(f"../time_opt_{today}.txt", "w") as f:
        f.write(f"Time for optimization and analysis: {time_end - time_start} s\n")
        pluto_code_count = count_files(PLUTO_CODE_PATH)
        stdout_count = count_files(STDOUT_PATH)
        f.write(f"Files in {PLUTO_CODE_PATH}: {pluto_code_count}\n")
        f.write(f"Files in {STDOUT_PATH}: {stdout_count}\n")

if __name__ == "__main__":
    main()
#3613382