import os
import datetime
import argparse

today = today = datetime.datetime.now().strftime('%m%d')

parser = argparse.ArgumentParser(description='Detect loop transformations applied by pluto_DA')
parser.add_argument('--target_path', type=str, default='.',
                    help='dataset root containing pluto_code/ and stdout/ (default: .)')
args = parser.parse_args()

target_path = args.target_path
src_path = target_path

pluto_code_path = f'{src_path}/pluto_code'
stdout_path = f'{src_path}/stdout'
output_path = f'{target_path}/classification_output.csv'

n_stdout = sum(1 for x in os.listdir(stdout_path)
               if os.path.isfile(os.path.join(stdout_path, x)))
n_pluto = sum(1 for x in os.listdir(pluto_code_path)
              if os.path.isfile(os.path.join(pluto_code_path, x)))
print(f"[classifier] stdout reports: {n_stdout}, pluto codes: {n_pluto}")

os.system(f'python3 loop_transformation_classifier.py -fo {stdout_path} -fc {pluto_code_path} -o {output_path}')
