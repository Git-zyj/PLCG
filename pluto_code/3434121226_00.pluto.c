#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <math.h>
#include <polybench.h>
#include <time.h>
#include <stdlib.h>
#include "3434121226_00.h"
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
static void init_array(int xa,int ya,DATA_TYPE POLYBENCH_2D(A,xA,yA,xa,ya),int xb,DATA_TYPE POLYBENCH_1D(B,xB,xb),int xc,int yc,int zc,DATA_TYPE POLYBENCH_3D(C,xC,yC,zC,xc,yc,zc),int seed)
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
for (i = 0; i < xc; i++) {
for (j = 0; j < yc; j++) {
for (k = 0; k < zc; k++) {
C[i][j][k] = rand()%3;;
}}}
}
static void print_array(int xa,int ya,DATA_TYPE POLYBENCH_2D(A,xA,yA,xa,ya),int xb,DATA_TYPE POLYBENCH_1D(B,xB,xb),int xc,int yc,int zc,DATA_TYPE POLYBENCH_3D(C,xC,yC,zC,xc,yc,zc))
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
POLYBENCH_DUMP_BEGIN("C");
for (i = 0; i < xc; i++) {
for (j = 0; j < yc; j++) {
for (k = 0; k < zc; k++) {
fprintf (POLYBENCH_DUMP_TARGET, "\n");
fprintf (POLYBENCH_DUMP_TARGET, DATA_PRINTF_MODIFIER, C[i][j][k]);
}}}
POLYBENCH_DUMP_END("C");
POLYBENCH_DUMP_FINISH;
}
void kernel_3434121226_00(int xa,int ya,DATA_TYPE POLYBENCH_2D(A,xA,yA,xa,ya),int xb,DATA_TYPE POLYBENCH_1D(B,xB,xb),int xc,int yc,int zc,DATA_TYPE POLYBENCH_3D(C,xC,yC,zC,xc,yc,zc)){
polybench_start_instruments;
  int t1, t2, t3, t4, t5, t6, t7;
 int lb, ub, lbp, ubp, lb2, ub2;
 register int lbv, ubv;
/* Start of CLooG code */
for (t1=-1;t1<=floord(PB_M-1,32);t1++) {
  for (t2=0;t2<=min(min(min(28,floord(181*t1+181,16)),floord(-501*t1+7509,100)),2*t1+11);t2++) {
    for (t3=0;t3<=min(min(floord(-133*t2+3740,167),floord(798*t1-399*t2+4513,761)),floord(144039*t1+144438,155623));t3++) {
      if ((t1 == 0) && (t2 == 0) && (t3 == 0)) {
        B[0 +1] = 3;;
        for (t5=1;t5<=31;t5++) {
          A[t5][0] = A[t5][0] * A[t5][0] + A[t5][t5] - A[0][t5-1] * 3;;
        }
      }
      if ((t2 >= 1) && (t3 == 0)) {
        for (t4=max(ceild(32*t2-PB_L+1,2),32*t1);t4<=min(min(PB_L-1,32*t1+31),16*t2+15);t4++) {
          for (t5=max(32*t2,2*t4+1);t5<=min(32*t2+31,2*t4+PB_L-1);t5++) {
            A[(-2*t4+t5)][t4] = A[(-2*t4+t5)][t4] * A[(-2*t4+t5)][t4] + A[(-2*t4+t5)][(-2*t4+t5)] - A[t4][(-2*t4+t5)-1] * 3;;
          }
        }
      }
      if ((t1 == -1) && (t2 == 0) && (t3 == 0)) {
        B[-1 +1] = 3;;
      }
      if ((t2 >= 1) && (t3 == 0)) {
        for (t4=max(32*t1,32*t2+1);t4<=min(PB_M-1,32*t1+31);t4++) {
          for (t5=32*t2;t5<=min(32*t2+31,t4-1);t5++) {
            lbv=0;
            ubv=31;
#pragma ivdep
#pragma vector always
            for (t6=lbv;t6<=ubv;t6++) {
              C[t5][t4][t6] = C[t5-2][t4][t6] + 1;;
            }
          }
        }
      }
      if (t3 >= 1) {
        for (t4=max(max(32*t1,32*t2+1),32*t3+1);t4<=min(PB_M-1,32*t1+31);t4++) {
          for (t5=max(2,32*t2);t5<=min(32*t2+31,t4-1);t5++) {
            lbv=32*t3;
            ubv=min(32*t3+31,t4-1);
#pragma ivdep
#pragma vector always
            for (t6=lbv;t6<=ubv;t6++) {
              C[t5][t4][t6] = C[t5-2][t4][t6] + 1;;
            }
          }
        }
      }
      if ((t1 == 0) && (t2 == 0) && (t3 == 0)) {
        for (t4=1;t4<=2;t4++) {
          B[t4+1] = 3;;
          B[t4] = B[t4-1] - B[t4+1] + B[t4] * B[t4] + 3;;
          for (t5=2*t4+1;t5<=31;t5++) {
            A[(-2*t4+t5)][t4] = A[(-2*t4+t5)][t4] * A[(-2*t4+t5)][t4] + A[(-2*t4+t5)][(-2*t4+t5)] - A[t4][(-2*t4+t5)-1] * 3;;
          }
        }
      }
      if ((t1 == 0) && (t2 == 0) && (t3 == 0)) {
        for (t4=3;t4<=15;t4++) {
          B[t4+1] = 3;;
          B[t4] = B[t4-1] - B[t4+1] + B[t4] * B[t4] + 3;;
          for (t5=2;t5<=t4-1;t5++) {
            lbv=0;
            ubv=t4-1;
#pragma ivdep
#pragma vector always
            for (t6=lbv;t6<=ubv;t6++) {
              C[t5][t4][t6] = C[t5-2][t4][t6] + 1;;
            }
          }
          for (t5=2*t4+1;t5<=31;t5++) {
            A[(-2*t4+t5)][t4] = A[(-2*t4+t5)][t4] * A[(-2*t4+t5)][t4] + A[(-2*t4+t5)][(-2*t4+t5)] - A[t4][(-2*t4+t5)-1] * 3;;
          }
        }
      }
      if ((t2 == 0) && (t3 == 0)) {
        for (t4=max(16,32*t1);t4<=min(PB_N-2,32*t1+31);t4++) {
          B[t4+1] = 3;;
          B[t4] = B[t4-1] - B[t4+1] + B[t4] * B[t4] + 3;;
          for (t5=2;t5<=min(31,t4-1);t5++) {
            lbv=0;
            ubv=min(31,t4-1);
#pragma ivdep
#pragma vector always
            for (t6=lbv;t6<=ubv;t6++) {
              C[t5][t4][t6] = C[t5-2][t4][t6] + 1;;
            }
          }
        }
      }
      if ((t1 == 12) && (t2 == 0) && (t3 == 0)) {
        for (t4=PB_N-1;t4<=PB_M-1;t4++) {
          for (t5=2;t5<=31;t5++) {
            lbv=0;
            ubv=31;
#pragma ivdep
#pragma vector always
            for (t6=lbv;t6<=ubv;t6++) {
              C[t5][t4][t6] = C[t5-2][t4][t6] + 1;;
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
int xc = xC;
int yc = yC;
int zc = zC;
POLYBENCH_2D_ARRAY_DECL(A, DATA_TYPE,xA,yA,xa,ya);
POLYBENCH_1D_ARRAY_DECL(B, DATA_TYPE,xB,xb);
POLYBENCH_3D_ARRAY_DECL(C, DATA_TYPE,xC,yC,zC,xc,yc,zc);
init_array(xa,ya,POLYBENCH_ARRAY(A),xb,POLYBENCH_ARRAY(B),xc,yc,zc,POLYBENCH_ARRAY(C),INIT_SEED);
kernel_3434121226_00(xa,ya,POLYBENCH_ARRAY(A),xb,POLYBENCH_ARRAY(B),xc,yc,zc,POLYBENCH_ARRAY(C));
polybench_prevent_dce(print_array(xa,ya,POLYBENCH_ARRAY(A),xb,POLYBENCH_ARRAY(B),xc,yc,zc,POLYBENCH_ARRAY(C)));
POLYBENCH_FREE_ARRAY(A);
POLYBENCH_FREE_ARRAY(B);
POLYBENCH_FREE_ARRAY(C);
return 0;
}
