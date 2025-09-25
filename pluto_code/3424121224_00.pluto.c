#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <math.h>
#include <polybench.h>
#include <time.h>
#include <stdlib.h>
#include "3424121224_00.h"
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
static void init_array(int xa,int ya,DATA_TYPE POLYBENCH_2D(A,xA,yA,xa,ya),int xb,DATA_TYPE POLYBENCH_1D(B,xB,xb),int seed)
{
srand(seed);
int i,j,k,l;
for (i = 0; i < xa; i++) {
for (j = 0; j < ya; j++) {
A[i][j] = rand()%3;;
}}
for (i = 0; i < xb; i++) {
B[i] = rand()%3;;
}
}
static void print_array(int xa,int ya,DATA_TYPE POLYBENCH_2D(A,xA,yA,xa,ya),int xb,DATA_TYPE POLYBENCH_1D(B,xB,xb))
{
int i,j,k,l;
POLYBENCH_DUMP_START;
POLYBENCH_DUMP_BEGIN("A");
for (i = 0; i < xa; i++) {
for (j = 0; j < ya; j++) {
fprintf (POLYBENCH_DUMP_TARGET, "\n");
fprintf (POLYBENCH_DUMP_TARGET, DATA_PRINTF_MODIFIER, A[i][j]);
}}
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
void kernel_3424121224_00(int xa,int ya,DATA_TYPE POLYBENCH_2D(A,xA,yA,xa,ya),int xb,DATA_TYPE POLYBENCH_1D(B,xB,xb)){
polybench_start_instruments;
  int t1, t2, t3, t4, t5, t6, t7;
 int lb, ub, lbp, ubp, lb2, ub2;
 register int lbv, ubv;
/* Start of CLooG code */
for (t2=0;t2<=1;t2++) {
  B[t2] = B[t2+1] * B[t2] - 1;;
}
for (t2=2;t2<=PB_N-2;t2++) {
  B[t2] = B[t2+1] * B[t2] - 1;;
  B[(t2-1)+1] = B[(t2-1)] * B[(t2-1)-1] * 3;;
}
B[(PB_N-2)+1] = B[(PB_N-2)] * B[(PB_N-2)-1] * 3;;
lbp=0;
ubp=floord(PB_N-2,32);
#pragma omp parallel for private(lbv,ubv,t3,t4,t5,t6,t7)
for (t2=lbp;t2<=ubp;t2++) {
  for (t3=0;t3<=floord(PB_N-3,32);t3++) {
    for (t4=32*t2;t4<=min(PB_N-2,32*t2+31);t4++) {
      for (t5=32*t3;t5<=min(PB_N-3,32*t3+31);t5++) {
        for (t6=0;t6<=PB_N-1;t6++) {
          A[t5][t4] = A[t5+2][t4] * 5;;
        }
      }
    }
  }
}
for (t2=0;t2<=floord(PB_N-2,8);t2++) {
  lbp=max(ceild(2*t2,3),ceild(32*t2-PB_N+1,32));
  ubp=min(floord(64*t2+PB_N+60,96),t2);
#pragma omp parallel for private(lbv,ubv,t4,t5,t6,t7)
  for (t3=lbp;t3<=ubp;t3++) {
    for (t4=max(ceild(32*t3-PB_N+2,2),32*t2-32*t3);t4<=min(min(PB_N-1,16*t3+15),32*t2-32*t3+31);t4++) {
      for (t5=max(32*t3,2*t4+1);t5<=min(32*t3+31,2*t4+PB_N-2);t5++) {
        A[(-2*t4+t5)][(-2*t4+t5)+1] = A[(-2*t4+t5)][t4] + A[t4][(-2*t4+t5)-1] * 4;;
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
int xb = xB;
POLYBENCH_2D_ARRAY_DECL(A, DATA_TYPE,xA,yA,xa,ya);
POLYBENCH_1D_ARRAY_DECL(B, DATA_TYPE,xB,xb);
init_array(xa,ya,POLYBENCH_ARRAY(A),xb,POLYBENCH_ARRAY(B),INIT_SEED);
kernel_3424121224_00(xa,ya,POLYBENCH_ARRAY(A),xb,POLYBENCH_ARRAY(B));
polybench_prevent_dce(print_array(xa,ya,POLYBENCH_ARRAY(A),xb,POLYBENCH_ARRAY(B)));
POLYBENCH_FREE_ARRAY(A);
POLYBENCH_FREE_ARRAY(B);
return 0;
}
