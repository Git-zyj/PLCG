#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <math.h>
#include <polybench.h>
#include <time.h>
#include <stdlib.h>
#include "3524221226_00.h"
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
static void init_array(int xa,int ya,int za,DATA_TYPE POLYBENCH_3D(A,xA,yA,zA,xa,ya,za),int xb,int yb,int zb,DATA_TYPE POLYBENCH_3D(B,xB,yB,zB,xb,yb,zb),int xc,DATA_TYPE POLYBENCH_1D(C,xC,xc),int seed)
{
srand(seed);
int i,j,k,l;
for (i = 0; i < xa; i++) {
for (j = 0; j < ya; j++) {
for (k = 0; k < za; k++) {
A[i][j][k] = rand()%3;;
}}}
for (i = 0; i < xb; i++) {
for (j = 0; j < yb; j++) {
for (k = 0; k < zb; k++) {
B[i][j][k] = rand()%3;;
}}}
for (i = 0; i < xc; i++) {
C[i] = rand()%3;;
}
}
static void print_array(int xa,int ya,int za,DATA_TYPE POLYBENCH_3D(A,xA,yA,zA,xa,ya,za),int xb,int yb,int zb,DATA_TYPE POLYBENCH_3D(B,xB,yB,zB,xb,yb,zb),int xc,DATA_TYPE POLYBENCH_1D(C,xC,xc))
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
fprintf (POLYBENCH_DUMP_TARGET, "\n");
fprintf (POLYBENCH_DUMP_TARGET, DATA_PRINTF_MODIFIER, C[i]);
}
POLYBENCH_DUMP_END("C");
POLYBENCH_DUMP_FINISH;
}
void kernel_3524221226_00(int xa,int ya,int za,DATA_TYPE POLYBENCH_3D(A,xA,yA,zA,xa,ya,za),int xb,int yb,int zb,DATA_TYPE POLYBENCH_3D(B,xB,yB,zB,xb,yb,zb),int xc,DATA_TYPE POLYBENCH_1D(C,xC,xc)){
polybench_start_instruments;
  int t1, t2, t3, t4, t5, t6, t7;
 int lb, ub, lbp, ubp, lb2, ub2;
 register int lbv, ubv;
/* Start of CLooG code */
for (t1=0;t1<=floord(PB_M-3,32);t1++) {
  for (t2=0;t2<=min(floord(PB_L-1,32),t1);t2++) {
    for (t3=0;t3<=floord(PB_M+PB_P-401,32);t3++) {
      if ((t2 >= 1) && (t3 == 0)) {
        for (t4=max(32*t1,32*t2+1);t4<=min(PB_L-2,32*t1+31);t4++) {
          for (t5=32*t2;t5<=min(32*t2+31,t4-1);t5++) {
            B[t5-1][t4-1][t5+1] = B[t5-1][t4-1][t5+1] - B[t5+1][t4][t5+1] - B[t4-1][t5][0] + 5;;
            A[t4][t4][t5] = A[t4][t4+2][t5-1] - 6;;
            for (t6=1;t6<=31;t6++) {
              A[t6][t5+1][t4+1] = A[t6-1][t5+1][t4+1] + 2;;
              A[t6-1][t5+1][t4+1] = B[t4][t6][t4] + 3;;
              B[t5-1][t4-1][t5+1] = B[t5-1][t4-1][t5+1] - B[t5+1][t4][t5+1] - B[t4-1][t5][t6] + 5;;
              A[t4][t4][t5] = A[t4][t4+2][t5-1] - 6;;
            }
          }
        }
      }
      if ((t1 == 9) && (t2 >= 1) && (t3 == 0)) {
        for (t5=32*t2;t5<=min(PB_L-2,32*t2+31);t5++) {
          for (t6=0;t6<=31;t6++) {
            B[t5-1][(PB_L-1)-1][t5+1] = B[t5-1][(PB_L-1)-1][t5+1] - B[t5+1][(PB_L-1)][t5+1] - B[(PB_L-1)-1][t5][t6] + 5;;
            A[(PB_L-1)][(PB_L-1)][t5] = A[(PB_L-1)][(PB_L-1)+2][t5-1] - 6;;
          }
        }
      }
      for (t4=max(max(2,32*t1),32*t2+1);t4<=min(min(32*t3,PB_L-1),32*t1+31);t4++) {
        for (t5=max(1,32*t2);t5<=min(32*t2+31,t4-1);t5++) {
          for (t6=32*t3;t6<=min(min(PB_M-1,PB_P-1),32*t3+31);t6++) {
            B[t5-1][t4-1][t5+1] = B[t5-1][t4-1][t5+1] - B[t5+1][t4][t5+1] - B[t4-1][t5][t6] + 5;;
            A[t4][t4][t5] = A[t4][t4+2][t5-1] - 6;;
          }
          if ((PB_M == 401) && (PB_P == 400) && (t3 == 12)) {
            A[t4][t4][t5] = A[t4][t4+2][t5-1] - 6;;
          }
          if ((PB_M == 400) && (PB_P == 401) && (t3 == 12)) {
            B[t5-1][t4-1][t5+1] = B[t5-1][t4-1][t5+1] - B[t5+1][t4][t5+1] - B[t4-1][t5][400] + 5;;
          }
        }
      }
      if ((t1 == 0) && (t2 == 0) && (t3 == 0)) {
        C[1] = C[1] - C[1 -1] + 2;;
      }
      if ((t2 == 0) && (t3 == 0)) {
        for (t4=max(2,32*t1);t4<=min(PB_L-2,32*t1+31);t4++) {
          C[t4] = C[t4] - C[t4-1] + 2;;
          for (t6=1;t6<=min(31,t4-1);t6++) {
            A[t6][0 +1][t4+1] = A[t6-1][0 +1][t4+1] + 2;;
            A[t6-1][0 +1][t4+1] = B[t4][t6][t4] + 3;;
          }
          for (t5=1;t5<=min(31,t4-1);t5++) {
            B[t5-1][t4-1][t5+1] = B[t5-1][t4-1][t5+1] - B[t5+1][t4][t5+1] - B[t4-1][t5][0] + 5;;
            A[t4][t4][t5] = A[t4][t4+2][t5-1] - 6;;
            for (t6=1;t6<=min(31,t4-1);t6++) {
              A[t6][t5+1][t4+1] = A[t6-1][t5+1][t4+1] + 2;;
              A[t6-1][t5+1][t4+1] = B[t4][t6][t4] + 3;;
              B[t5-1][t4-1][t5+1] = B[t5-1][t4-1][t5+1] - B[t5+1][t4][t5+1] - B[t4-1][t5][t6] + 5;;
              A[t4][t4][t5] = A[t4][t4+2][t5-1] - 6;;
            }
            if (t1 == 0) {
              for (t6=t4;t6<=31;t6++) {
                B[t5-1][t4-1][t5+1] = B[t5-1][t4-1][t5+1] - B[t5+1][t4][t5+1] - B[t4-1][t5][t6] + 5;;
                A[t4][t4][t5] = A[t4][t4+2][t5-1] - 6;;
              }
            }
          }
        }
      }
      if ((t1 == 9) && (t2 == 0) && (t3 == 0)) {
        for (t5=1;t5<=31;t5++) {
          for (t6=0;t6<=31;t6++) {
            B[t5-1][(PB_L-1)-1][t5+1] = B[t5-1][(PB_L-1)-1][t5+1] - B[t5+1][(PB_L-1)][t5+1] - B[(PB_L-1)-1][t5][t6] + 5;;
            A[(PB_L-1)][(PB_L-1)][t5] = A[(PB_L-1)][(PB_L-1)+2][t5-1] - 6;;
          }
        }
      }
      if (t3 >= 1) {
        for (t4=max(max(32*t1,32*t2+1),32*t3+1);t4<=min(PB_L-2,32*t1+31);t4++) {
          if (t2 == 0) {
            for (t6=32*t3;t6<=min(32*t3+31,t4-1);t6++) {
              A[t6][0 +1][t4+1] = A[t6-1][0 +1][t4+1] + 2;;
              A[t6-1][0 +1][t4+1] = B[t4][t6][t4] + 3;;
            }
          }
          for (t5=max(1,32*t2);t5<=min(32*t2+31,t4-1);t5++) {
            for (t6=32*t3;t6<=min(32*t3+31,t4-1);t6++) {
              A[t6][t5+1][t4+1] = A[t6-1][t5+1][t4+1] + 2;;
              A[t6-1][t5+1][t4+1] = B[t4][t6][t4] + 3;;
              B[t5-1][t4-1][t5+1] = B[t5-1][t4-1][t5+1] - B[t5+1][t4][t5+1] - B[t4-1][t5][t6] + 5;;
              A[t4][t4][t5] = A[t4][t4+2][t5-1] - 6;;
            }
            if (t1 == t3) {
              for (t6=t4;t6<=32*t1+31;t6++) {
                B[t5-1][t4-1][t5+1] = B[t5-1][t4-1][t5+1] - B[t5+1][t4][t5+1] - B[t4-1][t5][t6] + 5;;
                A[t4][t4][t5] = A[t4][t4+2][t5-1] - 6;;
              }
            }
          }
        }
      }
      if ((t1 == 9) && (t3 >= 1) && (t3 <= floord(PB_L-2,32))) {
        for (t5=max(1,32*t2);t5<=min(PB_L-2,32*t2+31);t5++) {
          for (t6=32*t3;t6<=32*t3+31;t6++) {
            B[t5-1][(PB_L-1)-1][t5+1] = B[t5-1][(PB_L-1)-1][t5+1] - B[t5+1][(PB_L-1)][t5+1] - B[(PB_L-1)-1][t5][t6] + 5;;
            A[(PB_L-1)][(PB_L-1)][t5] = A[(PB_L-1)][(PB_L-1)+2][t5-1] - 6;;
          }
        }
      }
      for (t4=max(PB_L,32*t1);t4<=min(PB_M-3,32*t1+31);t4++) {
        for (t5=max(1,32*t2);t5<=min(PB_L-1,32*t2+31);t5++) {
          for (t6=32*t3;t6<=min(PB_M-1,32*t3+31);t6++) {
            A[t4][t4][t5] = A[t4][t4+2][t5-1] - 6;;
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
int xb = xB;
int yb = yB;
int zb = zB;
int xc = xC;
POLYBENCH_3D_ARRAY_DECL(A, DATA_TYPE,xA,yA,zA,xa,ya,za);
POLYBENCH_3D_ARRAY_DECL(B, DATA_TYPE,xB,yB,zB,xb,yb,zb);
POLYBENCH_1D_ARRAY_DECL(C, DATA_TYPE,xC,xc);
init_array(xa,ya,za,POLYBENCH_ARRAY(A),xb,yb,zb,POLYBENCH_ARRAY(B),xc,POLYBENCH_ARRAY(C),INIT_SEED);
kernel_3524221226_00(xa,ya,za,POLYBENCH_ARRAY(A),xb,yb,zb,POLYBENCH_ARRAY(B),xc,POLYBENCH_ARRAY(C));
polybench_prevent_dce(print_array(xa,ya,za,POLYBENCH_ARRAY(A),xb,yb,zb,POLYBENCH_ARRAY(B),xc,POLYBENCH_ARRAY(C)));
POLYBENCH_FREE_ARRAY(A);
POLYBENCH_FREE_ARRAY(B);
POLYBENCH_FREE_ARRAY(C);
return 0;
}
