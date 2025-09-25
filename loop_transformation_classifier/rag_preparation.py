import pandas as pd
import os
from collections import Counter, defaultdict
import numpy as np
import json
from extraction_tools import extraction_tools
import datetime
import re
import argparse as ap
import multiprocessing as mp
import itertools as it

parser_description = '''
For dataset selection based on applied loop transformations for LOOPRAG
'''
    
parser = ap.ArgumentParser(parser_description)
parser.add_argument("-dp", dest="dataset_path", help="path of the folder of dataset containing poly_code", type=str, default='./Dataset')
parser.add_argument("-op", dest="output_path", help="path of the folder of output of codes selected (same to dataset_path in default)", type=str)
parser.add_argument("-cn", dest="classification_name", help="name of classification_output.csv", type=str, default='classification_output.csv')
parser.add_argument("-d", dest="dataset", help="name of generator", choices=["looprag", "colagen"], default="looprag")

args = parser.parse_args()

if args.output_path is None:
    args.output_path = args.dataset_path

print(args.dataset)

def for_loop_post_process(code):
    '''
    add int for code like "for (i...)" in opt code for rag
    params:
    1. code: code part to be processed.
    example:
    post_process("for (t = 0;)")
    '''

    pattern = r'(for \()(?!int)'
    replacement = r'\1int '

    return re.sub(pattern, replacement, code)

def info_process(file):
    tool = extraction_tools()
    # print(file)
    content = defaultdict(list)
    content['filename'] = file
    content['code'] = tool.extract_codelet(f'{file}.c', poly_path)
    if not content['code']:
        return 0, "orinigal code extract failed", file

    try:
        codelet = tool.extract_codelet(f'{file}.pluto.c', pluto_path, 1)
        content['opt_code'] = for_loop_post_process(codelet)
    except ValueError as e:
        # print(file, e)
        if str(e) == "The pluto file is empty!":
            return 0, str(e), file
        else:
            return 0, 'opt codelet extract fails', file
    
    if 'i' not in content['opt_code']:
        return 0, "opt codelet content is wrong", file
    
    try:
        info = tool.get_info(f'{file}.stdout', stdout_path)
    except ValueError as e:
        # print(file, e)
        return 0, str(e), file
    except:
        return 0, 'other error', file
    
    content['info'] = info
    
    return 1, content, file

def pool_err_call_back(err):
    print(f'error while multiprocessing: {str(err)}.\n')

if __name__ == "__main__":
    
    pluto_path = f'{args.dataset_path}/pluto_code'
    stdout_path = f'{args.dataset_path}/stdout'
    poly_path = f'{args.dataset_path}/poly_code'

    classification = pd.read_csv(f"{args.dataset_path}/{args.classification_name}", index_col=0)

    if args.dataset == "looprag":
        classification['orig_file'] = classification['file_name'].apply(lambda x: x[:-2])
        classification['idx'] = classification['file_name'].apply(lambda x: x[-1])

        valuable = classification[(classification['loop interchange'] == 1) | (classification['loop skewing'] == 1) | (classification['loop fusion'] == 1) | (classification['loop distribution'] == 1) | (classification['loop shifting'] == 1)]
    elif args.dataset == "colagen":
        valuable = classification

    valuable.loc[:, 'file_name'] = valuable['file_name'].astype('str')


    plutos = [x.split('.')[0] for x in os.listdir(pluto_path) if x.endswith('.pluto.c')]
    stdouts = [x.split('.')[0] for x in os.listdir(stdout_path) if x.endswith('.stdout')]
    options = list(set(plutos) & set(stdouts))
    files = list(set(valuable.file_name) & set(options))



    pool = mp.Pool(24)
    results = pool.starmap_async(info_process, it.product(files), error_callback=pool_err_call_back)
    pool.close()
    pool.join()
    
    
    
    contents = {}
    errors = []

    for res in results.get():
        if res[0]:
            content, file = res[1:]
            contents[file] = content
        else:
            errors.append(res[1:])

    print(len(contents))
    print(len(errors))
    
    if args.dataset == "looprag":
        valuable_new = valuable[valuable['file_name'].isin(contents.keys())]
        available = []
        
        for _ in range(4):
            available.extend(valuable_new.drop_duplicates(subset='orig_file').file_name.to_list())
            valuable_new = valuable_new[valuable_new.duplicated(subset='orig_file')]
            print(len(valuable_new), len(available))
            
        available_contents = {key: contents[key] for key in available}
    elif args.dataset == "colagen":
        available_contents = contents



    # date = datetime.datetime.now().strftime('%m%d')
    # json_name = f'{args.dataset}_{len(available_contents)}_{date}.json'
    json_name = f'{args.dataset}_{len(available_contents)}.json'
    print(json_name)
    with open(f'{args.output_path}/{json_name}', 'w') as fp:
        json.dump(list(available_contents.values()), fp)