#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <math.h>
#include <polybench.h>
#include <time.h>
#include <stdlib.h>
#include "3214321226_00.h"
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
static void init_array(int xa,int ya,int za,DATA_TYPE POLYBENCH_3D(A,xA,yA,zA,xa,ya,za),int xb,DATA_TYPE POLYBENCH_1D(B,xB,xb),int xc,DATA_TYPE POLYBENCH_1D(C,xC,xc),int seed)
{
srand(seed);
int i,j,k,l;
for (i = 0; i < xa; i++) {
for (j = 0; j < ya; j++) {
for (k = 0; k < za; k++) {
A[i][j][k] = rand()%3;;
}}}
for (i = 0; i < xb; i++) {
B[i] = rand()%3;;
}
for (i = 0; i < xc; i++) {
C[i] = rand()%3;;
}
}
static void print_array(int xa,int ya,int za,DATA_TYPE POLYBENCH_3D(A,xA,yA,zA,xa,ya,za),int xb,DATA_TYPE POLYBENCH_1D(B,xB,xb),int xc,DATA_TYPE POLYBENCH_1D(C,xC,xc))
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
fprintf (POLYBENCH_DUMP_TARGET, "\n");
fprintf (POLYBENCH_DUMP_TARGET, DATA_PRINTF_MODIFIER, B[i]);
}
POLYBENCH_DUMP_END("B");
POLYBENCH_DUMP_FINISH;
POLYBENCH_DUMP_START;
POLYBENCH_DUMP_BEGIN("C");
for (i = 0; i < xc; i++) {
fprintf (POLYBENCH_DUMP_TARGET, "\n");
fprintf (POLYBENCH_DUMP_TARGET, DATA_PRINTF_MODIFIER, C[i]);
}
POLYBENCH_DUMP_END("C");
POLYBENCH_DUMP_FINISH;
}
void kernel_3214321226_00(int xa,int ya,int za,DATA_TYPE POLYBENCH_3D(A,xA,yA,zA,xa,ya,za),int xb,DATA_TYPE POLYBENCH_1D(B,xB,xb),int xc,DATA_TYPE POLYBENCH_1D(C,xC,xc)){
polybench_start_instruments;
  int t1, t2, t3, t4, t5, t6;
 int lb, ub, lbp, ubp, lb2, ub2;
 register int lbv, ubv;
/* Start of CLooG code */
lbp=0;
ubp=floord(PB_M-1,32);
#pragma omp parallel for private(lbv,ubv,t2,t3,t4,t5,t6)
for (t1=lbp;t1<=ubp;t1++) {
  for (t2=0;t2<=floord(PB_Q,32);t2++) {
    for (t3=0;t3<=floord(PB_Q-1,32);t3++) {
      if ((t2 >= 1) && (t3 == 0)) {
        for (t4=max(3,32*t1);t4<=min(PB_M-1,32*t1+31);t4++) {
          for (t5=0;t5<=31;t5++) {
            lbv=32*t2;
            ubv=min(PB_Q,32*t2+31);
#pragma ivdep
#pragma vector always
            for (t6=lbv;t6<=ubv;t6++) {
              A[t4][t4-1][t6-1] = A[t4][t4-2][t6-1] + A[t4][t4-3][t6-1] - 4;;
            }
          }
        }
      }
      if (t3 >= 1) {
        for (t4=max(3,32*t1);t4<=min(PB_M-1,32*t1+31);t4++) {
          for (t5=32*t3;t5<=min(PB_Q-1,32*t3+31);t5++) {
            lbv=max(1,32*t2);
            ubv=min(PB_Q,32*t2+31);
#pragma ivdep
#pragma vector always
            for (t6=lbv;t6<=ubv;t6++) {
              A[t4][t4-1][t6-1] = A[t4][t4-2][t6-1] + A[t4][t4-3][t6-1] - 4;;
            }
          }
        }
      }
      if ((t1 == 0) && (t2 == 0) && (t3 == 0)) {
        for (t4=0;t4<=2;t4++) {
          B[t4] = C[t4] * 3;;
        }
      }
      if ((t2 == 0) && (t3 == 0)) {
        for (t4=max(3,32*t1);t4<=min(PB_M-1,32*t1+31);t4++) {
          B[t4] = C[t4] * 3;;
          for (t5=0;t5<=31;t5++) {
            lbv=1;
            ubv=31;
#pragma ivdep
#pragma vector always
            for (t6=lbv;t6<=ubv;t6++) {
              A[t4][t4-1][t6-1] = A[t4][t4-2][t6-1] + A[t4][t4-3][t6-1] - 4;;
            }
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
int za = zA;
int xb = xB;
int xc = xC;
POLYBENCH_3D_ARRAY_DECL(A, DATA_TYPE,xA,yA,zA,xa,ya,za);
POLYBENCH_1D_ARRAY_DECL(B, DATA_TYPE,xB,xb);
POLYBENCH_1D_ARRAY_DECL(C, DATA_TYPE,xC,xc);
init_array(xa,ya,za,POLYBENCH_ARRAY(A),xb,POLYBENCH_ARRAY(B),xc,POLYBENCH_ARRAY(C),INIT_SEED);
kernel_3214321226_00(xa,ya,za,POLYBENCH_ARRAY(A),xb,POLYBENCH_ARRAY(B),xc,POLYBENCH_ARRAY(C));
polybench_prevent_dce(print_array(xa,ya,za,POLYBENCH_ARRAY(A),xb,POLYBENCH_ARRAY(B),xc,POLYBENCH_ARRAY(C)));
POLYBENCH_FREE_ARRAY(A);
POLYBENCH_FREE_ARRAY(B);
POLYBENCH_FREE_ARRAY(C);
return 0;
}
