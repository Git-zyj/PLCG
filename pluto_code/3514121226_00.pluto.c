#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <math.h>
#include <polybench.h>
#include <time.h>
#include <stdlib.h>
#include "3514121226_00.h"
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
void kernel_3514121226_00(int xa,DATA_TYPE POLYBENCH_1D(A,xA,xa),int xb,int yb,int zb,DATA_TYPE POLYBENCH_3D(B,xB,yB,zB,xb,yb,zb),int xc,int yc,DATA_TYPE POLYBENCH_2D(C,xC,yC,xc,yc)){
polybench_start_instruments;
  int t1, t2, t3, t4, t5, t6, t7;
 int lb, ub, lbp, ubp, lb2, ub2;
 register int lbv, ubv;
/* Start of CLooG code */
for (t3=1;t3<=PB_M-1;t3++) {
  lbp=0;
  ubp=floord(PB_L-1,32);
#pragma omp parallel for private(lbv,ubv,t5,t6,t7)
  for (t4=lbp;t4<=ubp;t4++) {
    for (t5=0;t5<=floord(PB_M-3,32);t5++) {
      for (t6=32*t4;t6<=min(PB_L-1,32*t4+31);t6++) {
        for (t7=32*t5;t7<=min(PB_M-3,32*t5+31);t7++) {
          B[t7][t3][t6] = B[t7+2][t3][t6] + B[t3][t6][t3] - B[t7][t3-1][t3+1] - 2;;
        }
      }
    }
  }
}
for (t3=1;t3<=PB_M-1;t3++) {
  for (t4=0;t4<=floord(301*PB_M-1200,9504);t4++) {
    for (t5=0;t5<=min(min(min(min(floord(-447*t3+447*PB_M-447,32),floord(2*t3+PB_M-3,32)),floord(64*t4+PB_M+61,32)),floord(-361*t3+128*t4+363*PB_M-961,64)),floord(899*t3-9568*t4+300*PB_M-1199,9600));t5++) {
      if ((t3 >= PB_M-2) && (t5 == 0)) {
        for (t6=max(2,32*t4);t6<=min(PB_M,32*t4+31);t6++) {
          A[t6-1] = A[t6-2] + A[t6-2] - 4;;
        }
      }
      if ((t3 <= PB_M-3) && (t4 == 0) && (t5 == 0)) {
        for (t6=0;t6<=min(1,t3-1);t6++) {
          for (t7=2*t6+2;t7<=31;t7++) {
            B[(-2*t6+t7)][t3-1][t3+1] = B[(-2*t6+t7)-2][t3-1][t3+1] + B[t6][(-2*t6+t7)][t3-1] + 6;;
          }
        }
      }
      if ((t3 <= PB_M-3) && (t5 >= 1)) {
        for (t6=max(ceild(32*t5-PB_M+1,2),32*t4);t6<=min(min(t3-1,32*t4+31),16*t5+14);t6++) {
          for (t7=max(32*t5,2*t6+2);t7<=min(32*t5+31,2*t6+PB_M-1);t7++) {
            B[(-2*t6+t7)][t3-1][t3+1] = B[(-2*t6+t7)-2][t3-1][t3+1] + B[t6][(-2*t6+t7)][t3-1] + 6;;
          }
        }
      }
      if ((t3 <= PB_M-3) && (t4 == 0) && (t5 == 0)) {
        for (t6=2;t6<=min(14,t3-1);t6++) {
          A[t6-1] = A[t6-2] + A[t6-2] - 4;;
          for (t7=2*t6+2;t7<=31;t7++) {
            B[(-2*t6+t7)][t3-1][t3+1] = B[(-2*t6+t7)-2][t3-1][t3+1] + B[t6][(-2*t6+t7)][t3-1] + 6;;
          }
        }
      }
      if ((t4 == 0) && (t5 == 0)) {
        for (t6=max(2,t3);t6<=14;t6++) {
          A[t6-1] = A[t6-2] + A[t6-2] - 4;;
        }
      }
      if ((t3 <= PB_M-3) && (t5 == 0)) {
        for (t6=max(15,32*t4);t6<=min(PB_M,32*t4+31);t6++) {
          A[t6-1] = A[t6-2] + A[t6-2] - 4;;
        }
      }
    }
  }
}
for (t3=1;t3<=PB_M-3;t3++) {
  A[t3] = A[t3] * A[t3] + A[t3] * 3;;
  for (t4=0;t4<=PB_L-1;t4++) {
    A[t3+2] = A[t3-1] * C[t3][t4] * 4;;
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
kernel_3514121226_00(xa,POLYBENCH_ARRAY(A),xb,yb,zb,POLYBENCH_ARRAY(B),xc,yc,POLYBENCH_ARRAY(C));
polybench_prevent_dce(print_array(xa,POLYBENCH_ARRAY(A),xb,yb,zb,POLYBENCH_ARRAY(B),xc,yc,POLYBENCH_ARRAY(C)));
POLYBENCH_FREE_ARRAY(A);
POLYBENCH_FREE_ARRAY(B);
POLYBENCH_FREE_ARRAY(C);
return 0;
}
