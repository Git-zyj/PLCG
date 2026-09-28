#!/usr/bin/env bash
#
# Switch between the two layouts of this repository without losing the built
# PLuTo:
#
#   main             keeps the modified pluto_DA as plain tracked files
#   ASPLOS26Summer   keeps it as a submodule (upstream 0.11.4 + patch)
#
# Both store it at Compilers/pluto_DA, so a plain `git checkout` between them
# deletes the submodule checkout together with its build tree. This wrapper
# snapshots the built tree into the git directory first and restores it after
# the switch, then makes sure the submodule and the LOOPRAG patch are in place.
#
# Usage:  ./scripts/switch_branch.sh <branch>
#
# Environment:
#   PLCG_PLUTO_CACHE   override the snapshot location
#                      (default: <git-dir>/plcg_cache/pluto_DA_build.tar.gz)
#
set -euo pipefail

ROOT="$(cd "$(dirname "${BASH_SOURCE[0]}")/.." && pwd)"
cd "$ROOT"

SUB="Compilers/pluto_DA"
GIT_DIR="$(git rev-parse --git-dir)"
CACHE="${PLCG_PLUTO_CACHE:-$GIT_DIR/plcg_cache/pluto_DA_build.tar.gz}"

TARGET="${1:-}"
if [ -z "$TARGET" ]; then
    echo "usage: $0 <branch>" >&2
    echo "branches:" >&2
    git for-each-ref --format='  %(refname:short)' refs/heads >&2
    exit 2
fi

if ! git rev-parse --verify --quiet "refs/heads/$TARGET" >/dev/null; then
    echo "no such local branch: $TARGET" >&2
    exit 2
fi

CURRENT="$(git rev-parse --abbrev-ref HEAD)"
if [ "$CURRENT" = "$TARGET" ]; then
    echo "[switch] already on $TARGET"
    exit 0
fi

# 1) snapshot the built submodule before the checkout can delete it ---------
if [ -f "$SUB/.git" ]; then
    mkdir -p "$(dirname "$CACHE")"
    echo "[switch] saving $SUB -> $CACHE"
    tar -czf "$CACHE" -C "$SUB" .
fi

# 2) switch ----------------------------------------------------------------
echo "[switch] git checkout $TARGET"
git checkout "$TARGET"

# 3) make the target branch buildable --------------------------------------
if [ -f .gitmodules ] && grep -q 'pluto_DA' .gitmodules; then
    echo "[switch] initialising the pluto_DA submodule"
    git submodule update --init --recursive

    if [ -f "$CACHE" ]; then
        echo "[switch] restoring the built pluto_DA from the snapshot"
        tar -xzf "$CACHE" -C "$SUB"
    fi

    if [ -x "$SUB/src/pluto" ] && [ -f "$SUB/polycc_multiprocessing" ]; then
        echo "[switch] pluto_DA is built: $SUB/src/pluto"
    else
        echo "[switch] pluto_DA is not built yet; run ./scripts/setup_pluto_DA.sh"
    fi
fi

echo "[switch] now on $TARGET"
