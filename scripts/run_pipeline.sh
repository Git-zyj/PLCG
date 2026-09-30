#!/usr/bin/env bash
#
# Run the PLCG corpus pipeline end to end:
#   1. parameter-driven synthesis      (random_generation.py)
#   2. PLCG pluto optimisation + dataflow reports
#   3. loop-transformation classification
#   4. RAG corpus preparation
#
# Usage:  ./scripts/run_pipeline.sh [--gen-option N] [--dataset DIR]
#                                    [--jobs N] [--driver python|wrapper]
#                                    [--timeout SECONDS] [--resume]
#
# Paths come from path_settings.py (default: ./examples); pass --dataset to
# override it for this run.
#
# --resume keeps the existing outputs and only processes what is missing
# (safe because every kernel/task is generated deterministically).
#
set -euo pipefail

ROOT="$(cd "$(dirname "${BASH_SOURCE[0]}")/.." && pwd)"
cd "$ROOT"

GEN_OPTION=2
DATASET="$ROOT/examples"
JOBS=""              # empty = let each stage probe the machine (scripts/machine_profile.py)
DRIVER=python
TIMEOUT=120          # the reproduction setting; optimization_and_analysis.py defaults to 30
RESUME=""

while [ $# -gt 0 ]; do
    case "$1" in
        --gen-option) GEN_OPTION="$2"; shift 2;;
        --dataset)    DATASET="$2";    shift 2;;
        --jobs)       JOBS="$2";       shift 2;;
        --driver)     DRIVER="$2";     shift 2;;
        --timeout)    TIMEOUT="$2";    shift 2;;
        --resume)     RESUME="--skip-existing"; shift;;
        *) echo "unknown argument: $1" >&2; exit 2;;
    esac
done

# only pass -j when the user asked for an explicit value; otherwise each stage
# probes the machine (scripts/machine_profile.py)
JOBS_ARG=()
if [ -n "$JOBS" ]; then
    JOBS_ARG=(-j "$JOBS")
fi

PLUTO="$ROOT/Compilers/pluto/polycc_parallel"
if [ ! -x "$PLUTO" ]; then
    echo "pluto is not built yet - run ./scripts/setup_pluto.sh first" >&2
    exit 1
fi

mkdir -p "$DATASET"

echo "[1/4] parameter-driven synthesis (option $GEN_OPTION) -> $DATASET"
python3 "$ROOT/random_generation.py" --option "$GEN_OPTION" "${JOBS_ARG[@]}" $RESUME

echo "[2/4] PLCG pluto optimisation + dataflow reports (driver: $DRIVER, jobs: ${JOBS:-auto})"
python3 "$ROOT/optimization_and_analysis.py" -i "$DATASET" -o "$DATASET" \
    -p "$PLUTO" "${JOBS_ARG[@]}" --driver "$DRIVER" -t "$TIMEOUT" $RESUME

echo "[3/4] loop-transformation classification"
python3 "$ROOT/loop_transformation_classifier.py" -i "$DATASET" \
    -o classification_output.csv "${JOBS_ARG[@]}"

echo "[4/4] RAG corpus preparation"
python3 "$ROOT/rag_preprocess.py" -i "$DATASET" -o "$DATASET" \
    -c classification_output.csv "${JOBS_ARG[@]}"

echo "[pipeline] done; artefacts under $DATASET"
