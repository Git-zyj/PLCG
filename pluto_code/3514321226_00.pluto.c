#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <math.h>
#include <polybench.h>
#include <time.h>
#include <stdlib.h>
#include "3514321226_00.h"
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
static void init_array(int xa,DATA_TYPE POLYBENCH_1D(A,xA,xa),int xb,int yb,int zb,DATA_TYPE POLYBENCH_3D(B,xB,yB,zB,xb,yb,zb),int xc,int yc,int zc,DATA_TYPE POLYBENCH_3D(C,xC,yC,zC,xc,yc,zc),int xe,DATA_TYPE POLYBENCH_1D(E,xE,xe),int xf,int yf,DATA_TYPE POLYBENCH_2D(F,xF,yF,xf,yf),int xd,int yd,DATA_TYPE POLYBENCH_2D(D,xD,yD,xd,yd),int xg,int yg,DATA_TYPE POLYBENCH_2D(G,xG,yG,xg,yg),int seed)
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
for (i = 0; i < xc; i++) {
for (j = 0; j < yc; j++) {
for (k = 0; k < zc; k++) {
C[i][j][k] = rand()%3;;
}}}
for (i = 0; i < xe; i++) {
E[i] = rand()%3;;
}
for (i = 0; i < xf; i++) {
for (j = 0; j < yf; j++) {
F[i][j] = rand()%3;;
}}
for (i = 0; i < xd; i++) {
for (j = 0; j < yd; j++) {
D[i][j] = rand()%3;;
}}
for (i = 0; i < xg; i++) {
for (j = 0; j < yg; j++) {
G[i][j] = rand()%3;;
}}
}
static void print_array(int xa,DATA_TYPE POLYBENCH_1D(A,xA,xa),int xb,int yb,int zb,DATA_TYPE POLYBENCH_3D(B,xB,yB,zB,xb,yb,zb),int xc,int yc,int zc,DATA_TYPE POLYBENCH_3D(C,xC,yC,zC,xc,yc,zc),int xe,DATA_TYPE POLYBENCH_1D(E,xE,xe),int xf,int yf,DATA_TYPE POLYBENCH_2D(F,xF,yF,xf,yf),int xd,int yd,DATA_TYPE POLYBENCH_2D(D,xD,yD,xd,yd),int xg,int yg,DATA_TYPE POLYBENCH_2D(G,xG,yG,xg,yg))
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
POLYBENCH_DUMP_BEGIN("F");
for (i = 0; i < xf; i++) {
for (j = 0; j < yf; j++) {
fprintf (POLYBENCH_DUMP_TARGET, "\n");
fprintf (POLYBENCH_DUMP_TARGET, DATA_PRINTF_MODIFIER, F[i][j]);
}}
POLYBENCH_DUMP_END("F");
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
POLYBENCH_DUMP_BEGIN("G");
for (i = 0; i < xg; i++) {
for (j = 0; j < yg; j++) {
fprintf (POLYBENCH_DUMP_TARGET, "\n");
fprintf (POLYBENCH_DUMP_TARGET, DATA_PRINTF_MODIFIER, G[i][j]);
}}
POLYBENCH_DUMP_END("G");
POLYBENCH_DUMP_FINISH;
}
void kernel_3514321226_00(int xa,DATA_TYPE POLYBENCH_1D(A,xA,xa),int xb,int yb,int zb,DATA_TYPE POLYBENCH_3D(B,xB,yB,zB,xb,yb,zb),int xc,int yc,int zc,DATA_TYPE POLYBENCH_3D(C,xC,yC,zC,xc,yc,zc),int xe,DATA_TYPE POLYBENCH_1D(E,xE,xe),int xf,int yf,DATA_TYPE POLYBENCH_2D(F,xF,yF,xf,yf),int xd,int yd,DATA_TYPE POLYBENCH_2D(D,xD,yD,xd,yd),int xg,int yg,DATA_TYPE POLYBENCH_2D(G,xG,yG,xg,yg)){
polybench_start_instruments;
  int t1, t2, t3, t4, t5, t6, t7, t8, t9, t10;
 int lb, ub, lbp, ubp, lb2, ub2;
 register int lbv, ubv;
/* Start of CLooG code */
for (t2=1;t2<=PB_P-3;t2++) {
  A[t2-1] = E[t2+2] * 3;;
  for (t4=0;t4<=floord(PB_P+PB_Q-2,32);t4++) {
    lbp=max(0,ceild(32*t4-PB_P+1,32));
    ubp=min(floord(PB_Q-1,32),t4);
#pragma omp parallel for private(lbv,ubv,t7,t8,t9,t10)
    for (t6=lbp;t6<=ubp;t6++) {
      for (t7=32*t4-32*t6;t7<=min(PB_P-1,32*t4-32*t6+31);t7++) {
        lbv=32*t6;
        ubv=min(PB_Q-1,32*t6+31);
#pragma ivdep
#pragma vector always
        for (t9=lbv;t9<=ubv;t9++) {
          B[t7][t2+1][t9] = B[t9][t7][t9] - 6;;
        }
      }
    }
  }
  lbp=0;
  ubp=floord(t2-1,32);
#pragma omp parallel for private(lbv,ubv,t5,t6,t7,t8,t9,t10)
  for (t4=lbp;t4<=ubp;t4++) {
    for (t6=0;t6<=floord(PB_P-2,32);t6++) {
      for (t7=32*t4;t7<=min(t2-1,32*t4+31);t7++) {
        for (t9=max(1,32*t6);t9<=min(PB_P-2,32*t6+31);t9++) {
          C[t2][t7+1][t2] = C[t2][t7+1][t2+2] + D[t9-1][t2] - B[t7][t9+1][t2] * 6;;
        }
      }
    }
  }
  E[t2] = E[t2-1] - 3;;
}
lbp=0;
ubp=floord(PB_L-2,32);
#pragma omp parallel for private(lbv,ubv,t3,t4,t5,t6,t7,t8,t9,t10)
for (t2=lbp;t2<=ubp;t2++) {
  for (t4=-1;t4<=floord(PB_M-2,32);t4++) {
    for (t5=32*t2;t5<=min(PB_L-2,32*t2+31);t5++) {
      lbv=max(-1,32*t4);
      ubv=min(PB_M-2,32*t4+31);
#pragma ivdep
#pragma vector always
      for (t7=lbv;t7<=ubv;t7++) {
        F[t5][t7+1] = F[t5][t7+1] * G[t5+1][t5+1] + 4;;
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
int xc = xC;
int yc = yC;
int zc = zC;
int xe = xE;
int xf = xF;
int yf = yF;
int xd = xD;
int yd = yD;
int xg = xG;
int yg = yG;
POLYBENCH_1D_ARRAY_DECL(A, DATA_TYPE,xA,xa);
POLYBENCH_3D_ARRAY_DECL(B, DATA_TYPE,xB,yB,zB,xb,yb,zb);
POLYBENCH_3D_ARRAY_DECL(C, DATA_TYPE,xC,yC,zC,xc,yc,zc);
POLYBENCH_1D_ARRAY_DECL(E, DATA_TYPE,xE,xe);
POLYBENCH_2D_ARRAY_DECL(F, DATA_TYPE,xF,yF,xf,yf);
POLYBENCH_2D_ARRAY_DECL(D, DATA_TYPE,xD,yD,xd,yd);
POLYBENCH_2D_ARRAY_DECL(G, DATA_TYPE,xG,yG,xg,yg);
init_array(xa,POLYBENCH_ARRAY(A),xb,yb,zb,POLYBENCH_ARRAY(B),xc,yc,zc,POLYBENCH_ARRAY(C),xe,POLYBENCH_ARRAY(E),xf,yf,POLYBENCH_ARRAY(F),xd,yd,POLYBENCH_ARRAY(D),xg,yg,POLYBENCH_ARRAY(G),INIT_SEED);
kernel_3514321226_00(xa,POLYBENCH_ARRAY(A),xb,yb,zb,POLYBENCH_ARRAY(B),xc,yc,zc,POLYBENCH_ARRAY(C),xe,POLYBENCH_ARRAY(E),xf,yf,POLYBENCH_ARRAY(F),xd,yd,POLYBENCH_ARRAY(D),xg,yg,POLYBENCH_ARRAY(G));
polybench_prevent_dce(print_array(xa,POLYBENCH_ARRAY(A),xb,yb,zb,POLYBENCH_ARRAY(B),xc,yc,zc,POLYBENCH_ARRAY(C),xe,POLYBENCH_ARRAY(E),xf,yf,POLYBENCH_ARRAY(F),xd,yd,POLYBENCH_ARRAY(D),xg,yg,POLYBENCH_ARRAY(G)));
POLYBENCH_FREE_ARRAY(A);
POLYBENCH_FREE_ARRAY(B);
POLYBENCH_FREE_ARRAY(C);
POLYBENCH_FREE_ARRAY(E);
POLYBENCH_FREE_ARRAY(F);
POLYBENCH_FREE_ARRAY(D);
POLYBENCH_FREE_ARRAY(G);
return 0;
}
