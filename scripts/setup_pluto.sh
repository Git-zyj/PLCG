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

# pluto 0.12.0 needs one LLVM toolchain that provides *all* of: llvm-config
# (for pet), FileCheck (for the test-suite) and the clang headers
# (clang/Basic/SourceLocation.h). Machines often ship several versions and
# `llvm-config` may resolve to a version without headers (e.g. LLVM 13 on the
# GitHub runners), so pick one explicitly and pin LLVM_CONFIG.
select_llvm_toolchain() {
    local d prefix
    for d in /usr/lib/llvm-*/bin /usr/local/opt/llvm/bin /opt/homebrew/opt/llvm/bin; do
        [ -x "$d/llvm-config" ] || continue
        prefix="${d%/bin}"
        [ -f "$prefix/include/clang/Basic/SourceLocation.h" ] || continue
        [ -x "$d/FileCheck" ] || command -v FileCheck >/dev/null 2>&1 || continue
        export PATH="$d:$PATH"
        export LLVM_CONFIG="$d/llvm-config"
        echo "[setup] using LLVM toolchain: $prefix ($($d/llvm-config --version))"
        return 0
    done
    echo "[setup] WARNING: no LLVM toolchain with llvm-config + clang headers found." >&2
    echo "[setup]          install e.g. 'llvm llvm-14-tools llvm-14-dev clang libclang-14-dev'." >&2
}

select_llvm_toolchain

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
# deps_present also checks *nested* submodules: the pins of e.g.
# cloog-isl/isl and pet/isl are no longer advertised by their remotes, so a
# recursive fetch can fail halfway and leave an incomplete tree behind.
deps_present() {
    [ -d isl ] && [ -d clan ] && [ -d pet ] \
        && [ -d clan/osl ] && [ -d candl/osl ] \
        && [ -d cloog-isl/isl ] && [ -d pet/isl ]
}

if deps_present; then
    echo "[setup] dependency trees already present; skipping fetch"
elif git submodule update --init --recursive 2>/dev/null && deps_present; then
    echo "[setup] initialising pluto dependencies: $DEPS"
    echo "[setup] nested submodules initialized"
else
    if [ -f "$DEPS_TARBALL" ]; then
        echo "[setup] using the vendored dependency snapshot ($DEPS_TARBALL)"
        tar -xzf "$DEPS_TARBALL"
    else
        echo "ERROR: nested submodules are incomplete and no vendored snapshot" >&2
        echo "       was found at $DEPS_TARBALL" >&2
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
