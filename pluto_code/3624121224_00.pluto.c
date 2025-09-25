#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <math.h>
#include <polybench.h>
#include <time.h>
#include <stdlib.h>
#include "3624121224_00.h"
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
static void init_array(int xa,int ya,DATA_TYPE POLYBENCH_2D(A,xA,yA,xa,ya),int xb,DATA_TYPE POLYBENCH_1D(B,xB,xb),int xc,int yc,int zc,DATA_TYPE POLYBENCH_3D(C,xC,yC,zC,xc,yc,zc),int seed)
{
srand(seed);
int i,j,k,l;
for (i = 0; i < xa; i++) {
for (j = 0; j < ya; j++) {
A[i][j] = rand()%3;;
}}
for (i = 0; i < xb; i++) {
B[i] = rand()%3;;
}
for (i = 0; i < xc; i++) {
for (j = 0; j < yc; j++) {
for (k = 0; k < zc; k++) {
C[i][j][k] = rand()%3;;
}}}
}
static void print_array(int xa,int ya,DATA_TYPE POLYBENCH_2D(A,xA,yA,xa,ya),int xb,DATA_TYPE POLYBENCH_1D(B,xB,xb),int xc,int yc,int zc,DATA_TYPE POLYBENCH_3D(C,xC,yC,zC,xc,yc,zc))
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
}
void kernel_3624121224_00(int xa,int ya,DATA_TYPE POLYBENCH_2D(A,xA,yA,xa,ya),int xb,DATA_TYPE POLYBENCH_1D(B,xB,xb),int xc,int yc,int zc,DATA_TYPE POLYBENCH_3D(C,xC,yC,zC,xc,yc,zc)){
polybench_start_instruments;
  int t1, t2, t3, t4, t5, t6, t7;
 int lb, ub, lbp, ubp, lb2, ub2;
 register int lbv, ubv;
/* Start of CLooG code */
for (t2=-1;t2<=floord(PB_Q+PB_M-2,32);t2++) {
  lbp=max(0,ceild(32*t2-PB_M+1,32));
  ubp=min(floord(PB_Q-1,32),t2+1);
#pragma omp parallel for private(lbv,ubv,t4,t5,t6,t7)
  for (t3=lbp;t3<=ubp;t3++) {
    for (t4=max(-1,32*t2-32*t3);t4<=min(2,32*t2-32*t3+31);t4++) {
      for (t5=32*t3;t5<=min(PB_Q-1,32*t3+31);t5++) {
        for (t6=0;t6<=PB_Q-1;t6++) {
          C[t4+1][t5][t5] = 4;;
        }
      }
    }
    for (t4=max(3,32*t2-32*t3);t4<=min(PB_M-2,32*t2-32*t3+31);t4++) {
      if (t3 == 0) {
        for (t6=0;t6<=PB_Q-1;t6++) {
          C[t4+1][0][0] = 4;;
        }
      }
      for (t5=max(1,32*t3);t5<=min(PB_Q-1,32*t3+31);t5++) {
        for (t6=0;t6<=PB_Q-1;t6++) {
          C[t4][t4-1][t5] = C[t4][t4-3][t5-1] + 3;;
          C[t4+1][t5][t5] = 4;;
        }
      }
    }
    if (t2 == t3+12) {
      for (t5=max(1,32*t2-384);t5<=min(PB_Q-1,32*t2-353);t5++) {
        for (t6=0;t6<=PB_Q-1;t6++) {
          C[(PB_M-1)][(PB_M-1)-1][t5] = C[(PB_M-1)][(PB_M-1)-3][t5-1] + 3;;
        }
      }
    }
  }
}
for (t2=2;t2<=PB_N-2;t2++) {
  B[t2+1] = B[t2] + 6;;
}
for (t2=0;t2<=floord(PB_N-2,8);t2++) {
  lbp=max(ceild(2*t2,3),ceild(32*t2-PB_N+2,32));
  ubp=min(min(floord(3*PB_N-5,32),floord(64*t2+PB_N+61,96)),t2);
#pragma omp parallel for private(lbv,ubv,t4,t5,t6,t7)
  for (t3=lbp;t3<=ubp;t3++) {
    for (t4=max(max(2,ceild(32*t3-PB_N+1,2)),32*t2-32*t3);t4<=min(floord(32*t3-2,3),32*t2-32*t3+31);t4++) {
      for (t5=32*t3;t5<=min(32*t3+31,2*t4+PB_N-1);t5++) {
        A[t4][(-2*t4+t5)] = A[t4][(-2*t4+t5)] * A[t4-2][(-2*t4+t5)] - 5;;
      }
    }
    if (3*t2 == 4*t3-2) {
      if ((t2+2)%4 == 0) {
        A[(8*t2+5)][(8*t2+6)] = A[(8*t2+5)][(8*t2+6)] * A[(8*t2+5)-2][(8*t2+6)] - 5;;
      }
      if ((t2+2)%4 == 0) {
        A[(8*t2+4)][(8*t2+5)] = A[(8*t2+5)][(8*t2+4)+1] + A[(8*t2+4)+1][(8*t2+4)-1] + 2;;
      }
      for (t5=24*t2+17;t5<=min(24*t2+47,16*t2+PB_N+9);t5++) {
        if ((t2+2)%4 == 0) {
          A[(8*t2+5)][(-16*t2+t5-10)] = A[(8*t2+5)][(-16*t2+t5-10)] * A[(8*t2+5)-2][(-16*t2+t5-10)] - 5;;
        }
      }
    }
    for (t4=max(max(2,ceild(32*t3,3)),32*t2-32*t3);t4<=min(min(PB_N-2,16*t3+14),32*t2-32*t3+31);t4++) {
      for (t5=max(32*t3,2*t4);t5<=2*t4+1;t5++) {
        A[t4][(-2*t4+t5)] = A[t4][(-2*t4+t5)] * A[t4-2][(-2*t4+t5)] - 5;;
      }
      if (t3 <= floord(t4+1,16)) {
        A[t4][2] = A[t4][2] * A[t4-2][2] - 5;;
        A[t4][1] = A[t4][1] - A[t4-1][1 +2] * B[t4-1] * 6;;
      }
      for (t5=max(32*t3,2*t4+3);t5<=min(3*t4,32*t3+31);t5++) {
        A[t4][(-2*t4+t5)] = A[t4][(-2*t4+t5)] * A[t4-2][(-2*t4+t5)] - 5;;
        A[(-2*t4+t5-2)][t4] = A[t4][(-2*t4+t5-2)+1] + A[(-2*t4+t5-2)+1][(-2*t4+t5-2)-1] + 2;;
        A[t4][(-2*t4+t5-1)] = A[t4][(-2*t4+t5-1)] - A[t4-1][(-2*t4+t5-1)+2] * B[t4-1] * 6;;
      }
      if (t3 >= ceild(3*t4-30,32)) {
        A[t4][(t4+1)] = A[t4][(t4+1)] * A[t4-2][(t4+1)] - 5;;
        A[(t4-1)][t4] = A[t4][(t4-1)+1] + A[(t4-1)+1][(t4-1)-1] + 2;;
      }
      for (t5=3*t4+2;t5<=min(32*t3+31,2*t4+PB_N-1);t5++) {
        A[t4][(-2*t4+t5)] = A[t4][(-2*t4+t5)] * A[t4-2][(-2*t4+t5)] - 5;;
      }
    }
    if ((t2 >= ceild(3*t3-1,2)) && (t3 <= floord(PB_N-17,16))) {
      for (t5=32*t3+30;t5<=32*t3+31;t5++) {
        A[(16*t3+15)][(-32*t3+t5-30)] = A[(16*t3+15)][(-32*t3+t5-30)] * A[(16*t3+15)-2][(-32*t3+t5-30)] - 5;;
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
int xb = xB;
int xc = xC;
int yc = yC;
int zc = zC;
POLYBENCH_2D_ARRAY_DECL(A, DATA_TYPE,xA,yA,xa,ya);
POLYBENCH_1D_ARRAY_DECL(B, DATA_TYPE,xB,xb);
POLYBENCH_3D_ARRAY_DECL(C, DATA_TYPE,xC,yC,zC,xc,yc,zc);
init_array(xa,ya,POLYBENCH_ARRAY(A),xb,POLYBENCH_ARRAY(B),xc,yc,zc,POLYBENCH_ARRAY(C),INIT_SEED);
kernel_3624121224_00(xa,ya,POLYBENCH_ARRAY(A),xb,POLYBENCH_ARRAY(B),xc,yc,zc,POLYBENCH_ARRAY(C));
polybench_prevent_dce(print_array(xa,ya,POLYBENCH_ARRAY(A),xb,POLYBENCH_ARRAY(B),xc,yc,zc,POLYBENCH_ARRAY(C)));
POLYBENCH_FREE_ARRAY(A);
POLYBENCH_FREE_ARRAY(B);
POLYBENCH_FREE_ARRAY(C);
return 0;
}
