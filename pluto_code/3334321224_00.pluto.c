#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <math.h>
#include <polybench.h>
#include <time.h>
#include <stdlib.h>
#include "3334321224_00.h"
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
static void init_array(int xa,int ya,int za,DATA_TYPE POLYBENCH_3D(A,xA,yA,zA,xa,ya,za),int xb,int yb,int zb,DATA_TYPE POLYBENCH_3D(B,xB,yB,zB,xb,yb,zb),int xd,int yd,DATA_TYPE POLYBENCH_2D(D,xD,yD,xd,yd),int xc,int yc,int zc,DATA_TYPE POLYBENCH_3D(C,xC,yC,zC,xc,yc,zc),int xe,int ye,DATA_TYPE POLYBENCH_2D(E,xE,yE,xe,ye),int seed)
{
srand(seed);
int i,j,k,l;
for (i = 0; i < xa; i++) {
for (j = 0; j < ya; j++) {
for (k = 0; k < za; k++) {
A[i][j][k] = rand()%3;;
}}}
for (i = 0; i < xb; i++) {
for (j = 0; j < yb; j++) {
for (k = 0; k < zb; k++) {
B[i][j][k] = rand()%3;;
}}}
for (i = 0; i < xd; i++) {
for (j = 0; j < yd; j++) {
D[i][j] = rand()%3;;
}}
for (i = 0; i < xc; i++) {
for (j = 0; j < yc; j++) {
for (k = 0; k < zc; k++) {
C[i][j][k] = rand()%3;;
}}}
for (i = 0; i < xe; i++) {
for (j = 0; j < ye; j++) {
E[i][j] = rand()%3;;
}}
}
static void print_array(int xa,int ya,int za,DATA_TYPE POLYBENCH_3D(A,xA,yA,zA,xa,ya,za),int xb,int yb,int zb,DATA_TYPE POLYBENCH_3D(B,xB,yB,zB,xb,yb,zb),int xd,int yd,DATA_TYPE POLYBENCH_2D(D,xD,yD,xd,yd),int xc,int yc,int zc,DATA_TYPE POLYBENCH_3D(C,xC,yC,zC,xc,yc,zc),int xe,int ye,DATA_TYPE POLYBENCH_2D(E,xE,yE,xe,ye))
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
POLYBENCH_DUMP_START;
POLYBENCH_DUMP_BEGIN("D");
for (i = 0; i < xd; i++) {
for (j = 0; j < yd; j++) {
fprintf (POLYBENCH_DUMP_TARGET, "\n");
fprintf (POLYBENCH_DUMP_TARGET, DATA_PRINTF_MODIFIER, D[i][j]);
}}
POLYBENCH_DUMP_END("D");
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
POLYBENCH_DUMP_BEGIN("E");
for (i = 0; i < xe; i++) {
for (j = 0; j < ye; j++) {
fprintf (POLYBENCH_DUMP_TARGET, "\n");
fprintf (POLYBENCH_DUMP_TARGET, DATA_PRINTF_MODIFIER, E[i][j]);
}}
POLYBENCH_DUMP_END("E");
POLYBENCH_DUMP_FINISH;
}
void kernel_3334321224_00(int xa,int ya,int za,DATA_TYPE POLYBENCH_3D(A,xA,yA,zA,xa,ya,za),int xb,int yb,int zb,DATA_TYPE POLYBENCH_3D(B,xB,yB,zB,xb,yb,zb),int xd,int yd,DATA_TYPE POLYBENCH_2D(D,xD,yD,xd,yd),int xc,int yc,int zc,DATA_TYPE POLYBENCH_3D(C,xC,yC,zC,xc,yc,zc),int xe,int ye,DATA_TYPE POLYBENCH_2D(E,xE,yE,xe,ye)){
polybench_start_instruments;
  int t1, t2, t3, t4, t5, t6;
 int lb, ub, lbp, ubp, lb2, ub2;
 register int lbv, ubv;
/* Start of CLooG code */
lbp=0;
ubp=floord(PB_L-1,32);
#pragma omp parallel for private(lbv,ubv,t2,t3,t4,t5,t6)
for (t1=lbp;t1<=ubp;t1++) {
  for (t2=-1;t2<=floord(PB_P-1,32);t2++) {
    for (t3=0;t3<=min(floord(25*t2+25,2),floord(PB_M-1,32));t3++) {
      if ((t1 == 0) && (t2 >= 0) && (t3 == 0)) {
        if (t2 == 0) {
          for (t5=0;t5<=1;t5++) {
            D[0][0 +1] = D[0][0 +1] + E[0][t5+1] - 3;;
          }
        }
        for (t5=max(2,32*t2);t5<=min(PB_L-4,32*t2+31);t5++) {
          D[0][0 +1] = D[0][0 +1] + E[0][t5+1] - 3;;
          for (t6=1;t6<=min(31,t5-1);t6++) {
            A[0][t6][t5+1] = A[0][t6][t5+3] + B[t5][0][t6-1] * 6;;
          }
        }
        if (t2 == 9) {
          for (t5=PB_L-3;t5<=PB_P-2;t5++) {
            D[0][0 +1] = D[0][0 +1] + E[0][t5+1] - 3;;
          }
        }
      }
      if ((t1 == 0) && (t2 >= t3) && (t3 >= 1)) {
        for (t5=max(32*t2,32*t3+1);t5<=min(PB_L-4,32*t2+31);t5++) {
          for (t6=32*t3;t6<=min(32*t3+31,t5-1);t6++) {
            A[0][t6][t5+1] = A[0][t6][t5+3] + B[t5][0][t6-1] * 6;;
          }
        }
      }
      if ((t2 >= 0) && (t2 <= t3-1)) {
        for (t4=max(1,32*t1);t4<=min(min(PB_L-1,32*t1+31),32*t3+30);t4++) {
          for (t5=32*t2;t5<=min(PB_P-1,32*t2+31);t5++) {
            for (t6=max(32*t3,t4+1);t6<=min(PB_M-1,32*t3+31);t6++) {
              B[t5][t4][t5] = B[t5][t4][t5] - B[t5][t4][t5] - C[t6][t5][t4-1] - 1;;
            }
          }
        }
      }
      if ((t2 == -1) && (t3 == 0)) {
        for (t4=32*t1;t4<=min(PB_L-2,32*t1+31);t4++) {
          D[t4][t4+1] = D[t4][t4+1] + E[t4][-1 +1] - 3;;
        }
      }
      if ((t1 == 0) && (t2 >= 0) && (t3 == 0)) {
        for (t4=1;t4<=30;t4++) {
          if (t2 == 0) {
            for (t5=0;t5<=1;t5++) {
              D[t4][t4+1] = D[t4][t4+1] + E[t4][t5+1] - 3;;
              for (t6=t4+1;t6<=31;t6++) {
                B[t5][t4][t5] = B[t5][t4][t5] - B[t5][t4][t5] - C[t6][t5][t4-1] - 1;;
              }
            }
          }
          for (t5=max(2,32*t2);t5<=min(PB_L-4,32*t2+31);t5++) {
            D[t4][t4+1] = D[t4][t4+1] + E[t4][t5+1] - 3;;
            for (t6=1;t6<=min(t4,t5-1);t6++) {
              A[t4][t6][t5+1] = A[t4][t6][t5+3] + B[t5][t4][t6-1] * 6;;
            }
            for (t6=t4+1;t6<=min(31,t5-1);t6++) {
              A[t4][t6][t5+1] = A[t4][t6][t5+3] + B[t5][t4][t6-1] * 6;;
              B[t5][t4][t5] = B[t5][t4][t5] - B[t5][t4][t5] - C[t6][t5][t4-1] - 1;;
            }
            if (t2 == 0) {
              for (t6=max(t5,t4+1);t6<=31;t6++) {
                B[t5][t4][t5] = B[t5][t4][t5] - B[t5][t4][t5] - C[t6][t5][t4-1] - 1;;
              }
            }
          }
          if (t2 == 9) {
            for (t5=PB_L-3;t5<=PB_P-2;t5++) {
              D[t4][t4+1] = D[t4][t4+1] + E[t4][t5+1] - 3;;
              for (t6=t4+1;t6<=31;t6++) {
                B[t5][t4][t5] = B[t5][t4][t5] - B[t5][t4][t5] - C[t6][t5][t4-1] - 1;;
              }
            }
          }
          if (t2 == 9) {
            for (t6=t4+1;t6<=31;t6++) {
              B[(PB_P-1)][t4][(PB_P-1)] = B[(PB_P-1)][t4][(PB_P-1)] - B[(PB_P-1)][t4][(PB_P-1)] - C[t6][(PB_P-1)][t4-1] - 1;;
            }
          }
        }
      }
      if ((t2 >= t3) && (t3 >= 1)) {
        for (t4=max(1,32*t1);t4<=min(min(PB_L-1,32*t1+31),32*t3+30);t4++) {
          if (t2 == t3) {
            for (t6=max(32*t2,t4+1);t6<=32*t2+31;t6++) {
              B[32*t2][t4][32*t2] = B[32*t2][t4][32*t2] - B[32*t2][t4][32*t2] - C[t6][32*t2][t4-1] - 1;;
            }
          }
          for (t5=max(32*t2,32*t3+1);t5<=min(PB_L-4,32*t2+31);t5++) {
            if (t1 == t3) {
              for (t6=32*t1;t6<=min(t4,t5-1);t6++) {
                A[t4][t6][t5+1] = A[t4][t6][t5+3] + B[t5][t4][t6-1] * 6;;
              }
            }
            for (t6=max(32*t3,t4+1);t6<=min(32*t3+31,t5-1);t6++) {
              A[t4][t6][t5+1] = A[t4][t6][t5+3] + B[t5][t4][t6-1] * 6;;
              B[t5][t4][t5] = B[t5][t4][t5] - B[t5][t4][t5] - C[t6][t5][t4-1] - 1;;
            }
            if (t2 == t3) {
              for (t6=max(t5,t4+1);t6<=32*t2+31;t6++) {
                B[t5][t4][t5] = B[t5][t4][t5] - B[t5][t4][t5] - C[t6][t5][t4-1] - 1;;
              }
            }
          }
          if (t2 == 9) {
            for (t5=PB_L-3;t5<=PB_P-1;t5++) {
              for (t6=max(32*t3,t4+1);t6<=32*t3+31;t6++) {
                B[t5][t4][t5] = B[t5][t4][t5] - B[t5][t4][t5] - C[t6][t5][t4-1] - 1;;
              }
            }
          }
        }
      }
      if ((t2 >= 0) && (t3 == 0)) {
        for (t4=max(31,32*t1);t4<=min(PB_L-2,32*t1+31);t4++) {
          if (t2 == 0) {
            for (t5=0;t5<=1;t5++) {
              D[t4][t4+1] = D[t4][t4+1] + E[t4][t5+1] - 3;;
            }
          }
          for (t5=max(2,32*t2);t5<=min(PB_L-4,32*t2+31);t5++) {
            D[t4][t4+1] = D[t4][t4+1] + E[t4][t5+1] - 3;;
            for (t6=1;t6<=min(31,t5-1);t6++) {
              A[t4][t6][t5+1] = A[t4][t6][t5+3] + B[t5][t4][t6-1] * 6;;
            }
          }
          if (t2 == 9) {
            for (t5=PB_L-3;t5<=PB_P-2;t5++) {
              D[t4][t4+1] = D[t4][t4+1] + E[t4][t5+1] - 3;;
            }
          }
        }
      }
      if ((t1 == 9) && (t2 >= 0) && (t3 == 0)) {
        for (t5=max(2,32*t2);t5<=min(PB_L-4,32*t2+31);t5++) {
          for (t6=1;t6<=min(31,t5-1);t6++) {
            A[(PB_L-1)][t6][t5+1] = A[(PB_L-1)][t6][t5+3] + B[t5][(PB_L-1)][t6-1] * 6;;
          }
        }
      }
      if ((t2 >= t3) && (t3 >= 1)) {
        for (t4=max(32*t1,32*t3+31);t4<=min(PB_L-1,32*t1+31);t4++) {
          for (t5=max(32*t2,32*t3+1);t5<=min(PB_L-4,32*t2+31);t5++) {
            for (t6=32*t3;t6<=min(32*t3+31,t5-1);t6++) {
              A[t4][t6][t5+1] = A[t4][t6][t5+3] + B[t5][t4][t6-1] * 6;;
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
int za = zA;
int xb = xB;
int yb = yB;
int zb = zB;
int xd = xD;
int yd = yD;
int xc = xC;
int yc = yC;
int zc = zC;
int xe = xE;
int ye = yE;
POLYBENCH_3D_ARRAY_DECL(A, DATA_TYPE,xA,yA,zA,xa,ya,za);
POLYBENCH_3D_ARRAY_DECL(B, DATA_TYPE,xB,yB,zB,xb,yb,zb);
POLYBENCH_2D_ARRAY_DECL(D, DATA_TYPE,xD,yD,xd,yd);
POLYBENCH_3D_ARRAY_DECL(C, DATA_TYPE,xC,yC,zC,xc,yc,zc);
POLYBENCH_2D_ARRAY_DECL(E, DATA_TYPE,xE,yE,xe,ye);
init_array(xa,ya,za,POLYBENCH_ARRAY(A),xb,yb,zb,POLYBENCH_ARRAY(B),xd,yd,POLYBENCH_ARRAY(D),xc,yc,zc,POLYBENCH_ARRAY(C),xe,ye,POLYBENCH_ARRAY(E),INIT_SEED);
kernel_3334321224_00(xa,ya,za,POLYBENCH_ARRAY(A),xb,yb,zb,POLYBENCH_ARRAY(B),xd,yd,POLYBENCH_ARRAY(D),xc,yc,zc,POLYBENCH_ARRAY(C),xe,ye,POLYBENCH_ARRAY(E));
polybench_prevent_dce(print_array(xa,ya,za,POLYBENCH_ARRAY(A),xb,yb,zb,POLYBENCH_ARRAY(B),xd,yd,POLYBENCH_ARRAY(D),xc,yc,zc,POLYBENCH_ARRAY(C),xe,ye,POLYBENCH_ARRAY(E)));
POLYBENCH_FREE_ARRAY(A);
POLYBENCH_FREE_ARRAY(B);
POLYBENCH_FREE_ARRAY(D);
POLYBENCH_FREE_ARRAY(C);
POLYBENCH_FREE_ARRAY(E);
return 0;
}
