#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <math.h>
#include <polybench.h>
#include <time.h>
#include <stdlib.h>
#include "3524221224_00.h"
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
static void init_array(int xa,DATA_TYPE POLYBENCH_1D(A,xA,xa),int xb,DATA_TYPE POLYBENCH_1D(B,xB,xb),int xc,int yc,int zc,DATA_TYPE POLYBENCH_3D(C,xC,yC,zC,xc,yc,zc),int xe,int ye,DATA_TYPE POLYBENCH_2D(E,xE,yE,xe,ye),int xd,int yd,DATA_TYPE POLYBENCH_2D(D,xD,yD,xd,yd),int seed)
{
srand(seed);
int i,j,k,l;
for (i = 0; i < xa; i++) {
A[i] = rand()%3;;
}
for (i = 0; i < xb; i++) {
B[i] = rand()%3;;
}
for (i = 0; i < xc; i++) {
for (j = 0; j < yc; j++) {
for (k = 0; k < zc; k++) {
C[i][j][k] = rand()%3;;
}}}
for (i = 0; i < xe; i++) {
for (j = 0; j < ye; j++) {
E[i][j] = rand()%3;;
}}
for (i = 0; i < xd; i++) {
for (j = 0; j < yd; j++) {
D[i][j] = rand()%3;;
}}
}
static void print_array(int xa,DATA_TYPE POLYBENCH_1D(A,xA,xa),int xb,DATA_TYPE POLYBENCH_1D(B,xB,xb),int xc,int yc,int zc,DATA_TYPE POLYBENCH_3D(C,xC,yC,zC,xc,yc,zc),int xe,int ye,DATA_TYPE POLYBENCH_2D(E,xE,yE,xe,ye),int xd,int yd,DATA_TYPE POLYBENCH_2D(D,xD,yD,xd,yd))
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
fprintf (POLYBENCH_DUMP_TARGET, "\n");
fprintf (POLYBENCH_DUMP_TARGET, DATA_PRINTF_MODIFIER, B[i]);
}
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
for (j = 0; j < ye; j++) {
fprintf (POLYBENCH_DUMP_TARGET, "\n");
fprintf (POLYBENCH_DUMP_TARGET, DATA_PRINTF_MODIFIER, E[i][j]);
}}
POLYBENCH_DUMP_END("E");
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
}
void kernel_3524221224_00(int xa,DATA_TYPE POLYBENCH_1D(A,xA,xa),int xb,DATA_TYPE POLYBENCH_1D(B,xB,xb),int xc,int yc,int zc,DATA_TYPE POLYBENCH_3D(C,xC,yC,zC,xc,yc,zc),int xe,int ye,DATA_TYPE POLYBENCH_2D(E,xE,yE,xe,ye),int xd,int yd,DATA_TYPE POLYBENCH_2D(D,xD,yD,xd,yd)){
polybench_start_instruments;
  int t1, t2, t3, t4, t5, t6, t7, t8;
 int lb, ub, lbp, ubp, lb2, ub2;
 register int lbv, ubv;
/* Start of CLooG code */
lbp=0;
ubp=floord(PB_P-1,32);
#pragma omp parallel for private(lbv,ubv,t3,t4,t5,t6,t7,t8)
for (t2=lbp;t2<=ubp;t2++) {
  for (t3=0;t3<=floord(PB_L-1,32);t3++) {
    for (t4=32*t3;t4<=min(PB_L-1,32*t3+31);t4++) {
      lbv=max(1,32*t2);
      ubv=min(PB_P-1,32*t2+31);
#pragma ivdep
#pragma vector always
      for (t5=lbv;t5<=ubv;t5++) {
        E[t4][t5] = 1;;
      }
    }
  }
}
lbp=0;
ubp=floord(PB_P-1,32);
#pragma omp parallel for private(lbv,ubv,t3,t4,t5,t6,t7,t8)
for (t2=lbp;t2<=ubp;t2++) {
  for (t3=0;t3<=t2;t3++) {
    for (t4=0;t4<=floord(PB_N-1,32);t4++) {
      for (t5=max(1,32*t3);t5<=min(min(PB_P-2,32*t2+30),32*t3+31);t5++) {
        for (t6=max(1,32*t4);t6<=min(PB_N-1,32*t4+31);t6++) {
          lbv=max(32*t2,t5+1);
          ubv=min(PB_P-1,32*t2+31);
#pragma ivdep
#pragma vector always
          for (t7=lbv;t7<=ubv;t7++) {
            C[t5][t6][t7-1] = C[t5][t6-1][t7-1] + D[t6][t5-1] + 6;;
          }
        }
      }
    }
  }
}
lbp=0;
ubp=floord(PB_M-1,32);
#pragma omp parallel for private(lbv,ubv,t3,t4,t5,t6,t7,t8)
for (t2=lbp;t2<=ubp;t2++) {
  for (t3=0;t3<=floord(PB_M-1,32);t3++) {
    for (t4=32*t3;t4<=min(PB_M-1,32*t3+31);t4++) {
      lbv=32*t2;
      ubv=min(PB_M-1,32*t2+31);
#pragma ivdep
#pragma vector always
      for (t5=lbv;t5<=ubv;t5++) {
        B[t5] = 3;;
      }
    }
  }
}
A[0] = A[0] + A[0] - 1;;
for (t2=1;t2<=PB_P-1;t2++) {
  A[t2] = A[t2] + A[t2] - 1;;
  B[t2] = B[t2+2] - A[t2] * 5;;
}
for (t2=PB_P;t2<=PB_N-1;t2++) {
  A[t2] = A[t2] + A[t2] - 1;;
}
/* End of CLooG code */
polybench_stop_instruments;
polybench_print_instruments;
}
int main(int argc, char** argv)
{
int xa = xA;
int xb = xB;
int xc = xC;
int yc = yC;
int zc = zC;
int xe = xE;
int ye = yE;
int xd = xD;
int yd = yD;
POLYBENCH_1D_ARRAY_DECL(A, DATA_TYPE,xA,xa);
POLYBENCH_1D_ARRAY_DECL(B, DATA_TYPE,xB,xb);
POLYBENCH_3D_ARRAY_DECL(C, DATA_TYPE,xC,yC,zC,xc,yc,zc);
POLYBENCH_2D_ARRAY_DECL(E, DATA_TYPE,xE,yE,xe,ye);
POLYBENCH_2D_ARRAY_DECL(D, DATA_TYPE,xD,yD,xd,yd);
init_array(xa,POLYBENCH_ARRAY(A),xb,POLYBENCH_ARRAY(B),xc,yc,zc,POLYBENCH_ARRAY(C),xe,ye,POLYBENCH_ARRAY(E),xd,yd,POLYBENCH_ARRAY(D),INIT_SEED);
kernel_3524221224_00(xa,POLYBENCH_ARRAY(A),xb,POLYBENCH_ARRAY(B),xc,yc,zc,POLYBENCH_ARRAY(C),xe,ye,POLYBENCH_ARRAY(E),xd,yd,POLYBENCH_ARRAY(D));
polybench_prevent_dce(print_array(xa,POLYBENCH_ARRAY(A),xb,POLYBENCH_ARRAY(B),xc,yc,zc,POLYBENCH_ARRAY(C),xe,ye,POLYBENCH_ARRAY(E),xd,yd,POLYBENCH_ARRAY(D)));
POLYBENCH_FREE_ARRAY(A);
POLYBENCH_FREE_ARRAY(B);
POLYBENCH_FREE_ARRAY(C);
POLYBENCH_FREE_ARRAY(E);
POLYBENCH_FREE_ARRAY(D);
return 0;
}
