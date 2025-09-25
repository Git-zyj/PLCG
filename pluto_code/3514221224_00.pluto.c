#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <math.h>
#include <polybench.h>
#include <time.h>
#include <stdlib.h>
#include "3514221224_00.h"
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
static void init_array(int xd,int yd,DATA_TYPE POLYBENCH_2D(D,xD,yD,xd,yd),int xe,DATA_TYPE POLYBENCH_1D(E,xE,xe),int xb,int yb,int zb,DATA_TYPE POLYBENCH_3D(B,xB,yB,zB,xb,yb,zb),int xc,int yc,DATA_TYPE POLYBENCH_2D(C,xC,yC,xc,yc),int xf,DATA_TYPE POLYBENCH_1D(F,xF,xf),int seed)
{
srand(seed);
int i,j,k,l;
for (i = 0; i < xd; i++) {
for (j = 0; j < yd; j++) {
D[i][j] = rand()%3;;
}}
for (i = 0; i < xe; i++) {
E[i] = rand()%3;;
}
for (i = 0; i < xb; i++) {
for (j = 0; j < yb; j++) {
for (k = 0; k < zb; k++) {
B[i][j][k] = rand()%3;;
}}}
for (i = 0; i < xc; i++) {
for (j = 0; j < yc; j++) {
C[i][j] = rand()%3;;
}}
for (i = 0; i < xf; i++) {
F[i] = rand()%3;;
}
}
static void print_array(int xd,int yd,DATA_TYPE POLYBENCH_2D(D,xD,yD,xd,yd),int xe,DATA_TYPE POLYBENCH_1D(E,xE,xe),int xb,int yb,int zb,DATA_TYPE POLYBENCH_3D(B,xB,yB,zB,xb,yb,zb),int xc,int yc,DATA_TYPE POLYBENCH_2D(C,xC,yC,xc,yc),int xf,DATA_TYPE POLYBENCH_1D(F,xF,xf))
{
int i,j,k,l;
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
}
void kernel_3514221224_00(int xd,int yd,DATA_TYPE POLYBENCH_2D(D,xD,yD,xd,yd),int xe,DATA_TYPE POLYBENCH_1D(E,xE,xe),int xb,int yb,int zb,DATA_TYPE POLYBENCH_3D(B,xB,yB,zB,xb,yb,zb),int xc,int yc,DATA_TYPE POLYBENCH_2D(C,xC,yC,xc,yc),int xf,DATA_TYPE POLYBENCH_1D(F,xF,xf)){
polybench_start_instruments;
  int t1, t2, t3, t4, t5, t6, t7, t8, t9;
 int lb, ub, lbp, ubp, lb2, ub2;
 register int lbv, ubv;
/* Start of CLooG code */
lbp=0;
ubp=floord(PB_P-1,32);
#pragma omp parallel for private(lbv,ubv,t3,t4,t5,t6,t7,t8,t9)
for (t2=lbp;t2<=ubp;t2++) {
  for (t3=0;t3<=floord(PB_M-2,32);t3++) {
    for (t4=32*t2;t4<=min(PB_P-1,32*t2+31);t4++) {
      for (t5=max(1,32*t3);t5<=min(PB_M-2,32*t3+31);t5++) {
        C[t4+1][t4] = C[t4+1][t4] * C[t4+1][t4] - 1;;
      }
    }
  }
}
for (t2=0;t2<=floord(PB_M-2,16);t2++) {
  lbp=max(0,ceild(32*t2-PB_M+2,32));
  ubp=min(floord(PB_M-1,32),t2);
#pragma omp parallel for private(lbv,ubv,t4,t5,t6,t7,t8,t9)
  for (t3=lbp;t3<=ubp;t3++) {
    if (t2 <= floord(32*t3+PB_P-2,32)) {
      for (t5=t2-t3;t5<=floord(PB_P-1,32);t5++) {
        for (t6=max(1,32*t2-32*t3);t6<=min(min(PB_P-2,32*t5+30),32*t2-32*t3+31);t6++) {
          for (t7=32*t3;t7<=min(PB_M-1,32*t3+31);t7++) {
            lbv=max(32*t5,t6+1);
            ubv=min(PB_P-1,32*t5+31);
#pragma ivdep
#pragma vector always
            for (t9=lbv;t9<=ubv;t9++) {
              D[t9+1][t6] = B[t6+1][t7][t6] + C[t6][t9] * 3;;
            }
          }
        }
      }
    }
    for (t5=0;t5<=t3;t5++) {
      for (t6=32*t2-32*t3;t6<=min(PB_M-2,32*t2-32*t3+31);t6++) {
        for (t7=max(32*t3,32*t5+1);t7<=min(PB_M-2,32*t3+31);t7++) {
          lbv=32*t5;
          ubv=min(32*t5+31,t7-1);
#pragma ivdep
#pragma vector always
          for (t9=lbv;t9<=ubv;t9++) {
            B[t7+1][t9+1][t6] = B[t7+1][t9+1][t6+1] + B[t7-1][t9+1][t6] - 2;;
          }
        }
      }
    }
  }
}
for (t2=0;t2<=floord(PB_P-2,16);t2++) {
  lbp=max(0,ceild(32*t2-PB_P+1,32));
  ubp=floord(t2,2);
#pragma omp parallel for private(lbv,ubv,t4,t5,t6,t7,t8,t9)
  for (t3=lbp;t3<=ubp;t3++) {
    for (t4=max(max(2,32*t2-32*t3),32*t3+1);t4<=min(PB_P-1,32*t2-32*t3+31);t4++) {
      lbv=max(1,32*t3);
      ubv=min(32*t3+31,t4-1);
#pragma ivdep
#pragma vector always
      for (t5=lbv;t5<=ubv;t5++) {
        D[t4+1][t5] = E[t4+1] * D[t4][t5-1] - 6;;
      }
    }
  }
}
for (t2=0;t2<=PB_P-1;t2++) {
  E[t2+1] = E[t2+2] * F[t2+1] - 2;;
}
/* End of CLooG code */
polybench_stop_instruments;
polybench_print_instruments;
}
int main(int argc, char** argv)
{
int xd = xD;
int yd = yD;
int xe = xE;
int xb = xB;
int yb = yB;
int zb = zB;
int xc = xC;
int yc = yC;
int xf = xF;
POLYBENCH_2D_ARRAY_DECL(D, DATA_TYPE,xD,yD,xd,yd);
POLYBENCH_1D_ARRAY_DECL(E, DATA_TYPE,xE,xe);
POLYBENCH_3D_ARRAY_DECL(B, DATA_TYPE,xB,yB,zB,xb,yb,zb);
POLYBENCH_2D_ARRAY_DECL(C, DATA_TYPE,xC,yC,xc,yc);
POLYBENCH_1D_ARRAY_DECL(F, DATA_TYPE,xF,xf);
init_array(xd,yd,POLYBENCH_ARRAY(D),xe,POLYBENCH_ARRAY(E),xb,yb,zb,POLYBENCH_ARRAY(B),xc,yc,POLYBENCH_ARRAY(C),xf,POLYBENCH_ARRAY(F),INIT_SEED);
kernel_3514221224_00(xd,yd,POLYBENCH_ARRAY(D),xe,POLYBENCH_ARRAY(E),xb,yb,zb,POLYBENCH_ARRAY(B),xc,yc,POLYBENCH_ARRAY(C),xf,POLYBENCH_ARRAY(F));
polybench_prevent_dce(print_array(xd,yd,POLYBENCH_ARRAY(D),xe,POLYBENCH_ARRAY(E),xb,yb,zb,POLYBENCH_ARRAY(B),xc,yc,POLYBENCH_ARRAY(C),xf,POLYBENCH_ARRAY(F)));
POLYBENCH_FREE_ARRAY(D);
POLYBENCH_FREE_ARRAY(E);
POLYBENCH_FREE_ARRAY(B);
POLYBENCH_FREE_ARRAY(C);
POLYBENCH_FREE_ARRAY(F);
return 0;
}
