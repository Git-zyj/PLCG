#!/usr/bin/env python3
"""Generate the multiprocessing-safe pluto wrapper scripts from the built
`polycc` and `inscop` scripts produced by the pluto 0.11.4 build.

Outputs (written next to the inputs):
  <pluto_dir>/polycc_multiprocessing   = built polycc + multiprocessing delta
  <pluto_dir>/inscop_multiprocessing   = multiprocessing-safe rewrite of inscop

No hard-coded paths: the polycc delta keeps the paths that `configure` baked
into the built `polycc`; inscop_multiprocessing contains no absolute paths.
"""

import argparse
import os
import re
import sys


POLYCC_DELTA = r'''# [zyj-debug] get unique SOURCEFILE & OUTFILE for multiprocessing, with TILE, INTRATILEOPT, INNERPAR & FUSE info

tmp_ARGS=$*
ARGS=$(getopt -o :o: -l :tile,nointratileopt,innerpar,nofuse,maxfuse  -- "$@")

eval set -- "${ARGS}"

TILE=0
INTRATILEOPT=1
MULTIPAR=0
INNERPAR=0
FUSE=1

while true; do
  case $1 in 
  	-o) OUTFILE=$2; shift 2;;
    --tile) TILE=1; shift;;
    --nointratileopt) INTRATILEOPT=0; shift;;
    --innerpar) INNERPAR=1; shift;;
    --nofuse) FUSE=0; shift;;
    --maxfuse) FUSE=2; shift;;
    --) shift; break;;
    *) echo "Invalid option: $1" exit 1;;
  esac
done

SOURCEFILE=$1

if [ "$OUTFILE" = "" ]; then
    OUTFILE=$(basename $SOURCEFILE .c)_$TILE$INTRATILEOPT$INNERPAR$FUSE.pluto.c
    tmp_ARGS=$tmp_ARGS" -o "$OUTFILE
fi

eval set -- "${tmp_ARGS}"
'''


INSCOP_MP = r'''#!/bin/bash

# arguments
# inscop <original> <transformed_kernel> <output_file>
# transformed_kernel and output_file can be the same
#

# [zyj-debug] get unique .head .tail __tmp .includes .body.c for multiprocessing, with TILE, INTRATILEOPT, MULTIPAR, INNERPAR & FUSE info
prefix_original=`basename $1 .c`
prefix=$prefix_original\_$4$5$6$7

body_file=$prefix.body.c

MAXLINES=`wc -l $1 | awk '{print $1}'`

# Get the FIRST scop and return all the lines above it
# Because we are returning the text preceding the first scop, it's ok to ignore that pragma
# which is what the grep -v call does
head=`grep -B $MAXLINES -m 1 "#pragma[[:space:]]\+scop" $1 | grep -v "#pragma[[:space:]]\+scop"`
# Get the FIRST endscop and return all the lines below it
# We want to get all the text below the first endscop, but do not want that first endscop line to be returned
# which is accomplished with the awk call at the end.
tail=`sed -n '/\#pragma[[:space:]]endscop/,$p' $1 | awk '{if(NR>1)print}'`

include=`echo "$head" | awk '/^#include/ { print }'`

init=`echo "$head" | awk '!/^#include/ { print }'`

# The gcc preprocessor inserts some useless comments like "# 1 "<built-in>"
# preprocessor doesn't like pragma's in #defines and so it was not put in from pluto
# when '--bee' was used - instead we will add it here

# Put all the include statements in a  file
include="${include}
$(cat $2 | grep '^#include')"

# check and remove if duplicate	
include=$(echo "$include" | awk '!x[$0]++')

# Put everything that isn't an include into another file
cat $2 | grep -v "^#include" > $body_file

# Check if we've already inserted the extra includes and defines
# If we haven't, put them in the head
if ! [[ ${include} =~ '#include <math.h>' ]]
    then
    include=$(echo "$include" | sed '$a #include <math.h>\n')
fi

if ! echo "$init" | grep -q "#define ceild(n,d)"
	then
	include=$(echo "$include" | sed '$a #define ceild(n,d)  ceil(((double)(n))/((double)(d)))\n#define floord(n,d) floor(((double)(n))/((double)(d)))\n')
fi

if ! echo "$init" | grep -q "#define max(x,y)"
	then
	include=$(echo "$include" | sed '$a #define max(x,y) ((x) > (y)? (x) : (y))\n#define min(x,y) ((x) < (y)? (x) : (y))\n')
fi

body=`gcc -E -P -CC -nostdinc $body_file | grep -v "^# " | sed -e 's/__bee_schedule/#pragma schedule/' | sed -e 's/_NL_DELIMIT_/\n/'`

# Checks to see if the openmp header has already been inserted into the file
# If not, it inserts it.
if ! [[ ${include} =~ '#include <omp.h>' ]]
	then
	# Remove the existing omp.h include
	
	include=$(echo "$include" | sed '$a #include <omp.h>\n')
fi


echo "$include" > $3
echo "$init" >> $3
echo "$body" >> $3
echo "$tail" >> $3

# rm -f $body_file
'''

INSCOP_MP = INSCOP_MP.rstrip("\n")


def make_polycc_multiprocessing(polycc):
    """Apply the multiprocessing delta to the built `polycc`."""
    if not polycc.startswith("#!  /bin/bash"):
        polycc = "#!  /bin/bash\n" + polycc

    anchor = 'PLUTOOUT=""'
    if anchor not in polycc:
        raise RuntimeError("built polycc: anchor 'PLUTOOUT=\"\"' not found")
    polycc = polycc.replace(anchor, anchor + "\n\n" + POLYCC_DELTA.rstrip("\n"), 1)

    old = "SOURCEFILE=`cat .srcfilename`\nOUTFILE=`cat .outfilename`"
    new = ("# [zyj-debug] get SOURCEFILE & OUTFILE from above\n"
           "# SOURCEFILE=`cat .srcfilename`\n"
           "# OUTFILE=`cat .outfilename`")
    if old not in polycc:
        raise RuntimeError("built polycc: .srcfilename/.outfilename reads not found")
    polycc = polycc.replace(old, new, 1)

    polycc, n = re.subn(
        r"(^.*)/inscop \$SOURCEFILE \$OUTFILE \$OUTFILE[ \t]*\n\n",
        r"\1/inscop_multiprocessing $SOURCEFILE $OUTFILE $OUTFILE "
        r"$TILE $INTRATILEOPT $INNERPAR $FUSE\n",
        polycc, count=1, flags=re.M,
    )
    if n != 1:
        raise RuntimeError("built polycc: inscop invocation not found")
    return polycc


def main():
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument("pluto_dir", help="built pluto_DA directory (contains polycc and inscop)")
    args = parser.parse_args()

    polycc_path = os.path.join(args.pluto_dir, "polycc")
    inscop_path = os.path.join(args.pluto_dir, "inscop")
    for p in (polycc_path, inscop_path):
        if not os.path.isfile(p):
            sys.exit(f"error: {p} not found; build pluto first")

    with open(polycc_path, encoding="utf-8", errors="replace") as f:
        polycc = f.read()
    with open(inscop_path, encoding="utf-8", errors="replace") as f:
        inscop = f.read()
    if "inscop <original> <transformed_kernel>" not in inscop:
        sys.exit("error: built inscop does not look like the pluto 0.11.4 inscop")

    out_polycc = make_polycc_multiprocessing(polycc)
    with open(os.path.join(args.pluto_dir, "polycc_multiprocessing"), "w", encoding="utf-8", newline="\n") as f:
        f.write(out_polycc)
    with open(os.path.join(args.pluto_dir, "inscop_multiprocessing"), "w", encoding="utf-8", newline="\n") as f:
        f.write(INSCOP_MP)

    print(f"[wrappers] wrote {args.pluto_dir}/polycc_multiprocessing")
    print(f"[wrappers] wrote {args.pluto_dir}/inscop_multiprocessing")


if __name__ == "__main__":
    main()
