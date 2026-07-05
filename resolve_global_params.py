"""Resolve global parameter values for different benchmark datasets.

Supported datasets:
  - polybench: .h files with #ifdef DATASET blocks + _PB_X macros
  - tsvc:      common.h with simple #define values
  - lore:      /* start param define */ blocks in .c files
"""

import re
from pathlib import Path


class PolybenchResolver:
    """Resolve _PB_* parameters from polybench .h files.

    Polybench .h files use dataset-dependent #define blocks:
      #ifdef LARGE_DATASET
      #   define M 1200
      #endif
    And later:
      # define _PB_M POLYBENCH_LOOP_BOUND(M,m)
    """

    DATASET_OPTIONS = ["MINI_DATASET", "SMALL_DATASET", "MEDIUM_DATASET",
                       "LARGE_DATASET", "EXTRALARGE_DATASET"]

    def __init__(self, dataset: str = "LARGE_DATASET"):
        if dataset not in self.DATASET_OPTIONS:
            raise ValueError(f"Unknown dataset: {dataset}")
        self.dataset = dataset

    def resolve(self, h_file_path: str) -> dict:
        h_path = Path(h_file_path)
        if not h_path.exists():
            return {}
        with open(h_path, "r", encoding="utf-8") as f:
            content = f.read()

        # Extract dataset-specific #define X value pairs
        base_values = {}
        for option in self.DATASET_OPTIONS:
            pattern = re.compile(
                r"#\s*ifdef\s+" + option + r"\b(.*?)(?=#\s*(?:ifdef|ifndef|endif|else)\b)",
                re.DOTALL
            )
            for m in pattern.finditer(content):
                block = m.group(1)
                for dm in re.finditer(r"#\s*define\s+(\w+)\s+(\d+)", block):
                    name, val = dm.group(1), int(dm.group(2))
                    if option == self.dataset:
                        base_values[name] = val

        if not base_values:
            return {}

        # Resolve _PB_X = POLYBENCH_LOOP_BOUND(X, ...)
        result = {}
        pb_pattern = re.compile(
            r"#\s*define\s+(_PB_\w+)\s+POLYBENCH_LOOP_BOUND\s*\(\s*(\w+)\s*,"
        )
        for m in pb_pattern.finditer(content):
            pb_name = m.group(1)
            base_name = m.group(2)
            if base_name in base_values:
                result[pb_name] = base_values[base_name]
        return result


class TsvcResolver:
    """Resolve parameters from tsvc common.h file.

    common.h contains simple #define statements:
      #define iterations 100000
      #define LEN_1D 32000
      #define LEN_2D 256
    """

    def __init__(self):
        pass

    def resolve(self, h_file_path: str) -> dict:
        h_path = Path(h_file_path)
        if not h_path.exists():
            return {}
        with open(h_path, "r", encoding="utf-8") as f:
            content = f.read()

        result = {}
        for m in re.finditer(r"#define\s+(\w+)\s+(\d+)", content):
            name, val = m.group(1), int(m.group(2))
            result[name] = val
        return result


class LoreResolver:
    """Resolve parameters from LORE .c files.

    Each .c file contains:
      /* start param define */
      #define N 400
      #define M 600
      /* end parameters define */
    """

    def __init__(self):
        pass

    def resolve(self, c_file_path: str) -> dict:
        c_path = Path(c_file_path)
        if not c_path.exists():
            return {}
        with open(c_path, "r", encoding="utf-8") as f:
            content = f.read()

        # Extract block between start/end markers
        m = re.search(
            r"/\*\s*start param define\s*\*/(.*?)/\*\s*end parameters? define\s*\*/",
            content, re.DOTALL
        )
        if not m:
            return {}

        result = {}
        block = m.group(1)
        for dm in re.finditer(r"#define\s+(\w+)\s+(\d+)", block):
            name, val = dm.group(1), int(dm.group(2))
            result[name] = val
        return result


# Legacy alias for backward compatibility
ResolveGlobalParamsPolybench = PolybenchResolver
