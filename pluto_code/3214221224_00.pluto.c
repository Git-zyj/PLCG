#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <math.h>
#include <polybench.h>
#include <time.h>
#include <stdlib.h>
#include "3214221224_00.h"
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
static void init_array(int xa,DATA_TYPE POLYBENCH_1D(A,xA,xa),int xc,int yc,int zc,DATA_TYPE POLYBENCH_3D(C,xC,yC,zC,xc,yc,zc),int xb,int yb,DATA_TYPE POLYBENCH_2D(B,xB,yB,xb,yb),int seed)
{
srand(seed);
int i,j,k,l;
for (i = 0; i < xa; i++) {
A[i] = rand()%3;;
}
for (i = 0; i < xc; i++) {
for (j = 0; j < yc; j++) {
for (k = 0; k < zc; k++) {
C[i][j][k] = rand()%3;;
}}}
for (i = 0; i < xb; i++) {
for (j = 0; j < yb; j++) {
B[i][j] = rand()%3;;
}}
}
static void print_array(int xa,DATA_TYPE POLYBENCH_1D(A,xA,xa),int xc,int yc,int zc,DATA_TYPE POLYBENCH_3D(C,xC,yC,zC,xc,yc,zc),int xb,int yb,DATA_TYPE POLYBENCH_2D(B,xB,yB,xb,yb))
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
POLYBENCH_DUMP_BEGIN("C");
for (i = 0; i < xc; i++) {
for (j = 0; j < yc; j++) {
for (k = 0; k < zc; k++) {
fprintf (POLYBENCH_DUMP_TARGET, "\n");
fprintf (POLYBENCH_DUMP_TARGET, DATA_PRINTF_MODIFIER, C[i][j][k]);
}}}
POLYBENCH_DUMP_END("C");
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
void kernel_3214221224_00(int xa,DATA_TYPE POLYBENCH_1D(A,xA,xa),int xc,int yc,int zc,DATA_TYPE POLYBENCH_3D(C,xC,yC,zC,xc,yc,zc),int xb,int yb,DATA_TYPE POLYBENCH_2D(B,xB,yB,xb,yb)){
polybench_start_instruments;
  int t1, t2, t3, t4, t5, t6;
 int lb, ub, lbp, ubp, lb2, ub2;
 register int lbv, ubv;
/* Start of CLooG code */
for (t1=0;t1<=floord(3*PB_M-6,32);t1++) {
  lbp=max(0,ceild(32*t1-PB_M+2,32));
  ubp=min(min(floord(PB_M-2,16),floord(9568*t1+299*PB_M+31*PB_P-629,19136)),t1);
#pragma omp parallel for private(lbv,ubv,t3,t4,t5,t6)
  for (t2=lbp;t2<=ubp;t2++) {
    for (t3=0;t3<=min(min(min(floord(PB_P-1,32),floord(2400*t1-4800*t2+75*PB_M+2175,248)),floord(-800*t2+25*PB_M+9925,1064)),t2);t3++) {
      if ((t2 <= floord(PB_M-2,32)) && (t3 == 0)) {
        for (t4=32*t1-32*t2;t4<=min(min(PB_M-2,32*t2+31),32*t1-32*t2+31);t4++) {
          if ((t1 == 0) && (t2 == 0) && (t4 == 0)) {
            A[0] = A[0] * A[0] - B[0 +1][0] * A[0 +1] - 3;;
          }
          if (t1 == 2*t2) {
            for (t5=max(1,16*t1);t5<=t4-1;t5++) {
              lbv=0;
              ubv=min(31,t5-1);
#pragma ivdep
#pragma vector always
              for (t6=lbv;t6<=ubv;t6++) {
                if (t1%2 == 0) {
                  C[t5+1][t4][t6] = 1;;
                }
              }
            }
          }
          for (t5=max(max(1,32*t2),t4);t5<=min(PB_M-2,32*t2+31);t5++) {
            C[t5+1][t4][0] = 1;;
            A[(-t4+t5)] = A[(-t4+t5)] * A[(-t4+t5)] - B[t4+1][(-t4+t5)] * A[(-t4+t5)+1] - 3;;
            lbv=1;
            ubv=min(31,t5-1);
#pragma ivdep
#pragma vector always
            for (t6=lbv;t6<=ubv;t6++) {
              C[t5+1][t4][t6] = 1;;
            }
          }
          if (t2 == 12) {
            for (t5=PB_M-1;t5<=min(415,t4+PB_M-2);t5++) {
              A[(-t4+t5)] = A[(-t4+t5)] * A[(-t4+t5)] - B[t4+1][(-t4+t5)] * A[(-t4+t5)+1] - 3;;
            }
          }
        }
      }
      if ((t2 >= ceild(PB_M-1,32)) && (t3 == 0)) {
        for (t4=max(32*t1-32*t2,32*t2-PB_M+2);t4<=min(PB_M-2,32*t1-32*t2+31);t4++) {
          for (t5=32*t2;t5<=min(32*t2+31,t4+PB_M-2);t5++) {
            A[(-t4+t5)] = A[(-t4+t5)] * A[(-t4+t5)] - B[t4+1][(-t4+t5)] * A[(-t4+t5)+1] - 3;;
          }
        }
      }
      if (t3 == 0) {
        for (t4=max(32*t1-32*t2,32*t2+32);t4<=min(PB_M-2,32*t1-32*t2+31);t4++) {
          for (t5=max(1,32*t2);t5<=32*t2+31;t5++) {
            lbv=0;
            ubv=min(31,t5-1);
#pragma ivdep
#pragma vector always
            for (t6=lbv;t6<=ubv;t6++) {
              C[t5+1][t4][t6] = 1;;
            }
          }
        }
      }
      if ((t2 <= floord(PB_M-2,32)) && (t3 >= 1)) {
        for (t4=32*t1-32*t2;t4<=min(PB_M-2,32*t1-32*t2+31);t4++) {
          for (t5=max(32*t2,32*t3+1);t5<=min(PB_M-2,32*t2+31);t5++) {
            lbv=32*t3;
            ubv=min(min(PB_P-1,32*t3+31),t5-1);
#pragma ivdep
#pragma vector always
            for (t6=lbv;t6<=ubv;t6++) {
              C[t5+1][t4][t6] = 1;;
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
int xc = xC;
int yc = yC;
int zc = zC;
int xb = xB;
int yb = yB;
POLYBENCH_1D_ARRAY_DECL(A, DATA_TYPE,xA,xa);
POLYBENCH_3D_ARRAY_DECL(C, DATA_TYPE,xC,yC,zC,xc,yc,zc);
POLYBENCH_2D_ARRAY_DECL(B, DATA_TYPE,xB,yB,xb,yb);
init_array(xa,POLYBENCH_ARRAY(A),xc,yc,zc,POLYBENCH_ARRAY(C),xb,yb,POLYBENCH_ARRAY(B),INIT_SEED);
kernel_3214221224_00(xa,POLYBENCH_ARRAY(A),xc,yc,zc,POLYBENCH_ARRAY(C),xb,yb,POLYBENCH_ARRAY(B));
polybench_prevent_dce(print_array(xa,POLYBENCH_ARRAY(A),xc,yc,zc,POLYBENCH_ARRAY(C),xb,yb,POLYBENCH_ARRAY(B)));
POLYBENCH_FREE_ARRAY(A);
POLYBENCH_FREE_ARRAY(C);
POLYBENCH_FREE_ARRAY(B);
return 0;
}
