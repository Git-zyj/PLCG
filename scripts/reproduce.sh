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
