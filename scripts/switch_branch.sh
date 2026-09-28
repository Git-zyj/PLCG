#!/usr/bin/env bash
#
# Switch between the two layouts of this repository without breaking the build:
#
#   main             stores the modified pluto_DA as plain tracked files
#   ASPLOS26Summer   stores it as a submodule (upstream 0.11.4 + LOOPRAG patch)
#
# Both keep the tree at Compilers/pluto_DA, so a plain `git checkout` between
# them deletes the submodule checkout together with its build tree, and leaves
# build leftovers behind in the vendored tree. This wrapper
#
#   * snapshots a built submodule tree, keyed by (pluto commit, patch hash), so
#     a cached build is only reused for exactly the same source state;
#   * after switching to a submodule branch: initialises the submodule, restores
#     a matching cached build, resets tracked sources to the pinned commit and
#     re-applies the LOOPRAG patch;
#   * after switching to a vendored branch: drops submodule leftovers so the
#     tree matches that branch (ignored build outputs are reported, not removed).
#
# Usage:  ./scripts/switch_branch.sh <branch>
#
# Environment:
#   PLCG_PLUTO_CACHE_DIR   override the snapshot directory
#                          (default: <git-dir>/plcg_cache)
#
set -euo pipefail

ROOT="$(cd "$(dirname "${BASH_SOURCE[0]}")/.." && pwd)"
cd "$ROOT"

SUB="Compilers/pluto_DA"
PATCH="$ROOT/patches/pluto_DA.patch"
GIT_DIR="$(git rev-parse --git-dir)"
CACHE_DIR="${PLCG_PLUTO_CACHE_DIR:-$GIT_DIR/plcg_cache}"

usage() {
    echo "usage: $0 <branch>" >&2
    echo "branches:" >&2
    git for-each-ref --format='  %(refname:short)' refs/heads >&2
    exit 2
}

[ $# -ge 1 ] || usage
TARGET="$1"

git rev-parse --verify --quiet "refs/heads/$TARGET" >/dev/null || {
    echo "no such local branch: $TARGET" >&2
    usage
}

# is the current index storing pluto_DA as a submodule (gitlink) or as files?
uses_submodule() {
    [ "$(git ls-files -s -- "$SUB" | cut -d' ' -f1)" = "160000" ]
}

# cache key = pinned pluto commit + LOOPRAG patch revision
cache_key() {
    local commit patch_hash
    commit="$(git ls-files -s -- "$SUB" | cut -d' ' -f2)"
    [ -n "$commit" ] || return 1
    if [ -f "$PATCH" ]; then
        patch_hash="$(sha1sum "$PATCH" | cut -c1-12)"
    else
        patch_hash="nopatch"
    fi
    printf '%s-%s' "${commit:0:12}" "$patch_hash"
}

CURRENT="$(git rev-parse --abbrev-ref HEAD)"
if [ "$CURRENT" = "$TARGET" ]; then
    echo "[switch] already on $TARGET"
    exit 0
fi

# 1) snapshot the built submodule before the checkout can delete it ---------
if uses_submodule && [ -x "$SUB/src/pluto" ]; then
    key="$(cache_key)"
    mkdir -p "$CACHE_DIR"
    echo "[switch] saving the built pluto_DA -> $CACHE_DIR/pluto_DA-$key.tar.gz"
    tar -czf "$CACHE_DIR/pluto_DA-$key.tar.gz" -C "$SUB" .
fi

# 2) switch ----------------------------------------------------------------
echo "[switch] git checkout $TARGET"
git checkout "$TARGET"

# 3) make the target branch usable -----------------------------------------
if uses_submodule; then
    key="$(cache_key)"
    cache="$CACHE_DIR/pluto_DA-$key.tar.gz"

    echo "[switch] initialising the pluto_DA submodule"
    git submodule update --init --recursive

    if [ -f "$cache" ]; then
        echo "[switch] restoring the cached build for $key"
        tar -xzf "$cache" -C "$SUB"
    fi

    # tracked sources must always match the pinned commit + the LOOPRAG patch
    git -C "$SUB" checkout -- .
    git -C "$SUB" submodule foreach --recursive 'git checkout -- .' >/dev/null 2>&1 || true

    if git -C "$SUB" apply --reverse --check "$PATCH" >/dev/null 2>&1; then
        echo "[switch] LOOPRAG patch already applied"
    else
        git -C "$SUB" apply --whitespace=nowarn "$PATCH"
        echo "[switch] LOOPRAG patch applied"
    fi

    if [ -x "$SUB/src/pluto" ] && [ -f "$SUB/polycc_multiprocessing" ]; then
        echo "[switch] pluto_DA is built: $SUB/src/pluto"
    else
        echo "[switch] pluto_DA is not built for this revision"
        echo "[switch] run ./scripts/setup_pluto_DA.sh (needs autoconf/automake/libtool)"
    fi
else
    # vendored layout: drop leftovers that belong to the submodule layout
    for leftover in .git .gitmodules; do
        if [ -e "$SUB/$leftover" ]; then
            rm -f "$SUB/$leftover"
            echo "[switch] removed leftover $leftover from the submodule layout"
        fi
    done
    if [ -n "$(git clean -nd -- "$SUB" 2>/dev/null)" ]; then
        echo "[switch] removing untracked leftovers that are not part of $TARGET:"
        git clean -nd -- "$SUB" | sed 's/^/    /'
        git clean -fd -- "$SUB" >/dev/null
    fi
    if [ -n "$(git status --ignored --short -- "$SUB" 2>/dev/null | grep '^!!')" ]; then
        echo "[switch] note: ignored build outputs from the other layout remain under $SUB"
        echo "[switch]       (use 'git clean -fdx -- $SUB' if you want a pristine tree)"
    fi
fi

echo "[switch] now on $TARGET"
