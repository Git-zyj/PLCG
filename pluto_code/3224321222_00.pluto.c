#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <math.h>
#include <polybench.h>
#include <time.h>
#include <stdlib.h>
#include "3224321222_00.h"
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
static void init_array(int xa,DATA_TYPE POLYBENCH_1D(A,xA,xa),int xc,DATA_TYPE POLYBENCH_1D(C,xC,xc),int xb,int yb,DATA_TYPE POLYBENCH_2D(B,xB,yB,xb,yb),int seed)
{
srand(seed);
int i,j,k,l;
for (i = 0; i < xa; i++) {
A[i] = rand()%3;;
}
for (i = 0; i < xc; i++) {
C[i] = rand()%3;;
}
for (i = 0; i < xb; i++) {
for (j = 0; j < yb; j++) {
B[i][j] = rand()%3;;
}}
}
static void print_array(int xa,DATA_TYPE POLYBENCH_1D(A,xA,xa),int xc,DATA_TYPE POLYBENCH_1D(C,xC,xc),int xb,int yb,DATA_TYPE POLYBENCH_2D(B,xB,yB,xb,yb))
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
fprintf (POLYBENCH_DUMP_TARGET, "\n");
fprintf (POLYBENCH_DUMP_TARGET, DATA_PRINTF_MODIFIER, C[i]);
}
POLYBENCH_DUMP_END("C");
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
void kernel_3224321222_00(int xa,DATA_TYPE POLYBENCH_1D(A,xA,xa),int xc,DATA_TYPE POLYBENCH_1D(C,xC,xc),int xb,int yb,DATA_TYPE POLYBENCH_2D(B,xB,yB,xb,yb)){
polybench_start_instruments;
  int t1, t2, t3, t4, t5;
 int lb, ub, lbp, ubp, lb2, ub2;
 register int lbv, ubv;
/* Start of CLooG code */
lbp=0;
ubp=floord(PB_M-1,32);
#pragma omp parallel for private(lbv,ubv,t3,t4,t5)
for (t2=lbp;t2<=ubp;t2++) {
  for (t3=0;t3<=floord(PB_M-1,32);t3++) {
    for (t4=max(1,32*t2);t4<=min(PB_M-1,32*t2+31);t4++) {
      for (t5=32*t3;t5<=min(PB_M-1,32*t3+31);t5++) {
        A[t4] = A[t4] + A[t4] + B[t4-1][t5] + C[t4] * 3;;
      }
    }
  }
}
for (t2=1;t2<=PB_M-1;t2++) {
  C[t2-1] = C[t2-1] + C[t2] + 3;;
}
/* End of CLooG code */
polybench_stop_instruments;
polybench_print_instruments;
}
int main(int argc, char** argv)
{
int xa = xA;
int xc = xC;
int xb = xB;
int yb = yB;
POLYBENCH_1D_ARRAY_DECL(A, DATA_TYPE,xA,xa);
POLYBENCH_1D_ARRAY_DECL(C, DATA_TYPE,xC,xc);
POLYBENCH_2D_ARRAY_DECL(B, DATA_TYPE,xB,yB,xb,yb);
init_array(xa,POLYBENCH_ARRAY(A),xc,POLYBENCH_ARRAY(C),xb,yb,POLYBENCH_ARRAY(B),INIT_SEED);
kernel_3224321222_00(xa,POLYBENCH_ARRAY(A),xc,POLYBENCH_ARRAY(C),xb,yb,POLYBENCH_ARRAY(B));
polybench_prevent_dce(print_array(xa,POLYBENCH_ARRAY(A),xc,POLYBENCH_ARRAY(C),xb,yb,POLYBENCH_ARRAY(B)));
POLYBENCH_FREE_ARRAY(A);
POLYBENCH_FREE_ARRAY(C);
POLYBENCH_FREE_ARRAY(B);
return 0;
}
