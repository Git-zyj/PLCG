#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <math.h>
#include <polybench.h>
#include "gramschmidt.h"
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
/* gramschmidt.c: this file is part of PolyBench/C */


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
void init_array(int m, int n,
		DATA_TYPE POLYBENCH_2D(A,M,N,m,n),
		DATA_TYPE POLYBENCH_2D(R,N,N,n,n),
		DATA_TYPE POLYBENCH_2D(Q,M,N,m,n))
{
  int i, j;

  for (i = 0; i < m; i++)
    for (j = 0; j < n; j++) {
      A[i][j] = (((DATA_TYPE) ((i*j) % m) / m )*100) + 10;
      Q[i][j] = 0.0;
    }
  for (i = 0; i < n; i++)
    for (j = 0; j < n; j++)
      R[i][j] = 0.0;
}


/* DCE code. Must scan the entire live-out data.
   Can be used also to check the correctness of the output. */
static
void print_array(int m, int n,
		 DATA_TYPE POLYBENCH_2D(A,M,N,m,n),
		 DATA_TYPE POLYBENCH_2D(R,N,N,n,n),
		 DATA_TYPE POLYBENCH_2D(Q,M,N,m,n))
{
  int i, j;

  POLYBENCH_DUMP_START;
  POLYBENCH_DUMP_BEGIN("R");
  DATA_TYPE tmp_R = 0;
  for (i = 0; i < n; i++)
    for (j = 0; j < n; j++) {
      if (DUMP) {
  	if ((i*n+j) % 20 == 0) fprintf (POLYBENCH_DUMP_TARGET, "\n");
  	fprintf (POLYBENCH_DUMP_TARGET, DATA_PRINTF_MODIFIER, R[i][j]);
      }
      if (CHECKSUM) tmp_R += R[i][j];
    }
  if (CHECKSUM) {
    fprintf(POLYBENCH_DUMP_TARGET,"\nchecksum: ");
    fprintf(POLYBENCH_DUMP_TARGET, DATA_PRINTF_MODIFIER, tmp_R);
  }
  POLYBENCH_DUMP_END("R");

  POLYBENCH_DUMP_BEGIN("Q");
  DATA_TYPE tmp_Q = 0;
  for (i = 0; i < m; i++)
    for (j = 0; j < n; j++) {
      if (DUMP) {
  	if ((i*n+j) % 20 == 0) fprintf (POLYBENCH_DUMP_TARGET, "\n");
  	fprintf (POLYBENCH_DUMP_TARGET, DATA_PRINTF_MODIFIER, Q[i][j]);
      }
      if (CHECKSUM) tmp_Q += Q[i][j];
    }
  if (CHECKSUM) {
    fprintf(POLYBENCH_DUMP_TARGET,"\nchecksum: ");
    fprintf(POLYBENCH_DUMP_TARGET, DATA_PRINTF_MODIFIER, tmp_Q);
  }
  POLYBENCH_DUMP_END("Q");
  POLYBENCH_DUMP_FINISH;
}


/* Main computational kernel. The whole function will be timed,
   including the call and return. */
/* QR Decomposition with Modified Gram Schmidt:
 http://www.inf.ethz.ch/personal/gander/ */
static
void kernel_gramschmidt(int m, int n,
			DATA_TYPE POLYBENCH_2D(A,M,N,m,n),
			DATA_TYPE POLYBENCH_2D(R,N,N,n,n),
			DATA_TYPE POLYBENCH_2D(Q,M,N,m,n))
{
  int i, j, k;

  DATA_TYPE nrm;
  int t1, t2, t3, t4, t5;
 register int lbv, ubv;
/* Start of CLooG code */
for (t2=0;t2<=_PB_N-2;t2++) {
  for (t4=t2+1;t4<=_PB_N-1;t4++) {
    R[t2][t4] = SCALAR_VAL(0.0);;
  }
}
for (t2=0;t2<=_PB_N-2;t2++) {
  nrm = SCALAR_VAL(0.0);;
  for (t4=0;t4<=_PB_M-1;t4++) {
    nrm += A[t4][t2] * A[t4][t2];;
  }
  R[t2][t2] = SQRT_FUN(nrm);;
  for (t4=0;t4<=_PB_M-1;t4++) {
    Q[t4][t2] = A[t4][t2] / R[t2][t2];;
  }
  for (t4=0;t4<=_PB_M-1;t4++) {
    for (t5=t2+1;t5<=_PB_N-1;t5++) {
      R[t2][t5] += Q[t4][t2] * A[t4][t5];;
    }
  }
  for (t4=0;t4<=_PB_M-1;t4++) {
    for (t5=t2+1;t5<=_PB_N-1;t5++) {
      A[t4][t5] = A[t4][t5] - Q[t4][t2] * R[t2][t5];;
    }
  }
}
nrm = SCALAR_VAL(0.0);;
for (t4=0;t4<=_PB_M-1;t4++) {
  nrm += A[t4][(_PB_N-1)] * A[t4][(_PB_N-1)];;
}
R[(_PB_N-1)][(_PB_N-1)] = SQRT_FUN(nrm);;
for (t4=0;t4<=_PB_M-1;t4++) {
  Q[t4][(_PB_N-1)] = A[t4][(_PB_N-1)] / R[(_PB_N-1)][(_PB_N-1)];;
}
/* End of CLooG code */

}


int main(int argc, char** argv)
{
  /* Retrieve problem size. */
  int m = M;
  int n = N;

  /* Variable declaration/allocation. */
  POLYBENCH_2D_ARRAY_DECL(A,DATA_TYPE,M,N,m,n);
  POLYBENCH_2D_ARRAY_DECL(R,DATA_TYPE,N,N,n,n);
  POLYBENCH_2D_ARRAY_DECL(Q,DATA_TYPE,M,N,m,n);

  /* Initialize array(s). */
  init_array (m, n,
	      POLYBENCH_ARRAY(A),
	      POLYBENCH_ARRAY(R),
	      POLYBENCH_ARRAY(Q));

  /* Start timer. */
  polybench_start_instruments;

  /* Run kernel. */
  kernel_gramschmidt (m, n,
		      POLYBENCH_ARRAY(A),
		      POLYBENCH_ARRAY(R),
		      POLYBENCH_ARRAY(Q));

  /* Stop and print timer. */
  polybench_stop_instruments;
  polybench_print_instruments;

  /* Prevent dead-code elimination. All live-out data must be printed
     by the function call in argument. */
  polybench_prevent_dce(print_array(m, n, POLYBENCH_ARRAY(A), POLYBENCH_ARRAY(R), POLYBENCH_ARRAY(Q)));

  /* Be clean. */
  POLYBENCH_FREE_ARRAY(A);
  POLYBENCH_FREE_ARRAY(R);
  POLYBENCH_FREE_ARRAY(Q);

  return 0;
}
