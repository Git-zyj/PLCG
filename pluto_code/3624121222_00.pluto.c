#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <math.h>
#include <polybench.h>
#include <time.h>
#include <stdlib.h>
#include "3624121222_00.h"
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
static void init_array(int xa,int ya,DATA_TYPE POLYBENCH_2D(A,xA,yA,xa,ya),int xc,DATA_TYPE POLYBENCH_1D(C,xC,xc),int xb,int yb,int zb,DATA_TYPE POLYBENCH_3D(B,xB,yB,zB,xb,yb,zb),int seed)
{
srand(seed);
int i,j,k,l;
for (i = 0; i < xa; i++) {
for (j = 0; j < ya; j++) {
A[i][j] = rand()%3;;
}}
for (i = 0; i < xc; i++) {
C[i] = rand()%3;;
}
for (i = 0; i < xb; i++) {
for (j = 0; j < yb; j++) {
for (k = 0; k < zb; k++) {
B[i][j][k] = rand()%3;;
}}}
}
static void print_array(int xa,int ya,DATA_TYPE POLYBENCH_2D(A,xA,yA,xa,ya),int xc,DATA_TYPE POLYBENCH_1D(C,xC,xc),int xb,int yb,int zb,DATA_TYPE POLYBENCH_3D(B,xB,yB,zB,xb,yb,zb))
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
for (k = 0; k < zb; k++) {
fprintf (POLYBENCH_DUMP_TARGET, "\n");
fprintf (POLYBENCH_DUMP_TARGET, DATA_PRINTF_MODIFIER, B[i][j][k]);
}}}
POLYBENCH_DUMP_END("B");
POLYBENCH_DUMP_FINISH;
}
void kernel_3624121222_00(int xa,int ya,DATA_TYPE POLYBENCH_2D(A,xA,yA,xa,ya),int xc,DATA_TYPE POLYBENCH_1D(C,xC,xc),int xb,int yb,int zb,DATA_TYPE POLYBENCH_3D(B,xB,yB,zB,xb,yb,zb)){
polybench_start_instruments;
  int t1, t2, t3, t4, t5, t6, t7, t8, t9, t10;
 int lb, ub, lbp, ubp, lb2, ub2;
 register int lbv, ubv;
/* Start of CLooG code */
for (t5=2;t5<=PB_M-2;t5++) {
  C[t5] = C[t5-2] + 3;;
}
lbp=0;
ubp=floord(PB_M-1,32);
#pragma omp parallel for private(lbv,ubv,t6,t7,t8,t9,t10)
for (t5=lbp;t5<=ubp;t5++) {
  lbv=32*t5;
  ubv=min(PB_M-1,32*t5+31);
#pragma ivdep
#pragma vector always
  for (t6=lbv;t6<=ubv;t6++) {
    C[t6] = C[t6] - C[t6] + 6;;
  }
}
for (t5=0;t5<=floord(3*PB_M-8,32);t5++) {
  lbp=max(ceild(t5,2),ceild(32*t5-PB_M+2,32));
  ubp=floord(2*t5+1,3);
#pragma omp parallel for private(lbv,ubv,t7,t8,t9,t10)
  for (t6=lbp;t6<=ubp;t6++) {
    for (t7=max(max(2,32*t5-32*t6),16*t6+1);t7<=min(min(PB_M-2,32*t6+30),32*t5-32*t6+31);t7++) {
      for (t8=max(32*t6,t7+1);t8<=min(32*t6+31,2*t7-1);t8++) {
        for (t9=0;t9<=PB_P-1;t9++) {
          A[(-t7+t8)][t7-1] = A[(-t7+t8)][t7-1] + A[(-t7+t8)-1][t7] + A[t7+1][t7] + B[(-t7+t8)][(-t7+t8)][t9] + 6;;
        }
      }
    }
  }
}
for (t5=0;t5<=floord(PB_M-2,16);t5++) {
  lbp=max(0,ceild(32*t5-PB_M+1,32));
  ubp=min(floord(PB_M-3,32),t5);
#pragma omp parallel for private(lbv,ubv,t7,t8,t9,t10)
  for (t6=lbp;t6<=ubp;t6++) {
    for (t7=0;t7<=t5-t6;t7++) {
      for (t8=max(32*t5-32*t6,32*t7+1);t8<=min(PB_M-1,32*t5-32*t6+31);t8++) {
        for (t9=32*t6;t9<=min(PB_M-3,32*t6+31);t9++) {
          lbv=32*t7;
          ubv=min(32*t7+31,t8-1);
#pragma ivdep
#pragma vector always
          for (t10=lbv;t10<=ubv;t10++) {
            B[t9][t8-1][t10] = B[t9+2][t8][t10] - B[t9][t8][t10] * 2;;
          }
        }
      }
    }
  }
}
lbp=0;
ubp=floord(PB_M-1,32);
#pragma omp parallel for private(lbv,ubv,t6,t7,t8,t9,t10)
for (t5=lbp;t5<=ubp;t5++) {
  for (t6=0;t6<=t5;t6++) {
    for (t7=0;t7<=floord(PB_L-1,32);t7++) {
      for (t8=max(32*t5,32*t6+1);t8<=min(PB_M-1,32*t5+31);t8++) {
        for (t9=32*t6;t9<=min(32*t6+31,t8-1);t9++) {
          lbv=32*t7;
          ubv=min(PB_L-1,32*t7+31);
#pragma ivdep
#pragma vector always
          for (t10=lbv;t10<=ubv;t10++) {
            A[t8][t10] = 1;;
          }
        }
      }
    }
  }
}
lbp=-1;
ubp=floord(PB_M-2,32);
#pragma omp parallel for private(lbv,ubv,t6,t7,t8,t9,t10)
for (t5=lbp;t5<=ubp;t5++) {
  for (t6=0;t6<=floord(PB_M-1,32);t6++) {
    for (t7=max(-1,32*t5);t7<=min(PB_M-2,32*t5+31);t7++) {
      for (t8=max(1,32*t6);t8<=min(PB_M-1,32*t6+31);t8++) {
        C[t7+1] = A[t7+1][t8] * A[t8][t8] * 5;;
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
int xc = xC;
int xb = xB;
int yb = yB;
int zb = zB;
POLYBENCH_2D_ARRAY_DECL(A, DATA_TYPE,xA,yA,xa,ya);
POLYBENCH_1D_ARRAY_DECL(C, DATA_TYPE,xC,xc);
POLYBENCH_3D_ARRAY_DECL(B, DATA_TYPE,xB,yB,zB,xb,yb,zb);
init_array(xa,ya,POLYBENCH_ARRAY(A),xc,POLYBENCH_ARRAY(C),xb,yb,zb,POLYBENCH_ARRAY(B),INIT_SEED);
kernel_3624121222_00(xa,ya,POLYBENCH_ARRAY(A),xc,POLYBENCH_ARRAY(C),xb,yb,zb,POLYBENCH_ARRAY(B));
polybench_prevent_dce(print_array(xa,ya,POLYBENCH_ARRAY(A),xc,POLYBENCH_ARRAY(C),xb,yb,zb,POLYBENCH_ARRAY(B)));
POLYBENCH_FREE_ARRAY(A);
POLYBENCH_FREE_ARRAY(C);
POLYBENCH_FREE_ARRAY(B);
return 0;
}
