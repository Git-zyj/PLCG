#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <math.h>
#include <polybench.h>
#include <time.h>
#include <stdlib.h>
#include "3334121226_00.h"
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
void kernel_3334121226_00(int xa,DATA_TYPE POLYBENCH_1D(A,xA,xa),int xb,int yb,int zb,DATA_TYPE POLYBENCH_3D(B,xB,yB,zB,xb,yb,zb)){
polybench_start_instruments;
  int t1, t2, t3, t4, t5, t6, t7;
 int lb, ub, lbp, ubp, lb2, ub2;
 register int lbv, ubv;
/* Start of CLooG code */
for (t1=0;t1<=floord(3*PB_P-3,32);t1++) {
  lbp=max(0,ceild(32*t1-PB_P+1,32));
  ubp=min(floord(t1+16,2),t1);
#pragma omp parallel for private(lbv,ubv,t3,t4,t5,t6,t7)
  for (t2=lbp;t2<=ubp;t2++) {
    for (t3=0;t3<=min(min(min(floord(3*PB_L-4,32),floord(64*t2+PB_L+60,32)),floord(1199*t1-2398*t2+19895,131)),floord(-1199*t2+37468,600));t3++) {
      if ((t1 == 0) && (t2 == 0) && (t3 == 0)) {
        for (t4=0;t4<=15;t4++) {
          for (t5=0;t5<=t4;t5++) {
            for (t6=2*t5+1;t6<=31;t6++) {
              B[t5][(-2*t5+t6)+1][t4] = B[t5][(-2*t5+t6)-1][t4] + B[t5+2][(-2*t5+t6)][t4] - B[(-2*t5+t6)][t5][t4] + 3;;
            }
          }
          for (t5=t4+1;t5<=min(15,2*t4);t5++) {
            A[(-t4+t5)] = A[(-t4+t5)-1] * 3;;
            for (t6=2*t5+1;t6<=31;t6++) {
              B[t5][(-2*t5+t6)+1][t4] = B[t5][(-2*t5+t6)-1][t4] + B[t5+2][(-2*t5+t6)][t4] - B[(-2*t5+t6)][t5][t4] + 3;;
            }
          }
          for (t5=16;t5<=2*t4;t5++) {
            A[(-t4+t5)] = A[(-t4+t5)-1] * 3;;
          }
          if (t4 <= 7) {
            A[(t4+1)] = A[(t4+1)-1] * 3;;
            A[t4] = A[t4] * A[t4] + A[t4] + A[t4] * 1;;
            for (t6=4*t4+3;t6<=31;t6++) {
              B[(2*t4+1)][(-4*t4+t6-2)+1][t4] = B[(2*t4+1)][(-4*t4+t6-2)-1][t4] + B[(2*t4+1)+2][(-4*t4+t6-2)][t4] - B[(-4*t4+t6-2)][(2*t4+1)][t4] + 3;;
            }
          }
          for (t5=2*t4+2;t5<=15;t5++) {
            A[(-t4+t5)] = A[(-t4+t5)-1] * 3;;
            for (t6=2*t5+1;t6<=31;t6++) {
              B[t5][(-2*t5+t6)+1][t4] = B[t5][(-2*t5+t6)-1][t4] + B[t5+2][(-2*t5+t6)][t4] - B[(-2*t5+t6)][t5][t4] + 3;;
            }
          }
          if (t4 >= 8) {
            A[(t4+1)] = A[(t4+1)-1] * 3;;
            A[t4] = A[t4] * A[t4] + A[t4] + A[t4] * 1;;
          }
          for (t5=max(16,2*t4+2);t5<=31;t5++) {
            A[(-t4+t5)] = A[(-t4+t5)-1] * 3;;
          }
        }
      }
      if ((t1 == 0) && (t2 == 0) && (t3 == 0)) {
        for (t4=16;t4<=30;t4++) {
          for (t5=0;t5<=15;t5++) {
            for (t6=2*t5+1;t6<=31;t6++) {
              B[t5][(-2*t5+t6)+1][t4] = B[t5][(-2*t5+t6)-1][t4] + B[t5+2][(-2*t5+t6)][t4] - B[(-2*t5+t6)][t5][t4] + 3;;
            }
          }
          for (t5=t4+1;t5<=31;t5++) {
            A[(-t4+t5)] = A[(-t4+t5)-1] * 3;;
          }
        }
      }
      if (t3 == 0) {
        for (t4=max(32*t1-32*t2,32*t2-PB_M+1);t4<=min(16*t2-1,32*t1-32*t2+31);t4++) {
          for (t5=32*t2;t5<=min(32*t2+31,t4+PB_M-1);t5++) {
            A[(-t4+t5)] = A[(-t4+t5)-1] * 3;;
          }
        }
      }
      if (t2 <= min(floord(t3,2),floord(PB_L-1,32))) {
        for (t4=max(32*t1-32*t2,-31*t3+31);t4<=min(PB_P-1,32*t1-32*t2+31);t4++) {
          for (t5=max(ceild(32*t3-PB_L+2,2),32*t2);t5<=min(min(PB_L-1,32*t2+31),16*t3+15);t5++) {
            for (t6=max(32*t3,2*t5+1);t6<=min(32*t3+31,2*t5+PB_L-2);t6++) {
              B[t5][(-2*t5+t6)+1][t4] = B[t5][(-2*t5+t6)-1][t4] + B[t5+2][(-2*t5+t6)][t4] - B[(-2*t5+t6)][t5][t4] + 3;;
            }
          }
        }
      }
      if ((t2 >= 1) && (t3 == 0)) {
        for (t4=max(16*t2,32*t1-32*t2);t4<=min(min(PB_P-1,16*t2+15),32*t1-32*t2+31);t4++) {
          for (t5=32*t2;t5<=min(2*t4,t4+PB_M-1);t5++) {
            A[(-t4+t5)] = A[(-t4+t5)-1] * 3;;
          }
          if ((t1 == 46) && (t2 == 31) && (t4 >= PB_M-1)) {
            A[t4] = A[t4] * A[t4] + A[t4] + A[t4] * 1;;
          }
          if (t4 <= PB_M-2) {
            A[(t4+1)] = A[(t4+1)-1] * 3;;
            A[t4] = A[t4] * A[t4] + A[t4] + A[t4] * 1;;
          }
          for (t5=2*t4+2;t5<=min(32*t2+31,t4+PB_M-1);t5++) {
            A[(-t4+t5)] = A[(-t4+t5)-1] * 3;;
          }
        }
      }
      if ((t2 >= 1) && (t3 == 0)) {
        for (t4=max(32*t1-32*t2,16*t2+16);t4<=min(min(PB_P-1,32*t2+30),32*t1-32*t2+31);t4++) {
          for (t5=max(32*t2,t4+1);t5<=32*t2+31;t5++) {
            A[(-t4+t5)] = A[(-t4+t5)-1] * 3;;
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
int zb = zB;
POLYBENCH_1D_ARRAY_DECL(A, DATA_TYPE,xA,xa);
POLYBENCH_3D_ARRAY_DECL(B, DATA_TYPE,xB,yB,zB,xb,yb,zb);
init_array(xa,POLYBENCH_ARRAY(A),xb,yb,zb,POLYBENCH_ARRAY(B),INIT_SEED);
kernel_3334121226_00(xa,POLYBENCH_ARRAY(A),xb,yb,zb,POLYBENCH_ARRAY(B));
polybench_prevent_dce(print_array(xa,POLYBENCH_ARRAY(A),xb,yb,zb,POLYBENCH_ARRAY(B)));
POLYBENCH_FREE_ARRAY(A);
POLYBENCH_FREE_ARRAY(B);
return 0;
}
