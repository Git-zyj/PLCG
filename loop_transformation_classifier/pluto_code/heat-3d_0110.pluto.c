#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <math.h>
#include <polybench.h>
#include "heat-3d.h"
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
/* heat-3d.c: this file is part of PolyBench/C */


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
void init_array (int n,
		 DATA_TYPE POLYBENCH_3D(A,N,N,N,n,n,n),
		 DATA_TYPE POLYBENCH_3D(B,N,N,N,n,n,n))
{
  int i, j, k;

  for (i = 0; i < n; i++)
    for (j = 0; j < n; j++)
      for (k = 0; k < n; k++)
        A[i][j][k] = B[i][j][k] = (DATA_TYPE) (i + j + (n-k))* 10 / (n);
}


/* DCE code. Must scan the entire live-out data.
   Can be used also to check the correctness of the output. */
static
void print_array(int n,
		 DATA_TYPE POLYBENCH_3D(A,N,N,N,n,n,n))

{
  int i, j, k;

  POLYBENCH_DUMP_START;
  POLYBENCH_DUMP_BEGIN("A");
  DATA_TYPE tmp_A = 0;
  for (i = 0; i < n; i++)
    for (j = 0; j < n; j++)
      for (k = 0; k < n; k++) {
        if (DUMP) {
           if ((i * n * n + j * n + k) % 20 == 0) fprintf(POLYBENCH_DUMP_TARGET, "\n");
           fprintf(POLYBENCH_DUMP_TARGET, DATA_PRINTF_MODIFIER, A[i][j][k]);
        }
        if (CHECKSUM) tmp_A += A[i][j][k];
      }
  if (CHECKSUM) {
    fprintf(POLYBENCH_DUMP_TARGET,"\nchecksum: ");
    fprintf(POLYBENCH_DUMP_TARGET, DATA_PRINTF_MODIFIER, tmp_A);
  }
  POLYBENCH_DUMP_END("A");
  POLYBENCH_DUMP_FINISH;
}


/* Main computational kernel. The whole function will be timed,
   including the call and return. */
static
void kernel_heat_3d(int tsteps,
		      int n,
		      DATA_TYPE POLYBENCH_3D(A,N,N,N,n,n,n),
		      DATA_TYPE POLYBENCH_3D(B,N,N,N,n,n,n))
{
  int t, i, j, k;
  int t1, t2, t3, t4;
 register int lbv, ubv;
/* Start of CLooG code */
for (t1=1;t1<=_PB_TSTEPS;t1++) {
  for (t3=2*t1+1;t3<=2*t1+_PB_N-2;t3++) {
    for (t4=2*t1+1;t4<=2*t1+_PB_N-2;t4++) {
      B[1][(-2*t1+t3)][(-2*t1+t4)] = SCALAR_VAL(0.125) * (A[1 +1][(-2*t1+t3)][(-2*t1+t4)] - SCALAR_VAL(2.0) * A[1][(-2*t1+t3)][(-2*t1+t4)] + A[1 -1][(-2*t1+t3)][(-2*t1+t4)]) + SCALAR_VAL(0.125) * (A[1][(-2*t1+t3)+1][(-2*t1+t4)] - SCALAR_VAL(2.0) * A[1][(-2*t1+t3)][(-2*t1+t4)] + A[1][(-2*t1+t3)-1][(-2*t1+t4)]) + SCALAR_VAL(0.125) * (A[1][(-2*t1+t3)][(-2*t1+t4)+1] - SCALAR_VAL(2.0) * A[1][(-2*t1+t3)][(-2*t1+t4)] + A[1][(-2*t1+t3)][(-2*t1+t4)-1]) + A[1][(-2*t1+t3)][(-2*t1+t4)];;
    }
  }
  for (t2=2*t1+2;t2<=2*t1+_PB_N-2;t2++) {
    for (t4=2*t1+1;t4<=2*t1+_PB_N-2;t4++) {
      B[(-2*t1+t2)][1][(-2*t1+t4)] = SCALAR_VAL(0.125) * (A[(-2*t1+t2)+1][1][(-2*t1+t4)] - SCALAR_VAL(2.0) * A[(-2*t1+t2)][1][(-2*t1+t4)] + A[(-2*t1+t2)-1][1][(-2*t1+t4)]) + SCALAR_VAL(0.125) * (A[(-2*t1+t2)][1 +1][(-2*t1+t4)] - SCALAR_VAL(2.0) * A[(-2*t1+t2)][1][(-2*t1+t4)] + A[(-2*t1+t2)][1 -1][(-2*t1+t4)]) + SCALAR_VAL(0.125) * (A[(-2*t1+t2)][1][(-2*t1+t4)+1] - SCALAR_VAL(2.0) * A[(-2*t1+t2)][1][(-2*t1+t4)] + A[(-2*t1+t2)][1][(-2*t1+t4)-1]) + A[(-2*t1+t2)][1][(-2*t1+t4)];;
    }
    for (t3=2*t1+2;t3<=2*t1+_PB_N-2;t3++) {
      B[(-2*t1+t2)][(-2*t1+t3)][1] = SCALAR_VAL(0.125) * (A[(-2*t1+t2)+1][(-2*t1+t3)][1] - SCALAR_VAL(2.0) * A[(-2*t1+t2)][(-2*t1+t3)][1] + A[(-2*t1+t2)-1][(-2*t1+t3)][1]) + SCALAR_VAL(0.125) * (A[(-2*t1+t2)][(-2*t1+t3)+1][1] - SCALAR_VAL(2.0) * A[(-2*t1+t2)][(-2*t1+t3)][1] + A[(-2*t1+t2)][(-2*t1+t3)-1][1]) + SCALAR_VAL(0.125) * (A[(-2*t1+t2)][(-2*t1+t3)][1 +1] - SCALAR_VAL(2.0) * A[(-2*t1+t2)][(-2*t1+t3)][1] + A[(-2*t1+t2)][(-2*t1+t3)][1 -1]) + A[(-2*t1+t2)][(-2*t1+t3)][1];;
      for (t4=2*t1+2;t4<=2*t1+_PB_N-2;t4++) {
        B[(-2*t1+t2)][(-2*t1+t3)][(-2*t1+t4)] = SCALAR_VAL(0.125) * (A[(-2*t1+t2)+1][(-2*t1+t3)][(-2*t1+t4)] - SCALAR_VAL(2.0) * A[(-2*t1+t2)][(-2*t1+t3)][(-2*t1+t4)] + A[(-2*t1+t2)-1][(-2*t1+t3)][(-2*t1+t4)]) + SCALAR_VAL(0.125) * (A[(-2*t1+t2)][(-2*t1+t3)+1][(-2*t1+t4)] - SCALAR_VAL(2.0) * A[(-2*t1+t2)][(-2*t1+t3)][(-2*t1+t4)] + A[(-2*t1+t2)][(-2*t1+t3)-1][(-2*t1+t4)]) + SCALAR_VAL(0.125) * (A[(-2*t1+t2)][(-2*t1+t3)][(-2*t1+t4)+1] - SCALAR_VAL(2.0) * A[(-2*t1+t2)][(-2*t1+t3)][(-2*t1+t4)] + A[(-2*t1+t2)][(-2*t1+t3)][(-2*t1+t4)-1]) + A[(-2*t1+t2)][(-2*t1+t3)][(-2*t1+t4)];;
        A[(-2*t1+t2-1)][(-2*t1+t3-1)][(-2*t1+t4-1)] = SCALAR_VAL(0.125) * (B[(-2*t1+t2-1)+1][(-2*t1+t3-1)][(-2*t1+t4-1)] - SCALAR_VAL(2.0) * B[(-2*t1+t2-1)][(-2*t1+t3-1)][(-2*t1+t4-1)] + B[(-2*t1+t2-1)-1][(-2*t1+t3-1)][(-2*t1+t4-1)]) + SCALAR_VAL(0.125) * (B[(-2*t1+t2-1)][(-2*t1+t3-1)+1][(-2*t1+t4-1)] - SCALAR_VAL(2.0) * B[(-2*t1+t2-1)][(-2*t1+t3-1)][(-2*t1+t4-1)] + B[(-2*t1+t2-1)][(-2*t1+t3-1)-1][(-2*t1+t4-1)]) + SCALAR_VAL(0.125) * (B[(-2*t1+t2-1)][(-2*t1+t3-1)][(-2*t1+t4-1)+1] - SCALAR_VAL(2.0) * B[(-2*t1+t2-1)][(-2*t1+t3-1)][(-2*t1+t4-1)] + B[(-2*t1+t2-1)][(-2*t1+t3-1)][(-2*t1+t4-1)-1]) + B[(-2*t1+t2-1)][(-2*t1+t3-1)][(-2*t1+t4-1)];;
      }
      A[(-2*t1+t2-1)][(-2*t1+t3-1)][(_PB_N-2)] = SCALAR_VAL(0.125) * (B[(-2*t1+t2-1)+1][(-2*t1+t3-1)][(_PB_N-2)] - SCALAR_VAL(2.0) * B[(-2*t1+t2-1)][(-2*t1+t3-1)][(_PB_N-2)] + B[(-2*t1+t2-1)-1][(-2*t1+t3-1)][(_PB_N-2)]) + SCALAR_VAL(0.125) * (B[(-2*t1+t2-1)][(-2*t1+t3-1)+1][(_PB_N-2)] - SCALAR_VAL(2.0) * B[(-2*t1+t2-1)][(-2*t1+t3-1)][(_PB_N-2)] + B[(-2*t1+t2-1)][(-2*t1+t3-1)-1][(_PB_N-2)]) + SCALAR_VAL(0.125) * (B[(-2*t1+t2-1)][(-2*t1+t3-1)][(_PB_N-2)+1] - SCALAR_VAL(2.0) * B[(-2*t1+t2-1)][(-2*t1+t3-1)][(_PB_N-2)] + B[(-2*t1+t2-1)][(-2*t1+t3-1)][(_PB_N-2)-1]) + B[(-2*t1+t2-1)][(-2*t1+t3-1)][(_PB_N-2)];;
    }
    for (t4=2*t1+2;t4<=2*t1+_PB_N-1;t4++) {
      A[(-2*t1+t2-1)][(_PB_N-2)][(-2*t1+t4-1)] = SCALAR_VAL(0.125) * (B[(-2*t1+t2-1)+1][(_PB_N-2)][(-2*t1+t4-1)] - SCALAR_VAL(2.0) * B[(-2*t1+t2-1)][(_PB_N-2)][(-2*t1+t4-1)] + B[(-2*t1+t2-1)-1][(_PB_N-2)][(-2*t1+t4-1)]) + SCALAR_VAL(0.125) * (B[(-2*t1+t2-1)][(_PB_N-2)+1][(-2*t1+t4-1)] - SCALAR_VAL(2.0) * B[(-2*t1+t2-1)][(_PB_N-2)][(-2*t1+t4-1)] + B[(-2*t1+t2-1)][(_PB_N-2)-1][(-2*t1+t4-1)]) + SCALAR_VAL(0.125) * (B[(-2*t1+t2-1)][(_PB_N-2)][(-2*t1+t4-1)+1] - SCALAR_VAL(2.0) * B[(-2*t1+t2-1)][(_PB_N-2)][(-2*t1+t4-1)] + B[(-2*t1+t2-1)][(_PB_N-2)][(-2*t1+t4-1)-1]) + B[(-2*t1+t2-1)][(_PB_N-2)][(-2*t1+t4-1)];;
    }
  }
  for (t3=2*t1+2;t3<=2*t1+_PB_N-1;t3++) {
    for (t4=2*t1+2;t4<=2*t1+_PB_N-1;t4++) {
      A[(_PB_N-2)][(-2*t1+t3-1)][(-2*t1+t4-1)] = SCALAR_VAL(0.125) * (B[(_PB_N-2)+1][(-2*t1+t3-1)][(-2*t1+t4-1)] - SCALAR_VAL(2.0) * B[(_PB_N-2)][(-2*t1+t3-1)][(-2*t1+t4-1)] + B[(_PB_N-2)-1][(-2*t1+t3-1)][(-2*t1+t4-1)]) + SCALAR_VAL(0.125) * (B[(_PB_N-2)][(-2*t1+t3-1)+1][(-2*t1+t4-1)] - SCALAR_VAL(2.0) * B[(_PB_N-2)][(-2*t1+t3-1)][(-2*t1+t4-1)] + B[(_PB_N-2)][(-2*t1+t3-1)-1][(-2*t1+t4-1)]) + SCALAR_VAL(0.125) * (B[(_PB_N-2)][(-2*t1+t3-1)][(-2*t1+t4-1)+1] - SCALAR_VAL(2.0) * B[(_PB_N-2)][(-2*t1+t3-1)][(-2*t1+t4-1)] + B[(_PB_N-2)][(-2*t1+t3-1)][(-2*t1+t4-1)-1]) + B[(_PB_N-2)][(-2*t1+t3-1)][(-2*t1+t4-1)];;
    }
  }
}
/* End of CLooG code */

}


int main(int argc, char** argv)
{
  /* Retrieve problem size. */
  int n = N;
  int tsteps = TSTEPS;

  /* Variable declaration/allocation. */
  POLYBENCH_3D_ARRAY_DECL(A, DATA_TYPE, N, N, N, n, n, n);
  POLYBENCH_3D_ARRAY_DECL(B, DATA_TYPE, N, N, N, n, n, n);


  /* Initialize array(s). */
  init_array (n, POLYBENCH_ARRAY(A), POLYBENCH_ARRAY(B));

  /* Start timer. */
  polybench_start_instruments;

  /* Run kernel. */
  kernel_heat_3d (tsteps, n, POLYBENCH_ARRAY(A), POLYBENCH_ARRAY(B));

  /* Stop and print timer. */
  polybench_stop_instruments;
  polybench_print_instruments;

  /* Prevent dead-code elimination. All live-out data must be printed
     by the function call in argument. */
  polybench_prevent_dce(print_array(n, POLYBENCH_ARRAY(A)));

  /* Be clean. */
  POLYBENCH_FREE_ARRAY(A);

  return 0;
}
