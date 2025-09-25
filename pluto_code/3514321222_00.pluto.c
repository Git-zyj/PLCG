#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <math.h>
#include <polybench.h>
#include <time.h>
#include <stdlib.h>
#include "3514321222_00.h"
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
static void init_array(int xa,int ya,DATA_TYPE POLYBENCH_2D(A,xA,yA,xa,ya),int xc,int yc,int zc,DATA_TYPE POLYBENCH_3D(C,xC,yC,zC,xc,yc,zc),int xe,DATA_TYPE POLYBENCH_1D(E,xE,xe),int xb,int yb,DATA_TYPE POLYBENCH_2D(B,xB,yB,xb,yb),int xd,int yd,int zd,DATA_TYPE POLYBENCH_3D(D,xD,yD,zD,xd,yd,zd),int seed)
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
for (i = 0; i < xe; i++) {
E[i] = rand()%3;;
}
for (i = 0; i < xb; i++) {
for (j = 0; j < yb; j++) {
B[i][j] = rand()%3;;
}}
for (i = 0; i < xd; i++) {
for (j = 0; j < yd; j++) {
for (k = 0; k < zd; k++) {
D[i][j][k] = rand()%3;;
}}}
}
static void print_array(int xa,int ya,DATA_TYPE POLYBENCH_2D(A,xA,yA,xa,ya),int xc,int yc,int zc,DATA_TYPE POLYBENCH_3D(C,xC,yC,zC,xc,yc,zc),int xe,DATA_TYPE POLYBENCH_1D(E,xE,xe),int xb,int yb,DATA_TYPE POLYBENCH_2D(B,xB,yB,xb,yb),int xd,int yd,int zd,DATA_TYPE POLYBENCH_3D(D,xD,yD,zD,xd,yd,zd))
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
POLYBENCH_DUMP_BEGIN("E");
for (i = 0; i < xe; i++) {
fprintf (POLYBENCH_DUMP_TARGET, "\n");
fprintf (POLYBENCH_DUMP_TARGET, DATA_PRINTF_MODIFIER, E[i]);
}
POLYBENCH_DUMP_END("E");
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
POLYBENCH_DUMP_START;
POLYBENCH_DUMP_BEGIN("D");
for (i = 0; i < xd; i++) {
for (j = 0; j < yd; j++) {
for (k = 0; k < zd; k++) {
fprintf (POLYBENCH_DUMP_TARGET, "\n");
fprintf (POLYBENCH_DUMP_TARGET, DATA_PRINTF_MODIFIER, D[i][j][k]);
}}}
POLYBENCH_DUMP_END("D");
POLYBENCH_DUMP_FINISH;
}
void kernel_3514321222_00(int xa,int ya,DATA_TYPE POLYBENCH_2D(A,xA,yA,xa,ya),int xc,int yc,int zc,DATA_TYPE POLYBENCH_3D(C,xC,yC,zC,xc,yc,zc),int xe,DATA_TYPE POLYBENCH_1D(E,xE,xe),int xb,int yb,DATA_TYPE POLYBENCH_2D(B,xB,yB,xb,yb),int xd,int yd,int zd,DATA_TYPE POLYBENCH_3D(D,xD,yD,zD,xd,yd,zd)){
polybench_start_instruments;
  int t1, t2, t3, t4, t5, t6;
 int lb, ub, lbp, ubp, lb2, ub2;
 register int lbv, ubv;
/* Start of CLooG code */
for (t2=0;t2<=PB_M-1;t2++) {
  for (t3=0;t3<=floord(199*t2+200*PB_M-200,6400);t3++) {
    for (t4=0;t4<=min(min(min(min(min(min(min(min(min(floord(499*t2,32),floord(PB_L-2,32)),floord(249*t2-7968*t3+249*PB_M+200*PB_L-100249,6400)),floord(499*t2-15968*t3+499*PB_M-499,12800)),floord(499*t2-15968*t3+199600,12832)),floord(498*t2-15936*t3+401*PB_L-1300,12832)),floord(16517*t2-531200*t3+83*PB_M+13300*PB_L-43283,425600)),floord(32951*t2-1059744*t3+33283*PB_M+26467*PB_L-13333017,846944)),floord(99301*t2-3193600*t3+499*PB_M+39719901,2553600)),floord(198103*t2-6371232*t3+200099*PB_M-598301,5081664));t4++) {
      if ((t2 >= 1) && (t3 == 0) && (t4 == 0)) {
        C[0][0 +1][0] = D[t2][0][0] - 6;;
        E[0] = 3;;
        lbv=1;
        ubv=31;
#pragma ivdep
#pragma vector always
        for (t6=lbv;t6<=ubv;t6++) {
          C[0][t6+1][0] = D[t2][0][t6] - 6;;
        }
      }
      if (t4 >= 1) {
        for (t5=32*t3;t5<=min(t2-1,32*t3+31);t5++) {
          lbv=32*t4;
          ubv=min(PB_L-2,32*t4+31);
#pragma ivdep
#pragma vector always
          for (t6=lbv;t6<=ubv;t6++) {
            C[t5][t6+1][t5] = D[t2][t5][t6] - 6;;
          }
        }
      }
      if (t4 == 0) {
        for (t5=max(1,32*t3);t5<=min(t2-1,32*t3+31);t5++) {
          C[t5][0 +1][t5] = D[t2][t5][0] - 6;;
          A[t5][t5-1] = B[t2][t2+1] - A[t2][t5] + 2;;
          E[t5] = 3;;
          lbv=1;
          ubv=31;
#pragma ivdep
#pragma vector always
          for (t6=lbv;t6<=ubv;t6++) {
            C[t5][t6+1][t5] = D[t2][t5][t6] - 6;;
          }
        }
      }
      if (t4 == 0) {
        for (t5=max(t2,32*t3);t5<=min(min(PB_M-1,2*t2-1),32*t3+31);t5++) {
          A[t5][t5-1] = B[t2][t2+1] - A[t2][t5] + 2;;
          E[t2] = E[t2-1] + E[t2] - A[(-t2+t5)][t2] + 4;;
        }
      }
      if (t4 == 0) {
        for (t5=max(max(1,2*t2),32*t3);t5<=min(PB_M-1,32*t3+31);t5++) {
          A[t5][t5-1] = B[t2][t2+1] - A[t2][t5] + 2;;
        }
      }
      if (t4 == 0) {
        for (t5=max(PB_M,32*t3);t5<=min(2*t2-1,32*t3+31);t5++) {
          E[t2] = E[t2-1] + E[t2] - A[(-t2+t5)][t2] + 4;;
        }
      }
    }
  }
}
lbp=0;
ubp=floord(PB_M-1,32);
#pragma omp parallel for private(lbv,ubv,t3,t4,t5,t6)
for (t2=lbp;t2<=ubp;t2++) {
  for (t3=0;t3<=t2;t3++) {
    for (t4=max(32*t2,32*t3+1);t4<=min(PB_M-1,32*t2+31);t4++) {
      for (t5=32*t3;t5<=min(32*t3+31,t4-1);t5++) {
        A[t4][t4] = A[t4][t4-1] - 2;;
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
int xe = xE;
int xb = xB;
int yb = yB;
int xd = xD;
int yd = yD;
int zd = zD;
POLYBENCH_2D_ARRAY_DECL(A, DATA_TYPE,xA,yA,xa,ya);
POLYBENCH_3D_ARRAY_DECL(C, DATA_TYPE,xC,yC,zC,xc,yc,zc);
POLYBENCH_1D_ARRAY_DECL(E, DATA_TYPE,xE,xe);
POLYBENCH_2D_ARRAY_DECL(B, DATA_TYPE,xB,yB,xb,yb);
POLYBENCH_3D_ARRAY_DECL(D, DATA_TYPE,xD,yD,zD,xd,yd,zd);
init_array(xa,ya,POLYBENCH_ARRAY(A),xc,yc,zc,POLYBENCH_ARRAY(C),xe,POLYBENCH_ARRAY(E),xb,yb,POLYBENCH_ARRAY(B),xd,yd,zd,POLYBENCH_ARRAY(D),INIT_SEED);
kernel_3514321222_00(xa,ya,POLYBENCH_ARRAY(A),xc,yc,zc,POLYBENCH_ARRAY(C),xe,POLYBENCH_ARRAY(E),xb,yb,POLYBENCH_ARRAY(B),xd,yd,zd,POLYBENCH_ARRAY(D));
polybench_prevent_dce(print_array(xa,ya,POLYBENCH_ARRAY(A),xc,yc,zc,POLYBENCH_ARRAY(C),xe,POLYBENCH_ARRAY(E),xb,yb,POLYBENCH_ARRAY(B),xd,yd,zd,POLYBENCH_ARRAY(D)));
POLYBENCH_FREE_ARRAY(A);
POLYBENCH_FREE_ARRAY(C);
POLYBENCH_FREE_ARRAY(E);
POLYBENCH_FREE_ARRAY(B);
POLYBENCH_FREE_ARRAY(D);
return 0;
}
