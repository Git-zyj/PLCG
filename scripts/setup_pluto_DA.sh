#!/usr/bin/env bash
#
# Apply the LOOPRAG modifications (pluto_DA) to the pristine pluto submodule
# and build the modified PLuTo.
#
# Usage:  ./scripts/setup_pluto_DA.sh
#
# The pluto submodule (Compilers/pluto_DA) is pinned to upstream pluto 0.11.4.
# This script:
#   1. initializes the nested dependencies (clan/candl/cloog-isl/isl/...);
#      if they cannot be fetched (some 0.11.4 pins live on repo.or.cz and are
#      no longer advertised), it falls back to the vendored snapshot in
#      third_party/pluto_DA_deps.tar.gz;
#   2. normalizes CRLF line endings in the dependency trees (a Windows checkout
#      or snapshot otherwise breaks autogen.sh with "bad interpreter: /bin/sh^M");
#   3. applies patches/pluto_DA.patch (the custom-context / zyj-debug changes);
#   4. regenerates the autotools files and builds pluto_DA;
#   5. generates the multiprocessing-safe wrapper scripts
#      (polycc_multiprocessing / inscop_multiprocessing) from the built
#      polycc / inscop, so no hard-coded paths are shipped.
#
# Environment:
#   PLCG_SKIP_AUTOGEN=1   skip step 4a (autotools regeneration)
#
set -euo pipefail

ROOT="$(cd "$(dirname "${BASH_SOURCE[0]}")/.." && pwd)"
PLUTO_DIR="$ROOT/Compilers/pluto_DA"
PATCH="$ROOT/patches/pluto_DA.patch"
DEPS_TARBALL="$ROOT/third_party/pluto_DA_deps.tar.gz"
DEPS="clan candl isl cloog-isl openscop piplib polylib"

cd "$PLUTO_DIR"

# pluto 0.11.4 only builds with LF endings: autogen.sh / ylwrap / configure
# abort with "bad interpreter: /bin/sh^M" when they carry CRLF. The vendored
# snapshot is packed with LF, but stay defensive in case it is ever regenerated
# from a Windows checkout.
normalize_deps_eol() {
    local d
    for d in $DEPS; do
        [ -d "$d" ] || continue
        find "$d" -type f -size -2M -print0 2>/dev/null \
            | xargs -0 -r grep -IlZ $'\r' 2>/dev/null \
            | xargs -0 -r sed -i 's/\r$//' || true
    done
}

# 1) nested dependencies ------------------------------------------------
if [ -f isl/include/isl/isl.h ] && [ -f clan/include/clan/clan.h ] \
    && [ -f candl/include/candl/candl.h ] && [ -f openscop/include/osl/osl.h ]; then
    echo "[setup] nested dependencies already present; skipping fetch"
elif git submodule update --init --recursive 2>/dev/null; then
    echo "[setup] nested submodules initialized"
else
    echo "[setup] nested submodules could not be fetched; using vendored snapshot"
    if [ -f "$DEPS_TARBALL" ]; then
        tar -xzf "$DEPS_TARBALL"
    else
        echo "ERROR: vendored dependency snapshot not found: $DEPS_TARBALL" >&2
        echo "Provide the pluto 0.11.4 submodules manually and retry." >&2
        exit 1
    fi
fi

normalize_deps_eol

# 2) apply the pluto_DA modifications -----------------------------------
if git apply --reverse --check "$PATCH" 2>/dev/null; then
    echo "[setup] patch already applied"
else
    git apply --whitespace=nowarn "$PATCH"
    echo "[setup] patch applied"
fi

# 3) build ---------------------------------------------------------------
# Regenerate the autotools files for pluto *and* every dependency. Skipping
# this when ./configure already exists is not safe: after the submodules (or
# the vendored snapshot) have been refreshed, a stale aclocal.m4 / configure
# coming from another machine fails at build time with
# "libtool: Version mismatch error".
if [ "${PLCG_SKIP_AUTOGEN:-0}" != "1" ]; then
    echo "[setup] regenerating autotools files (pluto + dependencies)"
    ./autogen.sh
fi

./configure
make -j"$(nproc)"

# 4) multiprocessing wrapper scripts -------------------------------------
python3 "$ROOT/scripts/make_multiprocessing_wrappers.py" "$PLUTO_DIR"

echo "[setup] pluto_DA built: $PLUTO_DIR/src/pluto"
echo "[setup] add $PLUTO_DIR to PATH (polycc_multiprocessing is used by the corpus pipeline)"
