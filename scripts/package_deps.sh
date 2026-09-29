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

# The working trees are packed rather than `git archive` output: the pins of
# pluto's *nested* submodules (e.g. cloog-isl/isl, pet/isl) are no longer
# advertised by their remotes, so a recursive fetch can fail on other machines.
# Packing the checked-out trees makes the snapshot a complete, offline source
# drop; build outputs and git directories are excluded.
for d in $DEPS; do
    if [ ! -d "$PLUTO/$d" ]; then
        echo "package_deps: $d is not checked out - run ./scripts/setup_pluto.sh first" >&2
        exit 1
    fi
done

mkdir -p "$ROOT/third_party"
tar --owner=0 --group=0 --numeric-owner \
    --exclude='.git' --exclude='*/.git' --exclude='*/.gitmodules' \
    --exclude='*/autom4te.cache' --exclude='*/config.log' --exclude='*/config.status' \
    --exclude='*/.libs' --exclude='*.o' --exclude='*.lo' --exclude='*.a' --exclude='*.la' \
    -czf "$OUT" -C "$PLUTO" $DEPS
( cd "$(dirname "$OUT")" && sha256sum "$(basename "$OUT")" > "$(basename "$OUT").sha256" )

echo "package_deps: wrote $OUT"
echo "package_deps: $(du -h "$OUT" | cut -f1), $(tar -tzf "$OUT" | wc -l) entries"
