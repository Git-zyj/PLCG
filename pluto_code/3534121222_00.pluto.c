#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <math.h>
#include <polybench.h>
#include <time.h>
#include <stdlib.h>
#include "3534121222_00.h"
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
void kernel_3534121222_00(int xa,int ya,DATA_TYPE POLYBENCH_2D(A,xA,yA,xa,ya),int xb,int yb,int zb,DATA_TYPE POLYBENCH_3D(B,xB,yB,zB,xb,yb,zb)){
polybench_start_instruments;
  int t1, t2, t3, t4, t5, t6, t7;
 int lb, ub, lbp, ubp, lb2, ub2;
 register int lbv, ubv;
/* Start of CLooG code */
for (t2=0;t2<=floord(PB_N-2,8);t2++) {
  lbp=max(ceild(t2,2),ceild(401*t2-4987,402));
  ubp=floord(3*t2+2,4);
#pragma omp parallel for private(lbv,ubv,t4,t5,t6,t7)
  for (t3=lbp;t3<=ubp;t3++) {
    for (t4=max(ceild(32*t3+1,3),32*t2-32*t3);t4<=min(min(16*t3,PB_N-1),32*t2-32*t3+31);t4++) {
      for (t5=max(32*t3,2*t4+1);t5<=min(32*t3+31,3*t4-1);t5++) {
        for (t6=1;t6<=PB_P-2;t6++) {
          B[(-2*t4+t5)+1][t4][t6+1] = B[t4][t6][t6] + B[t6-1][(-2*t4+t5)][t4] + 2;;
          B[(-2*t4+t5)-1][t6-1][t4] = B[(-2*t4+t5)-1][t6-1][(-2*t4+t5)] - 1;;
        }
      }
    }
    for (t4=max(max(2,32*t2-32*t3),16*t3+1);t4<=min(min(PB_P-2,16*t3+15),32*t2-32*t3+31);t4++) {
      for (t5=max(32*t3,t4+1);t5<=2*t4-1;t5++) {
        for (t6=0;t6<=t4-1;t6++) {
          B[(-t4+t5)-1][t4][t4+1] = B[t4][(-t4+t5)][t4] + 3;;
        }
      }
      for (t5=2*t4+1;t5<=min(32*t3+31,3*t4-1);t5++) {
        for (t6=1;t6<=PB_P-2;t6++) {
          B[(-2*t4+t5)+1][t4][t6+1] = B[t4][t6][t6] + B[t6-1][(-2*t4+t5)][t4] + 2;;
          B[(-2*t4+t5)-1][t6-1][t4] = B[(-2*t4+t5)-1][t6-1][(-2*t4+t5)] - 1;;
        }
      }
    }
    for (t4=max(32*t2-32*t3,16*t3+16);t4<=min(min(PB_P-2,32*t3+30),32*t2-32*t3+31);t4++) {
      for (t5=max(32*t3,t4+1);t5<=32*t3+31;t5++) {
        for (t6=0;t6<=t4-1;t6++) {
          B[(-t4+t5)-1][t4][t4+1] = B[t4][(-t4+t5)][t4] + 3;;
        }
      }
    }
    if ((PB_P == 400) && (t2 == 36) && (t3 == 24)) {
      for (t6=1;t6<=398;t6++) {
        B[1 +1][399][t6+1] = B[399][t6][t6] + B[t6-1][1][399] + 2;;
        B[1 -1][t6-1][399] = B[1 -1][t6-1][1] - 1;;
      }
    }
  }
}
lbp=0;
ubp=floord(PB_P-2,32);
#pragma omp parallel for private(lbv,ubv,t3,t4,t5,t6,t7)
for (t2=lbp;t2<=ubp;t2++) {
  for (t3=0;t3<=t2;t3++) {
    for (t4=32*t3;t4<=min(min(PB_P-3,32*t2+30),32*t3+31);t4++) {
      lbv=max(32*t2,t4+1);
      ubv=min(PB_P-2,32*t2+31);
#pragma ivdep
#pragma vector always
      for (t5=lbv;t5<=ubv;t5++) {
        A[t4][t5+1] = 5;;
      }
    }
  }
}
lbp=0;
ubp=floord(PB_L-1,32);
#pragma omp parallel for private(lbv,ubv,t3,t4,t5,t6,t7)
for (t2=lbp;t2<=ubp;t2++) {
  for (t3=0;t3<=floord(PB_M-1,32);t3++) {
    for (t4=0;t4<=t2;t4++) {
      for (t5=32*t3;t5<=min(PB_M-1,32*t3+31);t5++) {
        for (t6=32*t4;t6<=min(min(PB_L-2,32*t2+30),32*t4+31);t6++) {
          lbv=max(32*t2,t6+1);
          ubv=min(PB_L-1,32*t2+31);
#pragma ivdep
#pragma vector always
          for (t7=lbv;t7<=ubv;t7++) {
            A[t5][t7] = A[t5][t7] - 2;;
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
kernel_3534121222_00(xa,ya,POLYBENCH_ARRAY(A),xb,yb,zb,POLYBENCH_ARRAY(B));
polybench_prevent_dce(print_array(xa,ya,POLYBENCH_ARRAY(A),xb,yb,zb,POLYBENCH_ARRAY(B)));
POLYBENCH_FREE_ARRAY(A);
POLYBENCH_FREE_ARRAY(B);
return 0;
}
