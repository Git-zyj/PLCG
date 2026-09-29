#!/usr/bin/env bash
#
# Build the PLCG-modified PLuTo used by the `main` branch:
#   Compilers/pluto = upstream pluto 0.12.0 (submodule) + patches/pluto-0.12.0-plcg.patch
#
# Usage:  ./scripts/setup_pluto.sh
#
# Steps:
#   1. fetch pluto's nested dependencies (isl, cloog-isl, piplib, polylib,
#      candl, clan, openscop, pet);
#   2. normalize CRLF endings in those trees (Windows checkouts break autogen.sh);
#   3. apply the PLCG patch (`--plcg-info`, `--custom-context`, parameter bounds
#      from `<kernel>.h`);
#   4. regenerate autotools files, configure and build;
#   5. render the pipeline wrappers polycc_parallel / inscop_parallel with the
#      paths of this checkout (nothing hard-coded).
#
# Environment:
#   PLCG_SKIP_AUTOGEN=1   skip step 4's autotools regeneration
#
set -euo pipefail

ROOT="$(cd "$(dirname "${BASH_SOURCE[0]}")/.." && pwd)"
PLUTO_DIR="$ROOT/Compilers/pluto"
PATCH="$ROOT/patches/pluto-0.12.0-plcg.patch"
WRAPPER_DIR="$ROOT/scripts/wrappers"
DEPS_TARBALL="$ROOT/third_party/pluto-0.12.0-deps.tar.gz"
DEPS="isl cloog-isl piplib polylib candl clan openscop pet"

cd "$PLUTO_DIR"

# pluto 0.12.0's configure insists on LLVM FileCheck for its test-suite; the
# binary usually lives outside PATH (e.g. /usr/lib/llvm-14/bin/FileCheck).
ensure_filecheck() {
    command -v FileCheck >/dev/null 2>&1 && return 0
    local d
    for d in /usr/lib/llvm-*/bin /usr/local/opt/llvm/bin; do
        if [ -x "$d/FileCheck" ]; then
            export PATH="$d:$PATH"
            echo "[setup] using FileCheck from $d"
            return 0
        fi
    done
    echo "[setup] WARNING: LLVM FileCheck not found; ./configure may refuse to run" >&2
}

ensure_filecheck

normalize_deps_eol() {
    local d
    for d in $DEPS; do
        [ -d "$d" ] || continue
        find "$d" -type f -size -2M -print0 2>/dev/null \
            | xargs -0 -r grep -IlZ $'\r' 2>/dev/null \
            | xargs -0 -r sed -i 's/\r$//' || true
    done
}

# 1) dependencies --------------------------------------------------------
if [ -f isl/include/isl/isl.h ] && [ -d clan ] && [ -d pet ]; then
    echo "[setup] dependency trees already present; skipping fetch"
elif git submodule update --init --recursive 2>/dev/null; then
    echo "[setup] initialising pluto dependencies: $DEPS"
    echo "[setup] nested submodules initialized"
else
    echo "[setup] nested submodules could not be fetched; using vendored snapshot"
    if [ -f "$DEPS_TARBALL" ]; then
        tar -xzf "$DEPS_TARBALL"
    else
        echo "ERROR: vendored dependency snapshot not found: $DEPS_TARBALL" >&2
        echo "Provide the pluto 0.12.0 submodules manually and retry." >&2
        exit 1
    fi
fi

normalize_deps_eol

# 2) PLCG patch ----------------------------------------------------------
if git apply --reverse --check "$PATCH" 2>/dev/null; then
    echo "[setup] PLCG patch already applied"
else
    git apply --whitespace=nowarn "$PATCH"
    echo "[setup] PLCG patch applied"
fi

# 3) build ---------------------------------------------------------------
if [ "${PLCG_SKIP_AUTOGEN:-0}" != "1" ]; then
    echo "[setup] regenerating autotools files"
    ./autogen.sh
fi

./configure
# TEXI2DVI/MAKEINFO are neutralised: the nested dependency cloog-isl builds
# texinfo documentation as part of `all`, which would otherwise pull in a full
# TeX installation that the pipeline never uses.
make -j"$(nproc)" TEXI2DVI=true MAKEINFO=true

# 4) pipeline wrappers ---------------------------------------------------
for tpl in polycc_parallel inscop_parallel; do
    out="$PLUTO_DIR/$tpl"
    sed "s|@PLUTO_DIR@|$PLUTO_DIR|g" "$WRAPPER_DIR/$tpl.in" > "$out"
    chmod +x "$out"
    echo "[setup] wrote $out"
done

echo "[setup] pluto binary: $PLUTO_DIR/tool/pluto"
echo "[setup] consumed by:  python3 optimization_and_analysis.py -p $PLUTO_DIR/polycc_parallel"
