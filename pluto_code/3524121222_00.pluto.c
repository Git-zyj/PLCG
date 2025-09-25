#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <math.h>
#include <polybench.h>
#include <time.h>
#include <stdlib.h>
#include "3524121222_00.h"
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
static void init_array(int xb,DATA_TYPE POLYBENCH_1D(B,xB,xb),int xa,int ya,DATA_TYPE POLYBENCH_2D(A,xA,yA,xa,ya),int xc,int yc,int zc,DATA_TYPE POLYBENCH_3D(C,xC,yC,zC,xc,yc,zc),int seed)
{
srand(seed);
int i,j,k,l;
for (i = 0; i < xb; i++) {
B[i] = rand()%3;;
}
for (i = 0; i < xa; i++) {
for (j = 0; j < ya; j++) {
A[i][j] = rand()%3;;
}}
for (i = 0; i < xc; i++) {
for (j = 0; j < yc; j++) {
for (k = 0; k < zc; k++) {
C[i][j][k] = rand()%3;;
}}}
}
static void print_array(int xb,DATA_TYPE POLYBENCH_1D(B,xB,xb),int xa,int ya,DATA_TYPE POLYBENCH_2D(A,xA,yA,xa,ya),int xc,int yc,int zc,DATA_TYPE POLYBENCH_3D(C,xC,yC,zC,xc,yc,zc))
{
int i,j,k,l;
POLYBENCH_DUMP_START;
POLYBENCH_DUMP_BEGIN("B");
for (i = 0; i < xb; i++) {
fprintf (POLYBENCH_DUMP_TARGET, "\n");
fprintf (POLYBENCH_DUMP_TARGET, DATA_PRINTF_MODIFIER, B[i]);
}
POLYBENCH_DUMP_END("B");
POLYBENCH_DUMP_FINISH;
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
for (j = 0; j < yc; j++) {
for (k = 0; k < zc; k++) {
fprintf (POLYBENCH_DUMP_TARGET, "\n");
fprintf (POLYBENCH_DUMP_TARGET, DATA_PRINTF_MODIFIER, C[i][j][k]);
}}}
POLYBENCH_DUMP_END("C");
POLYBENCH_DUMP_FINISH;
}
void kernel_3524121222_00(int xb,DATA_TYPE POLYBENCH_1D(B,xB,xb),int xa,int ya,DATA_TYPE POLYBENCH_2D(A,xA,yA,xa,ya),int xc,int yc,int zc,DATA_TYPE POLYBENCH_3D(C,xC,yC,zC,xc,yc,zc)){
polybench_start_instruments;
  int t1, t2, t3, t4, t5, t6;
 int lb, ub, lbp, ubp, lb2, ub2;
 register int lbv, ubv;
/* Start of CLooG code */
for (t2=2;t2<=PB_M-3;t2++) {
  for (t3=0;t3<=floord(301*PB_M-1198,9568);t3++) {
    for (t4=0;t4<=min(floord(PB_M-1,32),floord(150*t2-4800*t3+149*PB_M-299,4768));t4++) {
      if (t4 == 0) {
        for (t5=32*t3;t5<=min(t2-1,32*t3+31);t5++) {
          C[0][t2][t2] = C[0][t2][t2] * A[t5][0 +1] + 3;;
          A[t5+1][t2+1] = B[t2+2] + A[t5+1][t2+1] - A[t5][t5] + 5;;
          A[t5][t2] = A[t5][t2] * A[t5][t2+1] + A[t5][t2+1] * 1;;
          lbv=1;
          ubv=31;
#pragma ivdep
#pragma vector always
          for (t6=lbv;t6<=ubv;t6++) {
            C[t6][t2][t2] = C[t6][t2][t2] * A[t5][t6+1] + 3;;
          }
        }
      }
      if (t4 == 0) {
        for (t5=max(t2,32*t3);t5<=min(PB_M-2,32*t3+31);t5++) {
          A[t5+1][t2+1] = B[t2+2] + A[t5+1][t2+1] - A[t5][t5] + 5;;
        }
      }
      if (t4 >= 1) {
        for (t5=32*t3;t5<=min(t2-1,32*t3+31);t5++) {
          lbv=32*t4;
          ubv=min(PB_M-1,32*t4+31);
#pragma ivdep
#pragma vector always
          for (t6=lbv;t6<=ubv;t6++) {
            C[t6][t2][t2] = C[t6][t2][t2] * A[t5][t6+1] + 3;;
          }
        }
      }
    }
  }
}
for (t2=2;t2<=PB_M-3;t2++) {
  for (t3=0;t3<=t2-1;t3++) {
    B[t2-2] = B[t2] - B[t2] * 3;;
  }
  B[t2] = B[t2] * 5;;
}
/* End of CLooG code */
polybench_stop_instruments;
polybench_print_instruments;
}
int main(int argc, char** argv)
{
int xb = xB;
int xa = xA;
int ya = yA;
int xc = xC;
int yc = yC;
int zc = zC;
POLYBENCH_1D_ARRAY_DECL(B, DATA_TYPE,xB,xb);
POLYBENCH_2D_ARRAY_DECL(A, DATA_TYPE,xA,yA,xa,ya);
POLYBENCH_3D_ARRAY_DECL(C, DATA_TYPE,xC,yC,zC,xc,yc,zc);
init_array(xb,POLYBENCH_ARRAY(B),xa,ya,POLYBENCH_ARRAY(A),xc,yc,zc,POLYBENCH_ARRAY(C),INIT_SEED);
kernel_3524121222_00(xb,POLYBENCH_ARRAY(B),xa,ya,POLYBENCH_ARRAY(A),xc,yc,zc,POLYBENCH_ARRAY(C));
polybench_prevent_dce(print_array(xb,POLYBENCH_ARRAY(B),xa,ya,POLYBENCH_ARRAY(A),xc,yc,zc,POLYBENCH_ARRAY(C)));
POLYBENCH_FREE_ARRAY(B);
POLYBENCH_FREE_ARRAY(A);
POLYBENCH_FREE_ARRAY(C);
return 0;
}
