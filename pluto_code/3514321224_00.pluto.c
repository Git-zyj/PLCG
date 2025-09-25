#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <math.h>
#include <polybench.h>
#include <time.h>
#include <stdlib.h>
#include "3514321224_00.h"
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
static void init_array(int xa,int ya,int za,DATA_TYPE POLYBENCH_3D(A,xA,yA,zA,xa,ya,za),int xd,int yd,DATA_TYPE POLYBENCH_2D(D,xD,yD,xd,yd),int xc,int yc,int zc,DATA_TYPE POLYBENCH_3D(C,xC,yC,zC,xc,yc,zc),int xf,int yf,DATA_TYPE POLYBENCH_2D(F,xF,yF,xf,yf),int xe,DATA_TYPE POLYBENCH_1D(E,xE,xe),int xb,int yb,int zb,DATA_TYPE POLYBENCH_3D(B,xB,yB,zB,xb,yb,zb),int seed)
{
srand(seed);
int i,j,k,l;
for (i = 0; i < xa; i++) {
for (j = 0; j < ya; j++) {
for (k = 0; k < za; k++) {
A[i][j][k] = rand()%3;;
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
for (i = 0; i < xf; i++) {
for (j = 0; j < yf; j++) {
F[i][j] = rand()%3;;
}}
for (i = 0; i < xe; i++) {
E[i] = rand()%3;;
}
for (i = 0; i < xb; i++) {
for (j = 0; j < yb; j++) {
for (k = 0; k < zb; k++) {
B[i][j][k] = rand()%3;;
}}}
}
static void print_array(int xa,int ya,int za,DATA_TYPE POLYBENCH_3D(A,xA,yA,zA,xa,ya,za),int xd,int yd,DATA_TYPE POLYBENCH_2D(D,xD,yD,xd,yd),int xc,int yc,int zc,DATA_TYPE POLYBENCH_3D(C,xC,yC,zC,xc,yc,zc),int xf,int yf,DATA_TYPE POLYBENCH_2D(F,xF,yF,xf,yf),int xe,DATA_TYPE POLYBENCH_1D(E,xE,xe),int xb,int yb,int zb,DATA_TYPE POLYBENCH_3D(B,xB,yB,zB,xb,yb,zb))
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
POLYBENCH_DUMP_BEGIN("F");
for (i = 0; i < xf; i++) {
for (j = 0; j < yf; j++) {
fprintf (POLYBENCH_DUMP_TARGET, "\n");
fprintf (POLYBENCH_DUMP_TARGET, DATA_PRINTF_MODIFIER, F[i][j]);
}}
POLYBENCH_DUMP_END("F");
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
for (k = 0; k < zb; k++) {
fprintf (POLYBENCH_DUMP_TARGET, "\n");
fprintf (POLYBENCH_DUMP_TARGET, DATA_PRINTF_MODIFIER, B[i][j][k]);
}}}
POLYBENCH_DUMP_END("B");
POLYBENCH_DUMP_FINISH;
}
void kernel_3514321224_00(int xa,int ya,int za,DATA_TYPE POLYBENCH_3D(A,xA,yA,zA,xa,ya,za),int xd,int yd,DATA_TYPE POLYBENCH_2D(D,xD,yD,xd,yd),int xc,int yc,int zc,DATA_TYPE POLYBENCH_3D(C,xC,yC,zC,xc,yc,zc),int xf,int yf,DATA_TYPE POLYBENCH_2D(F,xF,yF,xf,yf),int xe,DATA_TYPE POLYBENCH_1D(E,xE,xe),int xb,int yb,int zb,DATA_TYPE POLYBENCH_3D(B,xB,yB,zB,xb,yb,zb)){
polybench_start_instruments;
  int t1, t2, t3, t4, t5, t6, t7;
 int lb, ub, lbp, ubp, lb2, ub2;
 register int lbv, ubv;
/* Start of CLooG code */
for (t1=2;t1<=PB_M-3;t1++) {
  for (t3=0;t3<=floord(PB_M+PB_P-2,32);t3++) {
    lbp=max(0,ceild(32*t3-PB_P+1,32));
    ubp=min(floord(PB_M-1,32),t3);
#pragma omp parallel for private(lbv,ubv,t5,t6,t7)
    for (t4=lbp;t4<=ubp;t4++) {
      if ((t1 >= 32*t3) && (t1 <= 32*t3+31) && (t3 == t4)) {
        for (t6=max(1,32*t3);t6<=min(PB_M-1,32*t3+31);t6++) {
          C[t6-1][t1][1] = C[t6-1][t1+2][1 -1] - F[t1+1][t6-1] - D[t1][1] - 5;;
        }
      }
      if (t1 <= 32*t4-1) {
        for (t5=max(1,32*t3-32*t4);t5<=min(PB_P-1,32*t3-32*t4+31);t5++) {
          for (t6=32*t4;t6<=min(PB_M-1,32*t4+31);t6++) {
            C[t6-1][t1][t5] = C[t6-1][t1+2][t5-1] - F[t1+1][t6-1] - D[t1][t5] - 5;;
          }
        }
      }
      if (t1 >= 32*t4+32) {
        for (t5=max(1,32*t3-32*t4);t5<=min(PB_P-1,32*t3-32*t4+31);t5++) {
          for (t6=max(1,32*t4);t6<=32*t4+31;t6++) {
            C[t6-1][t1][t5] = C[t6-1][t1+2][t5-1] - F[t1+1][t6-1] - D[t1][t5] - 5;;
          }
        }
      }
      if ((t1 >= 32*t4) && (t1 <= 32*t4+31)) {
        for (t5=max(2,32*t3-32*t4);t5<=min(PB_M,32*t3-32*t4+31);t5++) {
          for (t6=max(1,32*t4);t6<=t1-1;t6++) {
            C[t6-1][t1][t5] = C[t6-1][t1+2][t5-1] - F[t1+1][t6-1] - D[t1][t5] - 5;;
          }
          D[(t5-1)][(t5-1)+1] = D[(t5-1)+2][(t5-1)+1] * F[t1-2][(t5-1)-1] - D[t1+1][(t5-1)] + E[(t5-1)] + 2;;
          C[t1-1][t1][t5] = C[t1-1][t1+2][t5-1] - F[t1+1][t1-1] - D[t1][t5] - 5;;
          for (t6=t1+1;t6<=min(PB_M-1,32*t4+31);t6++) {
            C[t6-1][t1][t5] = C[t6-1][t1+2][t5-1] - F[t1+1][t6-1] - D[t1][t5] - 5;;
          }
        }
      }
      if ((t1 >= 32*t4) && (t1 <= 32*t4+31)) {
        for (t5=max(PB_M+1,32*t3-32*t4);t5<=min(PB_P-1,32*t3-32*t4+31);t5++) {
          for (t6=max(1,32*t4);t6<=min(PB_M-1,32*t4+31);t6++) {
            C[t6-1][t1][t5] = C[t6-1][t1+2][t5-1] - F[t1+1][t6-1] - D[t1][t5] - 5;;
          }
        }
      }
    }
  }
  lbp=0;
  ubp=floord(PB_M-1,32);
#pragma omp parallel for private(lbv,ubv,t4,t5,t6,t7)
  for (t3=lbp;t3<=ubp;t3++) {
    lbv=max(1,32*t3);
    ubv=min(PB_M-1,32*t3+31);
#pragma ivdep
#pragma vector always
    for (t4=lbv;t4<=ubv;t4++) {
      F[t1][t4-1] = E[t1] - E[t1+2] * D[t4-1][t1+1] - 5;;
    }
  }
  E[t1] = E[t1] - 6;;
  lbp=0;
  ubp=floord(PB_M-1,32);
#pragma omp parallel for private(lbv,ubv,t4,t5,t6,t7)
  for (t3=lbp;t3<=ubp;t3++) {
    for (t4=0;t4<=floord(PB_M-1,32);t4++) {
      for (t5=max(1,32*t3);t5<=min(PB_M-1,32*t3+31);t5++) {
        for (t6=32*t4;t6<=min(PB_M-1,32*t4+31);t6++) {
          A[t1][t5+1][t1+1] = B[t1][t1][t5+1] * C[t1-1][t1+1][t5] * 5;;
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
int xd = xD;
int yd = yD;
int xc = xC;
int yc = yC;
int zc = zC;
int xf = xF;
int yf = yF;
int xe = xE;
int xb = xB;
int yb = yB;
int zb = zB;
POLYBENCH_3D_ARRAY_DECL(A, DATA_TYPE,xA,yA,zA,xa,ya,za);
POLYBENCH_2D_ARRAY_DECL(D, DATA_TYPE,xD,yD,xd,yd);
POLYBENCH_3D_ARRAY_DECL(C, DATA_TYPE,xC,yC,zC,xc,yc,zc);
POLYBENCH_2D_ARRAY_DECL(F, DATA_TYPE,xF,yF,xf,yf);
POLYBENCH_1D_ARRAY_DECL(E, DATA_TYPE,xE,xe);
POLYBENCH_3D_ARRAY_DECL(B, DATA_TYPE,xB,yB,zB,xb,yb,zb);
init_array(xa,ya,za,POLYBENCH_ARRAY(A),xd,yd,POLYBENCH_ARRAY(D),xc,yc,zc,POLYBENCH_ARRAY(C),xf,yf,POLYBENCH_ARRAY(F),xe,POLYBENCH_ARRAY(E),xb,yb,zb,POLYBENCH_ARRAY(B),INIT_SEED);
kernel_3514321224_00(xa,ya,za,POLYBENCH_ARRAY(A),xd,yd,POLYBENCH_ARRAY(D),xc,yc,zc,POLYBENCH_ARRAY(C),xf,yf,POLYBENCH_ARRAY(F),xe,POLYBENCH_ARRAY(E),xb,yb,zb,POLYBENCH_ARRAY(B));
polybench_prevent_dce(print_array(xa,ya,za,POLYBENCH_ARRAY(A),xd,yd,POLYBENCH_ARRAY(D),xc,yc,zc,POLYBENCH_ARRAY(C),xf,yf,POLYBENCH_ARRAY(F),xe,POLYBENCH_ARRAY(E),xb,yb,zb,POLYBENCH_ARRAY(B)));
POLYBENCH_FREE_ARRAY(A);
POLYBENCH_FREE_ARRAY(D);
POLYBENCH_FREE_ARRAY(C);
POLYBENCH_FREE_ARRAY(F);
POLYBENCH_FREE_ARRAY(E);
POLYBENCH_FREE_ARRAY(B);
return 0;
}
