#!/usr/bin/env bash
#
# Reproduce the LOOPRAG retrieval corpus with the parameter-driven pipeline.
#
# Prerequisites:
#   - pluto_DA built:  ./scripts/setup_pluto_DA.sh
#   - python3 with:    numpy pandas scipy
#
# Outputs (written under the repository root):
#   poly_code/                       generated C programs (input/ holds the parameter JSONs)
#   pluto_code/                      PLuTo-optimized codes
#   stdout/                          PLuTo stdout (dataflow reports)
#   classification_output.csv        detected loop transformations
#   looprag_<N>.json / colagen_<N>.json   final retrieval corpus (copy into LOOPRAG/data/raw_data/)
#
set -euo pipefail

ROOT="$(cd "$(dirname "${BASH_SOURCE[0]}")/.." && pwd)"
cd "$ROOT"

PLUTO_BIN="$ROOT/Compilers/pluto_DA/src/pluto"
if [ ! -x "$PLUTO_BIN" ]; then
    echo "pluto_DA is not built yet. Run ./scripts/setup_pluto_DA.sh first." >&2
    exit 1
fi
if [ ! -f "$ROOT/Compilers/pluto_DA/polycc_multiprocessing" ]; then
    echo "pluto_DA patch is not applied. Run ./scripts/setup_pluto_DA.sh first." >&2
    exit 1
fi

echo "[corpus] step 1/4: parameter-driven code synthesis (option 2)"
python3 random_generation.py --option 2

echo "[corpus] step 2/4: pluto_DA optimization + dataflow extraction"
python3 loop_transformation_classifier/optimization_and_analysis.py \
    -dp ./poly_code -op . -pp ./Compilers/pluto_DA

echo "[corpus] step 3/4: loop-transformation classification"
python3 loop_transformation_classifier/classifier.py --target_path .

echo "[corpus] step 4/4: corpus preparation (looprag)"
python3 loop_transformation_classifier/rag_preparation.py -dp . -op . -d looprag

# Optional: COLA-Gen-style corpus (all classified examples, no transformation filter)
# python3 loop_transformation_classifier/rag_preparation.py -dp . -op . -d colagen

echo "[corpus] done. Corpus files:"
ls -1 looprag_*.json colagen_*.json 2>/dev/null || true
echo "Copy the corpus into LOOPRAG/data/raw_data/ to use it with the LOOPRAG pipeline."
