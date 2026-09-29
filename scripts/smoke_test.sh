#!/usr/bin/env bash
#
# Health check for the PLCG toolchain: runs the generated polycc_parallel
# wrapper on a tiny kernel and asserts that the PLCG-specific reports appear.
#
# Usage: ./scripts/smoke_test.sh          (needs ./scripts/setup_pluto.sh first)
#
set -euo pipefail

ROOT="$(cd "$(dirname "${BASH_SOURCE[0]}")/.." && pwd)"
PLUTO_DIR="$ROOT/Compilers/pluto"
WRAPPER="$PLUTO_DIR/polycc_parallel"
WORK="$(mktemp -d "${TMPDIR:-/tmp}/plcg-smoke.XXXXXX")"
trap 'rm -rf "$WORK"' EXIT

if [ ! -x "$PLUTO_DIR/tool/pluto" ] || [ ! -x "$WRAPPER" ]; then
    echo "smoke: pluto is not built yet - run ./scripts/setup_pluto.sh" >&2
    exit 1
fi

cp "$ROOT/tests/smoke/smoke_kernel.c" "$ROOT/tests/smoke/smoke_kernel.h" "$WORK/"
cp "$ROOT/polybench/polybench.h" "$WORK/" 2>/dev/null || true

echo "smoke: running $WRAPPER on tests/smoke/smoke_kernel.c"
cd "$WORK"
"$WRAPPER" smoke_kernel.c -q --parallel --tile --nocloogbacktrack \
    --custom-context --plcg-info -o smoke_kernel.pluto.c > smoke_kernel.stdout

[ -s smoke_kernel.pluto.c ] || { echo "smoke: no optimised code produced" >&2; exit 1; }
grep -q '\[plcg-info\] Before affine transformations' smoke_kernel.stdout \
    || { echo "smoke: missing 'Before' report" >&2; exit 1; }
grep -q '\[plcg-info\] After affine transformations' smoke_kernel.stdout \
    || { echo "smoke: missing 'After' report" >&2; exit 1; }

# the fast driver must produce exactly the same two files as the wrapper
echo "smoke: cross-checking the python driver"
python3 "$ROOT/scripts/pluto_driver.py" smoke_kernel.c -q --parallel --tile \
    --nocloogbacktrack --custom-context --plcg-info -o smoke_kernel.driver.pluto.c
if ! cmp -s smoke_kernel.pluto.c smoke_kernel.driver.pluto.c; then
    echo "smoke: driver output differs from the wrapper" >&2
    diff -u smoke_kernel.pluto.c smoke_kernel.driver.pluto.c | head -40 >&2
    exit 1
fi
if ! cmp -s smoke_kernel.stdout smoke_kernel.driver.pluto.stdout; then
    echo "smoke: driver report differs from the wrapper" >&2
    diff -u smoke_kernel.stdout smoke_kernel.driver.pluto.stdout | head -40 >&2
    exit 1
fi

echo "smoke: OK"
echo "  optimised code : $WORK/smoke_kernel.pluto.c ($(wc -l < smoke_kernel.pluto.c) lines)"
echo "  dataflow report: $WORK/smoke_kernel.stdout ($(wc -l < smoke_kernel.stdout) lines)"
