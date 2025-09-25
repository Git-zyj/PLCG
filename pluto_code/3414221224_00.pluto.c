#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <math.h>
#include <polybench.h>
#include <time.h>
#include <stdlib.h>
#include "3414221224_00.h"
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
static void init_array(int xa,DATA_TYPE POLYBENCH_1D(A,xA,xa),int xb,int yb,DATA_TYPE POLYBENCH_2D(B,xB,yB,xb,yb),int xd,int yd,int zd,DATA_TYPE POLYBENCH_3D(D,xD,yD,zD,xd,yd,zd),int xc,int yc,DATA_TYPE POLYBENCH_2D(C,xC,yC,xc,yc),int xe,int ye,int ze,DATA_TYPE POLYBENCH_3D(E,xE,yE,zE,xe,ye,ze),int seed)
{
srand(seed);
int i,j,k,l;
for (i = 0; i < xa; i++) {
A[i] = rand()%3;;
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
for (i = 0; i < xc; i++) {
for (j = 0; j < yc; j++) {
C[i][j] = rand()%3;;
}}
for (i = 0; i < xe; i++) {
for (j = 0; j < ye; j++) {
for (k = 0; k < ze; k++) {
E[i][j][k] = rand()%3;;
}}}
}
static void print_array(int xa,DATA_TYPE POLYBENCH_1D(A,xA,xa),int xb,int yb,DATA_TYPE POLYBENCH_2D(B,xB,yB,xb,yb),int xd,int yd,int zd,DATA_TYPE POLYBENCH_3D(D,xD,yD,zD,xd,yd,zd),int xc,int yc,DATA_TYPE POLYBENCH_2D(C,xC,yC,xc,yc),int xe,int ye,int ze,DATA_TYPE POLYBENCH_3D(E,xE,yE,zE,xe,ye,ze))
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
POLYBENCH_DUMP_BEGIN("C");
for (i = 0; i < xc; i++) {
for (j = 0; j < yc; j++) {
fprintf (POLYBENCH_DUMP_TARGET, "\n");
fprintf (POLYBENCH_DUMP_TARGET, DATA_PRINTF_MODIFIER, C[i][j]);
}}
POLYBENCH_DUMP_END("C");
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
void kernel_3414221224_00(int xa,DATA_TYPE POLYBENCH_1D(A,xA,xa),int xb,int yb,DATA_TYPE POLYBENCH_2D(B,xB,yB,xb,yb),int xd,int yd,int zd,DATA_TYPE POLYBENCH_3D(D,xD,yD,zD,xd,yd,zd),int xc,int yc,DATA_TYPE POLYBENCH_2D(C,xC,yC,xc,yc),int xe,int ye,int ze,DATA_TYPE POLYBENCH_3D(E,xE,yE,zE,xe,ye,ze)){
polybench_start_instruments;
  int t1, t2, t3, t4, t5, t6, t7, t8, t9;
 int lb, ub, lbp, ubp, lb2, ub2;
 register int lbv, ubv;
/* Start of CLooG code */
lbp=0;
ubp=floord(PB_M-2,32);
#pragma omp parallel for private(lbv,ubv,t3,t4,t5,t6,t7,t8,t9)
for (t2=lbp;t2<=ubp;t2++) {
  for (t4=0;t4<=floord(PB_M-1,32);t4++) {
    for (t5=0;t5<=floord(PB_N-2,32);t5++) {
      for (t6=max(2,32*t2);t6<=min(PB_M-2,32*t2+31);t6++) {
        for (t8=32*t5;t8<=min(PB_N-2,32*t5+31);t8++) {
          lbv=32*t4;
          ubv=min(PB_M-1,32*t4+31);
#pragma ivdep
#pragma vector always
          for (t9=lbv;t9<=ubv;t9++) {
            D[t6][t6][t9] = D[t6][t6-2][t9] + D[t6+1][t6][t9] * E[t8+1][t6][t9] + 3;;
          }
        }
      }
    }
  }
}
lbp=0;
ubp=floord(PB_M-2,32);
#pragma omp parallel for private(lbv,ubv,t3,t4,t5,t6,t7,t8,t9)
for (t2=lbp;t2<=ubp;t2++) {
  lbv=max(3,32*t2);
  ubv=min(PB_M-2,32*t2+31);
#pragma ivdep
#pragma vector always
  for (t3=lbv;t3<=ubv;t3++) {
    A[t3-1] = A[t3-1] * 2;;
  }
}
lbp=0;
ubp=floord(PB_N+1,32);
#pragma omp parallel for private(lbv,ubv,t3,t4,t5,t6,t7,t8,t9)
for (t2=lbp;t2<=ubp;t2++) {
  for (t4=0;t4<=floord(PB_N-1,32);t4++) {
    for (t5=max(3,32*t2);t5<=min(PB_M-2,32*t2+31);t5++) {
      lbv=32*t4;
      ubv=min(PB_N-1,32*t4+31);
#pragma ivdep
#pragma vector always
      for (t7=lbv;t7<=ubv;t7++) {
        B[t7][t5+1] = A[t5-3] + B[t7][t5+1] + 6;;
      }
    }
  }
  for (t4=0;t4<=floord(PB_M-2,32);t4++) {
    for (t5=max(3,32*t2);t5<=min(PB_N+1,32*t2+31);t5++) {
      for (t7=max(2,32*t4);t7<=min(PB_M-2,32*t4+31);t7++) {
        A[(t5-3)] = C[(t5-3)][t7] - 4;;
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
int xd = xD;
int yd = yD;
int zd = zD;
int xc = xC;
int yc = yC;
int xe = xE;
int ye = yE;
int ze = zE;
POLYBENCH_1D_ARRAY_DECL(A, DATA_TYPE,xA,xa);
POLYBENCH_2D_ARRAY_DECL(B, DATA_TYPE,xB,yB,xb,yb);
POLYBENCH_3D_ARRAY_DECL(D, DATA_TYPE,xD,yD,zD,xd,yd,zd);
POLYBENCH_2D_ARRAY_DECL(C, DATA_TYPE,xC,yC,xc,yc);
POLYBENCH_3D_ARRAY_DECL(E, DATA_TYPE,xE,yE,zE,xe,ye,ze);
init_array(xa,POLYBENCH_ARRAY(A),xb,yb,POLYBENCH_ARRAY(B),xd,yd,zd,POLYBENCH_ARRAY(D),xc,yc,POLYBENCH_ARRAY(C),xe,ye,ze,POLYBENCH_ARRAY(E),INIT_SEED);
kernel_3414221224_00(xa,POLYBENCH_ARRAY(A),xb,yb,POLYBENCH_ARRAY(B),xd,yd,zd,POLYBENCH_ARRAY(D),xc,yc,POLYBENCH_ARRAY(C),xe,ye,ze,POLYBENCH_ARRAY(E));
polybench_prevent_dce(print_array(xa,POLYBENCH_ARRAY(A),xb,yb,POLYBENCH_ARRAY(B),xd,yd,zd,POLYBENCH_ARRAY(D),xc,yc,POLYBENCH_ARRAY(C),xe,ye,ze,POLYBENCH_ARRAY(E)));
POLYBENCH_FREE_ARRAY(A);
POLYBENCH_FREE_ARRAY(B);
POLYBENCH_FREE_ARRAY(D);
POLYBENCH_FREE_ARRAY(C);
POLYBENCH_FREE_ARRAY(E);
return 0;
}
