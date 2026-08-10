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

os.system(f'ls -l {stdout_path}| grep "^-" | wc -l')
os.system(f'ls -l {pluto_code_path}| grep "^-" | wc -l')

os.system(f'python3 loop_transformation_classifier.py -fo {stdout_path} -fc {pluto_code_path} -o {output_path}')
