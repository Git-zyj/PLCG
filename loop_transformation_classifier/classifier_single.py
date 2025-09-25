from extraction_tools import extraction_tools

from loop_transformation_classifier import loop_transformation_classifiers

target_path = '/home/zyj/Data0/Dataset/LOOPRAG'

pluto_code_path = f'{target_path}/pluto_code'
stdout_path = f'{target_path}/stdout'

file_name = '3236132116_3'

tool = extraction_tools()

_, stmts, _, schedules, _, loop_types = tool.extract_stdout(f"{file_name}.stdout", stdout_path)
c_codelet = tool.extract_codelet(f"{file_name}.pluto.c", pluto_code_path, 1)

print(schedules[0])
print(schedules[1])
print(loop_types[1])

task = loop_transformation_classifiers(stmts, schedules, loop_types, c_codelet)
answer = task.loop_transformation_analysis()

print(answer)