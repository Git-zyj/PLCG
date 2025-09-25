#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <math.h>
#include <polybench.h>
#include <time.h>
#include <stdlib.h>
#include "3224221224_00.h"
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
static void init_array(int xa,int ya,int za,DATA_TYPE POLYBENCH_3D(A,xA,yA,zA,xa,ya,za),int xb,int yb,int zb,DATA_TYPE POLYBENCH_3D(B,xB,yB,zB,xb,yb,zb),int seed)
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
for (k = 0; k < zb; k++) {
B[i][j][k] = rand()%3;;
}}}
}
static void print_array(int xa,int ya,int za,DATA_TYPE POLYBENCH_3D(A,xA,yA,zA,xa,ya,za),int xb,int yb,int zb,DATA_TYPE POLYBENCH_3D(B,xB,yB,zB,xb,yb,zb))
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
for (k = 0; k < zb; k++) {
fprintf (POLYBENCH_DUMP_TARGET, "\n");
fprintf (POLYBENCH_DUMP_TARGET, DATA_PRINTF_MODIFIER, B[i][j][k]);
}}}
POLYBENCH_DUMP_END("B");
POLYBENCH_DUMP_FINISH;
}
void kernel_3224221224_00(int xa,int ya,int za,DATA_TYPE POLYBENCH_3D(A,xA,yA,zA,xa,ya,za),int xb,int yb,int zb,DATA_TYPE POLYBENCH_3D(B,xB,yB,zB,xb,yb,zb)){
polybench_start_instruments;
  int t1, t2, t3, t4, t5, t6;
 int lb, ub, lbp, ubp, lb2, ub2;
 register int lbv, ubv;
/* Start of CLooG code */
lbp=-1;
ubp=floord(PB_P-2,32);
#pragma omp parallel for private(lbv,ubv,t2,t3,t4,t5,t6)
for (t1=lbp;t1<=ubp;t1++) {
  for (t2=0;t2<=min(floord(PB_M-1,32),-t1+24);t2++) {
    for (t3=max(0,ceild(12736*t1-299*PB_P+598,3168));t3<=min(min(floord(PB_P-1,32),floord(100*t1+PB_P-1,32)),floord(-101*t2+2512,100));t3++) {
      if ((t2 <= floord(PB_Q-1,32)) && (t3 <= floord(PB_N-2,32))) {
        for (t4=max(0,32*t1);t4<=min(min(PB_N-2,32*t1+31),32*t3+30);t4++) {
          if (t1 == t3) {
            for (t5=32*t1;t5<=t4;t5++) {
              lbv=32*t2;
              ubv=32*t2+31;
#pragma ivdep
#pragma vector always
              for (t6=lbv;t6<=ubv;t6++) {
                A[t5][t4+1][t6] = A[t5+1][t4+1][t6] * A[t5][t4+1][t6] - 2;;
              }
            }
          }
          for (t5=max(32*t3,t4+1);t5<=min(PB_N-2,32*t3+31);t5++) {
            lbv=32*t2;
            ubv=min(PB_Q-1,32*t2+31);
#pragma ivdep
#pragma vector always
            for (t6=lbv;t6<=ubv;t6++) {
              A[t5][t4+1][t6] = A[t5+1][t4+1][t6] * A[t5][t4+1][t6] - 2;;
              B[t4][t4][t6] = 1;;
            }
            if (t2 == 12) {
              lbv=PB_Q;
              ubv=415;
#pragma ivdep
#pragma vector always
              for (t6=lbv;t6<=ubv;t6++) {
                A[t5][t4+1][t6] = A[t5+1][t4+1][t6] * A[t5][t4+1][t6] - 2;;
              }
            }
          }
          if (t3 == 9) {
            for (t5=PB_N-1;t5<=319;t5++) {
              lbv=32*t2;
              ubv=min(PB_Q-1,32*t2+31);
#pragma ivdep
#pragma vector always
              for (t6=lbv;t6<=ubv;t6++) {
                B[t4][t4][t6] = 1;;
              }
            }
          }
        }
      }
      if (t2 <= floord(PB_Q-1,32)) {
        for (t4=max(32*t1,32*t3+31);t4<=min(PB_N-2,32*t1+31);t4++) {
          for (t5=32*t3;t5<=32*t3+31;t5++) {
            lbv=32*t2;
            ubv=32*t2+31;
#pragma ivdep
#pragma vector always
            for (t6=lbv;t6<=ubv;t6++) {
              A[t5][t4+1][t6] = A[t5+1][t4+1][t6] * A[t5][t4+1][t6] - 2;;
            }
          }
        }
      }
      if ((t1 == -1) && (t2 <= floord(PB_Q-1,32))) {
        for (t5=32*t3;t5<=min(PB_N-2,32*t3+31);t5++) {
          lbv=32*t2;
          ubv=32*t2+31;
#pragma ivdep
#pragma vector always
          for (t6=lbv;t6<=ubv;t6++) {
            A[t5][-1 +1][t6] = A[t5+1][-1 +1][t6] * A[t5][-1 +1][t6] - 2;;
          }
        }
      }
      if ((t2 >= ceild(PB_Q,32)) && (t3 <= floord(PB_N-2,32))) {
        for (t4=max(-1,32*t1);t4<=min(PB_N-2,32*t1+31);t4++) {
          for (t5=32*t3;t5<=min(PB_N-2,32*t3+31);t5++) {
            lbv=32*t2;
            ubv=min(PB_M-1,32*t2+31);
#pragma ivdep
#pragma vector always
            for (t6=lbv;t6<=ubv;t6++) {
              A[t5][t4+1][t6] = A[t5+1][t4+1][t6] * A[t5][t4+1][t6] - 2;;
            }
          }
        }
      }
      if ((t1 == 9) && (t2 <= floord(PB_Q-1,32)) && (t3 == 9)) {
        for (t4=PB_N-1;t4<=318;t4++) {
          for (t5=t4+1;t5<=319;t5++) {
            lbv=32*t2;
            ubv=min(PB_Q-1,32*t2+31);
#pragma ivdep
#pragma vector always
            for (t6=lbv;t6<=ubv;t6++) {
              B[t4][t4][t6] = 1;;
            }
          }
        }
      }
      if ((t2 <= floord(PB_Q-1,32)) && (t3 >= ceild(PB_N-1,32))) {
        for (t4=32*t1;t4<=min(min(PB_P-2,32*t1+31),32*t3+30);t4++) {
          for (t5=max(32*t3,t4+1);t5<=min(PB_P-1,32*t3+31);t5++) {
            lbv=32*t2;
            ubv=min(PB_Q-1,32*t2+31);
#pragma ivdep
#pragma vector always
            for (t6=lbv;t6<=ubv;t6++) {
              B[t4][t4][t6] = 1;;
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
int yb = yB;
int zb = zB;
POLYBENCH_3D_ARRAY_DECL(A, DATA_TYPE,xA,yA,zA,xa,ya,za);
POLYBENCH_3D_ARRAY_DECL(B, DATA_TYPE,xB,yB,zB,xb,yb,zb);
init_array(xa,ya,za,POLYBENCH_ARRAY(A),xb,yb,zb,POLYBENCH_ARRAY(B),INIT_SEED);
kernel_3224221224_00(xa,ya,za,POLYBENCH_ARRAY(A),xb,yb,zb,POLYBENCH_ARRAY(B));
polybench_prevent_dce(print_array(xa,ya,za,POLYBENCH_ARRAY(A),xb,yb,zb,POLYBENCH_ARRAY(B)));
POLYBENCH_FREE_ARRAY(A);
POLYBENCH_FREE_ARRAY(B);
return 0;
}
