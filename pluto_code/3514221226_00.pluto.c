#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <math.h>
#include <polybench.h>
#include <time.h>
#include <stdlib.h>
#include "3514221226_00.h"
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
static void init_array(int xa,int ya,DATA_TYPE POLYBENCH_2D(A,xA,yA,xa,ya),int xb,DATA_TYPE POLYBENCH_1D(B,xB,xb),int xd,DATA_TYPE POLYBENCH_1D(D,xD,xd),int xc,int yc,DATA_TYPE POLYBENCH_2D(C,xC,yC,xc,yc),int seed)
{
srand(seed);
int i,j,k,l;
for (i = 0; i < xa; i++) {
for (j = 0; j < ya; j++) {
A[i][j] = rand()%3;;
}}
for (i = 0; i < xb; i++) {
B[i] = rand()%3;;
}
for (i = 0; i < xd; i++) {
D[i] = rand()%3;;
}
for (i = 0; i < xc; i++) {
for (j = 0; j < yc; j++) {
C[i][j] = rand()%3;;
}}
}
static void print_array(int xa,int ya,DATA_TYPE POLYBENCH_2D(A,xA,yA,xa,ya),int xb,DATA_TYPE POLYBENCH_1D(B,xB,xb),int xd,DATA_TYPE POLYBENCH_1D(D,xD,xd),int xc,int yc,DATA_TYPE POLYBENCH_2D(C,xC,yC,xc,yc))
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
fprintf (POLYBENCH_DUMP_TARGET, "\n");
fprintf (POLYBENCH_DUMP_TARGET, DATA_PRINTF_MODIFIER, B[i]);
}
POLYBENCH_DUMP_END("B");
POLYBENCH_DUMP_FINISH;
POLYBENCH_DUMP_START;
POLYBENCH_DUMP_BEGIN("D");
for (i = 0; i < xd; i++) {
fprintf (POLYBENCH_DUMP_TARGET, "\n");
fprintf (POLYBENCH_DUMP_TARGET, DATA_PRINTF_MODIFIER, D[i]);
}
POLYBENCH_DUMP_END("D");
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
void kernel_3514221226_00(int xa,int ya,DATA_TYPE POLYBENCH_2D(A,xA,yA,xa,ya),int xb,DATA_TYPE POLYBENCH_1D(B,xB,xb),int xd,DATA_TYPE POLYBENCH_1D(D,xD,xd),int xc,int yc,DATA_TYPE POLYBENCH_2D(C,xC,yC,xc,yc)){
polybench_start_instruments;
  int t1, t2, t3, t4, t5, t6;
 int lb, ub, lbp, ubp, lb2, ub2;
 register int lbv, ubv;
/* Start of CLooG code */
for (t2=0;t2<=floord(PB_N+PB_P-2,32);t2++) {
  lbp=max(0,ceild(32*t2-PB_N+1,32));
  ubp=min(floord(PB_N-1,32),t2);
#pragma omp parallel for private(lbv,ubv,t4,t5,t6)
  for (t3=lbp;t3<=ubp;t3++) {
    for (t4=max(2,32*t2-32*t3);t4<=min(min(32*t3,PB_P-1),32*t2-32*t3+31);t4++) {
      lbv=max(32*t3,t4+1);
      ubv=min(PB_N-1,32*t3+31);
#pragma ivdep
#pragma vector always
      for (t5=lbv;t5<=ubv;t5++) {
        A[t4-1][t5] = A[t4-2][t5-2] + B[t5] + C[t5][t4] * 2;;
      }
    }
    if (t2 == 2*t3) {
      for (t4=max(2,16*t2+1);t4<=min(PB_P-1,16*t2+30);t4++) {
        lbv=max(1,16*t2);
        ubv=t4-1;
#pragma ivdep
#pragma vector always
        for (t5=lbv;t5<=ubv;t5++) {
          if (t2%2 == 0) {
            A[t4][t5-1] = C[t5][t5] + 6;;
          }
        }
        lbv=t4+1;
        ubv=16*t2+31;
#pragma ivdep
#pragma vector always
        for (t5=lbv;t5<=ubv;t5++) {
          if (t2%2 == 0) {
            A[t4-1][t5] = A[t4-2][t5-2] + B[t5] + C[t5][t4] * 2;;
          }
        }
      }
    }
    if ((t2 == 374) && (t3 == 187)) {
      for (t4=PB_P;t4<=6014;t4++) {
        lbv=5984;
        ubv=PB_P-1;
#pragma ivdep
#pragma vector always
        for (t5=lbv;t5<=ubv;t5++) {
          A[t4][t5-1] = C[t5][t5] + 6;;
        }
      }
    }
    if (t3 <= floord(PB_P-1,32)) {
      for (t4=max(32*t2-32*t3,32*t3+31);t4<=min(PB_N-1,32*t2-32*t3+31);t4++) {
        lbv=max(1,32*t3);
        ubv=min(min(PB_P-1,32*t3+31),t4-1);
#pragma ivdep
#pragma vector always
        for (t5=lbv;t5<=ubv;t5++) {
          A[t4][t5-1] = C[t5][t5] + 6;;
        }
      }
    }
  }
}
lbp=0;
ubp=floord(PB_N-1,32);
#pragma omp parallel for private(lbv,ubv,t3,t4,t5,t6)
for (t2=lbp;t2<=ubp;t2++) {
  lbv=max(2,32*t2);
  ubv=min(PB_N-1,32*t2+31);
#pragma ivdep
#pragma vector always
  for (t3=lbv;t3<=ubv;t3++) {
    B[t3] = D[t3] - 3;;
  }
}
for (t2=1;t2<=PB_P-1;t2++) {
  D[t2-1] = D[t2-1] * D[t2-1] - B[t2] + B[t2+1] + 3;;
  for (t3=0;t3<=PB_L-1;t3++) {
    D[t2-1] = D[t2] + D[t2] - C[t3][t2] + 1;;
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
int xd = xD;
int xc = xC;
int yc = yC;
POLYBENCH_2D_ARRAY_DECL(A, DATA_TYPE,xA,yA,xa,ya);
POLYBENCH_1D_ARRAY_DECL(B, DATA_TYPE,xB,xb);
POLYBENCH_1D_ARRAY_DECL(D, DATA_TYPE,xD,xd);
POLYBENCH_2D_ARRAY_DECL(C, DATA_TYPE,xC,yC,xc,yc);
init_array(xa,ya,POLYBENCH_ARRAY(A),xb,POLYBENCH_ARRAY(B),xd,POLYBENCH_ARRAY(D),xc,yc,POLYBENCH_ARRAY(C),INIT_SEED);
kernel_3514221226_00(xa,ya,POLYBENCH_ARRAY(A),xb,POLYBENCH_ARRAY(B),xd,POLYBENCH_ARRAY(D),xc,yc,POLYBENCH_ARRAY(C));
polybench_prevent_dce(print_array(xa,ya,POLYBENCH_ARRAY(A),xb,POLYBENCH_ARRAY(B),xd,POLYBENCH_ARRAY(D),xc,yc,POLYBENCH_ARRAY(C)));
POLYBENCH_FREE_ARRAY(A);
POLYBENCH_FREE_ARRAY(B);
POLYBENCH_FREE_ARRAY(D);
POLYBENCH_FREE_ARRAY(C);
return 0;
}
