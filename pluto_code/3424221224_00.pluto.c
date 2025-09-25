#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <math.h>
#include <polybench.h>
#include <time.h>
#include <stdlib.h>
#include "3424221224_00.h"
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
static void init_array(int xa,DATA_TYPE POLYBENCH_1D(A,xA,xa),int xc,int yc,DATA_TYPE POLYBENCH_2D(C,xC,yC,xc,yc),int xd,int yd,int zd,DATA_TYPE POLYBENCH_3D(D,xD,yD,zD,xd,yd,zd),int xb,int yb,DATA_TYPE POLYBENCH_2D(B,xB,yB,xb,yb),int xe,int ye,int ze,DATA_TYPE POLYBENCH_3D(E,xE,yE,zE,xe,ye,ze),int seed)
{
srand(seed);
int i,j,k,l;
for (i = 0; i < xa; i++) {
A[i] = rand()%3;;
}
for (i = 0; i < xc; i++) {
for (j = 0; j < yc; j++) {
C[i][j] = rand()%3;;
}}
for (i = 0; i < xd; i++) {
for (j = 0; j < yd; j++) {
for (k = 0; k < zd; k++) {
D[i][j][k] = rand()%3;;
}}}
for (i = 0; i < xb; i++) {
for (j = 0; j < yb; j++) {
B[i][j] = rand()%3;;
}}
for (i = 0; i < xe; i++) {
for (j = 0; j < ye; j++) {
for (k = 0; k < ze; k++) {
E[i][j][k] = rand()%3;;
}}}
}
static void print_array(int xa,DATA_TYPE POLYBENCH_1D(A,xA,xa),int xc,int yc,DATA_TYPE POLYBENCH_2D(C,xC,yC,xc,yc),int xd,int yd,int zd,DATA_TYPE POLYBENCH_3D(D,xD,yD,zD,xd,yd,zd),int xb,int yb,DATA_TYPE POLYBENCH_2D(B,xB,yB,xb,yb),int xe,int ye,int ze,DATA_TYPE POLYBENCH_3D(E,xE,yE,zE,xe,ye,ze))
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
fprintf (POLYBENCH_DUMP_TARGET, "\n");
fprintf (POLYBENCH_DUMP_TARGET, DATA_PRINTF_MODIFIER, C[i][j]);
}}
POLYBENCH_DUMP_END("C");
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
}
void kernel_3424221224_00(int xa,DATA_TYPE POLYBENCH_1D(A,xA,xa),int xc,int yc,DATA_TYPE POLYBENCH_2D(C,xC,yC,xc,yc),int xd,int yd,int zd,DATA_TYPE POLYBENCH_3D(D,xD,yD,zD,xd,yd,zd),int xb,int yb,DATA_TYPE POLYBENCH_2D(B,xB,yB,xb,yb),int xe,int ye,int ze,DATA_TYPE POLYBENCH_3D(E,xE,yE,zE,xe,ye,ze)){
polybench_start_instruments;
  int t1, t2, t3, t4, t5, t6, t7;
 int lb, ub, lbp, ubp, lb2, ub2;
 register int lbv, ubv;
/* Start of CLooG code */
for (t2=0;t2<=floord(PB_M+PB_L-3,32);t2++) {
  lbp=max(0,ceild(32*t2-PB_M+1,32));
  ubp=min(floord(PB_L-2,32),t2);
#pragma omp parallel for private(lbv,ubv,t4,t5,t6,t7)
  for (t3=lbp;t3<=ubp;t3++) {
    for (t4=0;t4<=floord(PB_P-2,32);t4++) {
      for (t5=32*t3;t5<=min(PB_L-2,32*t3+31);t5++) {
        for (t6=max(2,32*t4);t6<=min(PB_P-2,32*t4+31);t6++) {
          for (t7=32*t2-32*t3;t7<=min(PB_M-1,32*t2-32*t3+31);t7++) {
            D[t6][t5][t6] = D[t6][t5+1][t6-2] + D[t6][t5][t6+1] - B[t6][t6] - E[t5+1][t5][t6] * 2;;
          }
        }
      }
    }
  }
}
for (t2=0;t2<=floord(3*PB_M-3,32);t2++) {
  lbp=max(0,ceild(32*t2-PB_M+1,32));
  ubp=min(min(floord(PB_M-1,16),floord(32*t2+PB_M+30,64)),t2);
#pragma omp parallel for private(lbv,ubv,t4,t5,t6,t7)
  for (t3=lbp;t3<=ubp;t3++) {
    if (t3 <= floord(PB_L-2,32)) {
      for (t4=32*t2-32*t3;t4<=min(min(PB_M-1,32*t3+30),32*t2-32*t3+31);t4++) {
        if (t2 == 2*t3) {
          for (t5=max(1,16*t2);t5<=min(t4,PB_L-2);t5++) {
            if (t2%2 == 0) {
              C[t4][t5-1] = C[t4][t5+1] + 4;;
            }
          }
        }
        for (t5=max(32*t3,t4+1);t5<=min(PB_L-2,32*t3+31);t5++) {
          A[(-t4+t5)] = A[(-t4+t5)-1] - A[(-t4+t5)] - B[(-t4+t5)][(-t4+t5)-1] + 5;;
          C[t4][t5-1] = C[t4][t5+1] + 4;;
        }
        if (t3 == 12) {
          for (t5=max(PB_L-1,t4+1);t5<=min(415,t4+PB_M-1);t5++) {
            A[(-t4+t5)] = A[(-t4+t5)-1] - A[(-t4+t5)] - B[(-t4+t5)][(-t4+t5)-1] + 5;;
          }
        }
      }
    }
    if (t3 >= ceild(PB_L-1,32)) {
      for (t4=max(32*t2-32*t3,32*t3-PB_M+1);t4<=min(PB_M-1,32*t2-32*t3+31);t4++) {
        for (t5=32*t3;t5<=min(32*t3+31,t4+PB_M-1);t5++) {
          A[(-t4+t5)] = A[(-t4+t5)-1] - A[(-t4+t5)] - B[(-t4+t5)][(-t4+t5)-1] + 5;;
        }
      }
    }
    for (t4=max(32*t2-32*t3,32*t3+31);t4<=min(PB_M-1,32*t2-32*t3+31);t4++) {
      for (t5=max(1,32*t3);t5<=32*t3+31;t5++) {
        C[t4][t5-1] = C[t4][t5+1] + 4;;
      }
    }
  }
}
lbp=0;
ubp=floord(PB_M-1,32);
#pragma omp parallel for private(lbv,ubv,t3,t4,t5,t6,t7)
for (t2=lbp;t2<=ubp;t2++) {
  lbv=32*t2;
  ubv=min(PB_M-1,32*t2+31);
#pragma ivdep
#pragma vector always
  for (t3=lbv;t3<=ubv;t3++) {
    A[t3] = A[t3] + A[t3] * 4;;
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
int xd = xD;
int yd = yD;
int zd = zD;
int xb = xB;
int yb = yB;
int xe = xE;
int ye = yE;
int ze = zE;
POLYBENCH_1D_ARRAY_DECL(A, DATA_TYPE,xA,xa);
POLYBENCH_2D_ARRAY_DECL(C, DATA_TYPE,xC,yC,xc,yc);
POLYBENCH_3D_ARRAY_DECL(D, DATA_TYPE,xD,yD,zD,xd,yd,zd);
POLYBENCH_2D_ARRAY_DECL(B, DATA_TYPE,xB,yB,xb,yb);
POLYBENCH_3D_ARRAY_DECL(E, DATA_TYPE,xE,yE,zE,xe,ye,ze);
init_array(xa,POLYBENCH_ARRAY(A),xc,yc,POLYBENCH_ARRAY(C),xd,yd,zd,POLYBENCH_ARRAY(D),xb,yb,POLYBENCH_ARRAY(B),xe,ye,ze,POLYBENCH_ARRAY(E),INIT_SEED);
kernel_3424221224_00(xa,POLYBENCH_ARRAY(A),xc,yc,POLYBENCH_ARRAY(C),xd,yd,zd,POLYBENCH_ARRAY(D),xb,yb,POLYBENCH_ARRAY(B),xe,ye,ze,POLYBENCH_ARRAY(E));
polybench_prevent_dce(print_array(xa,POLYBENCH_ARRAY(A),xc,yc,POLYBENCH_ARRAY(C),xd,yd,zd,POLYBENCH_ARRAY(D),xb,yb,POLYBENCH_ARRAY(B),xe,ye,ze,POLYBENCH_ARRAY(E)));
POLYBENCH_FREE_ARRAY(A);
POLYBENCH_FREE_ARRAY(C);
POLYBENCH_FREE_ARRAY(D);
POLYBENCH_FREE_ARRAY(B);
POLYBENCH_FREE_ARRAY(E);
return 0;
}
