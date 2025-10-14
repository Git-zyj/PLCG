import numpy as np
import logging
from collections import defaultdict
from itertools import product, combinations_with_replacement

# 配置日志 - 这是关键！
logging.basicConfig(level=logging.DEBUG, format='%(levelname)s - %(message)s')

class PolynomialTransformer:
    def __init__(self):
        self.logger = logging.getLogger(__name__)
    
    def generate_terms(self, num_variables, max_degree):
        terms = [()]
        for degree in range(1, max_degree + 1):
            terms.extend(list(combinations_with_replacement(range(num_variables), degree)))
        return terms
    
    @staticmethod
    def create_offset_var(var_idx, coeff, offset):
        if offset == 0:
            return {(var_idx,): coeff}
        return {(var_idx,): coeff, (): coeff * offset}
    
    def apply_offsets_to_poly(self, term_dict, offsets):
        new_poly = defaultdict(int)
        
        for term, coeff in term_dict.items():
            if coeff == 0:
                continue
            if not term:
                new_poly[()] += coeff
                continue
                
            substituted = {(): 1}
            for var_idx in term:
                offset_var = self.create_offset_var(var_idx, 1, offsets[var_idx])
                new_substituted = defaultdict(int)
                for (t1, c1), (t2, c2) in product(substituted.items(), offset_var.items()):
                    merged_term = tuple(sorted(t1 + t2))
                    new_substituted[merged_term] += c1 * c2
                substituted = new_substituted
            
            for t, c in substituted.items():
                new_poly[t] += coeff * c
                
        return dict(new_poly)
    
    def apply_offsets_to_coeffs(self, coeff_matrix, terms, offsets):
        self.logger.debug("开始应用偏移变换")
        
        new_coeffs = []
        for i, coeffs in enumerate(coeff_matrix):
            term_dict = {term: coeff for term, coeff in zip(terms, coeffs) if coeff != 0}
            new_poly = self.apply_offsets_to_poly(term_dict, offsets)
            
            self.logger.debug('原始多项式 %d: %s', i, term_dict)
            self.logger.debug('变换后多项式 %d: %s', i, new_poly)
            
            new_coeff = [new_poly.get(term, 0) for term in terms]
            new_coeffs.append(new_coeff)
            
        self.logger.debug("偏移变换完成")
        return np.array(new_coeffs)

# 测试
if __name__ == "__main__":
    transformer = PolynomialTransformer()
    
    terms = transformer.generate_terms(num_variables=2, max_degree=1)
    coeff_matrix = np.array([[2, 3, 1]])  # 2 + 3*i + j
    offsets = [1, -1]  # i→i+1, j→j-1
    
    result = transformer.apply_offsets_to_coeffs(coeff_matrix, terms, offsets)
    print("结果:", result)