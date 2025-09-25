#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <math.h>
#include <polybench.h>
#include <time.h>
#include <stdlib.h>
#include "3334121222_00.h"
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
static void init_array(int xa,DATA_TYPE POLYBENCH_1D(A,xA,xa),int xb,int yb,int zb,DATA_TYPE POLYBENCH_3D(B,xB,yB,zB,xb,yb,zb),int xc,int yc,DATA_TYPE POLYBENCH_2D(C,xC,yC,xc,yc),int seed)
{
srand(seed);
int i,j,k,l;
for (i = 0; i < xa; i++) {
A[i] = rand()%3;;
}
for (i = 0; i < xb; i++) {
for (j = 0; j < yb; j++) {
for (k = 0; k < zb; k++) {
B[i][j][k] = rand()%3;;
}}}
for (i = 0; i < xc; i++) {
for (j = 0; j < yc; j++) {
C[i][j] = rand()%3;;
}}
}
static void print_array(int xa,DATA_TYPE POLYBENCH_1D(A,xA,xa),int xb,int yb,int zb,DATA_TYPE POLYBENCH_3D(B,xB,yB,zB,xb,yb,zb),int xc,int yc,DATA_TYPE POLYBENCH_2D(C,xC,yC,xc,yc))
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
for (k = 0; k < zb; k++) {
fprintf (POLYBENCH_DUMP_TARGET, "\n");
fprintf (POLYBENCH_DUMP_TARGET, DATA_PRINTF_MODIFIER, B[i][j][k]);
}}}
POLYBENCH_DUMP_END("B");
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
}
void kernel_3334121222_00(int xa,DATA_TYPE POLYBENCH_1D(A,xA,xa),int xb,int yb,int zb,DATA_TYPE POLYBENCH_3D(B,xB,yB,zB,xb,yb,zb),int xc,int yc,DATA_TYPE POLYBENCH_2D(C,xC,yC,xc,yc)){
polybench_start_instruments;
  int t1, t2, t3, t4, t5, t6, t7;
 int lb, ub, lbp, ubp, lb2, ub2;
 register int lbv, ubv;
/* Start of CLooG code */
lbp=0;
ubp=floord(PB_L-1,32);
#pragma omp parallel for private(lbv,ubv,t3,t4,t5,t6,t7)
for (t2=lbp;t2<=ubp;t2++) {
  for (t3=0;t3<=floord(PB_M+2*PB_P-3,32);t3++) {
    for (t4=max(0,ceild(32*t3-PB_M-61,64));t4<=min(floord(t3,2),floord(PB_P-1,32));t4++) {
      for (t5=32*t2;t5<=min(PB_L-1,32*t2+31);t5++) {
        for (t6=max(max(4,32*t3),64*t4+2);t6<=min(min(32*t3+31,PB_M+2*PB_P-3),64*t4+PB_M+61);t6++) {
          for (t7=max(max(1,ceild(t6-PB_M+1,2)),32*t4);t7<=min(min(floord(t6-2,2),PB_P-1),32*t4+31);t7++) {
            B[(t6-2*t7)][t5][t7-1] = B[(t6-2*t7)-2][t5][t7] * 1;;
          }
        }
      }
    }
  }
}
for (t2=2;t2<=PB_M-1;t2++) {
  A[t2] = A[t2-1] + A[t2-2] * 5;;
}
lbp=0;
ubp=floord(PB_M-1,32);
#pragma omp parallel for private(lbv,ubv,t3,t4,t5,t6,t7)
for (t2=lbp;t2<=ubp;t2++) {
  for (t3=0;t3<=floord(PB_M-2,32);t3++) {
    for (t4=32*t2;t4<=min(PB_M-1,32*t2+31);t4++) {
      lbv=32*t3;
      ubv=min(PB_M-2,32*t3+31);
#pragma ivdep
#pragma vector always
      for (t5=lbv;t5<=ubv;t5++) {
        C[t4][t5] = C[t4][t5] + A[t5] + A[t5+1] - 1;;
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
int zb = zB;
int xc = xC;
int yc = yC;
POLYBENCH_1D_ARRAY_DECL(A, DATA_TYPE,xA,xa);
POLYBENCH_3D_ARRAY_DECL(B, DATA_TYPE,xB,yB,zB,xb,yb,zb);
POLYBENCH_2D_ARRAY_DECL(C, DATA_TYPE,xC,yC,xc,yc);
init_array(xa,POLYBENCH_ARRAY(A),xb,yb,zb,POLYBENCH_ARRAY(B),xc,yc,POLYBENCH_ARRAY(C),INIT_SEED);
kernel_3334121222_00(xa,POLYBENCH_ARRAY(A),xb,yb,zb,POLYBENCH_ARRAY(B),xc,yc,POLYBENCH_ARRAY(C));
polybench_prevent_dce(print_array(xa,POLYBENCH_ARRAY(A),xb,yb,zb,POLYBENCH_ARRAY(B),xc,yc,POLYBENCH_ARRAY(C)));
POLYBENCH_FREE_ARRAY(A);
POLYBENCH_FREE_ARRAY(B);
POLYBENCH_FREE_ARRAY(C);
return 0;
}
