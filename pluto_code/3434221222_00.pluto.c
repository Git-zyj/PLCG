#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <math.h>
#include <polybench.h>
#include <time.h>
#include <stdlib.h>
#include "3434221222_00.h"
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
static void init_array(int xa,DATA_TYPE POLYBENCH_1D(A,xA,xa),int xc,int yc,int zc,DATA_TYPE POLYBENCH_3D(C,xC,yC,zC,xc,yc,zc),int xb,DATA_TYPE POLYBENCH_1D(B,xB,xb),int xe,int ye,int ze,DATA_TYPE POLYBENCH_3D(E,xE,yE,zE,xe,ye,ze),int xd,int yd,DATA_TYPE POLYBENCH_2D(D,xD,yD,xd,yd),int seed)
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
B[i] = rand()%3;;
}
for (i = 0; i < xe; i++) {
for (j = 0; j < ye; j++) {
for (k = 0; k < ze; k++) {
E[i][j][k] = rand()%3;;
}}}
for (i = 0; i < xd; i++) {
for (j = 0; j < yd; j++) {
D[i][j] = rand()%3;;
}}
}
static void print_array(int xa,DATA_TYPE POLYBENCH_1D(A,xA,xa),int xc,int yc,int zc,DATA_TYPE POLYBENCH_3D(C,xC,yC,zC,xc,yc,zc),int xb,DATA_TYPE POLYBENCH_1D(B,xB,xb),int xe,int ye,int ze,DATA_TYPE POLYBENCH_3D(E,xE,yE,zE,xe,ye,ze),int xd,int yd,DATA_TYPE POLYBENCH_2D(D,xD,yD,xd,yd))
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
fprintf (POLYBENCH_DUMP_TARGET, "\n");
fprintf (POLYBENCH_DUMP_TARGET, DATA_PRINTF_MODIFIER, B[i]);
}
POLYBENCH_DUMP_END("B");
POLYBENCH_DUMP_FINISH;
POLYBENCH_DUMP_START;
POLYBENCH_DUMP_BEGIN("E");
for (i = 0; i < xe; i++) {
for (j = 0; j < ye; j++) {
for (k = 0; k < ze; k++) {
fprintf (POLYBENCH_DUMP_TARGET, "\n");
fprintf (POLYBENCH_DUMP_TARGET, DATA_PRINTF_MODIFIER, E[i][j][k]);
}}}
POLYBENCH_DUMP_END("E");
POLYBENCH_DUMP_FINISH;
POLYBENCH_DUMP_START;
POLYBENCH_DUMP_BEGIN("D");
for (i = 0; i < xd; i++) {
for (j = 0; j < yd; j++) {
fprintf (POLYBENCH_DUMP_TARGET, "\n");
fprintf (POLYBENCH_DUMP_TARGET, DATA_PRINTF_MODIFIER, D[i][j]);
}}
POLYBENCH_DUMP_END("D");
POLYBENCH_DUMP_FINISH;
}
void kernel_3434221222_00(int xa,DATA_TYPE POLYBENCH_1D(A,xA,xa),int xc,int yc,int zc,DATA_TYPE POLYBENCH_3D(C,xC,yC,zC,xc,yc,zc),int xb,DATA_TYPE POLYBENCH_1D(B,xB,xb),int xe,int ye,int ze,DATA_TYPE POLYBENCH_3D(E,xE,yE,zE,xe,ye,ze),int xd,int yd,DATA_TYPE POLYBENCH_2D(D,xD,yD,xd,yd)){
polybench_start_instruments;
  int t1, t2, t3, t4, t5, t6, t7;
 int lb, ub, lbp, ubp, lb2, ub2;
 register int lbv, ubv;
/* Start of CLooG code */
lbp=0;
ubp=floord(12*PB_L-12,299);
#pragma omp parallel for private(lbv,ubv,t2,t3,t4,t5,t6,t7)
for (t1=lbp;t1<=ubp;t1++) {
  for (t2=0;t2<=min(floord(-25*t1+300,7),floord(PB_L-1,32));t2++) {
    for (t3=0;t3<=min(floord(PB_L-1,32),floord(-299*t1+12*PB_L-12,85));t3++) {
      if ((t1 == 0) && (t2 == 0) && (t3 == 0)) {
        C[1][0][1] = D[1 -1][0] * 1;;
        A[1] = B[1 -1] + A[1] + 1;;
        for (t6=1;t6<=31;t6++) {
          C[1][0][1] = D[1 -1][t6] * 1;;
        }
        for (t5=1;t5<=31;t5++) {
          for (t6=0;t6<=31;t6++) {
            C[1][t5][1] = D[1 -1][t6] * 1;;
          }
        }
      }
      if (t3 == 0) {
        for (t4=max(1,32*t1);t4<=min(32*t2,32*t1+31);t4++) {
          for (t5=32*t2;t5<=min(PB_L-1,32*t2+31);t5++) {
            for (t6=0;t6<=31;t6++) {
              C[t4][t5][t4] = D[t4-1][t6] * 1;;
            }
          }
        }
      }
      if (t3 >= 1) {
        for (t4=max(1,32*t1);t4<=min(32*t2,32*t1+31);t4++) {
          for (t5=32*t2;t5<=min(PB_L-1,32*t2+31);t5++) {
            for (t6=32*t3;t6<=min(PB_L-1,32*t3+31);t6++) {
              C[t4][t5][t4] = D[t4-1][t6] * 1;;
            }
          }
        }
      }
      if ((t2 == 0) && (t3 == 0)) {
        for (t4=max(2,32*t1);t4<=min(PB_L-1,32*t1+31);t4++) {
          C[t4][0][t4] = D[t4-1][0] * 1;;
          A[t4] = B[t4-1] + A[t4] + 1;;
          B[(t4-1)] = B[(t4-1)] - 6;;
          for (t6=1;t6<=31;t6++) {
            C[t4][0][t4] = D[t4-1][t6] * 1;;
          }
          for (t5=1;t5<=min(31,t4-1);t5++) {
            for (t6=0;t6<=min(31,t4-1);t6++) {
              E[t4][t5-1][t5] = E[t4][t5-1][t5] + C[t6][t4][t4] - 5;;
              C[t4][t5][t4] = D[t4-1][t6] * 1;;
            }
            if (t1 == 0) {
              for (t6=t4;t6<=31;t6++) {
                C[t4][t5][t4] = D[t4-1][t6] * 1;;
              }
            }
          }
          if (t1 == 0) {
            for (t5=t4;t5<=31;t5++) {
              for (t6=0;t6<=31;t6++) {
                C[t4][t5][t4] = D[t4-1][t6] * 1;;
              }
            }
          }
        }
      }
      if ((t1 == 9) && (t2 == 0) && (t3 == 0)) {
        A[PB_L] = B[PB_L-1] + A[PB_L] + 1;;
        B[(PB_L-1)] = B[(PB_L-1)] - 6;;
      }
      if ((t2 == 0) && (t3 == 0)) {
        for (t4=max(32*t1,PB_L+1);t4<=min(PB_M-1,32*t1+31);t4++) {
          A[t4] = B[t4-1] + A[t4] + 1;;
        }
      }
      if ((t2 >= 1) && (t3 == 0)) {
        for (t4=max(32*t1,32*t2+1);t4<=min(PB_L-1,32*t1+31);t4++) {
          for (t5=32*t2;t5<=min(32*t2+31,t4-1);t5++) {
            for (t6=0;t6<=31;t6++) {
              E[t4][t5-1][t5] = E[t4][t5-1][t5] + C[t6][t4][t4] - 5;;
              C[t4][t5][t4] = D[t4-1][t6] * 1;;
            }
          }
          if (t1 == t2) {
            for (t5=t4;t5<=min(PB_L-1,32*t1+31);t5++) {
              for (t6=0;t6<=31;t6++) {
                C[t4][t5][t4] = D[t4-1][t6] * 1;;
              }
            }
          }
        }
      }
      for (t4=max(32*t1,32*t2+1);t4<=min(32*t3,32*t1+31);t4++) {
        for (t5=32*t2;t5<=32*t2+31;t5++) {
          for (t6=32*t3;t6<=min(PB_L-1,32*t3+31);t6++) {
            C[t4][t5][t4] = D[t4-1][t6] * 1;;
          }
        }
      }
      if (t3 >= 1) {
        for (t4=max(max(32*t1,32*t2+1),32*t3+1);t4<=min(PB_L-1,32*t1+31);t4++) {
          if (t2 == 0) {
            for (t6=32*t3;t6<=min(PB_L-1,32*t3+31);t6++) {
              C[t4][0][t4] = D[t4-1][t6] * 1;;
            }
          }
          for (t5=max(1,32*t2);t5<=min(32*t2+31,t4-1);t5++) {
            for (t6=32*t3;t6<=min(32*t3+31,t4-1);t6++) {
              E[t4][t5-1][t5] = E[t4][t5-1][t5] + C[t6][t4][t4] - 5;;
              C[t4][t5][t4] = D[t4-1][t6] * 1;;
            }
            if (t1 == t3) {
              for (t6=t4;t6<=min(PB_L-1,32*t1+31);t6++) {
                C[t4][t5][t4] = D[t4-1][t6] * 1;;
              }
            }
          }
          if (t1 == t2) {
            for (t5=t4;t5<=min(PB_L-1,32*t1+31);t5++) {
              for (t6=32*t3;t6<=min(PB_L-1,32*t3+31);t6++) {
                C[t4][t5][t4] = D[t4-1][t6] * 1;;
              }
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
int xe = xE;
int ye = yE;
int ze = zE;
int xd = xD;
int yd = yD;
POLYBENCH_1D_ARRAY_DECL(A, DATA_TYPE,xA,xa);
POLYBENCH_3D_ARRAY_DECL(C, DATA_TYPE,xC,yC,zC,xc,yc,zc);
POLYBENCH_1D_ARRAY_DECL(B, DATA_TYPE,xB,xb);
POLYBENCH_3D_ARRAY_DECL(E, DATA_TYPE,xE,yE,zE,xe,ye,ze);
POLYBENCH_2D_ARRAY_DECL(D, DATA_TYPE,xD,yD,xd,yd);
init_array(xa,POLYBENCH_ARRAY(A),xc,yc,zc,POLYBENCH_ARRAY(C),xb,POLYBENCH_ARRAY(B),xe,ye,ze,POLYBENCH_ARRAY(E),xd,yd,POLYBENCH_ARRAY(D),INIT_SEED);
kernel_3434221222_00(xa,POLYBENCH_ARRAY(A),xc,yc,zc,POLYBENCH_ARRAY(C),xb,POLYBENCH_ARRAY(B),xe,ye,ze,POLYBENCH_ARRAY(E),xd,yd,POLYBENCH_ARRAY(D));
polybench_prevent_dce(print_array(xa,POLYBENCH_ARRAY(A),xc,yc,zc,POLYBENCH_ARRAY(C),xb,POLYBENCH_ARRAY(B),xe,ye,ze,POLYBENCH_ARRAY(E),xd,yd,POLYBENCH_ARRAY(D)));
POLYBENCH_FREE_ARRAY(A);
POLYBENCH_FREE_ARRAY(C);
POLYBENCH_FREE_ARRAY(B);
POLYBENCH_FREE_ARRAY(E);
POLYBENCH_FREE_ARRAY(D);
return 0;
}
