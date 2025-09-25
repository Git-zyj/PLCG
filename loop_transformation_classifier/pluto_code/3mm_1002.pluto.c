#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <math.h>
#include <polybench.h>
#include "3mm.h"
#include <omp.h>
/**
 * This version is stamped on May 10, 2016
 *
 * Contact:
 *   Louis-Noel Pouchet <pouchet.ohio-state.edu>
 *   Tomofumi Yuki <tomofumi.yuki.fr>
 *
 * Web address: http://polybench.sourceforge.net
 */
/* 3mm.c: this file is part of PolyBench/C */


/* Include polybench common header. */

/* Include benchmark-specific header. */

#define ceild(n,d)  ceil(((double)(n))/((double)(d)))
#define floord(n,d) floor(((double)(n))/((double)(d)))
#define max(x,y) ((x) > (y)? (x) : (y))
#define min(x,y) ((x) < (y)? (x) : (y))
#ifndef POLYBENCH_DUMP_ARRAYS
#define DUMP 0
#else
#define DUMP 1
#endif
#ifndef POLYBENCH_CHECKSUM_ARRAYS
#define CHECKSUM 0
#else
#define CHECKSUM 1
#endif


/* Array initialization. */
static
void init_array(int ni, int nj, int nk, int nl, int nm,
		DATA_TYPE POLYBENCH_2D(A,NI,NK,ni,nk),
		DATA_TYPE POLYBENCH_2D(B,NK,NJ,nk,nj),
		DATA_TYPE POLYBENCH_2D(C,NJ,NM,nj,nm),
		DATA_TYPE POLYBENCH_2D(D,NM,NL,nm,nl))
{
  int i, j;

  for (i = 0; i < ni; i++)
    for (j = 0; j < nk; j++)
      A[i][j] = (DATA_TYPE) ((i*j+1) % ni) / (5*ni);
  for (i = 0; i < nk; i++)
    for (j = 0; j < nj; j++)
      B[i][j] = (DATA_TYPE) ((i*(j+1)+2) % nj) / (5*nj);
  for (i = 0; i < nj; i++)
    for (j = 0; j < nm; j++)
      C[i][j] = (DATA_TYPE) (i*(j+3) % nl) / (5*nl);
  for (i = 0; i < nm; i++)
    for (j = 0; j < nl; j++)
      D[i][j] = (DATA_TYPE) ((i*(j+2)+2) % nk) / (5*nk);
}


/* DCE code. Must scan the entire live-out data.
   Can be used also to check the correctness of the output. */
static
void print_array(int ni, int nl,
		 DATA_TYPE POLYBENCH_2D(G,NI,NL,ni,nl))
{
  int i, j;

  POLYBENCH_DUMP_START;
  POLYBENCH_DUMP_BEGIN("G");
  DATA_TYPE tmp_G = 0;
  for (i = 0; i < ni; i++)
    for (j = 0; j < nl; j++) {
      if (DUMP) {
  	if ((i * ni + j) % 20 == 0) fprintf (POLYBENCH_DUMP_TARGET, "\n");
  	fprintf (POLYBENCH_DUMP_TARGET, DATA_PRINTF_MODIFIER, G[i][j]);
      }
      if (CHECKSUM) tmp_G += G[i][j];
    }
  if (CHECKSUM) {
    fprintf(POLYBENCH_DUMP_TARGET,"\nchecksum: ");
    fprintf(POLYBENCH_DUMP_TARGET, DATA_PRINTF_MODIFIER, tmp_G);
  }
  POLYBENCH_DUMP_END("G");
  POLYBENCH_DUMP_FINISH;
}


/* Main computational kernel. The whole function will be timed,
   including the call and return. */
static
void kernel_3mm(int ni, int nj, int nk, int nl, int nm,
		DATA_TYPE POLYBENCH_2D(E,NI,NJ,ni,nj),
		DATA_TYPE POLYBENCH_2D(A,NI,NK,ni,nk),
		DATA_TYPE POLYBENCH_2D(B,NK,NJ,nk,nj),
		DATA_TYPE POLYBENCH_2D(F,NJ,NL,nj,nl),
		DATA_TYPE POLYBENCH_2D(C,NJ,NM,nj,nm),
		DATA_TYPE POLYBENCH_2D(D,NM,NL,nm,nl),
		DATA_TYPE POLYBENCH_2D(G,NI,NL,ni,nl))
{
  int i, j, k;
  int t1, t2, t3, t4, t5, t6, t7, t8, t9, t10;
 register int lbv, ubv;
/* Start of CLooG code */
for (t1=0;t1<=floord(_PB_NJ+_PB_NL-2,32);t1++) {
  for (t2=max(max(0,ceild(15992*t1-275*_PB_NJ-275*_PB_NL+550,7192)),ceild(63968*t1-1999*_PB_NL+1999,28800));t2<=min(min(floord(3400*t1+123*_PB_NL-123,3936),floord(9056*t1+328*_PB_NI+45*_PB_NJ+45*_PB_NL+8355,10496)),floord(54400*t1+269*_PB_NL+1869731,63008));t2++) {
    if ((t1 <= floord(_PB_NL-1,32)) && (t2 <= floord(_PB_NL-1,32))) {
      if ((_PB_NI == 801) && (t2 == 25)) {
        for (t6=32*t1;t6<=min(_PB_NJ-1,32*t1+31);t6++) {
          F[t6][800] = SCALAR_VAL(0.0);;
          G[800][t6] = SCALAR_VAL(0.0);;
          for (t7=801;t7<=831;t7++) {
            F[t6][t7] = SCALAR_VAL(0.0);;
          }
        }
      }
      if (t2 <= 24) {
        for (t6=32*t1;t6<=min(_PB_NJ-1,32*t1+31);t6++) {
          for (t7=32*t2;t7<=32*t2+31;t7++) {
            F[t6][t7] = SCALAR_VAL(0.0);;
            G[t7][t6] = SCALAR_VAL(0.0);;
          }
        }
      }
      if (t2 >= ceild(_PB_NI,32)) {
        for (t6=32*t1;t6<=min(_PB_NJ-1,32*t1+31);t6++) {
          for (t7=32*t2;t7<=min(_PB_NL-1,32*t2+31);t7++) {
            F[t6][t7] = SCALAR_VAL(0.0);;
          }
        }
      }
      if (t2 <= floord(_PB_NI-1,32)) {
        for (t6=max(_PB_NJ,32*t1);t6<=min(_PB_NL-1,32*t1+31);t6++) {
          for (t7=32*t2;t7<=min(_PB_NI-1,32*t2+31);t7++) {
            G[t7][t6] = SCALAR_VAL(0.0);;
          }
        }
      }
    }
    if ((t1 <= floord(_PB_NJ-1,32)) && (t2 <= floord(_PB_NL-1,32))) {
      for (t5=0;t5<=floord(_PB_NM-1,32);t5++) {
        for (t6=32*t1;t6<=min(_PB_NJ-1,32*t1+31);t6++) {
          for (t7=32*t2;t7<=min(_PB_NL-1,32*t2+31);t7++) {
            for (t10=32*t5;t10<=min(_PB_NM-1,32*t5+31);t10++) {
              F[t6][t7] += C[t6][t10] * D[t10][t7];;
            }
          }
        }
      }
    }
    if ((t1 <= floord(_PB_NJ-1,32)) && (t2 <= floord(_PB_NI-1,32))) {
      for (t6=32*t1;t6<=min(_PB_NJ-1,32*t1+31);t6++) {
        for (t7=32*t2;t7<=min(_PB_NI-1,32*t2+31);t7++) {
          E[t7][t6] = SCALAR_VAL(0.0);;
        }
      }
    }
    if ((t1 <= floord(_PB_NJ-1,32)) && (t2 <= floord(_PB_NI-1,32))) {
      for (t5=0;t5<=floord(_PB_NK-1,32);t5++) {
        for (t6=32*t1;t6<=min(_PB_NJ-1,32*t1+31);t6++) {
          for (t7=32*t2;t7<=min(_PB_NI-1,32*t2+31);t7++) {
            for (t10=32*t5;t10<=min(_PB_NK-1,32*t5+31);t10++) {
              E[t7][t6] += A[t7][t10] * B[t10][t6];;
            }
          }
        }
      }
    }
    if ((t1 >= ceild(32*t2-_PB_NI-30,32)) && (t1 <= t2)) {
      for (t5=max(0,ceild(32*t1-_PB_NL-30,32));t5<=min(floord(_PB_NJ-1,32),t1);t5++) {
        for (t6=max(32*t1,32*t2-_PB_NI+1);t6<=min(min(32*t1+31,_PB_NJ+_PB_NL-2),32*t5+_PB_NL+30);t6++) {
          for (t7=max(32*t2,t6);t7<=min(32*t2+31,t6+_PB_NI-1);t7++) {
            for (t10=max(32*t5,t6-_PB_NL+1);t10<=min(min(t6,_PB_NJ-1),32*t5+31);t10++) {
              G[(-t6+t7)][(t6-t10)] += E[(-t6+t7)][t10] * F[t10][(t6-t10)];;
            }
          }
        }
      }
    }
  }
}
/* End of CLooG code */

}


int main(int argc, char** argv)
{
  /* Retrieve problem size. */
  int ni = NI;
  int nj = NJ;
  int nk = NK;
  int nl = NL;
  int nm = NM;

  /* Variable declaration/allocation. */
  POLYBENCH_2D_ARRAY_DECL(E, DATA_TYPE, NI, NJ, ni, nj);
  POLYBENCH_2D_ARRAY_DECL(A, DATA_TYPE, NI, NK, ni, nk);
  POLYBENCH_2D_ARRAY_DECL(B, DATA_TYPE, NK, NJ, nk, nj);
  POLYBENCH_2D_ARRAY_DECL(F, DATA_TYPE, NJ, NL, nj, nl);
  POLYBENCH_2D_ARRAY_DECL(C, DATA_TYPE, NJ, NM, nj, nm);
  POLYBENCH_2D_ARRAY_DECL(D, DATA_TYPE, NM, NL, nm, nl);
  POLYBENCH_2D_ARRAY_DECL(G, DATA_TYPE, NI, NL, ni, nl);

  /* Initialize array(s). */
  init_array (ni, nj, nk, nl, nm,
	      POLYBENCH_ARRAY(A),
	      POLYBENCH_ARRAY(B),
	      POLYBENCH_ARRAY(C),
	      POLYBENCH_ARRAY(D));

  /* Start timer. */
  polybench_start_instruments;

  /* Run kernel. */
  kernel_3mm (ni, nj, nk, nl, nm,
	      POLYBENCH_ARRAY(E),
	      POLYBENCH_ARRAY(A),
	      POLYBENCH_ARRAY(B),
	      POLYBENCH_ARRAY(F),
	      POLYBENCH_ARRAY(C),
	      POLYBENCH_ARRAY(D),
	      POLYBENCH_ARRAY(G));

  /* Stop and print timer. */
  polybench_stop_instruments;
  polybench_print_instruments;

  /* Prevent dead-code elimination. All live-out data must be printed
     by the function call in argument. */
  polybench_prevent_dce(print_array(ni, nl,  POLYBENCH_ARRAY(G)));

  /* Be clean. */
  POLYBENCH_FREE_ARRAY(E);
  POLYBENCH_FREE_ARRAY(A);
  POLYBENCH_FREE_ARRAY(B);
  POLYBENCH_FREE_ARRAY(F);
  POLYBENCH_FREE_ARRAY(C);
  POLYBENCH_FREE_ARRAY(D);
  POLYBENCH_FREE_ARRAY(G);

  return 0;
}
