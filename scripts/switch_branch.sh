#!/usr/bin/env bash
#
# Switch between this repository's branches without breaking their builds.
#
# The branches keep the PLCG-modified PLuTo as a git submodule, but at different
# paths and versions:
#
#   ASPLOS26Summer   Compilers/pluto_DA   upstream pluto 0.11.4 + patches/pluto_DA.patch
#   main             Compilers/pluto      upstream pluto 0.12.0 + patches/pluto-0.12.0-plcg.patch
#
# A plain `git checkout` deletes the other branch's submodule directory together
# with its build tree. This wrapper
#
#   * snapshots every built submodule, keyed by (pluto commit, patch hash), so a
#     cached build is only reused for exactly the same source state;
#   * after the checkout: initialises the target branch's submodule(s), restores
#     a matching cached build, resets tracked sources to the pinned commit and
#     re-applies the branch's patch;
#   * cleans leftovers from the previous layout where the path is no longer a
#     submodule.
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

SUBMODULES="Compilers/pluto_DA Compilers/pluto"
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
git rev-parse --verify --quiet "refs/heads/$TARGET" >/dev/null || { echo "no such local branch: $TARGET" >&2; usage; }

# is <path> recorded as a submodule (gitlink) in the current index?
uses_submodule() {
    [ "$(git ls-files -s -- "$1" | cut -d' ' -f1)" = "160000" ]
}

patch_for() {
    case "$1" in
        Compilers/pluto_DA) echo "$ROOT/patches/pluto_DA.patch" ;;
        Compilers/pluto)    echo "$ROOT/patches/pluto-0.12.0-plcg.patch" ;;
    esac
}

binary_for() {
    case "$1" in
        Compilers/pluto_DA) echo "src/pluto" ;;
        Compilers/pluto)    echo "tool/pluto" ;;
    esac
}

cache_key() {
    local path="$1" commit patch patch_hash
    commit="$(git ls-files -s -- "$path" | cut -d' ' -f2)"
    [ -n "$commit" ] || return 1
    patch="$(patch_for "$path")"
    if [ -n "$patch" ] && [ -f "$patch" ]; then
        patch_hash="$(sha1sum "$patch" | cut -c1-12)"
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

# 1) snapshot built submodules before the checkout can delete them ----------
mkdir -p "$CACHE_DIR"
for path in $SUBMODULES; do
    uses_submodule "$path" || continue
    bin="$(binary_for "$path")"
    [ -x "$path/$bin" ] || continue
    key="$(cache_key "$path")"
    echo "[switch] saving the built $path -> $CACHE_DIR/$(basename "$path")-$key.tar.gz"
    tar -czf "$CACHE_DIR/$(basename "$path")-$key.tar.gz" -C "$path" .
done

# 2) checkout --------------------------------------------------------------
echo "[switch] git checkout $TARGET"
git checkout "$TARGET"

# 3) prepare the target branch --------------------------------------------
for path in $SUBMODULES; do
    name="$(basename "$path")"
    patch="$(patch_for "$path")"
    bin="$(binary_for "$path")"

    if uses_submodule "$path"; then
        key="$(cache_key "$path")"
        cache="$CACHE_DIR/$name-$key.tar.gz"

        echo "[switch] initialising the $path submodule"
        git submodule update --init --recursive -- "$path"

        if [ -f "$cache" ]; then
            echo "[switch] restoring the cached build for $key"
            tar -xzf "$cache" -C "$path"
        fi

        # tracked sources must match the pinned commit + the branch's patch
        git -C "$path" checkout -- .
        git -C "$path" submodule foreach --recursive 'git checkout -- .' >/dev/null 2>&1 || true

        if [ -n "$patch" ] && [ -f "$patch" ]; then
            if git -C "$path" apply --reverse --check "$patch" >/dev/null 2>&1; then
                echo "[switch] $(basename "$patch") already applied"
            else
                git -C "$path" apply --whitespace=nowarn "$patch"
                echo "[switch] $(basename "$patch") applied"
            fi
        fi

        if [ -x "$path/$bin" ]; then
            echo "[switch] $path is built: $path/$bin"
        else
            echo "[switch] $path is not built for this revision"
            case "$path" in
                Compilers/pluto_DA) echo "[switch] run ./scripts/setup_pluto_DA.sh" ;;
                Compilers/pluto)    echo "[switch] run ./scripts/setup_pluto.sh" ;;
            esac
        fi
    elif [ -e "$path" ]; then
        # path exists but is not a submodule on this branch: drop leftovers
        for leftover in .git .gitmodules; do
            if [ -e "$path/$leftover" ]; then
                rm -f "$path/$leftover"
                echo "[switch] removed leftover $path/$leftover"
            fi
        done
        if [ -n "$(git clean -nd -- "$path" 2>/dev/null)" ]; then
            echo "[switch] removing untracked leftovers under $path:"
            git clean -nd -- "$path" | sed 's/^/    /'
            git clean -fd -- "$path" >/dev/null
        fi
    fi
done

echo "[switch] now on $TARGET"
