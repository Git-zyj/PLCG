#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <math.h>
#include <polybench.h>
#include <time.h>
#include <stdlib.h>
#include "3424321226_00.h"
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
static void init_array(int xa,int ya,int za,DATA_TYPE POLYBENCH_3D(A,xA,yA,zA,xa,ya,za),int xc,int yc,DATA_TYPE POLYBENCH_2D(C,xC,yC,xc,yc),int xd,int yd,int zd,DATA_TYPE POLYBENCH_3D(D,xD,yD,zD,xd,yd,zd),int xb,int yb,int zb,DATA_TYPE POLYBENCH_3D(B,xB,yB,zB,xb,yb,zb),int seed)
{
srand(seed);
int i,j,k,l;
for (i = 0; i < xa; i++) {
for (j = 0; j < ya; j++) {
for (k = 0; k < za; k++) {
A[i][j][k] = rand()%3;;
}}}
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
for (k = 0; k < zb; k++) {
B[i][j][k] = rand()%3;;
}}}
}
static void print_array(int xa,int ya,int za,DATA_TYPE POLYBENCH_3D(A,xA,yA,zA,xa,ya,za),int xc,int yc,DATA_TYPE POLYBENCH_2D(C,xC,yC,xc,yc),int xd,int yd,int zd,DATA_TYPE POLYBENCH_3D(D,xD,yD,zD,xd,yd,zd),int xb,int yb,int zb,DATA_TYPE POLYBENCH_3D(B,xB,yB,zB,xb,yb,zb))
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
for (k = 0; k < zb; k++) {
fprintf (POLYBENCH_DUMP_TARGET, "\n");
fprintf (POLYBENCH_DUMP_TARGET, DATA_PRINTF_MODIFIER, B[i][j][k]);
}}}
POLYBENCH_DUMP_END("B");
POLYBENCH_DUMP_FINISH;
}
void kernel_3424321226_00(int xa,int ya,int za,DATA_TYPE POLYBENCH_3D(A,xA,yA,zA,xa,ya,za),int xc,int yc,DATA_TYPE POLYBENCH_2D(C,xC,yC,xc,yc),int xd,int yd,int zd,DATA_TYPE POLYBENCH_3D(D,xD,yD,zD,xd,yd,zd),int xb,int yb,int zb,DATA_TYPE POLYBENCH_3D(B,xB,yB,zB,xb,yb,zb)){
polybench_start_instruments;
  int t1, t2, t3, t4, t5, t6, t7;
 int lb, ub, lbp, ubp, lb2, ub2;
 register int lbv, ubv;
/* Start of CLooG code */
for (t2=1;t2<=PB_L-2;t2++) {
  for (t3=0;t3<=floord(PB_L+2*PB_Q-4,32);t3++) {
    lbp=max(0,ceild(32*t3-PB_Q+1,32));
    ubp=min(min(floord(PB_L+PB_Q-3,32),floord(32*t3+PB_L+29,64)),t3);
#pragma omp parallel for private(lbv,ubv,t5,t6,t7)
    for (t4=lbp;t4<=ubp;t4++) {
      for (t5=max(32*t3-32*t4,32*t4+32);t5<=min(PB_Q-1,32*t3-32*t4+31);t5++) {
        for (t6=32*t4;t6<=32*t4+31;t6++) {
          C[t2-1][t6] = C[t2-1][t6] * 3;;
        }
      }
      for (t5=max(32*t3-32*t4,32*t4-PB_L+2);t5<=min(min(32*t4,PB_Q-1),32*t3-32*t4+31);t5++) {
        for (t6=32*t4;t6<=min(32*t4+31,t5+PB_L-2);t6++) {
          D[t2+1][(-t5+t6)][t5] = A[t2][t2][(-t5+t6)+1] - D[(-t5+t6)][t2][t2] + 4;;
        }
      }
      if (t3 == 2*t4) {
        for (t5=16*t3+1;t5<=min(PB_Q-1,16*t3+31);t5++) {
          for (t6=16*t3;t6<=t5-1;t6++) {
            if (t3%2 == 0) {
              C[t2-1][t6] = C[t2-1][t6] * 3;;
            }
          }
          for (t6=t5;t6<=16*t3+31;t6++) {
            if (t3%2 == 0) {
              D[t2+1][(-t5+t6)][t5] = A[t2][t2][(-t5+t6)+1] - D[(-t5+t6)][t2][t2] + 4;;
            }
          }
        }
      }
    }
  }
}
for (t2=2;t2<=PB_M-1;t2++) {
  for (t3=0;t3<=PB_L-2;t3++) {
    C[t3][t2] = C[t3][t2-2] + C[t2][t3+1] - 4;;
  }
}
lbp=0;
ubp=floord(PB_L-2,32);
#pragma omp parallel for private(lbv,ubv,t3,t4,t5,t6,t7)
for (t2=lbp;t2<=ubp;t2++) {
  for (t3=0;t3<=t2;t3++) {
    for (t4=0;t4<=t2;t4++) {
      for (t5=max(max(max(3,32*t2),32*t3+1),32*t4+1);t5<=min(PB_L-2,32*t2+31);t5++) {
        for (t6=max(2,32*t3);t6<=min(32*t3+31,t5-1);t6++) {
          for (t7=32*t4;t7<=min(32*t4+31,t5-1);t7++) {
            A[t6][t5][t6] = A[t6+1][t5+1][t6-2] - B[t6-1][t7][t5-1] * 1;;
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
int za = zA;
int xc = xC;
int yc = yC;
int xd = xD;
int yd = yD;
int zd = zD;
int xb = xB;
int yb = yB;
int zb = zB;
POLYBENCH_3D_ARRAY_DECL(A, DATA_TYPE,xA,yA,zA,xa,ya,za);
POLYBENCH_2D_ARRAY_DECL(C, DATA_TYPE,xC,yC,xc,yc);
POLYBENCH_3D_ARRAY_DECL(D, DATA_TYPE,xD,yD,zD,xd,yd,zd);
POLYBENCH_3D_ARRAY_DECL(B, DATA_TYPE,xB,yB,zB,xb,yb,zb);
init_array(xa,ya,za,POLYBENCH_ARRAY(A),xc,yc,POLYBENCH_ARRAY(C),xd,yd,zd,POLYBENCH_ARRAY(D),xb,yb,zb,POLYBENCH_ARRAY(B),INIT_SEED);
kernel_3424321226_00(xa,ya,za,POLYBENCH_ARRAY(A),xc,yc,POLYBENCH_ARRAY(C),xd,yd,zd,POLYBENCH_ARRAY(D),xb,yb,zb,POLYBENCH_ARRAY(B));
polybench_prevent_dce(print_array(xa,ya,za,POLYBENCH_ARRAY(A),xc,yc,POLYBENCH_ARRAY(C),xd,yd,zd,POLYBENCH_ARRAY(D),xb,yb,zb,POLYBENCH_ARRAY(B)));
POLYBENCH_FREE_ARRAY(A);
POLYBENCH_FREE_ARRAY(C);
POLYBENCH_FREE_ARRAY(D);
POLYBENCH_FREE_ARRAY(B);
return 0;
}
