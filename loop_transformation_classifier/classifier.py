import os
import datetime

today = today = datetime.datetime.now().strftime('%m%d')

# target_path = '/home/zyj/Data0/loop_transformation/loop_generator/loop_transformation_classifier'
# target_path = '/home/zyj/Data0/Dataset/loop_generator'
target_path = '/home/zyj/Data0/Dataset_2'
src_path = target_path
# src_path = '/home/zyj/Data0/loop_transformation/tsvc1_filter'

pluto_code_path = f'{src_path}/pluto_code'
stdout_path = f'{src_path}/stdout'
output_path = f'{target_path}/classification_output_{today}.csv'

os.system(f'ls -l {stdout_path}| grep "^-" | wc -l')
os.system(f'ls -l {pluto_code_path}| grep "^-" | wc -l')

os.system(f'python3 loop_transformation_classifier_1009.py -fo {stdout_path} -fc {pluto_code_path} -o {output_path}')