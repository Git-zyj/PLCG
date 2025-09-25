#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <math.h>
#include <polybench.h>
#include <time.h>
#include <stdlib.h>
#include "3334221226_00.h"
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
static void init_array(int xa,int ya,DATA_TYPE POLYBENCH_2D(A,xA,yA,xa,ya),int xd,int yd,int zd,DATA_TYPE POLYBENCH_3D(D,xD,yD,zD,xd,yd,zd),int xc,DATA_TYPE POLYBENCH_1D(C,xC,xc),int xb,int yb,DATA_TYPE POLYBENCH_2D(B,xB,yB,xb,yb),int xe,int ye,int ze,DATA_TYPE POLYBENCH_3D(E,xE,yE,zE,xe,ye,ze),int xf,DATA_TYPE POLYBENCH_1D(F,xF,xf),int seed)
{
srand(seed);
int i,j,k,l;
for (i = 0; i < xa; i++) {
for (j = 0; j < ya; j++) {
A[i][j] = rand()%3;;
}}
for (i = 0; i < xd; i++) {
for (j = 0; j < yd; j++) {
for (k = 0; k < zd; k++) {
D[i][j][k] = rand()%3;;
}}}
for (i = 0; i < xc; i++) {
C[i] = rand()%3;;
}
for (i = 0; i < xb; i++) {
for (j = 0; j < yb; j++) {
B[i][j] = rand()%3;;
}}
for (i = 0; i < xe; i++) {
for (j = 0; j < ye; j++) {
for (k = 0; k < ze; k++) {
E[i][j][k] = rand()%3;;
}}}
for (i = 0; i < xf; i++) {
F[i] = rand()%3;;
}
}
static void print_array(int xa,int ya,DATA_TYPE POLYBENCH_2D(A,xA,yA,xa,ya),int xd,int yd,int zd,DATA_TYPE POLYBENCH_3D(D,xD,yD,zD,xd,yd,zd),int xc,DATA_TYPE POLYBENCH_1D(C,xC,xc),int xb,int yb,DATA_TYPE POLYBENCH_2D(B,xB,yB,xb,yb),int xe,int ye,int ze,DATA_TYPE POLYBENCH_3D(E,xE,yE,zE,xe,ye,ze),int xf,DATA_TYPE POLYBENCH_1D(F,xF,xf))
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
POLYBENCH_DUMP_BEGIN("C");
for (i = 0; i < xc; i++) {
fprintf (POLYBENCH_DUMP_TARGET, "\n");
fprintf (POLYBENCH_DUMP_TARGET, DATA_PRINTF_MODIFIER, C[i]);
}
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
POLYBENCH_DUMP_BEGIN("F");
for (i = 0; i < xf; i++) {
fprintf (POLYBENCH_DUMP_TARGET, "\n");
fprintf (POLYBENCH_DUMP_TARGET, DATA_PRINTF_MODIFIER, F[i]);
}
POLYBENCH_DUMP_END("F");
POLYBENCH_DUMP_FINISH;
}
void kernel_3334221226_00(int xa,int ya,DATA_TYPE POLYBENCH_2D(A,xA,yA,xa,ya),int xd,int yd,int zd,DATA_TYPE POLYBENCH_3D(D,xD,yD,zD,xd,yd,zd),int xc,DATA_TYPE POLYBENCH_1D(C,xC,xc),int xb,int yb,DATA_TYPE POLYBENCH_2D(B,xB,yB,xb,yb),int xe,int ye,int ze,DATA_TYPE POLYBENCH_3D(E,xE,yE,zE,xe,ye,ze),int xf,DATA_TYPE POLYBENCH_1D(F,xF,xf)){
polybench_start_instruments;
  int t1, t2, t3, t4, t5, t6, t7;
 int lb, ub, lbp, ubp, lb2, ub2;
 register int lbv, ubv;
/* Start of CLooG code */
for (t1=0;t1<=floord(PB_L-3,16);t1++) {
  lbp=max(0,ceild(32*t1-PB_L+3,32));
  ubp=min(floord(PB_L-3,32),t1);
#pragma omp parallel for private(lbv,ubv,t3,t4,t5,t6,t7)
  for (t2=lbp;t2<=ubp;t2++) {
    for (t3=0;t3<=min(floord(PB_P,32),floord(501*t1-1002*t2+4665,298));t3++) {
      if ((t1 >= 2) && (t1 == 2*t2) && (t3 == 0)) {
        if (t1%2 == 0) {
          A[(16*t1-1)][16*t1] = A[(16*t1-1)+1][16*t1+2] * B[16*t1][(16*t1-1)] + C[(16*t1-1)+1] - 2;;
        }
        if (t1%2 == 0) {
          C[16*t1] = C[16*t1+1] - F[16*t1] * C[16*t1] + 4;;
        }
        for (t5=16*t1+1;t5<=min(PB_L-3,16*t1+31);t5++) {
          if (t1%2 == 0) {
            A[(16*t1-1)][t5] = A[(16*t1-1)+1][t5+2] * B[t5][(16*t1-1)] + C[(16*t1-1)+1] - 2;;
          }
        }
      }
      if ((t1 <= 2*t2-1) && (t3 == 0)) {
        for (t4=max(1,32*t1-32*t2);t4<=32*t1-32*t2+31;t4++) {
          for (t5=32*t2;t5<=min(PB_L-3,32*t2+31);t5++) {
            A[(t4-1)][t5] = A[(t4-1)+1][t5+2] * B[t5][(t4-1)] + C[(t4-1)+1] - 2;;
          }
        }
      }
      for (t4=max(max(max(2,32*t1-32*t2),32*t2+1),32*t2-31*t3+32);t4<=min(PB_L-3,32*t1-32*t2+31);t4++) {
        for (t5=max(1,32*t2);t5<=min(32*t2+31,t4-1);t5++) {
          lbv=max(1,32*t3);
          ubv=min(PB_P,32*t3+31);
#pragma ivdep
#pragma vector always
          for (t6=lbv;t6<=ubv;t6++) {
            D[t4][t6-1][t4] = D[t4][t6-1][t4] - E[t5-1][t4+1][t4] - 1;;
          }
        }
      }
      if ((t1 == 0) && (t2 == 0) && (t3 == 0)) {
        C[0] = C[0 +1] - F[0] * C[0] + 4;;
      }
      if ((t1 == 0) && (t2 == 0) && (t3 == 0)) {
        A[0][1] = A[0 +1][1 +2] * B[1][0] + C[0 +1] - 2;;
        C[1] = C[1 +1] - F[1] * C[1] + 4;;
        for (t5=2;t5<=31;t5++) {
          A[0][t5] = A[0 +1][t5+2] * B[t5][0] + C[0 +1] - 2;;
        }
      }
      if ((t1 == 2*t2) && (t3 == 0)) {
        for (t4=max(2,16*t1+1);t4<=min(PB_L-3,16*t1+31);t4++) {
          for (t5=max(1,16*t1);t5<=t4-1;t5++) {
            lbv=1;
            ubv=31;
#pragma ivdep
#pragma vector always
            for (t6=lbv;t6<=ubv;t6++) {
              if (t1%2 == 0) {
                D[t4][t6-1][t4] = D[t4][t6-1][t4] - E[t5-1][t4+1][t4] - 1;;
              }
            }
          }
          if (t1%2 == 0) {
            A[(t4-1)][t4] = A[(t4-1)+1][t4+2] * B[t4][(t4-1)] + C[(t4-1)+1] - 2;;
          }
          if (t1%2 == 0) {
            C[t4] = C[t4+1] - F[t4] * C[t4] + 4;;
          }
          for (t5=t4+1;t5<=min(PB_L-3,16*t1+31);t5++) {
            if (t1%2 == 0) {
              A[(t4-1)][t5] = A[(t4-1)+1][t5+2] * B[t5][(t4-1)] + C[(t4-1)+1] - 2;;
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
int xd = xD;
int yd = yD;
int zd = zD;
int xc = xC;
int xb = xB;
int yb = yB;
int xe = xE;
int ye = yE;
int ze = zE;
int xf = xF;
POLYBENCH_2D_ARRAY_DECL(A, DATA_TYPE,xA,yA,xa,ya);
POLYBENCH_3D_ARRAY_DECL(D, DATA_TYPE,xD,yD,zD,xd,yd,zd);
POLYBENCH_1D_ARRAY_DECL(C, DATA_TYPE,xC,xc);
POLYBENCH_2D_ARRAY_DECL(B, DATA_TYPE,xB,yB,xb,yb);
POLYBENCH_3D_ARRAY_DECL(E, DATA_TYPE,xE,yE,zE,xe,ye,ze);
POLYBENCH_1D_ARRAY_DECL(F, DATA_TYPE,xF,xf);
init_array(xa,ya,POLYBENCH_ARRAY(A),xd,yd,zd,POLYBENCH_ARRAY(D),xc,POLYBENCH_ARRAY(C),xb,yb,POLYBENCH_ARRAY(B),xe,ye,ze,POLYBENCH_ARRAY(E),xf,POLYBENCH_ARRAY(F),INIT_SEED);
kernel_3334221226_00(xa,ya,POLYBENCH_ARRAY(A),xd,yd,zd,POLYBENCH_ARRAY(D),xc,POLYBENCH_ARRAY(C),xb,yb,POLYBENCH_ARRAY(B),xe,ye,ze,POLYBENCH_ARRAY(E),xf,POLYBENCH_ARRAY(F));
polybench_prevent_dce(print_array(xa,ya,POLYBENCH_ARRAY(A),xd,yd,zd,POLYBENCH_ARRAY(D),xc,POLYBENCH_ARRAY(C),xb,yb,POLYBENCH_ARRAY(B),xe,ye,ze,POLYBENCH_ARRAY(E),xf,POLYBENCH_ARRAY(F)));
POLYBENCH_FREE_ARRAY(A);
POLYBENCH_FREE_ARRAY(D);
POLYBENCH_FREE_ARRAY(C);
POLYBENCH_FREE_ARRAY(B);
POLYBENCH_FREE_ARRAY(E);
POLYBENCH_FREE_ARRAY(F);
return 0;
}
