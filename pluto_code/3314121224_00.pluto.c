#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <math.h>
#include <polybench.h>
#include <time.h>
#include <stdlib.h>
#include "3314121224_00.h"
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
static void init_array(int xa,int ya,DATA_TYPE POLYBENCH_2D(A,xA,yA,xa,ya),int xb,int yb,int zb,DATA_TYPE POLYBENCH_3D(B,xB,yB,zB,xb,yb,zb),int seed)
{
srand(seed);
int i,j,k,l;
for (i = 0; i < xa; i++) {
for (j = 0; j < ya; j++) {
A[i][j] = rand()%3;;
}}
for (i = 0; i < xb; i++) {
for (j = 0; j < yb; j++) {
for (k = 0; k < zb; k++) {
B[i][j][k] = rand()%3;;
}}}
}
static void print_array(int xa,int ya,DATA_TYPE POLYBENCH_2D(A,xA,yA,xa,ya),int xb,int yb,int zb,DATA_TYPE POLYBENCH_3D(B,xB,yB,zB,xb,yb,zb))
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
for (j = 0; j < yb; j++) {
for (k = 0; k < zb; k++) {
fprintf (POLYBENCH_DUMP_TARGET, "\n");
fprintf (POLYBENCH_DUMP_TARGET, DATA_PRINTF_MODIFIER, B[i][j][k]);
}}}
POLYBENCH_DUMP_END("B");
POLYBENCH_DUMP_FINISH;
}
void kernel_3314121224_00(int xa,int ya,DATA_TYPE POLYBENCH_2D(A,xA,yA,xa,ya),int xb,int yb,int zb,DATA_TYPE POLYBENCH_3D(B,xB,yB,zB,xb,yb,zb)){
polybench_start_instruments;
  int t1, t2, t3, t4, t5, t6;
 int lb, ub, lbp, ubp, lb2, ub2;
 register int lbv, ubv;
/* Start of CLooG code */
for (t2=1;t2<=PB_N-1;t2++) {
  for (t3=ceild(t2-31,32);t3<=min(floord(t2+PB_M-3,16),floord(t2+3*PB_M-6,32));t3++) {
    lbp=max(max(max(ceild(t3,2),ceild(16*t3-PB_M+2,16)),ceild(t2-31,32)),ceild(t2+32*t3-PB_M-29,64));
    ubp=min(floord(t2+PB_M-2,32),floord(t2+32*t3+31,64));
#pragma omp parallel for private(lbv,ubv,t5,t6)
    for (t4=lbp;t4<=ubp;t4++) {
      for (t5=max(-t2+32*t4,32*t3-32*t4);t5<=min(min(min(min(2*PB_M-4,32*t4+30),t2+PB_M-3),32*t3-32*t4+31),-t2+32*t4+PB_M+29);t5++) {
        lbv=max(max(max(t2,32*t4),t5+1),t2+t5-PB_M+2);
        ubv=min(min(t2+t5,32*t4+31),t2+PB_M-2);
#pragma ivdep
#pragma vector always
        for (t6=lbv;t6<=ubv;t6++) {
          A[(-t2+t6)][(t2+t5-t6)] = A[(-t2+t6)][(t2+t5-t6)+1] * A[(-t2+t6)][(t2+t5-t6)] - B[(t2+t5-t6)][t2-1][(-t2+t6)] + A[t2][(-t2+t6)+1] * 1;;
        }
      }
    }
  }
}
for (t2=0;t2<=floord(PB_M-2,16);t2++) {
  lbp=max(0,ceild(32*t2-PB_M+2,32));
  ubp=min(floord(PB_M-2,32),t2);
#pragma omp parallel for private(lbv,ubv,t4,t5,t6)
  for (t3=lbp;t3<=ubp;t3++) {
    if ((t2 == 0) && (t3 == 0)) {
      for (t5=0;t5<=31;t5++) {
        A[1 -1][1 +1] = A[1 -1][1] + 2;;
      }
    }
    for (t4=max(1,32*t2-32*t3);t4<=min(32*t3,32*t2-32*t3+31);t4++) {
      for (t5=32*t3;t5<=min(PB_M-2,32*t3+31);t5++) {
        A[t4-1][t4+1] = A[t4-1][t4] + 2;;
      }
    }
    for (t4=max(max(2,32*t2-32*t3),32*t3+1);t4<=min(PB_M-2,32*t2-32*t3+31);t4++) {
      if (t3 == 0) {
        A[t4-1][t4+1] = A[t4-1][t4] + 2;;
      }
      for (t5=max(1,32*t3);t5<=min(32*t3+31,t4-1);t5++) {
        A[t4+1][t4] = A[t4][t4] - A[t4][t5] * A[t5-1][t4+1] * 6;;
        A[t4-1][t4+1] = A[t4-1][t4] + 2;;
      }
      if (t2 == 2*t3) {
        for (t5=t4;t5<=min(PB_M-2,16*t2+31);t5++) {
          if (t2%2 == 0) {
            A[t4-1][t4+1] = A[t4-1][t4] + 2;;
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
int xb = xB;
int yb = yB;
int zb = zB;
POLYBENCH_2D_ARRAY_DECL(A, DATA_TYPE,xA,yA,xa,ya);
POLYBENCH_3D_ARRAY_DECL(B, DATA_TYPE,xB,yB,zB,xb,yb,zb);
init_array(xa,ya,POLYBENCH_ARRAY(A),xb,yb,zb,POLYBENCH_ARRAY(B),INIT_SEED);
kernel_3314121224_00(xa,ya,POLYBENCH_ARRAY(A),xb,yb,zb,POLYBENCH_ARRAY(B));
polybench_prevent_dce(print_array(xa,ya,POLYBENCH_ARRAY(A),xb,yb,zb,POLYBENCH_ARRAY(B)));
POLYBENCH_FREE_ARRAY(A);
POLYBENCH_FREE_ARRAY(B);
return 0;
}
