import os

PROJECT_PATH = os.path.dirname(os.path.abspath(__file__))

DATASET_PATH = os.path.join(PROJECT_PATH, 'examples') # PROJECT_PATH replace if needed
# DATASET_PATH = "/home/zyj/Data2/Dataset_ISPASS/plcg"
# DATASET_PATH = "/data2/zyj/Dataset_38880"
# DATASET_PATH = "/data/zyj/Dataset/colagen"
# DATASET_PATH = "/home/zyj/Data0/LOOPRAG/data/pluto_code/polybench_pluto_code"

json_input_path = os.path.join(DATASET_PATH, 'input')
target_path = os.path.join(DATASET_PATH, 'poly_code')
kernel_list_path = os.path.join(DATASET_PATH, 'kernel_list')