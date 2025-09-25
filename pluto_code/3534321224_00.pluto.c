#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <math.h>
#include <polybench.h>
#include <time.h>
#include <stdlib.h>
#include "3534321224_00.h"
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
static void init_array(int xa,int ya,DATA_TYPE POLYBENCH_2D(A,xA,yA,xa,ya),int xc,int yc,int zc,DATA_TYPE POLYBENCH_3D(C,xC,yC,zC,xc,yc,zc),int xd,int yd,DATA_TYPE POLYBENCH_2D(D,xD,yD,xd,yd),int xf,DATA_TYPE POLYBENCH_1D(F,xF,xf),int xb,int yb,int zb,DATA_TYPE POLYBENCH_3D(B,xB,yB,zB,xb,yb,zb),int xe,int ye,DATA_TYPE POLYBENCH_2D(E,xE,yE,xe,ye),int seed)
{
srand(seed);
int i,j,k,l;
for (i = 0; i < xa; i++) {
for (j = 0; j < ya; j++) {
A[i][j] = rand()%3;;
}}
for (i = 0; i < xc; i++) {
for (j = 0; j < yc; j++) {
for (k = 0; k < zc; k++) {
C[i][j][k] = rand()%3;;
}}}
for (i = 0; i < xd; i++) {
for (j = 0; j < yd; j++) {
D[i][j] = rand()%3;;
}}
for (i = 0; i < xf; i++) {
F[i] = rand()%3;;
}
for (i = 0; i < xb; i++) {
for (j = 0; j < yb; j++) {
for (k = 0; k < zb; k++) {
B[i][j][k] = rand()%3;;
}}}
for (i = 0; i < xe; i++) {
for (j = 0; j < ye; j++) {
E[i][j] = rand()%3;;
}}
}
static void print_array(int xa,int ya,DATA_TYPE POLYBENCH_2D(A,xA,yA,xa,ya),int xc,int yc,int zc,DATA_TYPE POLYBENCH_3D(C,xC,yC,zC,xc,yc,zc),int xd,int yd,DATA_TYPE POLYBENCH_2D(D,xD,yD,xd,yd),int xf,DATA_TYPE POLYBENCH_1D(F,xF,xf),int xb,int yb,int zb,DATA_TYPE POLYBENCH_3D(B,xB,yB,zB,xb,yb,zb),int xe,int ye,DATA_TYPE POLYBENCH_2D(E,xE,yE,xe,ye))
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
POLYBENCH_DUMP_BEGIN("D");
for (i = 0; i < xd; i++) {
for (j = 0; j < yd; j++) {
fprintf (POLYBENCH_DUMP_TARGET, "\n");
fprintf (POLYBENCH_DUMP_TARGET, DATA_PRINTF_MODIFIER, D[i][j]);
}}
POLYBENCH_DUMP_END("D");
POLYBENCH_DUMP_FINISH;
POLYBENCH_DUMP_START;
POLYBENCH_DUMP_BEGIN("F");
for (i = 0; i < xf; i++) {
fprintf (POLYBENCH_DUMP_TARGET, "\n");
fprintf (POLYBENCH_DUMP_TARGET, DATA_PRINTF_MODIFIER, F[i]);
}
POLYBENCH_DUMP_END("F");
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
POLYBENCH_DUMP_BEGIN("E");
for (i = 0; i < xe; i++) {
for (j = 0; j < ye; j++) {
fprintf (POLYBENCH_DUMP_TARGET, "\n");
fprintf (POLYBENCH_DUMP_TARGET, DATA_PRINTF_MODIFIER, E[i][j]);
}}
POLYBENCH_DUMP_END("E");
POLYBENCH_DUMP_FINISH;
}
void kernel_3534321224_00(int xa,int ya,DATA_TYPE POLYBENCH_2D(A,xA,yA,xa,ya),int xc,int yc,int zc,DATA_TYPE POLYBENCH_3D(C,xC,yC,zC,xc,yc,zc),int xd,int yd,DATA_TYPE POLYBENCH_2D(D,xD,yD,xd,yd),int xf,DATA_TYPE POLYBENCH_1D(F,xF,xf),int xb,int yb,int zb,DATA_TYPE POLYBENCH_3D(B,xB,yB,zB,xb,yb,zb),int xe,int ye,DATA_TYPE POLYBENCH_2D(E,xE,yE,xe,ye)){
polybench_start_instruments;
  int t1, t2, t3, t4, t5, t6, t7, t8;
 int lb, ub, lbp, ubp, lb2, ub2;
 register int lbv, ubv;
/* Start of CLooG code */
lbp=0;
ubp=floord(PB_M-1,32);
#pragma omp parallel for private(lbv,ubv,t3,t4,t5,t6,t7,t8)
for (t2=lbp;t2<=ubp;t2++) {
  for (t3=0;t3<=floord(PB_M-1,32);t3++) {
    for (t4=max(1,32*t3);t4<=min(PB_M-1,32*t3+31);t4++) {
      lbv=32*t2;
      ubv=min(PB_M-1,32*t2+31);
#pragma ivdep
#pragma vector always
      for (t5=lbv;t5<=ubv;t5++) {
        F[t5] = 1;;
      }
    }
  }
}
lbp=0;
ubp=12;
#pragma omp parallel for private(lbv,ubv,t3,t4,t5,t6,t7,t8)
for (t2=lbp;t2<=ubp;t2++) {
  for (t3=0;t3<=floord(PB_P-4,32);t3++) {
    for (t4=max(ceild(2*t2-2*t3-25,25),ceild(10528*t2+3296*t3-329*PB_N+329,3296));t4<=min(min(floord(PB_M-2,32),floord(-6496*t2+3296*t3+203*PB_N-203,3296)),floord(-5312*t2+5312*t3+133*PB_M+166*PB_N-66666,4256));t4++) {
      if (t3 == t4) {
        for (t5=max(1,32*t2);t5<=min(min(PB_P-5,32*t2+31),32*t3+30);t5++) {
          if (t2 == t3) {
            for (t6=max(1,32*t2);t6<=t5;t6++) {
              D[(t5-1)+1][t6+1] = D[(t5-1)+1][t6] + E[t6][(t5-1)] - 2;;
            }
          }
          for (t6=max(32*t3,t5+1);t6<=min(PB_P-4,32*t3+31);t6++) {
            for (t7=32*t3;t7<=t6-1;t7++) {
              C[t6][t5][t5] = C[t6][t5-1][t5] + D[t5][t7+1] + 6;;
            }
            C[t6][t5][t5] = C[t6][t5-1][t5] + D[t5][t6+1] + 6;;
            D[(t5-1)+1][t6+1] = D[(t5-1)+1][t6] + E[t6][(t5-1)] - 2;;
            for (t7=t6+1;t7<=32*t3+31;t7++) {
              C[t6][t5][t5] = C[t6][t5-1][t5] + D[t5][t7+1] + 6;;
            }
          }
        }
      }
      if (t3 <= t4-1) {
        for (t5=max(1,32*t2);t5<=min(min(PB_P-5,32*t2+31),32*t3+30);t5++) {
          for (t6=max(32*t3,t5+1);t6<=min(PB_P-4,32*t3+31);t6++) {
            for (t7=32*t4;t7<=min(PB_M-2,32*t4+31);t7++) {
              C[t6][t5][t5] = C[t6][t5-1][t5] + D[t5][t7+1] + 6;;
            }
          }
        }
      }
      if (t3 >= t4+1) {
        for (t5=max(1,32*t2);t5<=min(min(PB_P-5,32*t2+31),32*t3+30);t5++) {
          for (t6=max(32*t3,t5+1);t6<=min(PB_P-4,32*t3+31);t6++) {
            for (t7=max(-1,32*t4);t7<=32*t4+31;t7++) {
              C[t6][t5][t5] = C[t6][t5-1][t5] + D[t5][t7+1] + 6;;
            }
          }
        }
      }
      if ((t2 == 9) && (t3 == 9) && (t4 == 9)) {
        for (t5=PB_P-4;t5<=318;t5++) {
          for (t6=288;t6<=PB_P-4;t6++) {
            D[(t5-1)+1][t6+1] = D[(t5-1)+1][t6] + E[t6][(t5-1)] - 2;;
          }
        }
      }
      if (t3 == t4) {
        for (t5=max(32*t2,32*t3+31);t5<=min(PB_N-1,32*t2+31);t5++) {
          for (t6=max(1,32*t3);t6<=min(PB_P-4,32*t3+31);t6++) {
            D[(t5-1)+1][t6+1] = D[(t5-1)+1][t6] + E[t6][(t5-1)] - 2;;
          }
        }
      }
    }
  }
}
lbp=0;
ubp=floord(PB_M+PB_N-2,32);
#pragma omp parallel for private(lbv,ubv,t3,t4,t5,t6,t7,t8)
for (t2=lbp;t2<=ubp;t2++) {
  for (t3=max(0,ceild(32*t2-PB_N-30,32));t3<=min(floord(PB_M-1,32),t2);t3++) {
    for (t4=max(max(2,32*t2),32*t3+1);t4<=min(min(32*t2+31,PB_M+PB_N-2),32*t3+PB_N+30);t4++) {
      for (t5=max(max(1,32*t3),t4-PB_N+1);t5<=min(min(PB_M-1,32*t3+31),t4-1);t5++) {
        D[(t4-t5)][t5-1] = D[(t4-t5)-1][t5] * 3;;
      }
    }
  }
}
lbp=0;
ubp=floord(PB_P-4,32);
#pragma omp parallel for private(lbv,ubv,t3,t4,t5,t6,t7,t8)
for (t2=lbp;t2<=ubp;t2++) {
  for (t3=0;t3<=t2;t3++) {
    for (t4=max(32*t2,32*t3+1);t4<=min(PB_P-4,32*t2+31);t4++) {
      for (t5=32*t3;t5<=min(32*t3+31,t4-1);t5++) {
        for (t6=0;t6<=PB_M-1;t6++) {
          A[t4-1][t4+1] = A[t4-1][t4+3] - A[t4-1][t4+3] + B[t4][t4-1][t5+1] + 1;;
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
int xc = xC;
int yc = yC;
int zc = zC;
int xd = xD;
int yd = yD;
int xf = xF;
int xb = xB;
int yb = yB;
int zb = zB;
int xe = xE;
int ye = yE;
POLYBENCH_2D_ARRAY_DECL(A, DATA_TYPE,xA,yA,xa,ya);
POLYBENCH_3D_ARRAY_DECL(C, DATA_TYPE,xC,yC,zC,xc,yc,zc);
POLYBENCH_2D_ARRAY_DECL(D, DATA_TYPE,xD,yD,xd,yd);
POLYBENCH_1D_ARRAY_DECL(F, DATA_TYPE,xF,xf);
POLYBENCH_3D_ARRAY_DECL(B, DATA_TYPE,xB,yB,zB,xb,yb,zb);
POLYBENCH_2D_ARRAY_DECL(E, DATA_TYPE,xE,yE,xe,ye);
init_array(xa,ya,POLYBENCH_ARRAY(A),xc,yc,zc,POLYBENCH_ARRAY(C),xd,yd,POLYBENCH_ARRAY(D),xf,POLYBENCH_ARRAY(F),xb,yb,zb,POLYBENCH_ARRAY(B),xe,ye,POLYBENCH_ARRAY(E),INIT_SEED);
kernel_3534321224_00(xa,ya,POLYBENCH_ARRAY(A),xc,yc,zc,POLYBENCH_ARRAY(C),xd,yd,POLYBENCH_ARRAY(D),xf,POLYBENCH_ARRAY(F),xb,yb,zb,POLYBENCH_ARRAY(B),xe,ye,POLYBENCH_ARRAY(E));
polybench_prevent_dce(print_array(xa,ya,POLYBENCH_ARRAY(A),xc,yc,zc,POLYBENCH_ARRAY(C),xd,yd,POLYBENCH_ARRAY(D),xf,POLYBENCH_ARRAY(F),xb,yb,zb,POLYBENCH_ARRAY(B),xe,ye,POLYBENCH_ARRAY(E)));
POLYBENCH_FREE_ARRAY(A);
POLYBENCH_FREE_ARRAY(C);
POLYBENCH_FREE_ARRAY(D);
POLYBENCH_FREE_ARRAY(F);
POLYBENCH_FREE_ARRAY(B);
POLYBENCH_FREE_ARRAY(E);
return 0;
}
