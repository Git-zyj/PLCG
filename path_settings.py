import os

from regex import D

PROJECT_PATH = os.path.dirname(os.path.abspath(__file__))

# DATASET_PATH = "/home/zyj/Data2/Dataset_ISPASS/PLCG" # PROJECT_PATH replace if needed
# DATASET_PATH = os.path.join(PROJECT_PATH, 'examples')
DATASET_PATH = "/home/zyj/Data2/Dataset_ISPASS/plcg"

json_input_path = os.path.join(DATASET_PATH, 'input')
target_path = os.path.join(DATASET_PATH, 'poly_code')
kernel_list_path = os.path.join(DATASET_PATH, 'kernel_list')