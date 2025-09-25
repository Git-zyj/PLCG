#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <math.h>
#include <polybench.h>
#include <time.h>
#include <stdlib.h>
#include "3434121222_00.h"
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
void kernel_3434121222_00(int xa,int ya,DATA_TYPE POLYBENCH_2D(A,xA,yA,xa,ya),int xb,int yb,int zb,DATA_TYPE POLYBENCH_3D(B,xB,yB,zB,xb,yb,zb)){
polybench_start_instruments;
  int t1, t2, t3, t4, t5, t6, t7, t8;
 int lb, ub, lbp, ubp, lb2, ub2;
 register int lbv, ubv;
/* Start of CLooG code */
lbp=0;
ubp=floord(PB_P-1,32);
#pragma omp parallel for private(lbv,ubv,t4,t5,t6,t7,t8)
for (t3=lbp;t3<=ubp;t3++) {
  for (t4=-1;t4<=floord(PB_M-2,32);t4++) {
    for (t5=0;t5<=t3;t5++) {
      for (t6=max(max(2,32*t3),32*t5+1);t6<=min(PB_P-1,32*t3+31);t6++) {
        for (t7=max(-1,32*t4);t7<=min(PB_M-2,32*t4+31);t7++) {
          lbv=max(1,32*t5);
          ubv=min(min(PB_M-2,32*t5+31),t6-1);
#pragma ivdep
#pragma vector always
          for (t8=lbv;t8<=ubv;t8++) {
            B[t7+1][t6][t8] = B[t8+1][t8-1][t6] - 4;;
          }
        }
      }
    }
  }
}
for (t3=0;t3<=floord(3*PB_P+PB_M-6,32);t3++) {
  lbp=max(0,ceild(32*t3-PB_P+1,32));
  ubp=min(min(floord(2*t3+11,3),floord(2*PB_P+PB_M-5,32)),t3);
#pragma omp parallel for private(lbv,ubv,t5,t6,t7,t8)
  for (t4=lbp;t4<=ubp;t4++) {
    for (t5=0;t5<=min(min(min(floord(PB_P-1,32),floord(4800*t3-7200*t4+75*PB_M+4425,2872)),floord(2400*t3-4800*t4+75*PB_P+24600,5032)),floord(-9568*t4+896*PB_P+299*PB_M-90895,19104));t5++) {
      if (t5 == 0) {
        for (t6=max(ceild(32*t4-PB_M+3,2),32*t3-32*t4);t6<=min(min(min(32*t4,PB_P-1),16*t4+15),32*t3-32*t4+31);t6++) {
          for (t7=max(32*t4,2*t6+1);t7<=min(32*t4+31,2*t6+PB_M-3);t7++) {
            A[(-2*t6+t7)][(-2*t6+t7)-1] = A[(-2*t6+t7)+2][(-2*t6+t7)] - A[t6][t6] + A[t6][(-2*t6+t7)+1] + 5;;
          }
        }
      }
      if (t5 >= 1) {
        for (t6=max(max(2,32*t3-32*t4),32*t4+1);t6<=min(PB_P-1,32*t3-32*t4+31);t6++) {
          for (t7=max(1,32*t4);t7<=min(32*t4+31,t6-1);t7++) {
            for (t8=32*t5;t8<=min(PB_P-1,32*t5+31);t8++) {
              B[t6-1][t7-1][t8] = B[t6-1][t7-1][t8-2] * B[t6-1][t7-1][t8] - B[t8][t8][t6] + 6;;
            }
          }
        }
      }
      if ((t3 == 0) && (t4 == 0) && (t5 == 0)) {
        for (t7=3;t7<=31;t7++) {
          A[(t7-2)][(t7-2)-1] = A[(t7-2)+2][(t7-2)] - A[1][1] + A[1][(t7-2)+1] + 5;;
        }
      }
      if ((t3 == 0) && (t4 == 0) && (t5 == 0)) {
        for (t6=2;t6<=15;t6++) {
          for (t7=1;t7<=t6-1;t7++) {
            for (t8=2;t8<=31;t8++) {
              B[t6-1][t7-1][t8] = B[t6-1][t7-1][t8-2] * B[t6-1][t7-1][t8] - B[t8][t8][t6] + 6;;
            }
          }
          for (t7=2*t6+1;t7<=31;t7++) {
            A[(-2*t6+t7)][(-2*t6+t7)-1] = A[(-2*t6+t7)+2][(-2*t6+t7)] - A[t6][t6] + A[t6][(-2*t6+t7)+1] + 5;;
          }
        }
      }
      if (t5 == 0) {
        for (t6=max(max(32*t3-32*t4,16*t4+16),32*t4+1);t6<=min(PB_P-1,32*t3-32*t4+31);t6++) {
          for (t7=max(1,32*t4);t7<=min(32*t4+31,t6-1);t7++) {
            for (t8=2;t8<=31;t8++) {
              B[t6-1][t7-1][t8] = B[t6-1][t7-1][t8-2] * B[t6-1][t7-1][t8] - B[t8][t8][t6] + 6;;
            }
          }
        }
      }
    }
  }
}
lbp=0;
ubp=floord(PB_M-1,32);
#pragma omp parallel for private(lbv,ubv,t4,t5,t6,t7,t8)
for (t3=lbp;t3<=ubp;t3++) {
  for (t4=0;t4<=t3;t4++) {
    for (t5=max(32*t3,32*t4+1);t5<=min(PB_M-1,32*t3+31);t5++) {
      lbv=32*t4;
      ubv=min(32*t4+31,t5-1);
#pragma ivdep
#pragma vector always
      for (t6=lbv;t6<=ubv;t6++) {
        A[t6][t5-1] = A[t6][t5-1] - A[t5][t6] * 1;;
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
kernel_3434121222_00(xa,ya,POLYBENCH_ARRAY(A),xb,yb,zb,POLYBENCH_ARRAY(B));
polybench_prevent_dce(print_array(xa,ya,POLYBENCH_ARRAY(A),xb,yb,zb,POLYBENCH_ARRAY(B)));
POLYBENCH_FREE_ARRAY(A);
POLYBENCH_FREE_ARRAY(B);
return 0;
}
