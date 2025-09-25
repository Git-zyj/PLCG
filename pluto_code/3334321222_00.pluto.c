#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <math.h>
#include <polybench.h>
#include <time.h>
#include <stdlib.h>
#include "3334321222_00.h"
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
void kernel_3334321222_00(int xa,DATA_TYPE POLYBENCH_1D(A,xA,xa),int xb,int yb,int zb,DATA_TYPE POLYBENCH_3D(B,xB,yB,zB,xb,yb,zb),int xc,int yc,DATA_TYPE POLYBENCH_2D(C,xC,yC,xc,yc)){
polybench_start_instruments;
  int t1, t2, t3, t4, t5, t6, t7;
 int lb, ub, lbp, ubp, lb2, ub2;
 register int lbv, ubv;
/* Start of CLooG code */
lbp=0;
ubp=floord(PB_L,32);
#pragma omp parallel for private(lbv,ubv,t2,t3,t4,t5,t6,t7)
for (t1=lbp;t1<=ubp;t1++) {
  for (t2=0;t2<=t1;t2++) {
    for (t3=0;t3<=floord(PB_L+2,32);t3++) {
      if ((t1 == 0) && (t2 == 0) && (t3 == 0)) {
        A[1] = A[1] + 4;;
      }
      if ((t2 >= 1) && (t3 == 0)) {
        for (t4=max(32*t1,32*t2+1);t4<=min(PB_L,32*t1+31);t4++) {
          for (t5=32*t2;t5<=min(32*t2+31,t4-1);t5++) {
            lbv=1;
            ubv=31;
#pragma ivdep
#pragma vector always
            for (t6=lbv;t6<=ubv;t6++) {
              B[t6-1][t5-1][t4-1] = B[t6+1][t4+1][t5] + C[t4+1][t6] - 3;;
            }
          }
        }
      }
      if (t3 >= 1) {
        for (t4=max(max(2,32*t1),32*t2+1);t4<=min(min(PB_L,32*t1+31),32*t3+29);t4++) {
          for (t5=max(1,32*t2);t5<=min(32*t2+31,t4-1);t5++) {
            lbv=32*t3;
            ubv=min(PB_L-1,t4+1);
#pragma ivdep
#pragma vector always
            for (t6=lbv;t6<=ubv;t6++) {
              B[t6-1][t5-1][t4-1] = B[t6+1][t4+1][t5] + C[t4+1][t6] - 3;;
            }
            lbv=max(32*t3,t4+2);
            ubv=min(PB_L-1,32*t3+31);
#pragma ivdep
#pragma vector always
            for (t6=lbv;t6<=ubv;t6++) {
              B[t6-1][t5-1][t4-1] = B[t6+1][t4+1][t5] + C[t4+1][t6] - 3;;
              B[(t6-2)+1][(t5-1)][(t4-1)] = 6;;
            }
            if (t3 == 12) {
              lbv=max(PB_L,t4+2);
              ubv=PB_L+2;
#pragma ivdep
#pragma vector always
              for (t6=lbv;t6<=ubv;t6++) {
                B[(t6-2)+1][(t5-1)][(t4-1)] = 6;;
              }
            }
          }
        }
      }
      if (t3 >= 1) {
        for (t4=max(max(32*t1,32*t2+1),32*t3+30);t4<=min(PB_L,32*t1+31);t4++) {
          for (t5=max(1,32*t2);t5<=min(32*t2+31,t4-1);t5++) {
            lbv=32*t3;
            ubv=32*t3+31;
#pragma ivdep
#pragma vector always
            for (t6=lbv;t6<=ubv;t6++) {
              B[t6-1][t5-1][t4-1] = B[t6+1][t4+1][t5] + C[t4+1][t6] - 3;;
            }
          }
        }
      }
      if ((t1 == 0) && (t2 == 0) && (t3 == 0)) {
        for (t4=2;t4<=29;t4++) {
          A[t4] = A[t4] + 4;;
          for (t5=1;t5<=t4-1;t5++) {
            lbv=1;
            ubv=t4+1;
#pragma ivdep
#pragma vector always
            for (t6=lbv;t6<=ubv;t6++) {
              B[t6-1][t5-1][t4-1] = B[t6+1][t4+1][t5] + C[t4+1][t6] - 3;;
            }
            lbv=t4+2;
            ubv=31;
#pragma ivdep
#pragma vector always
            for (t6=lbv;t6<=ubv;t6++) {
              B[t6-1][t5-1][t4-1] = B[t6+1][t4+1][t5] + C[t4+1][t6] - 3;;
              B[(t6-2)+1][(t5-1)][(t4-1)] = 6;;
            }
          }
        }
      }
      if ((t2 == 0) && (t3 == 0)) {
        for (t4=max(30,32*t1);t4<=min(PB_L,32*t1+31);t4++) {
          A[t4] = A[t4] + 4;;
          for (t5=1;t5<=min(31,t4-1);t5++) {
            lbv=1;
            ubv=31;
#pragma ivdep
#pragma vector always
            for (t6=lbv;t6<=ubv;t6++) {
              B[t6-1][t5-1][t4-1] = B[t6+1][t4+1][t5] + C[t4+1][t6] - 3;;
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
int xb = xB;
int yb = yB;
int zb = zB;
int xc = xC;
int yc = yC;
POLYBENCH_1D_ARRAY_DECL(A, DATA_TYPE,xA,xa);
POLYBENCH_3D_ARRAY_DECL(B, DATA_TYPE,xB,yB,zB,xb,yb,zb);
POLYBENCH_2D_ARRAY_DECL(C, DATA_TYPE,xC,yC,xc,yc);
init_array(xa,POLYBENCH_ARRAY(A),xb,yb,zb,POLYBENCH_ARRAY(B),xc,yc,POLYBENCH_ARRAY(C),INIT_SEED);
kernel_3334321222_00(xa,POLYBENCH_ARRAY(A),xb,yb,zb,POLYBENCH_ARRAY(B),xc,yc,POLYBENCH_ARRAY(C));
polybench_prevent_dce(print_array(xa,POLYBENCH_ARRAY(A),xb,yb,zb,POLYBENCH_ARRAY(B),xc,yc,POLYBENCH_ARRAY(C)));
POLYBENCH_FREE_ARRAY(A);
POLYBENCH_FREE_ARRAY(B);
POLYBENCH_FREE_ARRAY(C);
return 0;
}
