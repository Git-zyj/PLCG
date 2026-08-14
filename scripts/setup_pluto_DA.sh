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
#   2. applies patches/pluto_DA.patch (the custom-context / zyj-debug changes);
#   3. builds pluto_DA;
#   4. generates the multiprocessing-safe wrapper scripts
#      (polycc_multiprocessing / inscop_multiprocessing) from the built
#      polycc / inscop, so no hard-coded paths are shipped.
#
set -euo pipefail

ROOT="$(cd "$(dirname "${BASH_SOURCE[0]}")/.." && pwd)"
PLUTO_DIR="$ROOT/Compilers/pluto_DA"
PATCH="$ROOT/patches/pluto_DA.patch"
DEPS_TARBALL="$ROOT/third_party/pluto_DA_deps.tar.gz"

cd "$PLUTO_DIR"

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

# 1b) normalize line endings --------------------------------------------
# The vendored snapshot and Windows checkouts may carry CRLF, which breaks
# shell scripts (and pluto's strcmp-based .h parsing). Convert text files.
find . -type f -not -path "./.git/*" | while read -r f; do
    if file "$f" | grep -qiE "text|script|empty"; then
        sed -i 's/\r$//' "$f"
    fi
done

# 2) apply the pluto_DA modifications -----------------------------------
if git apply --reverse --check "$PATCH" 2>/dev/null; then
    echo "[setup] patch already applied"
else
    git apply --whitespace=nowarn "$PATCH"
    echo "[setup] patch applied"
fi

# 3) build ---------------------------------------------------------------
if [ ! -x configure ]; then
    ./autogen.sh
fi
./configure
make -j"$(nproc)"

# 4) multiprocessing wrapper scripts -------------------------------------
python3 "$ROOT/scripts/make_multiprocessing_wrappers.py" "$PLUTO_DIR"

echo "[setup] pluto_DA built: $PLUTO_DIR/src/pluto"
echo "[setup] add $PLUTO_DIR to PATH (polycc_multiprocessing is used by the corpus pipeline)"
