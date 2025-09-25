#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <math.h>
#include <polybench.h>
#include <time.h>
#include <stdlib.h>
#include "3614321224_00.h"
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
static void init_array(int xa,int ya,DATA_TYPE POLYBENCH_2D(A,xA,yA,xa,ya),int xb,int yb,DATA_TYPE POLYBENCH_2D(B,xB,yB,xb,yb),int xd,int yd,int zd,DATA_TYPE POLYBENCH_3D(D,xD,yD,zD,xd,yd,zd),int xe,DATA_TYPE POLYBENCH_1D(E,xE,xe),int xc,int yc,DATA_TYPE POLYBENCH_2D(C,xC,yC,xc,yc),int xf,DATA_TYPE POLYBENCH_1D(F,xF,xf),int xg,DATA_TYPE POLYBENCH_1D(G,xG,xg),int seed)
{
srand(seed);
int i,j,k,l;
for (i = 0; i < xa; i++) {
for (j = 0; j < ya; j++) {
A[i][j] = rand()%3;;
}}
for (i = 0; i < xb; i++) {
for (j = 0; j < yb; j++) {
B[i][j] = rand()%3;;
}}
for (i = 0; i < xd; i++) {
for (j = 0; j < yd; j++) {
for (k = 0; k < zd; k++) {
D[i][j][k] = rand()%3;;
}}}
for (i = 0; i < xe; i++) {
E[i] = rand()%3;;
}
for (i = 0; i < xc; i++) {
for (j = 0; j < yc; j++) {
C[i][j] = rand()%3;;
}}
for (i = 0; i < xf; i++) {
F[i] = rand()%3;;
}
for (i = 0; i < xg; i++) {
G[i] = rand()%3;;
}
}
static void print_array(int xa,int ya,DATA_TYPE POLYBENCH_2D(A,xA,yA,xa,ya),int xb,int yb,DATA_TYPE POLYBENCH_2D(B,xB,yB,xb,yb),int xd,int yd,int zd,DATA_TYPE POLYBENCH_3D(D,xD,yD,zD,xd,yd,zd),int xe,DATA_TYPE POLYBENCH_1D(E,xE,xe),int xc,int yc,DATA_TYPE POLYBENCH_2D(C,xC,yC,xc,yc),int xf,DATA_TYPE POLYBENCH_1D(F,xF,xf),int xg,DATA_TYPE POLYBENCH_1D(G,xG,xg))
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
POLYBENCH_DUMP_START;
POLYBENCH_DUMP_BEGIN("E");
for (i = 0; i < xe; i++) {
fprintf (POLYBENCH_DUMP_TARGET, "\n");
fprintf (POLYBENCH_DUMP_TARGET, DATA_PRINTF_MODIFIER, E[i]);
}
POLYBENCH_DUMP_END("E");
POLYBENCH_DUMP_FINISH;
POLYBENCH_DUMP_START;
POLYBENCH_DUMP_BEGIN("C");
for (i = 0; i < xc; i++) {
for (j = 0; j < yc; j++) {
fprintf (POLYBENCH_DUMP_TARGET, "\n");
fprintf (POLYBENCH_DUMP_TARGET, DATA_PRINTF_MODIFIER, C[i][j]);
}}
POLYBENCH_DUMP_END("C");
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
POLYBENCH_DUMP_BEGIN("G");
for (i = 0; i < xg; i++) {
fprintf (POLYBENCH_DUMP_TARGET, "\n");
fprintf (POLYBENCH_DUMP_TARGET, DATA_PRINTF_MODIFIER, G[i]);
}
POLYBENCH_DUMP_END("G");
POLYBENCH_DUMP_FINISH;
}
void kernel_3614321224_00(int xa,int ya,DATA_TYPE POLYBENCH_2D(A,xA,yA,xa,ya),int xb,int yb,DATA_TYPE POLYBENCH_2D(B,xB,yB,xb,yb),int xd,int yd,int zd,DATA_TYPE POLYBENCH_3D(D,xD,yD,zD,xd,yd,zd),int xe,DATA_TYPE POLYBENCH_1D(E,xE,xe),int xc,int yc,DATA_TYPE POLYBENCH_2D(C,xC,yC,xc,yc),int xf,DATA_TYPE POLYBENCH_1D(F,xF,xf),int xg,DATA_TYPE POLYBENCH_1D(G,xG,xg)){
polybench_start_instruments;
  int t1, t2, t3, t4, t5, t6, t7, t8, t9, t10;
 int lb, ub, lbp, ubp, lb2, ub2;
 register int lbv, ubv;
/* Start of CLooG code */
lbp=0;
ubp=floord(PB_P-1,32);
#pragma omp parallel for private(lbv,ubv,t3,t4,t5,t6,t7,t8,t9,t10)
for (t2=lbp;t2<=ubp;t2++) {
  for (t4=0;t4<=floord(PB_M-1,32);t4++) {
    for (t5=32*t2;t5<=min(PB_P-1,32*t2+31);t5++) {
      lbv=32*t4;
      ubv=min(PB_M-1,32*t4+31);
#pragma ivdep
#pragma vector always
      for (t7=lbv;t7<=ubv;t7++) {
        A[t7][t5] = A[t7][t5] + 5;;
      }
    }
  }
}
for (t2=2;t2<=PB_L-1;t2++) {
  lbp=0;
  ubp=floord(t2-1,32);
#pragma omp parallel for private(lbv,ubv,t5,t6,t7,t8,t9,t10)
  for (t4=lbp;t4<=ubp;t4++) {
    lbv=32*t4;
    ubv=min(t2-1,32*t4+31);
#pragma ivdep
#pragma vector always
    for (t7=lbv;t7<=ubv;t7++) {
      B[t7+1][t7] = B[t7+1][t7] * E[t2-2] + C[t7+1][t2] * B[t2-1][t2] * 4;;
    }
    for (t6=0;t6<=floord(PB_P-1,32);t6++) {
      for (t7=32*t4;t7<=min(t2-1,32*t4+31);t7++) {
        lbv=32*t6;
        ubv=min(PB_P-1,32*t6+31);
#pragma ivdep
#pragma vector always
        for (t9=lbv;t9<=ubv;t9++) {
          D[t7][t9][t2] = 1;;
        }
      }
    }
  }
  lbp=0;
  ubp=floord(PB_P-2,32);
#pragma omp parallel for private(lbv,ubv,t5,t6,t7,t8,t9,t10)
  for (t4=lbp;t4<=ubp;t4++) {
    for (t6=0;t6<=t4;t6++) {
      for (t7=max(32*t4,32*t6+1);t7<=min(PB_P-2,32*t4+31);t7++) {
        for (t9=32*t6;t9<=min(32*t6+31,t7-1);t9++) {
          D[t2-1][t7+1][t7] = D[t2-2][t7+1][t7] * D[t2-1][t7+1][t7] + D[t2][t7][t7] + 2;;
        }
      }
    }
  }
  E[t2-1] = E[t2-1] * E[t2-2] * F[t2] * G[t2+1] * 2;;
  E[t2-1] = E[t2-1] * E[t2-1] - 4;;
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
int xd = xD;
int yd = yD;
int zd = zD;
int xe = xE;
int xc = xC;
int yc = yC;
int xf = xF;
int xg = xG;
POLYBENCH_2D_ARRAY_DECL(A, DATA_TYPE,xA,yA,xa,ya);
POLYBENCH_2D_ARRAY_DECL(B, DATA_TYPE,xB,yB,xb,yb);
POLYBENCH_3D_ARRAY_DECL(D, DATA_TYPE,xD,yD,zD,xd,yd,zd);
POLYBENCH_1D_ARRAY_DECL(E, DATA_TYPE,xE,xe);
POLYBENCH_2D_ARRAY_DECL(C, DATA_TYPE,xC,yC,xc,yc);
POLYBENCH_1D_ARRAY_DECL(F, DATA_TYPE,xF,xf);
POLYBENCH_1D_ARRAY_DECL(G, DATA_TYPE,xG,xg);
init_array(xa,ya,POLYBENCH_ARRAY(A),xb,yb,POLYBENCH_ARRAY(B),xd,yd,zd,POLYBENCH_ARRAY(D),xe,POLYBENCH_ARRAY(E),xc,yc,POLYBENCH_ARRAY(C),xf,POLYBENCH_ARRAY(F),xg,POLYBENCH_ARRAY(G),INIT_SEED);
kernel_3614321224_00(xa,ya,POLYBENCH_ARRAY(A),xb,yb,POLYBENCH_ARRAY(B),xd,yd,zd,POLYBENCH_ARRAY(D),xe,POLYBENCH_ARRAY(E),xc,yc,POLYBENCH_ARRAY(C),xf,POLYBENCH_ARRAY(F),xg,POLYBENCH_ARRAY(G));
polybench_prevent_dce(print_array(xa,ya,POLYBENCH_ARRAY(A),xb,yb,POLYBENCH_ARRAY(B),xd,yd,zd,POLYBENCH_ARRAY(D),xe,POLYBENCH_ARRAY(E),xc,yc,POLYBENCH_ARRAY(C),xf,POLYBENCH_ARRAY(F),xg,POLYBENCH_ARRAY(G)));
POLYBENCH_FREE_ARRAY(A);
POLYBENCH_FREE_ARRAY(B);
POLYBENCH_FREE_ARRAY(D);
POLYBENCH_FREE_ARRAY(E);
POLYBENCH_FREE_ARRAY(C);
POLYBENCH_FREE_ARRAY(F);
POLYBENCH_FREE_ARRAY(G);
return 0;
}
