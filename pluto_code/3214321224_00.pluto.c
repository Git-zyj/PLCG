#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <math.h>
#include <polybench.h>
#include <time.h>
#include <stdlib.h>
#include "3214321224_00.h"
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
static void init_array(int xa,int ya,int za,DATA_TYPE POLYBENCH_3D(A,xA,yA,zA,xa,ya,za),int seed)
{
srand(seed);
int i,j,k,l;
for (i = 0; i < xa; i++) {
for (j = 0; j < ya; j++) {
for (k = 0; k < za; k++) {
A[i][j][k] = rand()%3;;
}}}
}
static void print_array(int xa,int ya,int za,DATA_TYPE POLYBENCH_3D(A,xA,yA,zA,xa,ya,za))
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
}
void kernel_3214321224_00(int xa,int ya,int za,DATA_TYPE POLYBENCH_3D(A,xA,yA,zA,xa,ya,za)){
polybench_start_instruments;
  int t1, t2, t3, t4, t5, t6, t7;
 int lb, ub, lbp, ubp, lb2, ub2;
 register int lbv, ubv;
/* Start of CLooG code */
lbp=0;
ubp=floord(PB_P-2,32);
#pragma omp parallel for private(lbv,ubv,t2,t3,t4,t5,t6,t7)
for (t1=lbp;t1<=ubp;t1++) {
  for (t2=0;t2<=t1;t2++) {
    for (t3=0;t3<=floord(25*t1+1046,67);t3++) {
      if (t3 <= floord(PB_L-1,32)) {
        for (t4=max(32*t1,32*t2+1);t4<=min(32*t1+31,32*t3-PB_M-1);t4++) {
          for (t5=32*t2;t5<=min(32*t2+31,t4-1);t5++) {
            for (t6=32*t3;t6<=min(PB_L-1,32*t3+31);t6++) {
              A[t5][t6][t4+1] = 4;;
            }
          }
        }
      }
      if ((t1 == t2) && (t1 <= t3) && (t1 >= max(1,ceild(32*t3-PB_M,32))) && (t3 <= floord(PB_L-1,32))) {
        for (t6=max(32*t3,32*t1+1);t6<=min(32*t1+PB_M,32*t3+31);t6++) {
          A[(32*t1-1)+1][32*t1+1][32*t1+1] = A[(32*t1-1)+1][32*t1+1][32*t1+1] - 2;;
        }
      }
      if (t3 >= ceild(PB_L,32)) {
        for (t4=max(32*t1,32*t3-PB_M);t4<=min(PB_P-2,32*t1+31);t4++) {
          for (t5=max(1,32*t2);t5<=min(t4,32*t2+31);t5++) {
            for (t6=32*t3;t6<=min(32*t3+31,t4+PB_M);t6++) {
              A[(t5-1)+1][t4+1][t4+1] = A[(t5-1)+1][t4+1][t4+1] - 2;;
            }
          }
        }
      }
      if (t3 <= floord(PB_L-1,32)) {
        for (t4=max(max(32*t1,32*t2+1),32*t3-PB_M);t4<=min(min(PB_P-2,32*t1+31),32*t3+30);t4++) {
          if (t2 == 0) {
            for (t6=32*t3;t6<=min(PB_L-1,32*t3+31);t6++) {
              A[0][t6][t4+1] = 4;;
            }
          }
          for (t5=max(1,32*t2);t5<=min(32*t2+31,t4-1);t5++) {
            if (t1 == t3) {
              for (t6=32*t1;t6<=t4;t6++) {
                A[t5][t6][t4+1] = 4;;
              }
            }
            for (t6=max(32*t3,t4+1);t6<=min(min(PB_L-1,32*t3+31),t4+PB_M);t6++) {
              A[t5][t6][t4+1] = 4;;
              A[(t5-1)+1][t4+1][t4+1] = A[(t5-1)+1][t4+1][t4+1] - 2;;
            }
            for (t6=t4+PB_M+1;t6<=min(PB_L-1,32*t3+31);t6++) {
              A[t5][t6][t4+1] = 4;;
            }
            if (t3 == 15) {
              for (t6=PB_L;t6<=min(511,t4+PB_M);t6++) {
                A[(t5-1)+1][t4+1][t4+1] = A[(t5-1)+1][t4+1][t4+1] - 2;;
              }
            }
          }
          if (t1 == t2) {
            for (t6=max(32*t3,t4+1);t6<=min(32*t3+31,t4+PB_M);t6++) {
              A[(t4-1)+1][t4+1][t4+1] = A[(t4-1)+1][t4+1][t4+1] - 2;;
            }
          }
        }
      }
      for (t4=max(max(32*t1,32*t2+1),32*t3+31);t4<=min(PB_P-2,32*t1+31);t4++) {
        for (t5=32*t2;t5<=min(32*t2+31,t4-1);t5++) {
          for (t6=32*t3;t6<=32*t3+31;t6++) {
            A[t5][t6][t4+1] = 4;;
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
POLYBENCH_3D_ARRAY_DECL(A, DATA_TYPE,xA,yA,zA,xa,ya,za);
init_array(xa,ya,za,POLYBENCH_ARRAY(A),INIT_SEED);
kernel_3214321224_00(xa,ya,za,POLYBENCH_ARRAY(A));
polybench_prevent_dce(print_array(xa,ya,za,POLYBENCH_ARRAY(A)));
POLYBENCH_FREE_ARRAY(A);
return 0;
}
