#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <math.h>
#include <polybench.h>
#include <time.h>
#include <stdlib.h>
#include "3634221224_00.h"
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
static void init_array(int xa,int ya,DATA_TYPE POLYBENCH_2D(A,xA,yA,xa,ya),int xb,int yb,DATA_TYPE POLYBENCH_2D(B,xB,yB,xb,yb),int xd,DATA_TYPE POLYBENCH_1D(D,xD,xd),int xe,DATA_TYPE POLYBENCH_1D(E,xE,xe),int xc,int yc,int zc,DATA_TYPE POLYBENCH_3D(C,xC,yC,zC,xc,yc,zc),int seed)
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
D[i] = rand()%3;;
}
for (i = 0; i < xe; i++) {
E[i] = rand()%3;;
}
for (i = 0; i < xc; i++) {
for (j = 0; j < yc; j++) {
for (k = 0; k < zc; k++) {
C[i][j][k] = rand()%3;;
}}}
}
static void print_array(int xa,int ya,DATA_TYPE POLYBENCH_2D(A,xA,yA,xa,ya),int xb,int yb,DATA_TYPE POLYBENCH_2D(B,xB,yB,xb,yb),int xd,DATA_TYPE POLYBENCH_1D(D,xD,xd),int xe,DATA_TYPE POLYBENCH_1D(E,xE,xe),int xc,int yc,int zc,DATA_TYPE POLYBENCH_3D(C,xC,yC,zC,xc,yc,zc))
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
fprintf (POLYBENCH_DUMP_TARGET, "\n");
fprintf (POLYBENCH_DUMP_TARGET, DATA_PRINTF_MODIFIER, D[i]);
}
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
for (k = 0; k < zc; k++) {
fprintf (POLYBENCH_DUMP_TARGET, "\n");
fprintf (POLYBENCH_DUMP_TARGET, DATA_PRINTF_MODIFIER, C[i][j][k]);
}}}
POLYBENCH_DUMP_END("C");
POLYBENCH_DUMP_FINISH;
}
void kernel_3634221224_00(int xa,int ya,DATA_TYPE POLYBENCH_2D(A,xA,yA,xa,ya),int xb,int yb,DATA_TYPE POLYBENCH_2D(B,xB,yB,xb,yb),int xd,DATA_TYPE POLYBENCH_1D(D,xD,xd),int xe,DATA_TYPE POLYBENCH_1D(E,xE,xe),int xc,int yc,int zc,DATA_TYPE POLYBENCH_3D(C,xC,yC,zC,xc,yc,zc)){
polybench_start_instruments;
  int t1, t2, t3, t4, t5, t6;
 int lb, ub, lbp, ubp, lb2, ub2;
 register int lbv, ubv;
/* Start of CLooG code */
for (t1=0;t1<=floord(449*PB_M-450,14320);t1++) {
  for (t2=0;t2<=min(floord(3*PB_M-5,32),3*t1+2);t2++) {
    for (t3=max(ceild(32*t2+1,3),32*t1);t3<=min(min(min(32*t2,PB_M-1),32*t1+31),16*t2+15);t3++) {
      for (t4=max(32*t2,2*t3);t4<=min(min(32*t2+31,3*t3-1),2*t3+PB_M-3);t4++) {
        for (t5=0;t5<=PB_P-1;t5++) {
          A[(-2*t3+t4)][(-2*t3+t4)] = A[(-2*t3+t4)+2][(-2*t3+t4)+2] - 6;;
        }
      }
    }
    if (t2 >= 1) {
      for (t3=max(32*t1,32*t2+1);t3<=min(PB_M-1,32*t1+31);t3++) {
        for (t4=32*t2;t4<=min(min(PB_M-3,32*t2+31),t3-1);t4++) {
          for (t5=0;t5<=t4-1;t5++) {
            B[t4][t5] = B[t4][t5] * C[t5][t4][t3] - 2;;
          }
        }
      }
    }
    if ((t1 == 0) && (t2 == 0)) {
      D[0] = D[0] - D[0] * E[0] * 2;;
      E[0] = E[0] * 6;;
    }
    if ((t1 == 0) && (t2 == 0)) {
      D[1] = D[1] - D[1] * E[1] * 2;;
      E[1] = E[1] * 6;;
      for (t5=0;t5<=PB_P-1;t5++) {
        A[0][0] = A[0 +2][0 +2] - 6;;
      }
    }
    if ((t1 == 0) && (t2 == 0)) {
      D[2] = D[2] - D[2] * E[2] * 2;;
      E[2] = E[2] * 6;;
      E[1] = E[1 +1] * E[1 -1] + E[1] - 6;;
      B[1][0] = B[1][0] * C[0][1][2] - 2;;
      for (t4=4;t4<=5;t4++) {
        for (t5=0;t5<=PB_P-1;t5++) {
          A[(t4-4)][(t4-4)] = A[(t4-4)+2][(t4-4)+2] - 6;;
        }
      }
    }
    if ((t1 == 0) && (t2 == 0)) {
      for (t3=3;t3<=15;t3++) {
        D[t3] = D[t3] - D[t3] * E[t3] * 2;;
        E[t3] = E[t3] * 6;;
        E[(t3-1)] = E[(t3-1)+1] * E[(t3-1)-1] + E[(t3-1)] - 6;;
        D[(t3-1)] = D[(t3-1)] * D[(t3-1)-2] + D[(t3-1)] - E[(t3-1)] - 6;;
        for (t4=1;t4<=t3-1;t4++) {
          for (t5=0;t5<=t4-1;t5++) {
            B[t4][t5] = B[t4][t5] * C[t5][t4][t3] - 2;;
          }
        }
        for (t4=2*t3;t4<=min(31,3*t3-1);t4++) {
          for (t5=0;t5<=PB_P-1;t5++) {
            A[(-2*t3+t4)][(-2*t3+t4)] = A[(-2*t3+t4)+2][(-2*t3+t4)+2] - 6;;
          }
        }
      }
    }
    if (t2 == 0) {
      for (t3=max(16,32*t1);t3<=min(PB_M-1,32*t1+31);t3++) {
        D[t3] = D[t3] - D[t3] * E[t3] * 2;;
        E[t3] = E[t3] * 6;;
        E[(t3-1)] = E[(t3-1)+1] * E[(t3-1)-1] + E[(t3-1)] - 6;;
        D[(t3-1)] = D[(t3-1)] * D[(t3-1)-2] + D[(t3-1)] - E[(t3-1)] - 6;;
        for (t4=1;t4<=min(31,t3-1);t4++) {
          for (t5=0;t5<=t4-1;t5++) {
            B[t4][t5] = B[t4][t5] * C[t5][t4][t3] - 2;;
          }
        }
      }
    }
    if ((t1 == 9) && (t2 == 0)) {
      D[(PB_M-1)] = D[(PB_M-1)] * D[(PB_M-1)-2] + D[(PB_M-1)] - E[(PB_M-1)] - 6;;
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
int yb = yB;
int xd = xD;
int xe = xE;
int xc = xC;
int yc = yC;
int zc = zC;
POLYBENCH_2D_ARRAY_DECL(A, DATA_TYPE,xA,yA,xa,ya);
POLYBENCH_2D_ARRAY_DECL(B, DATA_TYPE,xB,yB,xb,yb);
POLYBENCH_1D_ARRAY_DECL(D, DATA_TYPE,xD,xd);
POLYBENCH_1D_ARRAY_DECL(E, DATA_TYPE,xE,xe);
POLYBENCH_3D_ARRAY_DECL(C, DATA_TYPE,xC,yC,zC,xc,yc,zc);
init_array(xa,ya,POLYBENCH_ARRAY(A),xb,yb,POLYBENCH_ARRAY(B),xd,POLYBENCH_ARRAY(D),xe,POLYBENCH_ARRAY(E),xc,yc,zc,POLYBENCH_ARRAY(C),INIT_SEED);
kernel_3634221224_00(xa,ya,POLYBENCH_ARRAY(A),xb,yb,POLYBENCH_ARRAY(B),xd,POLYBENCH_ARRAY(D),xe,POLYBENCH_ARRAY(E),xc,yc,zc,POLYBENCH_ARRAY(C));
polybench_prevent_dce(print_array(xa,ya,POLYBENCH_ARRAY(A),xb,yb,POLYBENCH_ARRAY(B),xd,POLYBENCH_ARRAY(D),xe,POLYBENCH_ARRAY(E),xc,yc,zc,POLYBENCH_ARRAY(C)));
POLYBENCH_FREE_ARRAY(A);
POLYBENCH_FREE_ARRAY(B);
POLYBENCH_FREE_ARRAY(D);
POLYBENCH_FREE_ARRAY(E);
POLYBENCH_FREE_ARRAY(C);
return 0;
}
