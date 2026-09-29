#!/usr/bin/env bash
#
# Run the PLCG corpus pipeline end to end:
#   1. parameter-driven synthesis      (random_generation.py)
#   2. PLCG pluto optimisation + dataflow reports
#   3. loop-transformation classification
#   4. RAG corpus preparation
#
# Usage:  ./scripts/run_pipeline.sh [--gen-option N] [--dataset DIR]
#
# Paths come from path_settings.py (default: ./examples); pass --dataset to
# override it for this run.
#
set -euo pipefail

ROOT="$(cd "$(dirname "${BASH_SOURCE[0]}")/.." && pwd)"
cd "$ROOT"

GEN_OPTION=2
DATASET="$ROOT/examples"

while [ $# -gt 0 ]; do
    case "$1" in
        --gen-option) GEN_OPTION="$2"; shift 2;;
        --dataset)    DATASET="$2";    shift 2;;
        *) echo "unknown argument: $1" >&2; exit 2;;
    esac
done

PLUTO="$ROOT/Compilers/pluto/polycc_parallel"
if [ ! -x "$PLUTO" ]; then
    echo "pluto is not built yet - run ./scripts/setup_pluto.sh first" >&2
    exit 1
fi

mkdir -p "$DATASET"

echo "[1/4] parameter-driven synthesis (option $GEN_OPTION) -> $DATASET"
python3 "$ROOT/random_generation.py" --option "$GEN_OPTION"

echo "[2/4] PLCG pluto optimisation + dataflow reports"
python3 "$ROOT/optimization_and_analysis.py" -i "$DATASET" -o "$DATASET" -p "$PLUTO"

echo "[3/4] loop-transformation classification"
python3 "$ROOT/loop_transformation_classifier.py" -i "$DATASET" \
    -o classification_output.csv

echo "[4/4] RAG corpus preparation"
python3 "$ROOT/rag_preprocess.py" -i "$DATASET" -o "$DATASET" \
    -c classification_output.csv

echo "[pipeline] done; artefacts under $DATASET"
