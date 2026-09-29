#!/usr/bin/env bash
#
# Snapshot pluto's nested dependencies into third_party/ so that
# scripts/setup_pluto.sh can build offline when the submodule remotes are
# unreachable. Tracked files only (git archive), LF-normalised.
#
# Usage: ./scripts/package_deps.sh
#
set -euo pipefail

ROOT="$(cd "$(dirname "${BASH_SOURCE[0]}")/.." && pwd)"
PLUTO="$ROOT/Compilers/pluto"
DEPS="isl cloog-isl piplib polylib candl clan openscop pet"
OUT="$ROOT/third_party/pluto-0.12.0-deps.tar.gz"

WORK="$(mktemp -d "${TMPDIR:-/tmp}/plcg-deps.XXXXXX")"
trap 'rm -rf "$WORK"' EXIT

for d in $DEPS; do
    if [ ! -d "$PLUTO/$d/.git" ] && [ ! -f "$PLUTO/$d/.git" ]; then
        echo "package_deps: $d is not checked out - run ./scripts/setup_pluto.sh first" >&2
        exit 1
    fi
    mkdir -p "$WORK/$d"
    git -C "$PLUTO/$d" archive HEAD | tar -x -C "$WORK/$d"
    echo "package_deps: packed $d ($(git -C "$PLUTO/$d" rev-parse --short HEAD))"
done

# the snapshot may later be re-packed on Windows; keep it LF
find "$WORK" -type f -size -2M -print0 2>/dev/null \
    | xargs -0 -r grep -IlZ $'\r' 2>/dev/null \
    | xargs -0 -r sed -i 's/\r$//' || true

mkdir -p "$ROOT/third_party"
tar --sort=name --owner=0 --group=0 --numeric-owner -czf "$OUT" -C "$WORK" $DEPS
sha256sum "$OUT" > "$OUT.sha256"

echo "package_deps: wrote $OUT"
echo "package_deps: $(du -h "$OUT" | cut -f1), $(tar -tzf "$OUT" | wc -l) entries"
echo "note: nested sub-submodules (e.g. cloog-isl/isl) are not included;"
echo "      they are fetched by 'git submodule update --init --recursive'."
