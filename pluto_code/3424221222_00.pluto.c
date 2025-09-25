#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <math.h>
#include <polybench.h>
#include <time.h>
#include <stdlib.h>
#include "3424221222_00.h"
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
void kernel_3424221222_00(int xa,DATA_TYPE POLYBENCH_1D(A,xA,xa),int xc,int yc,DATA_TYPE POLYBENCH_2D(C,xC,yC,xc,yc),int xb,DATA_TYPE POLYBENCH_1D(B,xB,xb)){
polybench_start_instruments;
  int t1, t2, t3, t4, t5, t6;
 int lb, ub, lbp, ubp, lb2, ub2;
 register int lbv, ubv;
/* Start of CLooG code */
for (t2=2;t2<=PB_M-2;t2++) {
  A[t2-1] = A[t2-2] * B[t2] * A[t2+1] + 1;;
}
for (t2=0;t2<=floord(PB_M-1,8);t2++) {
  lbp=max(ceild(2*t2,3),ceild(32*t2-PB_M,32));
  ubp=min(min(floord(3*PB_M-2,32),floord(64*t2+PB_M+60,96)),t2);
#pragma omp parallel for private(lbv,ubv,t4,t5,t6)
  for (t3=lbp;t3<=ubp;t3++) {
    if ((t2 == t3) && (t2 <= floord(PB_M-1,32))) {
      for (t5=max(3,32*t2);t5<=min(PB_M-1,32*t2+31);t5++) {
        C[1][(t5-1)-1] = A[(t5-1)-2] + A[(t5-1)-1] + C[1 -1][(t5-1)-1] + C[1 +1][(t5-1)] - 5;;
      }
    }
    for (t4=max(ceild(32*t3-PB_M+2,2),32*t2-32*t3);t4<=min(min(PB_M,32*t2-32*t3+31),32*t3-PB_M+1);t4++) {
      for (t5=32*t3;t5<=min(32*t3+31,2*t4+PB_M-2);t5++) {
        C[(t4-1)][(-2*t4+t5)+1] = C[(-2*t4+t5)][(t4-1)] + C[(t4-1)][(t4-1)-1] - 5;;
      }
    }
    for (t4=max(max(2,32*t2-32*t3),32*t3-PB_M+2);t4<=min(min(PB_M-3,16*t3+15),32*t2-32*t3+31);t4++) {
      if (t3 <= floord(t4,16)) {
        C[(t4-1)][0 +1] = C[0][(t4-1)] + C[(t4-1)][(t4-1)-1] - 5;;
      }
      for (t5=max(32*t3,2*t4+1);t5<=min(32*t3+31,t4+PB_M-2);t5++) {
        C[t4][(-t4+t5)-1] = A[(-t4+t5)-2] + A[(-t4+t5)-1] + C[t4-1][(-t4+t5)-1] + C[t4+1][(-t4+t5)] - 5;;
        C[(t4-1)][(-2*t4+t5)+1] = C[(-2*t4+t5)][(t4-1)] + C[(t4-1)][(t4-1)-1] - 5;;
      }
      for (t5=t4+PB_M-1;t5<=min(32*t3+31,2*t4+PB_M-2);t5++) {
        C[(t4-1)][(-2*t4+t5)+1] = C[(-2*t4+t5)][(t4-1)] + C[(t4-1)][(t4-1)-1] - 5;;
      }
    }
    if (t2 == t3+187) {
      for (t4=max(PB_M-2,32*t2-PB_M-5982);t4<=min(PB_M,16*t2-2977);t4++) {
        for (t5=2*t4;t5<=32*t2-5953;t5++) {
          C[(t4-1)][(-2*t4+t5)+1] = C[(-2*t4+t5)][(t4-1)] + C[(t4-1)][(t4-1)-1] - 5;;
        }
      }
    }
  }
}
lbp=0;
ubp=floord(PB_M-1,32);
#pragma omp parallel for private(lbv,ubv,t3,t4,t5,t6)
for (t2=lbp;t2<=ubp;t2++) {
  lbv=32*t2;
  ubv=min(PB_M-1,32*t2+31);
#pragma ivdep
#pragma vector always
  for (t3=lbv;t3<=ubv;t3++) {
    A[t3] = A[t3] * 4;;
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
kernel_3424221222_00(xa,POLYBENCH_ARRAY(A),xc,yc,POLYBENCH_ARRAY(C),xb,POLYBENCH_ARRAY(B));
polybench_prevent_dce(print_array(xa,POLYBENCH_ARRAY(A),xc,yc,POLYBENCH_ARRAY(C),xb,POLYBENCH_ARRAY(B)));
POLYBENCH_FREE_ARRAY(A);
POLYBENCH_FREE_ARRAY(C);
POLYBENCH_FREE_ARRAY(B);
return 0;
}
