"""Resolve global parameter values for polybench .h files."""

import re
from pathlib import Path


class ResolveGlobalParamsPolybench:
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
