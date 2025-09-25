#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <math.h>
#include <polybench.h>
#include <time.h>
#include <stdlib.h>
#include "3534221226_00.h"
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
static void init_array(int xa,DATA_TYPE POLYBENCH_1D(A,xA,xa),int xb,int yb,DATA_TYPE POLYBENCH_2D(B,xB,yB,xb,yb),int xc,DATA_TYPE POLYBENCH_1D(C,xC,xc),int seed)
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
for (i = 0; i < xc; i++) {
C[i] = rand()%3;;
}
}
static void print_array(int xa,DATA_TYPE POLYBENCH_1D(A,xA,xa),int xb,int yb,DATA_TYPE POLYBENCH_2D(B,xB,yB,xb,yb),int xc,DATA_TYPE POLYBENCH_1D(C,xC,xc))
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
POLYBENCH_DUMP_START;
POLYBENCH_DUMP_BEGIN("C");
for (i = 0; i < xc; i++) {
fprintf (POLYBENCH_DUMP_TARGET, "\n");
fprintf (POLYBENCH_DUMP_TARGET, DATA_PRINTF_MODIFIER, C[i]);
}
POLYBENCH_DUMP_END("C");
POLYBENCH_DUMP_FINISH;
}
void kernel_3534221226_00(int xa,DATA_TYPE POLYBENCH_1D(A,xA,xa),int xb,int yb,DATA_TYPE POLYBENCH_2D(B,xB,yB,xb,yb),int xc,DATA_TYPE POLYBENCH_1D(C,xC,xc)){
polybench_start_instruments;
  int t1, t2, t3, t4, t5;
 int lb, ub, lbp, ubp, lb2, ub2;
 register int lbv, ubv;
/* Start of CLooG code */
for (t1=0;t1<=floord(PB_M,32);t1++) {
  for (t2=-1;t2<=floord(PB_M-2,32);t2++) {
    if ((t1 == 0) && (t2 == 0)) {
      for (t4=0;t4<=31;t4++) {
        B[0][0] = 3;;
        B[t4+1][0] = B[0][0] + B[t4+1][0] + 4;;
      }
    }
    if (t2 >= 1) {
      for (t3=32*t1;t3<=min(PB_M-1,32*t1+31);t3++) {
        for (t4=32*t2;t4<=min(PB_M-2,32*t2+31);t4++) {
          B[t3][t3] = 3;;
          B[t4+1][t3] = B[t3][t3] + B[t4+1][t3] + 4;;
        }
      }
    }
    if (t2 == -1) {
      for (t3=32*t1;t3<=min(PB_M-1,32*t1+31);t3++) {
        B[t3][t3] = 3;;
        B[-1 +1][t3] = B[t3][t3] + B[-1 +1][t3] + 4;;
      }
    }
    if ((t1 == 0) && (t2 == 0)) {
      for (t3=1;t3<=2;t3++) {
        B[t3][t3] = 3;;
        B[0 +1][t3] = B[t3][t3] + B[0 +1][t3] + 4;;
        A[t3-1] = A[t3-1] + A[t3] - A[t3] * A[t3+1] + 2;;
        A[t3-1] = A[t3-1] * 3;;
        for (t4=1;t4<=31;t4++) {
          B[t3][t3] = 3;;
          B[t4+1][t3] = B[t3][t3] + B[t4+1][t3] + 4;;
        }
      }
    }
    if (t2 == 0) {
      for (t3=max(3,32*t1);t3<=min(PB_M-2,32*t1+31);t3++) {
        B[t3][t3] = 3;;
        B[0 +1][t3] = B[t3][t3] + B[0 +1][t3] + 4;;
        A[t3-1] = A[t3-1] + A[t3] - A[t3] * A[t3+1] + 2;;
        C[(t3-1)] = C[(t3-1)-2] - A[(t3-1)] * 3;;
        A[t3-1] = A[t3-1] * 3;;
        for (t4=1;t4<=31;t4++) {
          B[t3][t3] = 3;;
          B[t4+1][t3] = B[t3][t3] + B[t4+1][t3] + 4;;
        }
      }
    }
    if ((t1 == 281) && (t2 == 0)) {
      B[(PB_M-1)][(PB_M-1)] = 3;;
      B[0 +1][(PB_M-1)] = B[(PB_M-1)][(PB_M-1)] + B[0 +1][(PB_M-1)] + 4;;
      C[(PB_M-2)] = C[(PB_M-2)-2] - A[(PB_M-2)] * 3;;
      A[(PB_M-1)-1] = A[(PB_M-1)-1] * 3;;
      for (t4=1;t4<=31;t4++) {
        B[(PB_M-1)][(PB_M-1)] = 3;;
        B[t4+1][(PB_M-1)] = B[(PB_M-1)][(PB_M-1)] + B[t4+1][(PB_M-1)] + 4;;
      }
    }
    if ((t1 == 281) && (t2 == 0)) {
      C[(PB_M-1)] = C[(PB_M-1)-2] - A[(PB_M-1)] * 3;;
      A[PB_M-1] = A[PB_M-1] * 3;;
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
int xc = xC;
POLYBENCH_1D_ARRAY_DECL(A, DATA_TYPE,xA,xa);
POLYBENCH_2D_ARRAY_DECL(B, DATA_TYPE,xB,yB,xb,yb);
POLYBENCH_1D_ARRAY_DECL(C, DATA_TYPE,xC,xc);
init_array(xa,POLYBENCH_ARRAY(A),xb,yb,POLYBENCH_ARRAY(B),xc,POLYBENCH_ARRAY(C),INIT_SEED);
kernel_3534221226_00(xa,POLYBENCH_ARRAY(A),xb,yb,POLYBENCH_ARRAY(B),xc,POLYBENCH_ARRAY(C));
polybench_prevent_dce(print_array(xa,POLYBENCH_ARRAY(A),xb,yb,POLYBENCH_ARRAY(B),xc,POLYBENCH_ARRAY(C)));
POLYBENCH_FREE_ARRAY(A);
POLYBENCH_FREE_ARRAY(B);
POLYBENCH_FREE_ARRAY(C);
return 0;
}
