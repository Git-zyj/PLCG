#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <math.h>
#include <polybench.h>
#include <time.h>
#include <stdlib.h>
#include "3424121222_00.h"
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
void kernel_3424121222_00(int xa,int ya,DATA_TYPE POLYBENCH_2D(A,xA,yA,xa,ya),int xc,DATA_TYPE POLYBENCH_1D(C,xC,xc),int xb,int yb,int zb,DATA_TYPE POLYBENCH_3D(B,xB,yB,zB,xb,yb,zb)){
polybench_start_instruments;
  int t1, t2, t3, t4, t5, t6, t7;
 int lb, ub, lbp, ubp, lb2, ub2;
 register int lbv, ubv;
/* Start of CLooG code */
for (t1=0;t1<=floord(85*PB_M+119216,12768);t1++) {
  for (t2=0;t2<=min(floord(PB_M-1,32),floord(-12768*t1+85*PB_M+119216,2720));t2++) {
    for (t3=max(0,ceild(133*t1+128*t2-4*PB_M+4,133));t3<=min(floord(PB_P-1,32),floord(-9568*t1+385*PB_P-684,2752));t3++) {
      if ((t1 == 0) && (t2 == 0) && (t3 == 0)) {
        C[0] = C[0] * C[0] * C[0] - 6;;
        for (t5=1;t5<=31;t5++) {
          for (t6=1;t6<=31;t6++) {
            A[t5][0 +1] = B[t5-1][t5][t6] * 6;;
          }
        }
      }
      if ((t1 == 0) && (t2 >= 1) && (t3 == 0)) {
        for (t4=0;t4<=30;t4++) {
          for (t5=32*t2;t5<=min(PB_M-1,32*t2+31);t5++) {
            for (t6=t4+1;t6<=31;t6++) {
              A[t5][t4+1] = B[t5-1][t5][t6] * 6;;
            }
          }
        }
      }
      if (t3 >= 1) {
        for (t4=32*t1;t4<=min(min(PB_P-2,32*t1+31),32*t3+30);t4++) {
          for (t5=max(1,32*t2);t5<=min(PB_M-1,32*t2+31);t5++) {
            for (t6=max(32*t3,t4+1);t6<=min(PB_P-1,32*t3+31);t6++) {
              A[t5][t4+1] = B[t5-1][t5][t6] * 6;;
            }
          }
        }
      }
      if ((t1 == 0) && (t2 == 0) && (t3 == 0)) {
        for (t4=1;t4<=30;t4++) {
          C[t4] = C[t4] * C[t4] * C[t4] - 6;;
          C[(t4-1)] = C[(t4-1)] * C[(t4-1)] - C[(t4-1)+1] - 5;;
          C[(t4-1)] = C[(t4-1)] * C[(t4-1)] + C[(t4-1)] - C[(t4-1)] - 1;;
          for (t5=1;t5<=31;t5++) {
            for (t6=t4+1;t6<=31;t6++) {
              A[t5][t4+1] = B[t5-1][t5][t6] * 6;;
            }
          }
        }
      }
      if ((t2 == 0) && (t3 == 0)) {
        for (t4=max(31,32*t1);t4<=min(PB_P-1,32*t1+31);t4++) {
          C[t4] = C[t4] * C[t4] * C[t4] - 6;;
          C[(t4-1)] = C[(t4-1)] * C[(t4-1)] - C[(t4-1)+1] - 5;;
          C[(t4-1)] = C[(t4-1)] * C[(t4-1)] + C[(t4-1)] - C[(t4-1)] - 1;;
        }
      }
      if ((t2 == 0) && (t3 == 0)) {
        for (t4=max(PB_P,32*t1);t4<=min(PB_L-1,32*t1+31);t4++) {
          C[(t4-1)] = C[(t4-1)] * C[(t4-1)] - C[(t4-1)+1] - 5;;
          C[(t4-1)] = C[(t4-1)] * C[(t4-1)] + C[(t4-1)] - C[(t4-1)] - 1;;
        }
      }
      if ((t1 == 12) && (t2 == 0) && (t3 == 0)) {
        C[(PB_L-1)] = C[(PB_L-1)] * C[(PB_L-1)] + C[(PB_L-1)] - C[(PB_L-1)] - 1;;
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
kernel_3424121222_00(xa,ya,POLYBENCH_ARRAY(A),xc,POLYBENCH_ARRAY(C),xb,yb,zb,POLYBENCH_ARRAY(B));
polybench_prevent_dce(print_array(xa,ya,POLYBENCH_ARRAY(A),xc,POLYBENCH_ARRAY(C),xb,yb,zb,POLYBENCH_ARRAY(B)));
POLYBENCH_FREE_ARRAY(A);
POLYBENCH_FREE_ARRAY(C);
POLYBENCH_FREE_ARRAY(B);
return 0;
}
