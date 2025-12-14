from typing import List, Dict, Tuple, Set, Any, Optional
from itertools import combinations_with_replacement

def generate_terms(num_iterators: int, max_degree: int) -> List[Tuple]:
        """
        生成所有可能的项（常数项、线性项、二次项等）
        
        Args:
            num_iterators: 循环变量数量
            max_degree: 最大次数
            
        Returns:
            所有可能的项列表，按次数排序
        """
        terms = [()]  # 常数项
        
        for degree in range(1, max_degree + 1):
            # 生成所有可能的d次项（允许重复变量）
            terms.extend(combinations_with_replacement(range(num_iterators), degree))
        
        return terms