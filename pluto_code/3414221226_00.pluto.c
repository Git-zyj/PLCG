#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <math.h>
#include <polybench.h>
#include <time.h>
#include <stdlib.h>
#include "3414221226_00.h"
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
static void init_array(int xa,int ya,DATA_TYPE POLYBENCH_2D(A,xA,yA,xa,ya),int xc,DATA_TYPE POLYBENCH_1D(C,xC,xc),int xb,int yb,DATA_TYPE POLYBENCH_2D(B,xB,yB,xb,yb),int seed)
{
srand(seed);
int i,j,k,l;
for (i = 0; i < xa; i++) {
for (j = 0; j < ya; j++) {
A[i][j] = rand()%3;;
}}
for (i = 0; i < xc; i++) {
C[i] = rand()%3;;
}
for (i = 0; i < xb; i++) {
for (j = 0; j < yb; j++) {
B[i][j] = rand()%3;;
}}
}
static void print_array(int xa,int ya,DATA_TYPE POLYBENCH_2D(A,xA,yA,xa,ya),int xc,DATA_TYPE POLYBENCH_1D(C,xC,xc),int xb,int yb,DATA_TYPE POLYBENCH_2D(B,xB,yB,xb,yb))
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
void kernel_3414221226_00(int xa,int ya,DATA_TYPE POLYBENCH_2D(A,xA,yA,xa,ya),int xc,DATA_TYPE POLYBENCH_1D(C,xC,xc),int xb,int yb,DATA_TYPE POLYBENCH_2D(B,xB,yB,xb,yb)){
polybench_start_instruments;
  int t1, t2, t3, t4, t5, t6, t7, t8;
 int lb, ub, lbp, ubp, lb2, ub2;
 register int lbv, ubv;
/* Start of CLooG code */
for (t2=0;t2<=floord(PB_L-3,16);t2++) {
  lbp=max(0,ceild(32*t2-PB_L+2,32));
  ubp=floord(t2,2);
#pragma omp parallel for private(lbv,ubv,t4,t5,t6,t7,t8)
  for (t3=lbp;t3<=ubp;t3++) {
    for (t4=max(max(2,32*t2-32*t3),32*t3+1);t4<=min(PB_L-2,32*t2-32*t3+31);t4++) {
      for (t5=max(1,32*t3);t5<=min(32*t3+31,t4-1);t5++) {
        C[t5] = A[t5-1][t4-1] * B[t4][t5-1] * 2;;
        A[t5-1][t4] = A[t5][t4] + B[t4+1][t4] * C[t4] - 4;;
      }
    }
  }
}
for (t2=0;t2<=floord(PB_L-1,16);t2++) {
  lbp=max(0,ceild(32*t2-PB_L+1,32));
  ubp=min(floord(PB_L-1,32),t2);
#pragma omp parallel for private(lbv,ubv,t4,t5,t6,t7,t8)
  for (t3=lbp;t3<=ubp;t3++) {
    for (t4=t2-t3;t4<=min(floord(PB_L+PB_P-3,32),floord(32*t2-32*t3+PB_P+29,32));t4++) {
      for (t5=max(32*t2-32*t3,32*t4-PB_P+2);t5<=min(PB_L-1,32*t2-32*t3+31);t5++) {
        for (t6=32*t3;t6<=min(PB_L-1,32*t3+31);t6++) {
          for (t7=max(32*t4,t5);t7<=min(32*t4+31,t5+PB_P-2);t7++) {
            A[t6+1][t5] = B[t6][(-t5+t7)] * B[t6][(-t5+t7)+1] * 6;;
            B[t6][(-t5+t7)] = A[t6+1][t5] - 6;;
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
int xc = xC;
int xb = xB;
int yb = yB;
POLYBENCH_2D_ARRAY_DECL(A, DATA_TYPE,xA,yA,xa,ya);
POLYBENCH_1D_ARRAY_DECL(C, DATA_TYPE,xC,xc);
POLYBENCH_2D_ARRAY_DECL(B, DATA_TYPE,xB,yB,xb,yb);
init_array(xa,ya,POLYBENCH_ARRAY(A),xc,POLYBENCH_ARRAY(C),xb,yb,POLYBENCH_ARRAY(B),INIT_SEED);
kernel_3414221226_00(xa,ya,POLYBENCH_ARRAY(A),xc,POLYBENCH_ARRAY(C),xb,yb,POLYBENCH_ARRAY(B));
polybench_prevent_dce(print_array(xa,ya,POLYBENCH_ARRAY(A),xc,POLYBENCH_ARRAY(C),xb,yb,POLYBENCH_ARRAY(B)));
POLYBENCH_FREE_ARRAY(A);
POLYBENCH_FREE_ARRAY(C);
POLYBENCH_FREE_ARRAY(B);
return 0;
}
