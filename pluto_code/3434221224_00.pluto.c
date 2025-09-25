#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <math.h>
#include <polybench.h>
#include <time.h>
#include <stdlib.h>
#include "3434221224_00.h"
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
static void init_array(int xa,DATA_TYPE POLYBENCH_1D(A,xA,xa),int xc,int yc,DATA_TYPE POLYBENCH_2D(C,xC,yC,xc,yc),int xb,DATA_TYPE POLYBENCH_1D(B,xB,xb),int seed)
{
srand(seed);
int i,j,k,l;
for (i = 0; i < xa; i++) {
A[i] = rand()%3;;
}
for (i = 0; i < xc; i++) {
for (j = 0; j < yc; j++) {
C[i][j] = rand()%3;;
}}
for (i = 0; i < xb; i++) {
B[i] = rand()%3;;
}
}
static void print_array(int xa,DATA_TYPE POLYBENCH_1D(A,xA,xa),int xc,int yc,DATA_TYPE POLYBENCH_2D(C,xC,yC,xc,yc),int xb,DATA_TYPE POLYBENCH_1D(B,xB,xb))
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
POLYBENCH_DUMP_BEGIN("C");
for (i = 0; i < xc; i++) {
for (j = 0; j < yc; j++) {
fprintf (POLYBENCH_DUMP_TARGET, "\n");
fprintf (POLYBENCH_DUMP_TARGET, DATA_PRINTF_MODIFIER, C[i][j]);
}}
POLYBENCH_DUMP_END("C");
POLYBENCH_DUMP_FINISH;
POLYBENCH_DUMP_START;
POLYBENCH_DUMP_BEGIN("B");
for (i = 0; i < xb; i++) {
fprintf (POLYBENCH_DUMP_TARGET, "\n");
fprintf (POLYBENCH_DUMP_TARGET, DATA_PRINTF_MODIFIER, B[i]);
}
POLYBENCH_DUMP_END("B");
POLYBENCH_DUMP_FINISH;
}
void kernel_3434221224_00(int xa,DATA_TYPE POLYBENCH_1D(A,xA,xa),int xc,int yc,DATA_TYPE POLYBENCH_2D(C,xC,yC,xc,yc),int xb,DATA_TYPE POLYBENCH_1D(B,xB,xb)){
polybench_start_instruments;
  int t1, t2, t3, t4, t5, t6;
 int lb, ub, lbp, ubp, lb2, ub2;
 register int lbv, ubv;
/* Start of CLooG code */
for (t1=0;t1<=floord(299*PB_M-300,9536);t1++) {
  for (t2=0;t2<=t1;t2++) {
    if ((t1 == 0) && (t2 == 0)) {
      A[0] = B[0] - 3;;
    }
    if (t2 >= 1) {
      for (t3=max(32*t1,32*t2+1);t3<=min(PB_M-1,32*t1+31);t3++) {
        for (t4=32*t2;t4<=min(32*t2+31,t3-1);t4++) {
          for (t5=0;t5<=PB_M-1;t5++) {
            C[t4-1][t3] = C[t4-1][t3-1] + 1;;
          }
        }
      }
    }
    if ((t1 == 0) && (t2 == 0)) {
      A[1] = B[1] - 3;;
      A[1] = A[1] - B[1 -1] * 4;;
    }
    if (t2 == 0) {
      for (t3=max(2,32*t1);t3<=min(PB_M-1,32*t1+31);t3++) {
        A[t3] = B[t3] - 3;;
        A[t3] = A[t3] - B[t3-1] * 4;;
        B[(t3-1)] = B[(t3-1)] - B[(t3-1)] * B[(t3-1)] + B[(t3-1)-1] + 2;;
        for (t4=1;t4<=min(31,t3-1);t4++) {
          for (t5=0;t5<=PB_M-1;t5++) {
            C[t4-1][t3] = C[t4-1][t3-1] + 1;;
          }
        }
      }
    }
    if ((t1 == 9) && (t2 == 0)) {
      B[(PB_M-1)] = B[(PB_M-1)] - B[(PB_M-1)] * B[(PB_M-1)] + B[(PB_M-1)-1] + 2;;
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
int xc = xC;
int yc = yC;
int xb = xB;
POLYBENCH_1D_ARRAY_DECL(A, DATA_TYPE,xA,xa);
POLYBENCH_2D_ARRAY_DECL(C, DATA_TYPE,xC,yC,xc,yc);
POLYBENCH_1D_ARRAY_DECL(B, DATA_TYPE,xB,xb);
init_array(xa,POLYBENCH_ARRAY(A),xc,yc,POLYBENCH_ARRAY(C),xb,POLYBENCH_ARRAY(B),INIT_SEED);
kernel_3434221224_00(xa,POLYBENCH_ARRAY(A),xc,yc,POLYBENCH_ARRAY(C),xb,POLYBENCH_ARRAY(B));
polybench_prevent_dce(print_array(xa,POLYBENCH_ARRAY(A),xc,yc,POLYBENCH_ARRAY(C),xb,POLYBENCH_ARRAY(B)));
POLYBENCH_FREE_ARRAY(A);
POLYBENCH_FREE_ARRAY(C);
POLYBENCH_FREE_ARRAY(B);
return 0;
}
