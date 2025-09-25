#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <math.h>
#include <polybench.h>
#include <time.h>
#include <stdlib.h>
#include "3224321226_00.h"
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
static void init_array(int xa,int ya,int za,DATA_TYPE POLYBENCH_3D(A,xA,yA,zA,xa,ya,za),int xb,DATA_TYPE POLYBENCH_1D(B,xB,xb),int seed)
{
srand(seed);
int i,j,k,l;
for (i = 0; i < xa; i++) {
for (j = 0; j < ya; j++) {
for (k = 0; k < za; k++) {
A[i][j][k] = rand()%3;;
}}}
for (i = 0; i < xb; i++) {
B[i] = rand()%3;;
}
}
static void print_array(int xa,int ya,int za,DATA_TYPE POLYBENCH_3D(A,xA,yA,zA,xa,ya,za),int xb,DATA_TYPE POLYBENCH_1D(B,xB,xb))
{
int i,j,k,l;
POLYBENCH_DUMP_START;
POLYBENCH_DUMP_BEGIN("A");
for (i = 0; i < xa; i++) {
for (j = 0; j < ya; j++) {
for (k = 0; k < za; k++) {
fprintf (POLYBENCH_DUMP_TARGET, "\n");
fprintf (POLYBENCH_DUMP_TARGET, DATA_PRINTF_MODIFIER, A[i][j][k]);
}}}
POLYBENCH_DUMP_END("A");
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
void kernel_3224321226_00(int xa,int ya,int za,DATA_TYPE POLYBENCH_3D(A,xA,yA,zA,xa,ya,za),int xb,DATA_TYPE POLYBENCH_1D(B,xB,xb)){
polybench_start_instruments;
  int t1, t2, t3, t4, t5;
 int lb, ub, lbp, ubp, lb2, ub2;
 register int lbv, ubv;
/* Start of CLooG code */
for (t1=0;t1<=floord(PB_M-1,32);t1++) {
  for (t2=0;t2<=floord(PB_P-1,32);t2++) {
    if ((t1 == 0) && (t2 == 0)) {
      for (t4=0;t4<=31;t4++) {
        for (t5=0;t5<=PB_L-3;t5++) {
          A[1 -1][t5][t4] = A[1 -1][t5+2][t4] - A[1][1][t4] - 2;;
        }
      }
    }
    if (t2 >= 1) {
      for (t3=max(1,32*t1);t3<=min(PB_M-1,32*t1+31);t3++) {
        for (t4=32*t2;t4<=min(PB_P-1,32*t2+31);t4++) {
          for (t5=0;t5<=PB_L-3;t5++) {
            A[t3-1][t5][t4] = A[t3-1][t5+2][t4] - A[t3][t3][t4] - 2;;
          }
        }
      }
    }
    if (t2 == 0) {
      for (t3=max(2,32*t1);t3<=min(PB_M-1,32*t1+31);t3++) {
        A[t3-1][0][0] = A[t3-1][0 +2][0] - A[t3][t3][0] - 2;;
        B[t3] = B[t3-1] + B[t3-2] - 2;;
        for (t5=1;t5<=PB_L-3;t5++) {
          A[t3-1][t5][0] = A[t3-1][t5+2][0] - A[t3][t3][0] - 2;;
        }
        for (t4=1;t4<=31;t4++) {
          for (t5=0;t5<=PB_L-3;t5++) {
            A[t3-1][t5][t4] = A[t3-1][t5+2][t4] - A[t3][t3][t4] - 2;;
          }
        }
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
int ya = yA;
int za = zA;
int xb = xB;
POLYBENCH_3D_ARRAY_DECL(A, DATA_TYPE,xA,yA,zA,xa,ya,za);
POLYBENCH_1D_ARRAY_DECL(B, DATA_TYPE,xB,xb);
init_array(xa,ya,za,POLYBENCH_ARRAY(A),xb,POLYBENCH_ARRAY(B),INIT_SEED);
kernel_3224321226_00(xa,ya,za,POLYBENCH_ARRAY(A),xb,POLYBENCH_ARRAY(B));
polybench_prevent_dce(print_array(xa,ya,za,POLYBENCH_ARRAY(A),xb,POLYBENCH_ARRAY(B)));
POLYBENCH_FREE_ARRAY(A);
POLYBENCH_FREE_ARRAY(B);
return 0;
}
