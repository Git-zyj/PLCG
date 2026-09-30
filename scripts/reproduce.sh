#!/usr/bin/env bash
#
# Single entry point for reproducing the main-branch pipeline. Everything runs
# inside the docker image, so the host only needs docker itself.
#
#   ./scripts/reproduce.sh image      build the docker image (once)
#   ./scripts/reproduce.sh setup      build PLCG pluto + pipeline wrappers
#   ./scripts/reproduce.sh smoke      setup + smoke test
#   ./scripts/reproduce.sh pipeline   setup + full corpus pipeline (option 2)
#   ./scripts/reproduce.sh shell      interactive shell in the container
#   ./scripts/reproduce.sh patch      verify the PLCG patch applies to upstream 0.12.0
#
# Environment:
#   PLCG_IMAGE   image tag (default: plcg:latest)
#
set -euo pipefail

ROOT="$(cd "$(dirname "${BASH_SOURCE[0]}")/.." && pwd)"
IMAGE="${PLCG_IMAGE:-plcg:latest}"

# Docker bind-mounts pass straight through to the host filesystem: a checkout
# on a Windows drive (drvfs/9p) or on macOS (virtiofs/gRPC-FUSE) makes the
# per-kernel file I/O ~30% slower than a Linux-native filesystem, inside the
# container just as much as outside it. Warn instead of silently paying it.
case "$(stat -f -c %T "$ROOT" 2>/dev/null || echo unknown)" in
    v9fs|9p|drvfs|virtiofs|fuse*|smb*|cifs|ntfs*|msdos)
        echo "[reproduce] note: $ROOT is on a non-native filesystem" >&2
        echo "[reproduce]       (measured: identical stage-2 run 21.6s on ext4 vs 28.6s on drvfs)" >&2
        echo "[reproduce]       for large corpora keep the checkout inside WSL/Linux (or a docker" >&2
        echo "[reproduce]       volume); see 'Filesystem' in the README." >&2
        ;;
esac

docker_run() {
    docker run --rm -v "$ROOT":/workspace -w /workspace "$IMAGE" "$@"
}

usage() {
    sed -n '2,20p' "${BASH_SOURCE[0]}" | sed 's/^# \{0,1\}//'
    exit 2
}

case "${1:-}" in
    image)
        docker build -t "$IMAGE" "$ROOT"
        ;;
    setup)
        docker_run ./scripts/setup_pluto.sh
        ;;
    smoke)
        docker_run bash -lc './scripts/setup_pluto.sh && ./scripts/smoke_test.sh'
        ;;
    pipeline)
        docker_run bash -lc './scripts/setup_pluto.sh && ./scripts/run_pipeline.sh'
        ;;
    shell)
        docker run --rm -it -v "$ROOT":/workspace -w /workspace "$IMAGE" bash
        ;;
    patch)
        WORK="$(mktemp -d)"
        trap 'rm -rf "$WORK"' EXIT
        git clone --quiet --depth 1 --branch 0.12.0 \
            https://github.com/bondhugula/pluto.git "$WORK/pluto"
        ( cd "$WORK/pluto" && git apply --check "$ROOT/patches/pluto-0.12.0-plcg.patch" )
        echo "patch: applies cleanly to upstream pluto 0.12.0"
        ;;
    *)
        usage
        ;;
esac
