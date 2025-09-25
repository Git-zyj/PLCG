#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <math.h>
#include <polybench.h>
#include <time.h>
#include <stdlib.h>
#include "3614121222_00.h"
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
void kernel_3614121222_00(int xa,int ya,int za,DATA_TYPE POLYBENCH_3D(A,xA,yA,zA,xa,ya,za),int xb,int yb,DATA_TYPE POLYBENCH_2D(B,xB,yB,xb,yb)){
polybench_start_instruments;
  int t1, t2, t3, t4, t5, t6, t7, t8, t9, t10;
 int lb, ub, lbp, ubp, lb2, ub2;
 register int lbv, ubv;
/* Start of CLooG code */
for (t2=1;t2<=PB_L-2;t2++) {
  for (t4=2;t4<=PB_L-1;t4++) {
    for (t6=0;t6<=PB_M-1;t6++) {
      A[t4][t2-1][t4] = B[t2][t4] + B[t2][t4-1] + 1;;
    }
    lbp=0;
    ubp=floord(PB_M-2,32);
#pragma omp parallel for private(lbv,ubv,t7,t8,t9,t10)
    for (t6=lbp;t6<=ubp;t6++) {
      lbv=32*t6;
      ubv=min(PB_M-2,32*t6+31);
#pragma ivdep
#pragma vector always
      for (t7=lbv;t7<=ubv;t7++) {
        A[t7][t4][t7] = A[t7][t4-2][t7+1] * A[t7+1][t2][t7] - A[t7][t4][t2] - 1;;
      }
    }
  }
  for (t4=0;t4<=floord(PB_L-1,16);t4++) {
    lbp=max(0,ceild(32*t4-PB_L+1,32));
    ubp=min(floord(PB_L-1,32),t4);
#pragma omp parallel for private(lbv,ubv,t7,t8,t9,t10)
    for (t6=lbp;t6<=ubp;t6++) {
      for (t7=32*t4-32*t6;t7<=min(PB_L-1,32*t4-32*t6+31);t7++) {
        for (t9=32*t6;t9<=min(PB_L-1,32*t6+31);t9++) {
          A[t7][t2+1][t9] = A[t2][t7][t9+1] + B[t9][t7] - 5;;
        }
      }
    }
  }
}
for (t2=0;t2<=floord(PB_L-1,16);t2++) {
  lbp=max(0,ceild(32*t2-PB_L+1,32));
  ubp=floord(t2,2);
#pragma omp parallel for private(lbv,ubv,t5,t6,t7,t8,t9,t10)
  for (t4=lbp;t4<=ubp;t4++) {
    for (t5=max(max(2,32*t2-32*t4),32*t4+1);t5<=min(PB_L-1,32*t2-32*t4+31);t5++) {
      for (t7=max(1,32*t4);t7<=min(32*t4+31,t5-1);t7++) {
        for (t9=0;t9<=PB_M-1;t9++) {
          B[t7][t5+1] = B[t7][t5+1] - A[t9][t5][t7] + A[t5][t5-1][t7] + 1;;
        }
        lbv=0;
        ubv=PB_P-1;
#pragma ivdep
#pragma vector always
        for (t9=lbv;t9<=ubv;t9++) {
          A[t5][t7][t9] = A[t5][t7-1][t9] * A[t5][t7][t9] - 6;;
        }
      }
    }
  }
  lbp=max(0,ceild(32*t2-PB_L+1,32));
  ubp=min(floord(PB_L-1,32),t2);
#pragma omp parallel for private(lbv,ubv,t5,t6,t7,t8,t9,t10)
  for (t4=lbp;t4<=ubp;t4++) {
    for (t5=max(1,32*t2-32*t4);t5<=min(PB_L-1,32*t2-32*t4+31);t5++) {
      lbv=32*t4;
      ubv=min(PB_L-1,32*t4+31);
#pragma ivdep
#pragma vector always
      for (t7=lbv;t7<=ubv;t7++) {
        B[t7][t5] = 6;;
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
int za = zA;
int xb = xB;
int yb = yB;
POLYBENCH_3D_ARRAY_DECL(A, DATA_TYPE,xA,yA,zA,xa,ya,za);
POLYBENCH_2D_ARRAY_DECL(B, DATA_TYPE,xB,yB,xb,yb);
init_array(xa,ya,za,POLYBENCH_ARRAY(A),xb,yb,POLYBENCH_ARRAY(B),INIT_SEED);
kernel_3614121222_00(xa,ya,za,POLYBENCH_ARRAY(A),xb,yb,POLYBENCH_ARRAY(B));
polybench_prevent_dce(print_array(xa,ya,za,POLYBENCH_ARRAY(A),xb,yb,POLYBENCH_ARRAY(B)));
POLYBENCH_FREE_ARRAY(A);
POLYBENCH_FREE_ARRAY(B);
return 0;
}
