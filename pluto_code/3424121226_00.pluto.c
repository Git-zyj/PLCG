#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <math.h>
#include <polybench.h>
#include <time.h>
#include <stdlib.h>
#include "3424121226_00.h"
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
static void init_array(int xa,DATA_TYPE POLYBENCH_1D(A,xA,xa),int xb,int yb,int zb,DATA_TYPE POLYBENCH_3D(B,xB,yB,zB,xb,yb,zb),int xc,int yc,DATA_TYPE POLYBENCH_2D(C,xC,yC,xc,yc),int seed)
{
srand(seed);
int i,j,k,l;
for (i = 0; i < xa; i++) {
A[i] = rand()%3;;
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
}
static void print_array(int xa,DATA_TYPE POLYBENCH_1D(A,xA,xa),int xb,int yb,int zb,DATA_TYPE POLYBENCH_3D(B,xB,yB,zB,xb,yb,zb),int xc,int yc,DATA_TYPE POLYBENCH_2D(C,xC,yC,xc,yc))
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
}
void kernel_3424121226_00(int xa,DATA_TYPE POLYBENCH_1D(A,xA,xa),int xb,int yb,int zb,DATA_TYPE POLYBENCH_3D(B,xB,yB,zB,xb,yb,zb),int xc,int yc,DATA_TYPE POLYBENCH_2D(C,xC,yC,xc,yc)){
polybench_start_instruments;
  int t1, t2, t3, t4, t5, t6, t7;
 int lb, ub, lbp, ubp, lb2, ub2;
 register int lbv, ubv;
/* Start of CLooG code */
for (t1=0;t1<=15;t1++) {
  for (t2=0;t2<=floord(PB_M-1,32);t2++) {
    for (t3=32*t1;t3<=min(32*t2,32*t1+31);t3++) {
      for (t4=32*t2;t4<=min(PB_M-1,32*t2+31);t4++) {
        lbv=t4+1;
        ubv=PB_L-1;
#pragma ivdep
#pragma vector always
        for (t7=lbv;t7<=ubv;t7++) {
          B[t4][t7][t3] = C[t3][t4] + C[t7][t3] + 6;;
        }
      }
    }
    if ((t1 == 0) && (t2 == 0)) {
      A[1] = A[1 -1] * 3;;
      for (t4=0;t4<=31;t4++) {
        lbv=t4+1;
        ubv=PB_L-1;
#pragma ivdep
#pragma vector always
        for (t7=lbv;t7<=ubv;t7++) {
          B[t4][t7][1] = C[1][t4] + C[t7][1] + 6;;
        }
      }
    }
    if (t2 >= 1) {
      for (t3=max(32*t1,32*t2+1);t3<=min(PB_P-2,32*t1+31);t3++) {
        for (t4=32*t2;t4<=min(min(PB_M-1,32*t2+31),t3-1);t4++) {
          for (t7=0;t7<=PB_L-1;t7++) {
            B[t4][t3-1][t3+1] = B[t4][t3-1][t3] + B[t4][t4-1][t3] + 2;;
          }
          lbv=t4+1;
          ubv=PB_L-1;
#pragma ivdep
#pragma vector always
          for (t7=lbv;t7<=ubv;t7++) {
            B[t4][t7][t3] = C[t3][t4] + C[t7][t3] + 6;;
          }
        }
        if (t1 == t2) {
          for (t4=t3;t4<=min(PB_M-1,32*t1+31);t4++) {
            lbv=t4+1;
            ubv=PB_L-1;
#pragma ivdep
#pragma vector always
            for (t7=lbv;t7<=ubv;t7++) {
              B[t4][t7][t3] = C[t3][t4] + C[t7][t3] + 6;;
            }
          }
        }
      }
    }
    if ((t1 == 15) && (t2 >= 1)) {
      for (t4=32*t2;t4<=min(PB_M-1,32*t2+31);t4++) {
        lbv=t4+1;
        ubv=PB_L-1;
#pragma ivdep
#pragma vector always
        for (t7=lbv;t7<=ubv;t7++) {
          B[t4][t7][(PB_P-1)] = C[(PB_P-1)][t4] + C[t7][(PB_P-1)] + 6;;
        }
      }
    }
    if ((t1 == 0) && (t2 == 0)) {
      A[2] = A[2 -1] * 3;;
      lbv=1;
      ubv=PB_L-1;
#pragma ivdep
#pragma vector always
      for (t7=lbv;t7<=ubv;t7++) {
        B[0][t7][2] = C[2][0] + C[t7][2] + 6;;
      }
      for (t7=0;t7<=PB_L-1;t7++) {
        B[1][2 -1][2 +1] = B[1][2 -1][2] + B[1][1 -1][2] + 2;;
      }
      lbv=2;
      ubv=PB_L-1;
#pragma ivdep
#pragma vector always
      for (t7=lbv;t7<=ubv;t7++) {
        B[1][t7][2] = C[2][1] + C[t7][2] + 6;;
      }
      for (t4=2;t4<=31;t4++) {
        lbv=t4+1;
        ubv=PB_L-1;
#pragma ivdep
#pragma vector always
        for (t7=lbv;t7<=ubv;t7++) {
          B[t4][t7][2] = C[2][t4] + C[t7][2] + 6;;
        }
      }
    }
    if (t2 == 0) {
      for (t3=max(3,32*t1);t3<=min(PB_P-2,32*t1+31);t3++) {
        A[t3] = A[t3-1] * 3;;
        lbv=1;
        ubv=PB_L-1;
#pragma ivdep
#pragma vector always
        for (t7=lbv;t7<=ubv;t7++) {
          B[0][t7][t3] = C[t3][0] + C[t7][t3] + 6;;
        }
        A[(t3-1)] = A[(t3-1)-2] - A[(t3-1)] - 5;;
        for (t4=1;t4<=min(31,t3-1);t4++) {
          for (t7=0;t7<=PB_L-1;t7++) {
            B[t4][t3-1][t3+1] = B[t4][t3-1][t3] + B[t4][t4-1][t3] + 2;;
          }
          lbv=t4+1;
          ubv=PB_L-1;
#pragma ivdep
#pragma vector always
          for (t7=lbv;t7<=ubv;t7++) {
            B[t4][t7][t3] = C[t3][t4] + C[t7][t3] + 6;;
          }
        }
        if (t1 == 0) {
          for (t4=t3;t4<=31;t4++) {
            lbv=t4+1;
            ubv=PB_L-1;
#pragma ivdep
#pragma vector always
            for (t7=lbv;t7<=ubv;t7++) {
              B[t4][t7][t3] = C[t3][t4] + C[t7][t3] + 6;;
            }
          }
        }
      }
    }
    if ((PB_L >= PB_P) && (t1 == 15) && (t2 == 0)) {
      A[(PB_P-1)] = A[(PB_P-1)-1] * 3;;
      lbv=1;
      ubv=PB_L-1;
#pragma ivdep
#pragma vector always
      for (t7=lbv;t7<=ubv;t7++) {
        B[0][t7][(PB_P-1)] = C[(PB_P-1)][0] + C[t7][(PB_P-1)] + 6;;
      }
      A[(PB_P-2)] = A[(PB_P-2)-2] - A[(PB_P-2)] - 5;;
      for (t4=1;t4<=31;t4++) {
        lbv=t4+1;
        ubv=PB_L-1;
#pragma ivdep
#pragma vector always
        for (t7=lbv;t7<=ubv;t7++) {
          B[t4][t7][(PB_P-1)] = C[(PB_P-1)][t4] + C[t7][(PB_P-1)] + 6;;
        }
      }
    }
    if ((PB_L == 501) && (PB_P == 500) && (t1 == 15) && (t2 == 0)) {
      A[500] = A[500 -1] * 3;;
    }
    if ((PB_L == 500) && (PB_P == 501) && (t1 == 15) && (t2 == 0)) {
      lbv=1;
      ubv=499;
#pragma ivdep
#pragma vector always
      for (t7=lbv;t7<=ubv;t7++) {
        B[0][t7][500] = C[500][0] + C[t7][500] + 6;;
      }
      A[499] = A[499 -2] - A[499] - 5;;
      for (t4=1;t4<=31;t4++) {
        lbv=t4+1;
        ubv=499;
#pragma ivdep
#pragma vector always
        for (t7=lbv;t7<=ubv;t7++) {
          B[t4][t7][500] = C[500][t4] + C[t7][500] + 6;;
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
int xb = xB;
int yb = yB;
int zb = zB;
int xc = xC;
int yc = yC;
POLYBENCH_1D_ARRAY_DECL(A, DATA_TYPE,xA,xa);
POLYBENCH_3D_ARRAY_DECL(B, DATA_TYPE,xB,yB,zB,xb,yb,zb);
POLYBENCH_2D_ARRAY_DECL(C, DATA_TYPE,xC,yC,xc,yc);
init_array(xa,POLYBENCH_ARRAY(A),xb,yb,zb,POLYBENCH_ARRAY(B),xc,yc,POLYBENCH_ARRAY(C),INIT_SEED);
kernel_3424121226_00(xa,POLYBENCH_ARRAY(A),xb,yb,zb,POLYBENCH_ARRAY(B),xc,yc,POLYBENCH_ARRAY(C));
polybench_prevent_dce(print_array(xa,POLYBENCH_ARRAY(A),xb,yb,zb,POLYBENCH_ARRAY(B),xc,yc,POLYBENCH_ARRAY(C)));
POLYBENCH_FREE_ARRAY(A);
POLYBENCH_FREE_ARRAY(B);
POLYBENCH_FREE_ARRAY(C);
return 0;
}
