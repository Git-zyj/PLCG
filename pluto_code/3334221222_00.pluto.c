#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <math.h>
#include <polybench.h>
#include <time.h>
#include <stdlib.h>
#include "3334221222_00.h"
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
static void init_array(int xa,DATA_TYPE POLYBENCH_1D(A,xA,xa),int xb,int yb,DATA_TYPE POLYBENCH_2D(B,xB,yB,xb,yb),int xc,int yc,DATA_TYPE POLYBENCH_2D(C,xC,yC,xc,yc),int seed)
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
C[i][j] = rand()%3;;
}}
}
static void print_array(int xa,DATA_TYPE POLYBENCH_1D(A,xA,xa),int xb,int yb,DATA_TYPE POLYBENCH_2D(B,xB,yB,xb,yb),int xc,int yc,DATA_TYPE POLYBENCH_2D(C,xC,yC,xc,yc))
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
fprintf (POLYBENCH_DUMP_TARGET, "\n");
fprintf (POLYBENCH_DUMP_TARGET, DATA_PRINTF_MODIFIER, C[i][j]);
}}
POLYBENCH_DUMP_END("C");
POLYBENCH_DUMP_FINISH;
}
void kernel_3334221222_00(int xa,DATA_TYPE POLYBENCH_1D(A,xA,xa),int xb,int yb,DATA_TYPE POLYBENCH_2D(B,xB,yB,xb,yb),int xc,int yc,DATA_TYPE POLYBENCH_2D(C,xC,yC,xc,yc)){
polybench_start_instruments;
  int t1, t2, t3, t4;
 int lb, ub, lbp, ubp, lb2, ub2;
 register int lbv, ubv;
/* Start of CLooG code */
for (t1=0;t1<=floord(3005*PB_L+2997*PB_P-20982005,96160);t1++) {
  for (t2=max(-1,ceild(32*t1-PB_M-2000,2000));t2<=min(min(min(min(min(min(floord(PB_L-2,32),floord(-4000*t1+125*PB_L-125,666)),floord(-12000*t1+375*PB_P+375000,2002)),floord(-23996*t1+125*PB_M+5249000,4000)),floord(-31968*t1+499*PB_L+999*PB_P+499*PB_M-3993498,15968)),floord(-63968*t1+1999*PB_P+998*PB_M-2997,31936)),floord(-63968*t1+999*PB_M+13992001,31968));t2++) {
    if ((t1 == 0) && (t2 == 0)) {
      A[0] = A[0] * A[0] + A[0] * 1;;
    }
    for (t3=max(1,32*t1);t3<=min(min(PB_M,32*t2),32*t1+31);t3++) {
      for (t4=32*t2;t4<=min(PB_L-2,32*t2+31);t4++) {
        B[t3+1][t3] = B[t3+1][t3-1] + C[t3-1][t4+1] + 4;;
      }
    }
    if (t2 == -1) {
      for (t3=max(1,32*t1);t3<=min(PB_M,32*t1+31);t3++) {
        B[t3+1][t3] = B[t3+1][t3-1] + C[t3-1][-1 +1] + 4;;
      }
    }
    if ((t1 == 0) && (t2 == 0)) {
      for (t3=1;t3<=2;t3++) {
        B[t3+1][t3] = B[t3+1][t3-1] + C[t3-1][0 +1] + 4;;
        A[t3] = A[t3] * A[t3] + A[t3] * 1;;
        for (t4=1;t4<=31;t4++) {
          B[t3+1][t3] = B[t3+1][t3-1] + C[t3-1][t4+1] + 4;;
        }
      }
    }
    if (t2 >= 1) {
      for (t3=max(32*t1,32*t2+1);t3<=min(PB_M,32*t1+31);t3++) {
        for (t4=32*t2;t4<=min(32*t2+31,t3-1);t4++) {
          B[t4][t3] = B[t4-2][t3-1] * B[t4+1][t3] * C[t4][t3] - 4;;
          B[t3+1][t3] = B[t3+1][t3-1] + C[t3-1][t4+1] + 4;;
        }
        if (t1 == t2) {
          for (t4=t3;t4<=32*t1+31;t4++) {
            B[t3+1][t3] = B[t3+1][t3-1] + C[t3-1][t4+1] + 4;;
          }
        }
      }
    }
    if ((t2 >= 1) && (t2 <= floord(PB_M-1,32))) {
      for (t3=max(32*t1,PB_M+1);t3<=min(PB_P-1,32*t1+31);t3++) {
        for (t4=32*t2;t4<=min(PB_M-1,32*t2+31);t4++) {
          B[t4][t3] = B[t4-2][t3-1] * B[t4+1][t3] * C[t4][t3] - 4;;
        }
      }
    }
    if (t2 == 0) {
      for (t3=max(3,32*t1);t3<=min(PB_M,32*t1+31);t3++) {
        B[t3+1][t3] = B[t3+1][t3-1] + C[t3-1][0 +1] + 4;;
        A[t3] = A[t3] * A[t3] + A[t3] * 1;;
        B[t3+1][t3] = B[t3+1][t3-1] + C[t3-1][1 +1] + 4;;
        for (t4=2;t4<=min(31,t3-1);t4++) {
          B[t4][t3] = B[t4-2][t3-1] * B[t4+1][t3] * C[t4][t3] - 4;;
          B[t3+1][t3] = B[t3+1][t3-1] + C[t3-1][t4+1] + 4;;
        }
        if (t1 == 0) {
          for (t4=t3;t4<=31;t4++) {
            B[t3+1][t3] = B[t3+1][t3-1] + C[t3-1][t4+1] + 4;;
          }
        }
      }
    }
    if (t2 == 0) {
      for (t3=max(32*t1,PB_M+1);t3<=min(PB_P-1,32*t1+31);t3++) {
        A[t3] = A[t3] * A[t3] + A[t3] * 1;;
        for (t4=2;t4<=31;t4++) {
          B[t4][t3] = B[t4-2][t3-1] * B[t4+1][t3] * C[t4][t3] - 4;;
        }
      }
    }
    if (t2 == 0) {
      for (t3=max(PB_P,32*t1);t3<=min(PB_L-1,32*t1+31);t3++) {
        A[t3] = A[t3] * A[t3] + A[t3] * 1;;
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
int xc = xC;
int yc = yC;
POLYBENCH_1D_ARRAY_DECL(A, DATA_TYPE,xA,xa);
POLYBENCH_2D_ARRAY_DECL(B, DATA_TYPE,xB,yB,xb,yb);
POLYBENCH_2D_ARRAY_DECL(C, DATA_TYPE,xC,yC,xc,yc);
init_array(xa,POLYBENCH_ARRAY(A),xb,yb,POLYBENCH_ARRAY(B),xc,yc,POLYBENCH_ARRAY(C),INIT_SEED);
kernel_3334221222_00(xa,POLYBENCH_ARRAY(A),xb,yb,POLYBENCH_ARRAY(B),xc,yc,POLYBENCH_ARRAY(C));
polybench_prevent_dce(print_array(xa,POLYBENCH_ARRAY(A),xb,yb,POLYBENCH_ARRAY(B),xc,yc,POLYBENCH_ARRAY(C)));
POLYBENCH_FREE_ARRAY(A);
POLYBENCH_FREE_ARRAY(B);
POLYBENCH_FREE_ARRAY(C);
return 0;
}
