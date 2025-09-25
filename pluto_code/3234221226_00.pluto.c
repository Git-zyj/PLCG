#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <math.h>
#include <polybench.h>
#include <time.h>
#include <stdlib.h>
#include "3234221226_00.h"
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
static void init_array(int xa,int ya,DATA_TYPE POLYBENCH_2D(A,xA,yA,xa,ya),int xb,int yb,int zb,DATA_TYPE POLYBENCH_3D(B,xB,yB,zB,xb,yb,zb),int seed)
{
srand(seed);
int i,j,k,l;
for (i = 0; i < xa; i++) {
for (j = 0; j < ya; j++) {
A[i][j] = rand()%3;;
}}
for (i = 0; i < xb; i++) {
for (j = 0; j < yb; j++) {
for (k = 0; k < zb; k++) {
B[i][j][k] = rand()%3;;
}}}
}
static void print_array(int xa,int ya,DATA_TYPE POLYBENCH_2D(A,xA,yA,xa,ya),int xb,int yb,int zb,DATA_TYPE POLYBENCH_3D(B,xB,yB,zB,xb,yb,zb))
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
for (j = 0; j < yb; j++) {
for (k = 0; k < zb; k++) {
fprintf (POLYBENCH_DUMP_TARGET, "\n");
fprintf (POLYBENCH_DUMP_TARGET, DATA_PRINTF_MODIFIER, B[i][j][k]);
}}}
POLYBENCH_DUMP_END("B");
POLYBENCH_DUMP_FINISH;
}
void kernel_3234221226_00(int xa,int ya,DATA_TYPE POLYBENCH_2D(A,xA,yA,xa,ya),int xb,int yb,int zb,DATA_TYPE POLYBENCH_3D(B,xB,yB,zB,xb,yb,zb)){
polybench_start_instruments;
  int t1, t2, t3, t4, t5, t6;
 int lb, ub, lbp, ubp, lb2, ub2;
 register int lbv, ubv;
/* Start of CLooG code */
lbp=0;
ubp=floord(PB_M-1,32);
#pragma omp parallel for private(lbv,ubv,t2,t3,t4,t5,t6)
for (t1=lbp;t1<=ubp;t1++) {
  for (t2=0;t2<=floord(PB_Q-2,32);t2++) {
    for (t3=0;t3<=min(floord(PB_L-1,32),t2);t3++) {
      if ((t1 == 0) && (t3 == 0)) {
        for (t5=max(2,32*t2);t5<=min(PB_Q-2,32*t2+31);t5++) {
          lbv=1;
          ubv=min(31,t5-1);
#pragma ivdep
#pragma vector always
          for (t6=lbv;t6<=ubv;t6++) {
            B[0][t6][t5+1] = B[0][t6-1][t5-1] * 4;;
          }
        }
      }
      if (t3 >= 1) {
        for (t4=32*t1;t4<=min(PB_M-1,32*t1+31);t4++) {
          for (t5=max(32*t2,32*t3+1);t5<=min(PB_Q-2,32*t2+31);t5++) {
            lbv=32*t3;
            ubv=min(min(PB_L-1,32*t3+31),t5-1);
#pragma ivdep
#pragma vector always
            for (t6=lbv;t6<=ubv;t6++) {
              B[t4][t6][t5+1] = B[t4][t6-1][t5-1] * 4;;
            }
          }
        }
      }
      if (t3 == 0) {
        for (t4=max(1,32*t1);t4<=min(PB_L-1,32*t1+31);t4++) {
          if (t2 == 0) {
            A[t4+1][t4] = A[t4+2][t4-1] + 2;;
          }
          for (t5=max(2,32*t2);t5<=min(PB_Q-2,32*t2+31);t5++) {
            A[t4+1][t4] = A[t4+2][t4-1] + 2;;
            lbv=1;
            ubv=min(31,t5-1);
#pragma ivdep
#pragma vector always
            for (t6=lbv;t6<=ubv;t6++) {
              B[t4][t6][t5+1] = B[t4][t6-1][t5-1] * 4;;
            }
          }
        }
      }
      if (t3 == 0) {
        for (t4=max(PB_L,32*t1);t4<=min(PB_M-1,32*t1+31);t4++) {
          for (t5=max(2,32*t2);t5<=min(PB_Q-2,32*t2+31);t5++) {
            lbv=1;
            ubv=min(31,t5-1);
#pragma ivdep
#pragma vector always
            for (t6=lbv;t6<=ubv;t6++) {
              B[t4][t6][t5+1] = B[t4][t6-1][t5-1] * 4;;
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
int xb = xB;
int yb = yB;
int zb = zB;
POLYBENCH_2D_ARRAY_DECL(A, DATA_TYPE,xA,yA,xa,ya);
POLYBENCH_3D_ARRAY_DECL(B, DATA_TYPE,xB,yB,zB,xb,yb,zb);
init_array(xa,ya,POLYBENCH_ARRAY(A),xb,yb,zb,POLYBENCH_ARRAY(B),INIT_SEED);
kernel_3234221226_00(xa,ya,POLYBENCH_ARRAY(A),xb,yb,zb,POLYBENCH_ARRAY(B));
polybench_prevent_dce(print_array(xa,ya,POLYBENCH_ARRAY(A),xb,yb,zb,POLYBENCH_ARRAY(B)));
POLYBENCH_FREE_ARRAY(A);
POLYBENCH_FREE_ARRAY(B);
return 0;
}
