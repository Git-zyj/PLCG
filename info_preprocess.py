"""Extract information from polybench codelets for RAG preprocessing.

Simplified from rag_preprocess.py -- no classification data loading,
no dataset filtering. Just extracts feature_info and property_info.
"""

import argparse
import datetime
import gc
import json
import logging
import os
import sys
from collections import defaultdict
from concurrent.futures import ProcessPoolExecutor, as_completed
from pathlib import Path

import numpy as np

# Add parent dir to path for imports
sys.path.insert(0, str(Path(__file__).resolve().parent))
from extraction_tools import extraction_tools
from resolve_global_params_polybench import ResolveGlobalParamsPolybench

today = datetime.date.today().strftime("%Y%m%d")


class NumpyEncoder(json.JSONEncoder):
    def default(self, obj):
        if isinstance(obj, np.ndarray):
            return obj.tolist()
        if isinstance(obj, (np.integer,)):
            return int(obj)
        if isinstance(obj, (np.floating,)):
            return float(obj)
        return super().default(obj)


def setup_logging(output_path: Path):
    logger = logging.getLogger("info_preprocess")
    logger.setLevel(logging.INFO)
    log_file = output_path / f"info_preprocess_{today}.log"
    fh = logging.FileHandler(log_file, encoding="utf-8")
    fh.setLevel(logging.INFO)
    ch = logging.StreamHandler()
    ch.setLevel(logging.INFO)
    formatter = logging.Formatter("%(asctime)s - %(levelname)s - %(message)s")
    fh.setFormatter(formatter)
    ch.setFormatter(formatter)
    logger.addHandler(fh)
    logger.addHandler(ch)
    return logger


# ---- Module-level worker for multiprocessing ----
_params_cache = None


def _init_worker(params_cache):
    global _params_cache
    _params_cache = params_cache


def _process_single_worker(bench_name, c_path, h_path, stdout_path, pluto_path):
    """Process a single benchmark file. Runs in subprocess."""
    global _params_cache
    tool = extraction_tools()
    content = defaultdict(list)
    content["filename"] = bench_name

    try:
        original_code = tool.extract_codelet_from_file(c_path, 0)
        if not original_code:
            return False, "original code extract failed", bench_name
        content["code"] = original_code
    except Exception as e:
        return False, f"original code extraction error: {e}", bench_name

    try:
        opt_code = tool.extract_codelet_from_file(pluto_path, 1)
        content["opt_code"] = opt_code
        if "i" not in opt_code:
            return False, "opt codelet has no i variable", bench_name
    except Exception as e:
        return False, f"opt codelet extraction error: {e}", bench_name

    try:
        # Use cached params if available, otherwise resolve from .h
        params_with_value = {}
        if _params_cache is not None:
            params_with_value = _params_cache.get(bench_name, {})

        all_info = tool.get_all_info_polybench(
            stdout_path,
            None,  # params resolved externally
            original_code=original_code,
            opt_code=opt_code
        )
        content["feature_info"] = all_info["feature_info"]
        content["property_info"] = all_info["property_info"]

        # Override params_with_value if we resolved them externally
        if params_with_value:
            content["property_info"]["before"]["params_with_value"] = params_with_value

    except Exception as e:
        return False, f"stdout info extraction error: {e}", bench_name

    return True, content, bench_name


class InfoPreprocessor:
    def __init__(self, args):
        self.benchmark_list_path = Path(args.benchmark_list).resolve()
        self.pluto_code_dir = Path(args.pluto_code_dir).resolve()
        self.raw_data_dir = Path(args.raw_data_dir).resolve()
        self.dataset = args.dataset
        self.num_processes = args.num_processes
        self.batch_size = args.batch_size
        self.output_path = Path(args.output).resolve()
        self.output_path.mkdir(parents=True, exist_ok=True)

        self.logger = setup_logging(self.output_path)
        self.success_count = 0
        self.fail_count = 0

        # Initialize resolver
        self.resolver = ResolveGlobalParamsPolybench(dataset=self.dataset)

    def load_benchmark_list(self):
        """Parse benchmark_list to get (name, c_path, h_path) tuples."""
        entries = []
        with open(self.benchmark_list_path, "r") as f:
            for line in f:
                line = line.strip()
                if not line or line.startswith("#"):
                    continue
                # Line format: ./datamining/correlation/correlation.c
                rel = line.lstrip("./")
                c_path = self.raw_data_dir / rel
                if not c_path.exists():
                    self.logger.warning(f"Source file not found: {c_path}")
                    continue
                # .h file is in the same directory
                h_path = c_path.with_suffix(".h")
                # Benchmark name is the leaf name (e.g., "correlation")
                bench_name = c_path.stem
                # stdout and pluto_code use just the bench name
                stdout_path = str(self.pluto_code_dir / "stdout" / f"{bench_name}.stdout")
                pluto_path = str(self.pluto_code_dir / "pluto_code" / f"{bench_name}.pluto.c")
                entries.append((bench_name, str(c_path), str(h_path), stdout_path, pluto_path))
        return entries

    def resolve_all_params(self, entries):
        """Pre-resolve global params for all benchmarks."""
        params_cache = {}
        for bench_name, _, h_path, _, _ in entries:
            try:
                p = self.resolver.resolve(h_path)
                if p:
                    params_cache[bench_name] = p
            except Exception as e:
                self.logger.warning(f"Params resolve failed for {bench_name}: {e}")
        self.logger.info(f"Resolved params for {len(params_cache)}/{len(entries)} benchmarks")
        return params_cache

    def process_batch(self, batch_entries):
        batch_success = 0
        batch_fail = 0
        batch_contents = {}

        self.logger.info(f"Processing batch of {len(batch_entries)} files...")

        with ProcessPoolExecutor(max_workers=self.num_processes,
                                 initializer=_init_worker,
                                 initargs=(self.params_cache,)) as executor:
            future_map = {}
            for bench_name, c_path, h_path, stdout_path, pluto_path in batch_entries:
                fut = executor.submit(_process_single_worker,
                                      bench_name, c_path, h_path,
                                      stdout_path, pluto_path)
                future_map[fut] = bench_name

            for i, future in enumerate(as_completed(future_map), 1):
                bench_name = future_map[future]
                try:
                    success, result, name = future.result()
                    if success:
                        batch_success += 1
                        batch_contents[name] = result
                    else:
                        batch_fail += 1
                        self.logger.error(f"FAIL {name}: {result}")
                except Exception as e:
                    batch_fail += 1
                    self.logger.error(f"EXCEPTION {bench_name}: {e}")

        return batch_contents, batch_success, batch_fail

    def run(self):
        self.logger.info("=" * 60)
        self.logger.info("Starting info preprocess for polybench")
        self.logger.info(f"Dataset option: {self.dataset}")
        self.logger.info("=" * 60)

        entries = self.load_benchmark_list()
        self.logger.info(f"Loaded {len(entries)} benchmarks from list")

        if not entries:
            self.logger.error("No valid entries found")
            return

        # Pre-resolve all params
        self.params_cache = self.resolve_all_params(entries)

        start_time = datetime.datetime.now()
        all_contents = {}

        # Process in batches
        for i in range(0, len(entries), self.batch_size):
            batch = entries[i:i + self.batch_size]
            batch_start = datetime.datetime.now()
            batch_contents, success, fail = self.process_batch(batch)
            all_contents.update(batch_contents)
            self.success_count += success
            self.fail_count += fail
            batch_time = (datetime.datetime.now() - batch_start).total_seconds()
            self.logger.info(f"Batch completed: {success}/{len(batch)} ok, {batch_time:.1f}s")
            gc.collect()

        total_time = (datetime.datetime.now() - start_time).total_seconds()

        # Save results
        out_name = f"polybench_{len(all_contents)}_{today}.json"
        out_path = self.output_path / out_name
        with open(out_path, "w", encoding="utf-8") as f:
            json.dump(list(all_contents.values()), f, cls=NumpyEncoder)

        self.logger.info(f"Output: {out_path}")
        self.logger.info(f"Total: {self.success_count} ok, {self.fail_count} fail, {total_time:.1f}s")


def parse_args():
    parser = argparse.ArgumentParser(description="Extract info from polybench codelets")
    parser.add_argument("--benchmark-list", required=True,
                        help="Path to benchmark_list file")
    parser.add_argument("--pluto-code-dir", required=True,
                        help="Path to pluto_code directory (contains stdout/ and pluto_code/)")
    parser.add_argument("--raw-data-dir", required=True,
                        help="Path to raw_data/benchmark/polybench")
    parser.add_argument("--dataset", default="LARGE_DATASET",
                        choices=["MINI_DATASET", "SMALL_DATASET", "MEDIUM_DATASET",
                                 "LARGE_DATASET", "EXTRALARGE_DATASET"],
                        help="Dataset size option")
    parser.add_argument("-o", "--output", default="./output",
                        help="Output directory")
    parser.add_argument("-j", "--num-processes", type=int, default=min(os.cpu_count() or 1, 16),
                        help="Number of parallel processes")
    parser.add_argument("--batch-size", type=int, default=256,
                        help="Batch size for processing")
    return parser.parse_args()


if __name__ == "__main__":
    args = parse_args()
    preprocessor = InfoPreprocessor(args)
    preprocessor.run()
