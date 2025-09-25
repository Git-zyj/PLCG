#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <math.h>
#include <polybench.h>
#include <time.h>
#include <stdlib.h>
#include "3324321222_00.h"
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
static void init_array(int xa,DATA_TYPE POLYBENCH_1D(A,xA,xa),int xb,int yb,int zb,DATA_TYPE POLYBENCH_3D(B,xB,yB,zB,xb,yb,zb),int seed)
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
}
static void print_array(int xa,DATA_TYPE POLYBENCH_1D(A,xA,xa),int xb,int yb,int zb,DATA_TYPE POLYBENCH_3D(B,xB,yB,zB,xb,yb,zb))
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
}
void kernel_3324321222_00(int xa,DATA_TYPE POLYBENCH_1D(A,xA,xa),int xb,int yb,int zb,DATA_TYPE POLYBENCH_3D(B,xB,yB,zB,xb,yb,zb)){
polybench_start_instruments;
  int t1, t2, t3, t4, t5, t6, t7;
 int lb, ub, lbp, ubp, lb2, ub2;
 register int lbv, ubv;
/* Start of CLooG code */
for (t1=0;t1<=floord(479*PB_P-1140,9504);t1++) {
  for (t2=0;t2<=min(floord(-298*t1+4470,181),t1);t2++) {
    for (t3=0;t3<=min(floord(PB_M-1,32),floord(-4000*t1+125*PB_P+22500,1456));t3++) {
      if ((t1 == 0) && (t2 == 0) && (t3 == 0)) {
        A[0] = A[0] * A[0] + 3;;
      }
      if ((t2 >= 1) && (t3 == 0)) {
        for (t4=max(32*t1,32*t2+1);t4<=min(PB_P-2,32*t1+31);t4++) {
          for (t5=32*t2;t5<=min(32*t2+31,t4-1);t5++) {
            for (t6=0;t6<=31;t6++) {
              B[t4+1][t5][t4+1] = B[t5][t5][t4] + B[t5][t6][t5+1] - 1;;
            }
          }
        }
      }
      if (t3 >= 1) {
        for (t4=max(32*t1,32*t2+1);t4<=min(PB_P-2,32*t1+31);t4++) {
          for (t5=32*t2;t5<=min(32*t2+31,t4-1);t5++) {
            for (t6=32*t3;t6<=min(PB_M-1,32*t3+31);t6++) {
              B[t4+1][t5][t4+1] = B[t5][t5][t4] + B[t5][t6][t5+1] - 1;;
            }
          }
        }
      }
      if ((t1 == 0) && (t2 == 0) && (t3 == 0)) {
        B[1 +1][0][1 +1] = B[0][0][1] + B[0][0][0 +1] - 1;;
        A[1] = A[1] * A[1] + 3;;
        for (t6=1;t6<=31;t6++) {
          B[1 +1][0][1 +1] = B[0][0][1] + B[0][t6][0 +1] - 1;;
        }
      }
      if ((t2 == 0) && (t3 == 0)) {
        for (t4=max(2,32*t1);t4<=min(PB_P-2,32*t1+31);t4++) {
          B[t4+1][0][t4+1] = B[0][0][t4] + B[0][0][0 +1] - 1;;
          A[t4] = A[t4] * A[t4] + 3;;
          A[(t4-2)] = A[(t4-2)+2] - A[(t4-2)+1] - 2;;
          for (t6=1;t6<=31;t6++) {
            B[t4+1][0][t4+1] = B[0][0][t4] + B[0][t6][0 +1] - 1;;
          }
          for (t5=1;t5<=min(31,t4-1);t5++) {
            for (t6=0;t6<=31;t6++) {
              B[t4+1][t5][t4+1] = B[t5][t5][t4] + B[t5][t6][t5+1] - 1;;
            }
          }
        }
      }
      if ((t1 == 9) && (t2 == 0) && (t3 == 0)) {
        for (t4=PB_P-1;t4<=PB_P;t4++) {
          A[t4] = A[t4] * A[t4] + 3;;
          A[(t4-2)] = A[(t4-2)+2] - A[(t4-2)+1] - 2;;
        }
      }
      if ((t2 == 0) && (t3 == 0)) {
        for (t4=max(32*t1,PB_P+1);t4<=min(PB_M-1,32*t1+31);t4++) {
          A[t4] = A[t4] * A[t4] + 3;;
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
int zb = zB;
POLYBENCH_1D_ARRAY_DECL(A, DATA_TYPE,xA,xa);
POLYBENCH_3D_ARRAY_DECL(B, DATA_TYPE,xB,yB,zB,xb,yb,zb);
init_array(xa,POLYBENCH_ARRAY(A),xb,yb,zb,POLYBENCH_ARRAY(B),INIT_SEED);
kernel_3324321222_00(xa,POLYBENCH_ARRAY(A),xb,yb,zb,POLYBENCH_ARRAY(B));
polybench_prevent_dce(print_array(xa,POLYBENCH_ARRAY(A),xb,yb,zb,POLYBENCH_ARRAY(B)));
POLYBENCH_FREE_ARRAY(A);
POLYBENCH_FREE_ARRAY(B);
return 0;
}
