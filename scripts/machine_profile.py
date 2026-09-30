#!/usr/bin/env python3
"""Machine-aware defaults for the pipeline's worker counts.

The pipeline must run on machines of very different sizes, so the number of
workers is probed instead of hard-coded:

* ``cpu``        - CPU-bound stages (synthesis, classification, corpus)
* ``subprocess`` - the pluto stage, whose workers mostly *wait* on the pluto
                   binary, so it can safely oversubscribe the cores

Both are capped by the available memory (each worker needs roughly
``MEM_PER_WORKER_GB``), so a small container does not get 64 threads.
"""

from __future__ import annotations

import os

__all__ = ["cpu_count", "available_memory_gb", "recommend", "describe"]

CPU_BOUND_CAP = 16
SUBPROCESS_CAP = 32
SUBPROCESS_FACTOR = 2

# rough per-worker memory footprints: a python worker with numpy/pandas, and a
# thread that only owns a pluto/gcc child process
MEM_PER_WORKER_GB = {"cpu": 0.75, "subprocess": 0.5}


def cpu_count() -> int:
    """Number of usable CPUs (affinity-aware when available)."""
    try:
        return max(1, len(os.sched_getaffinity(0)))  # type: ignore[attr-defined]
    except AttributeError:
        return max(1, os.cpu_count() or 1)


def available_memory_gb() -> float | None:
    """MemAvailable from /proc/meminfo, or None when it cannot be read."""
    try:
        with open("/proc/meminfo", "r", encoding="utf-8") as handle:
            for line in handle:
                if line.startswith("MemAvailable:"):
                    return int(line.split()[1]) / (1024 ** 2)
    except OSError:
        pass
    return None


def recommend(kind: str = "cpu", override: int | None = None) -> int:
    """Recommended worker count; ``override`` (a user supplied -j) wins."""
    if override:
        return max(1, int(override))

    cpus = cpu_count()
    if kind == "subprocess":
        workers = min(cpus * SUBPROCESS_FACTOR, SUBPROCESS_CAP)
    else:
        workers = min(cpus, CPU_BOUND_CAP)

    mem = available_memory_gb()
    if mem is not None:
        workers = min(workers, max(1, int(mem // MEM_PER_WORKER_GB.get(kind, 1.0))))
    return max(1, workers)


def describe(kind: str = "cpu", override: int | None = None) -> str:
    mem = available_memory_gb()
    mem_text = f"{mem:.1f} GB free" if mem is not None else "memory unknown"
    return (f"workers={recommend(kind, override)} ({kind}, {cpu_count()} cpus, {mem_text}"
            f"{', overridden' if override else ''})")
