#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <math.h>
#include <polybench.h>
#include <time.h>
#include <stdlib.h>
#include "3324121224_00.h"
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
static void init_array(int xa,int ya,int za,DATA_TYPE POLYBENCH_3D(A,xA,yA,zA,xa,ya,za),int xb,int yb,DATA_TYPE POLYBENCH_2D(B,xB,yB,xb,yb),int seed)
{
srand(seed);
int i,j,k,l;
for (i = 0; i < xa; i++) {
for (j = 0; j < ya; j++) {
for (k = 0; k < za; k++) {
A[i][j][k] = rand()%3;;
}}}
for (i = 0; i < xb; i++) {
for (j = 0; j < yb; j++) {
B[i][j] = rand()%3;;
}}
}
static void print_array(int xa,int ya,int za,DATA_TYPE POLYBENCH_3D(A,xA,yA,zA,xa,ya,za),int xb,int yb,DATA_TYPE POLYBENCH_2D(B,xB,yB,xb,yb))
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
for (j = 0; j < yb; j++) {
fprintf (POLYBENCH_DUMP_TARGET, "\n");
fprintf (POLYBENCH_DUMP_TARGET, DATA_PRINTF_MODIFIER, B[i][j]);
}}
POLYBENCH_DUMP_END("B");
POLYBENCH_DUMP_FINISH;
}
void kernel_3324121224_00(int xa,int ya,int za,DATA_TYPE POLYBENCH_3D(A,xA,yA,zA,xa,ya,za),int xb,int yb,DATA_TYPE POLYBENCH_2D(B,xB,yB,xb,yb)){
polybench_start_instruments;
  int t1, t2, t3, t4, t5, t6, t7, t8;
 int lb, ub, lbp, ubp, lb2, ub2;
 register int lbv, ubv;
/* Start of CLooG code */
lbp=0;
ubp=floord(PB_M-2,32);
#pragma omp parallel for private(lbv,ubv,t4,t5,t6,t7,t8)
for (t3=lbp;t3<=ubp;t3++) {
  for (t4=0;t4<=floord(PB_L-1,32);t4++) {
    for (t5=t3;t5<=floord(PB_M-1,32);t5++) {
      for (t6=32*t3;t6<=min(min(PB_M-2,32*t3+31),32*t5+30);t6++) {
        for (t7=32*t4;t7<=min(PB_L-1,32*t4+31);t7++) {
          for (t8=max(32*t5,t6+1);t8<=min(PB_M-1,32*t5+31);t8++) {
            A[t6][t7][t7] = 1;;
          }
        }
      }
    }
  }
}
for (t3=1;t3<=PB_L-4;t3++) {
  for (t4=0;t4<=floord(PB_L-1,8);t4++) {
    lbp=max(ceild(2*t4,3),ceild(32*t4-PB_L+1,32));
    ubp=min(min(floord(3*PB_L-3,32),floord(64*t4+PB_L+61,96)),t4);
#pragma omp parallel for private(lbv,ubv,t6,t7,t8)
    for (t5=lbp;t5<=ubp;t5++) {
      for (t6=max(max(1,ceild(32*t5-PB_L+1,2)),32*t4-32*t5);t6<=min(min(PB_L-1,16*t5+15),32*t4-32*t5+31);t6++) {
        for (t7=max(32*t5,2*t6+1);t7<=min(32*t5+31,2*t6+PB_L-1);t7++) {
          A[(-2*t6+t7)-1][t6][(-2*t6+t7)] = B[t6+1][t3+1] - A[t6][(-2*t6+t7)][t3] + 3;;
        }
      }
    }
  }
}
for (t3=1;t3<=PB_L-4;t3++) {
  lbp=0;
  ubp=floord(PB_L-1,32);
#pragma omp parallel for private(lbv,ubv,t5,t6,t7,t8)
  for (t4=lbp;t4<=ubp;t4++) {
    lbv=max(1,32*t4);
    ubv=min(PB_L-1,32*t4+31);
#pragma ivdep
#pragma vector always
    for (t5=lbv;t5<=ubv;t5++) {
      B[t5][t3+1] = B[t5-1][t3+3] - B[t5][t3-1] + B[t3+1][t5] - 4;;
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
int yb = yB;
POLYBENCH_3D_ARRAY_DECL(A, DATA_TYPE,xA,yA,zA,xa,ya,za);
POLYBENCH_2D_ARRAY_DECL(B, DATA_TYPE,xB,yB,xb,yb);
init_array(xa,ya,za,POLYBENCH_ARRAY(A),xb,yb,POLYBENCH_ARRAY(B),INIT_SEED);
kernel_3324121224_00(xa,ya,za,POLYBENCH_ARRAY(A),xb,yb,POLYBENCH_ARRAY(B));
polybench_prevent_dce(print_array(xa,ya,za,POLYBENCH_ARRAY(A),xb,yb,POLYBENCH_ARRAY(B)));
POLYBENCH_FREE_ARRAY(A);
POLYBENCH_FREE_ARRAY(B);
return 0;
}
