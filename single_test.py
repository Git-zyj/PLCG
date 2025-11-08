#!/usr/bin/env python3
# single_test.py

import os
import sys
import logging
import random
import numpy as np
    
from loop_properties_generator import Loop_Properties_Generator
from c_code_generator import C_Code_Generator
from path_settings import json_input_path, target_path

random.seed(0)
np.random.seed(0)

def parse_filename(filename):
    """
    从文件名解析参数值
    格式: 4422332323_00 表示 10个参数 + _ + id
    """
    # 去掉扩展名
    base_name = os.path.splitext(filename)[0]
    
    # 分离参数部分和id部分
    if '_' in base_name:
        param_str, id_str = base_name.split('_')
        id_val = int(id_str)
    else:
        param_str = base_name
        id_val = 0
    
    # 解析10个参数
    if len(param_str) != 10:
        raise ValueError(f"参数字符串长度必须为10，实际为{len(param_str)}: {param_str}")
    
    params = {
        'arg_depth': int(param_str[0]),
        'arg_nstmts': int(param_str[1]),
        'arg_bounds_index': int(param_str[2]),
        'arg_prob_bounds_exist': int(param_str[3]),
        'arg_narrays_per_dim': int(param_str[4]),
        'arg_avg_narrays_read_per_stmt': int(param_str[5]),
        'arg_bounds_coef': int(param_str[6]),
        'arg_avg_ndeps_read_per_stmt': int(param_str[7]),
        'arg_bounds_distance': int(param_str[8]),
        'arg_prob_dep_write_exist': int(param_str[9]),
        'id': id_val
    }
    
    return params

def is_json_path(input_str):
    """
    判断输入是否是JSON文件路径
    """
    return input_str.endswith('.json')

def is_basename(input_str):
    """
    判断输入是否是basename（纯文件名，不含路径）
    """
    # 去掉可能的.json扩展名
    name_without_ext = os.path.splitext(input_str)[0]
    # 检查是否是10位数字 + 可选的下划线 + 数字
    base_part = name_without_ext.split('_')[0]
    return base_part.isdigit() and len(base_part) == 10

def regenerate_from_json(json_path):
    """
    从现有的JSON文件重新生成C代码
    """
    if not os.path.exists(json_path):
        json_path = os.path.join(json_input_path, json_path)
    
    print(f"📁 JSON文件模式: {json_path}")
    
    if not os.path.exists(json_path):
        print(f"❌ JSON文件不存在: {json_path}")
        return False
    
    try:
        # 创建C代码生成器
        c_code_generator = C_Code_Generator(log_level=logging.DEBUG)
        
        print("🚀 开始重新生成C代码...")
        
        # 直接使用现有的JSON文件生成C代码
        c_code_generator.generate_c_code(json_path)
        
        print(f"✅ C代码重新生成成功！")
        print(f"📁 源JSON文件: {json_path}")
        
        return True
        
    except Exception as e:
        print(f"❌ C代码重新生成失败！")
        print(f"错误类型: {type(e).__name__}")
        print(f"错误信息: {str(e)}")
        print(f"\n详细堆栈跟踪:")
        import traceback
        traceback.print_exc()
        return False

def generate_from_basename(basename):
    """
    从basename重新生成完整的流程（properties + C代码）
    """
    print(f"📝 Basename模式: {basename}")
    
    try:
        # 解析参数
        params = parse_filename(basename)
        print("📋 解析的参数:")
        for key, value in params.items():
            print(f"   {key}: {value}")
        
        # 创建生成器实例
        loop_properties_generator = Loop_Properties_Generator(log_level=logging.DEBUG)
        c_code_generator = C_Code_Generator(log_level=logging.DEBUG)
        
        print("\n🚀 开始生成JSON文件...")
        
        # 生成JSON文件
        file_path = loop_properties_generator.generate_json_file(
            arg_depth=params['arg_depth'],
            arg_nstmts=params['arg_nstmts'],
            arg_bounds_index=params['arg_bounds_index'],
            arg_prob_bounds_exist=params['arg_prob_bounds_exist'],
            arg_narrays_per_dim=params['arg_narrays_per_dim'],
            arg_avg_narrays_read_per_stmt=params['arg_avg_narrays_read_per_stmt'],
            arg_bounds_coef=params['arg_bounds_coef'],
            arg_avg_ndeps_read_per_stmt=params['arg_avg_ndeps_read_per_stmt'],
            arg_bounds_distance=params['arg_bounds_distance'],
            arg_prob_dep_write_exist=params['arg_prob_dep_write_exist'],
            id=params['id']
        )
        
        print(f"✅ JSON文件生成成功: {file_path}")
        
        print("\n🚀 开始生成C代码...")
        
        # 生成C代码
        c_code_generator.generate_c_code(file_path)
        print(f"✅ C代码生成成功")
        
        print(f"\n🎉 完整流程生成完成！")
        print(f"📁 JSON文件: {file_path}")
        
        return True
        
    except Exception as e:
        print(f"❌ 完整流程生成失败！")
        print(f"错误类型: {type(e).__name__}")
        print(f"错误信息: {str(e)}")
        print(f"\n详细堆栈跟踪:")
        import traceback
        traceback.print_exc()
        return False

def single_test(input_str):
    """
    单例测试函数 - 根据输入类型自动选择模式
    """
    print("=" * 60)
    print("单例测试工具 - 智能模式选择")
    print("=" * 60)
    
    # 判断输入类型
    if is_json_path(input_str):
        # 模式1: 从现有JSON文件重新生成C代码
        
        return regenerate_from_json(input_str)
    
    elif is_basename(input_str):
        # 模式2: 从basename重新开始完整流程
        return generate_from_basename(input_str)
    
    else:
        print(f"❌ 无法识别的输入格式: {input_str}")
        print("\n支持的输入格式:")
        print("1. JSON文件路径 - 重新生成C代码")
        print("   Example: /path/to/4422332323_00.json")
        print("   Example: 4422332323_00.json (如果文件在当前目录)")
        print("2. Basename - 重新开始完整流程")
        print("   Example: 4422332323_00")
        print("   Example: 3422352321_00")
        return False

def main():
    if len(sys.argv) != 2:
        print("用法: python single_test.py <输入>")
        print("\n输入可以是:")
        print("1. JSON文件路径 - 重新生成C代码")
        print("   Example: python single_test.py /path/to/4422332323_00.json")
        print("2. Basename - 重新开始完整流程") 
        print("   Example: python single_test.py 4422332323_00")
        sys.exit(1)
    
    input_str = sys.argv[1]
    
    # 确保目录存在
    os.makedirs(json_input_path, exist_ok=True)
    os.makedirs(target_path, exist_ok=True)
    
    success = single_test(input_str)
    
    if success:
        print(f"\n✅ 测试成功完成！")
    else:
        print(f"\n❌ 测试失败！")
        sys.exit(1)

if __name__ == "__main__":
    
    main()