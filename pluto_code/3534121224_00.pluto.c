#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <math.h>
#include <polybench.h>
#include <time.h>
#include <stdlib.h>
#include "3534121224_00.h"
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
static void init_array(int xa,DATA_TYPE POLYBENCH_1D(A,xA,xa),int xb,int yb,DATA_TYPE POLYBENCH_2D(B,xB,yB,xb,yb),int xc,int yc,int zc,DATA_TYPE POLYBENCH_3D(C,xC,yC,zC,xc,yc,zc),int seed)
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
for (j = 0; j < yc; j++) {
for (k = 0; k < zc; k++) {
C[i][j][k] = rand()%3;;
}}}
}
static void print_array(int xa,DATA_TYPE POLYBENCH_1D(A,xA,xa),int xb,int yb,DATA_TYPE POLYBENCH_2D(B,xB,yB,xb,yb),int xc,int yc,int zc,DATA_TYPE POLYBENCH_3D(C,xC,yC,zC,xc,yc,zc))
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
for (j = 0; j < yc; j++) {
for (k = 0; k < zc; k++) {
fprintf (POLYBENCH_DUMP_TARGET, "\n");
fprintf (POLYBENCH_DUMP_TARGET, DATA_PRINTF_MODIFIER, C[i][j][k]);
}}}
POLYBENCH_DUMP_END("C");
POLYBENCH_DUMP_FINISH;
}
void kernel_3534121224_00(int xa,DATA_TYPE POLYBENCH_1D(A,xA,xa),int xb,int yb,DATA_TYPE POLYBENCH_2D(B,xB,yB,xb,yb),int xc,int yc,int zc,DATA_TYPE POLYBENCH_3D(C,xC,yC,zC,xc,yc,zc)){
polybench_start_instruments;
  int t1, t2, t3, t4, t5, t6, t7;
 int lb, ub, lbp, ubp, lb2, ub2;
 register int lbv, ubv;
/* Start of CLooG code */
for (t2=0;t2<=floord(2*PB_M+PB_L-3,32);t2++) {
  lbp=max(ceild(t2,2),ceild(32*t2-PB_M+1,32));
  ubp=min(min(floord(PB_M+PB_L-2,32),floord(32*t2+PB_L+30,64)),t2);
#pragma omp parallel for private(lbv,ubv,t4,t5,t6,t7)
  for (t3=lbp;t3<=ubp;t3++) {
    for (t4=max(32*t2-32*t3,32*t3-PB_L+1);t4<=min(min(PB_M-1,32*t3+30),32*t2-32*t3+31);t4++) {
      for (t5=max(32*t3,t4+1);t5<=min(32*t3+31,t4+PB_L-1);t5++) {
        for (t6=0;t6<=PB_M-2;t6++) {
          C[t4][(-t4+t5)][(-t4+t5)] = C[t4][(-t4+t5)][(-t4+t5)] - C[t6][t6][t4] - C[t6+1][(-t4+t5)-1][t4] * 6;;
        }
      }
    }
  }
}
lbp=0;
ubp=floord(PB_M-1,32);
#pragma omp parallel for private(lbv,ubv,t3,t4,t5,t6,t7)
for (t2=lbp;t2<=ubp;t2++) {
  lbv=32*t2;
  ubv=min(PB_M-1,32*t2+31);
#pragma ivdep
#pragma vector always
  for (t3=lbv;t3<=ubv;t3++) {
    A[t3] = A[t3] - A[t3] + A[t3] + 5;;
  }
}
for (t2=0;t2<=floord(3*PB_M-5,32);t2++) {
  lbp=max(ceild(t2,2),ceild(32*t2-PB_M+1,32));
  ubp=min(min(floord(PB_M-2,16),floord(32*t2+PB_M+28,64)),t2);
#pragma omp parallel for private(lbv,ubv,t4,t5,t6,t7)
  for (t3=lbp;t3<=ubp;t3++) {
    for (t4=max(32*t2-32*t3,32*t3-PB_M+3);t4<=min(PB_M-1,32*t2-32*t3+31);t4++) {
      for (t5=max(32*t3,t4);t5<=min(32*t3+31,t4+PB_M-3);t5++) {
        B[t4][(-t4+t5)] = B[t4][(-t4+t5)+2] - A[t4] + B[(-t4+t5)][t4] - 2;;
      }
    }
  }
}
for (t2=1;t2<=PB_M-1;t2++) {
  A[t2] = 4;;
  A[t2-1] = A[t2] - 5;;
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
int yc = yC;
int zc = zC;
POLYBENCH_1D_ARRAY_DECL(A, DATA_TYPE,xA,xa);
POLYBENCH_2D_ARRAY_DECL(B, DATA_TYPE,xB,yB,xb,yb);
POLYBENCH_3D_ARRAY_DECL(C, DATA_TYPE,xC,yC,zC,xc,yc,zc);
init_array(xa,POLYBENCH_ARRAY(A),xb,yb,POLYBENCH_ARRAY(B),xc,yc,zc,POLYBENCH_ARRAY(C),INIT_SEED);
kernel_3534121224_00(xa,POLYBENCH_ARRAY(A),xb,yb,POLYBENCH_ARRAY(B),xc,yc,zc,POLYBENCH_ARRAY(C));
polybench_prevent_dce(print_array(xa,POLYBENCH_ARRAY(A),xb,yb,POLYBENCH_ARRAY(B),xc,yc,zc,POLYBENCH_ARRAY(C)));
POLYBENCH_FREE_ARRAY(A);
POLYBENCH_FREE_ARRAY(B);
POLYBENCH_FREE_ARRAY(C);
return 0;
}
