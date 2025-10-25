import json

from dataclasses import dataclass, field
from dataclasses_json import dataclass_json

from typing import List, Tuple, Optional


@dataclass_json
@dataclass
class DataClass:
    params: dict
    max_degree: int
    arrays: List
    instructions: List
    type: Optional[str] = "float"
    init_with: Optional[str] = "random"
    special_loop_bounds: Optional[dict] = None
    array_sizes: dict = field(init=False)

    def __post_init__(self):
        unparsed_arrays = self.arrays
        res = parse_to_array(unparsed_arrays)
        self.array_sizes = get_arrays_with_sizes(res)

def get_arrays_with_sizes(arrays):
    """
    {'B': (64, 32, 32), 'C': (64, 16, 64), 'A': (65536,)}
    :return:
    """
    arrays_dict = {}
    for array in arrays:
        arrays_dict[array[0]] = array[1]
    return arrays_dict


def parse_string_array(name_with_dims: str) -> Tuple[str, Tuple[int]]:
    # todo this type might not be correct
    # in: A[xA,yA,zA] || C[xC,yC] || B[16,32]
    # out: (A, (16,64,16)) || (B,(65536,))
    """From string array in input make a tuple (name, (sizes))"""
    # Eliminate whitespaces
    name_with_dims = name_with_dims.replace(" ", "")
    left_bracket_pos = name_with_dims.find('[')
    right_bracket_pos = name_with_dims.find(']')
    array_name = name_with_dims[:left_bracket_pos]
    eval_sizes = name_with_dims[left_bracket_pos:right_bracket_pos + 1]
    sizes = eval_sizes[1:-1].split(',')
    return array_name, sizes


def parse_to_array(array):
    return [parse_string_array(arr) for arr in array]

def read_file_data(filename):
    with open(filename, 'r') as file:
        try:
            data = json.load(file)
        except:
            print(f'[zyj-debug] There is something wrong with json file {filename}.\n')
        return data

def parse_data(filename):
    input_data = read_file_data(filename)
    data = DataClass.from_dict(input_data)
    return data
