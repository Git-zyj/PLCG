#!/usr/bin/env bash
#
# Regression check for the fast pluto driver: run the PLCG modified pluto over
# a set of kernels twice - once through scripts/pluto_driver.py (the default,
# in-process path) and once through the polycc_parallel shell wrapper (the
# reference implementation) - and require byte-identical optimised code and
# dataflow reports.
#
# Usage:  ./scripts/compare_drivers.sh <kernel-dir> [jobs]
#
# <kernel-dir> must contain the kernels (.c/.h) and a kernel_list file; the
# recorded corpus under examples/ works, as does tests/smoke.
#
set -euo pipefail

ROOT="$(cd "$(dirname "${BASH_SOURCE[0]}")/.." && pwd)"
KERNELS="${1:-}"
JOBS="${2:-$(nproc 2>/dev/null || echo 4)}"

if [ -z "$KERNELS" ] || [ ! -d "$KERNELS" ]; then
    echo "usage: $0 <kernel-dir> [jobs]" >&2
    exit 2
fi

PLUTO="${ROOT}/Compilers/pluto"
WORK="$(mktemp -d "${TMPDIR:-/tmp}/plcg-cmp.XXXXXX")"
trap 'rm -rf "$WORK"' EXIT

mkdir -p "$WORK/src"
cp "$KERNELS"/*.c "$KERNELS"/*.h "$WORK/src/" 2>/dev/null || true
if [ -f "$KERNELS/kernel_list" ]; then
    cp "$KERNELS/kernel_list" "$WORK/src/kernel_list"
else
    ls "$WORK/src"/*.c | grep -v polybench > "$WORK/src/kernel_list"
fi

for driver in python wrapper; do
    python3 "$ROOT/optimization_and_analysis.py" -i "$WORK/src" -o "$WORK/$driver" \
        -p "$PLUTO/polycc_parallel" -j "$JOBS" --driver "$driver" >"$WORK/$driver.log" 2>&1
done

same=0
diffn=0
for f in "$WORK/python/stdout"/*.stdout; do
    b="$(basename "$f")"
    stem="${b%.stdout}"
    if cmp -s "$f" "$WORK/wrapper/stdout/$b" &&
       cmp -s "$WORK/python/pluto_code/$stem.pluto.c" "$WORK/wrapper/pluto_code/$stem.pluto.c"; then
        same=$((same + 1))
    else
        diffn=$((diffn + 1))
        echo "DIFF: $stem"
    fi
done

echo "compare_drivers: identical=$same differing=$diffn"
[ "$diffn" -eq 0 ]
