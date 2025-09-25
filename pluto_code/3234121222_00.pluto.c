#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <math.h>
#include <polybench.h>
#include <time.h>
#include <stdlib.h>
#include "3234121222_00.h"
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
static void init_array(int xa,DATA_TYPE POLYBENCH_1D(A,xA,xa),int xb,int yb,DATA_TYPE POLYBENCH_2D(B,xB,yB,xb,yb),int seed)
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
}
static void print_array(int xa,DATA_TYPE POLYBENCH_1D(A,xA,xa),int xb,int yb,DATA_TYPE POLYBENCH_2D(B,xB,yB,xb,yb))
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
}
void kernel_3234121222_00(int xa,DATA_TYPE POLYBENCH_1D(A,xA,xa),int xb,int yb,DATA_TYPE POLYBENCH_2D(B,xB,yB,xb,yb)){
polybench_start_instruments;
  int t1, t2, t3, t4, t5, t6;
 int lb, ub, lbp, ubp, lb2, ub2;
 register int lbv, ubv;
/* Start of CLooG code */
for (t1=0;t1<=floord(PB_M-2,32);t1++) {
  for (t2=0;t2<=floord(PB_L-1,32);t2++) {
    for (t3=0;t3<=floord(PB_M-1,32);t3++) {
      if ((t2 == 0) && (t3 == 0)) {
        for (t4=max(2,32*t1);t4<=min(PB_M-2,32*t1+31);t4++) {
          B[t4+1][0] = B[t4+1][0] - 4;;
          A[t4-1] = A[t4-1] + A[t4-2] + A[t4] + 2;;
          lbv=1;
          ubv=31;
#pragma ivdep
#pragma vector always
          for (t6=lbv;t6<=ubv;t6++) {
            B[t4+1][t6] = B[t4+1][t6] - 4;;
          }
          for (t5=1;t5<=31;t5++) {
            lbv=0;
            ubv=31;
#pragma ivdep
#pragma vector always
            for (t6=lbv;t6<=ubv;t6++) {
              B[t4+1][t6] = B[t4+1][t6] - 4;;
            }
          }
        }
      }
      if ((t2 >= 1) && (t3 == 0)) {
        for (t4=max(2,32*t1);t4<=min(PB_M-2,32*t1+31);t4++) {
          for (t5=0;t5<=31;t5++) {
            lbv=32*t2;
            ubv=min(PB_L-1,32*t2+31);
#pragma ivdep
#pragma vector always
            for (t6=lbv;t6<=ubv;t6++) {
              B[t4+1][t6] = B[t4+1][t6] - 4;;
            }
          }
        }
      }
      if (t3 >= 1) {
        for (t4=max(2,32*t1);t4<=min(PB_M-2,32*t1+31);t4++) {
          for (t5=32*t3;t5<=min(PB_M-1,32*t3+31);t5++) {
            lbv=32*t2;
            ubv=min(PB_L-1,32*t2+31);
#pragma ivdep
#pragma vector always
            for (t6=lbv;t6<=ubv;t6++) {
              B[t4+1][t6] = B[t4+1][t6] - 4;;
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
int xb = xB;
int yb = yB;
POLYBENCH_1D_ARRAY_DECL(A, DATA_TYPE,xA,xa);
POLYBENCH_2D_ARRAY_DECL(B, DATA_TYPE,xB,yB,xb,yb);
init_array(xa,POLYBENCH_ARRAY(A),xb,yb,POLYBENCH_ARRAY(B),INIT_SEED);
kernel_3234121222_00(xa,POLYBENCH_ARRAY(A),xb,yb,POLYBENCH_ARRAY(B));
polybench_prevent_dce(print_array(xa,POLYBENCH_ARRAY(A),xb,yb,POLYBENCH_ARRAY(B)));
POLYBENCH_FREE_ARRAY(A);
POLYBENCH_FREE_ARRAY(B);
return 0;
}
