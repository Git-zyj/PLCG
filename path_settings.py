import os

PROJECT_PATH = os.path.dirname(os.path.abspath(__file__))
# DATASET_PATH = "/home/zyj/Data0/Dataset_fuzzing" # PROJECT_PATH replace if needed
DATASET_PATH = os.path.join(PROJECT_PATH, 'examples')
json_input_path = os.path.join(DATASET_PATH, 'input')
target_path = os.path.join(DATASET_PATH, 'poly_code')
kernel_list_path = os.path.join(target_path, 'kernel_list')