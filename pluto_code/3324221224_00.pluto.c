#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <math.h>
#include <polybench.h>
#include <time.h>
#include <stdlib.h>
#include "3324221224_00.h"
#include <omp.h>
#define ceild(n,d)  ceil(((double)(n))/((double)(d)))
#define floord(n,d) floor(((double)(n))/((double)(d)))
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
#ifndef USE_INIT_SEED
#define INIT_SEED time(NULL)
#else
#define INIT_SEED atoi(argv[1])
#endif
static void init_array(int xa,DATA_TYPE POLYBENCH_1D(A,xA,xa),int xb,int yb,DATA_TYPE POLYBENCH_2D(B,xB,yB,xb,yb),int seed)
{
srand(seed);
int i,j,k,l;
for (i = 0; i < xa; i++) {
A[i] = rand()%3;;
}
for (i = 0; i < xb; i++) {
for (j = 0; j < yb; j++) {
B[i][j] = rand()%3;;
}}
}
static void print_array(int xa,DATA_TYPE POLYBENCH_1D(A,xA,xa),int xb,int yb,DATA_TYPE POLYBENCH_2D(B,xB,yB,xb,yb))
{
int i,j,k,l;
POLYBENCH_DUMP_START;
POLYBENCH_DUMP_BEGIN("A");
for (i = 0; i < xa; i++) {
fprintf (POLYBENCH_DUMP_TARGET, "\n");
fprintf (POLYBENCH_DUMP_TARGET, DATA_PRINTF_MODIFIER, A[i]);
}
POLYBENCH_DUMP_END("A");
POLYBENCH_DUMP_FINISH;
POLYBENCH_DUMP_START;
POLYBENCH_DUMP_BEGIN("B");
for (i = 0; i < xb; i++) {
for (j = 0; j < yb; j++) {
fprintf (POLYBENCH_DUMP_TARGET, "\n");
fprintf (POLYBENCH_DUMP_TARGET, DATA_PRINTF_MODIFIER, B[i][j]);
}}
POLYBENCH_DUMP_END("B");
POLYBENCH_DUMP_FINISH;
}
void kernel_3324221224_00(int xa,DATA_TYPE POLYBENCH_1D(A,xA,xa),int xb,int yb,DATA_TYPE POLYBENCH_2D(B,xB,yB,xb,yb)){
polybench_start_instruments;
  int t1, t2, t3, t4, t5;
 int lb, ub, lbp, ubp, lb2, ub2;
 register int lbv, ubv;
/* Start of CLooG code */
for (t1=0;t1<=281;t1++) {
  for (t2=0;t2<=min(floord(PB_M-1,32),floord(-23996*t1+125*PB_M+5998875,4000));t2++) {
    if ((t1 == 0) && (t2 == 0)) {
      B[0][1] = B[0][1 -1] + 3;;
      A[1] = A[1 -1] - 3;;
      lbv=1;
      ubv=31;
#pragma ivdep
#pragma vector always
      for (t4=lbv;t4<=ubv;t4++) {
        B[t4][1] = B[t4][1 -1] + 3;;
      }
    }
    if (t2 >= 1) {
      for (t3=max(1,32*t1);t3<=min(PB_Q-1,32*t1+31);t3++) {
        lbv=32*t2;
        ubv=min(PB_M-1,32*t2+31);
#pragma ivdep
#pragma vector always
        for (t4=lbv;t4<=ubv;t4++) {
          B[t4][t3] = B[t4][t3-1] + 3;;
        }
      }
    }
    if (t2 == 0) {
      for (t3=max(2,32*t1);t3<=min(PB_Q-1,32*t1+31);t3++) {
        B[0][t3] = B[0][t3-1] + 3;;
        A[t3] = A[t3-1] - 3;;
        A[(t3-1)] = A[(t3-1)] * A[(t3-1)] * A[(t3-1)] - 2;;
        lbv=1;
        ubv=31;
#pragma ivdep
#pragma vector always
        for (t4=lbv;t4<=ubv;t4++) {
          B[t4][t3] = B[t4][t3-1] + 3;;
        }
      }
    }
    if ((t1 == 250) && (t2 == 0)) {
      A[PB_Q] = A[PB_Q-1] - 3;;
      A[(PB_Q-1)] = A[(PB_Q-1)] * A[(PB_Q-1)] * A[(PB_Q-1)] - 2;;
    }
    if (t2 == 0) {
      for (t3=max(32*t1,PB_Q+1);t3<=min(PB_L-1,32*t1+31);t3++) {
        A[t3] = A[t3-1] - 3;;
      }
    }
  }
}
/* End of CLooG code */
polybench_stop_instruments;
polybench_print_instruments;
}
int main(int argc, char** argv)
{
int xa = xA;
int xb = xB;
int yb = yB;
POLYBENCH_1D_ARRAY_DECL(A, DATA_TYPE,xA,xa);
POLYBENCH_2D_ARRAY_DECL(B, DATA_TYPE,xB,yB,xb,yb);
init_array(xa,POLYBENCH_ARRAY(A),xb,yb,POLYBENCH_ARRAY(B),INIT_SEED);
kernel_3324221224_00(xa,POLYBENCH_ARRAY(A),xb,yb,POLYBENCH_ARRAY(B));
polybench_prevent_dce(print_array(xa,POLYBENCH_ARRAY(A),xb,yb,POLYBENCH_ARRAY(B)));
POLYBENCH_FREE_ARRAY(A);
POLYBENCH_FREE_ARRAY(B);
return 0;
}
