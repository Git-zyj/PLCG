#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <math.h>
#include <polybench.h>
#include <time.h>
#include <stdlib.h>
#include "3224121226_00.h"
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
static void init_array(int xa,int ya,int za,DATA_TYPE POLYBENCH_3D(A,xA,yA,zA,xa,ya,za),int xb,int yb,DATA_TYPE POLYBENCH_2D(B,xB,yB,xb,yb),int seed)
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
B[i][j] = rand()%3;;
}}
}
static void print_array(int xa,int ya,int za,DATA_TYPE POLYBENCH_3D(A,xA,yA,zA,xa,ya,za),int xb,int yb,DATA_TYPE POLYBENCH_2D(B,xB,yB,xb,yb))
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
fprintf (POLYBENCH_DUMP_TARGET, "\n");
fprintf (POLYBENCH_DUMP_TARGET, DATA_PRINTF_MODIFIER, B[i][j]);
}}
POLYBENCH_DUMP_END("B");
POLYBENCH_DUMP_FINISH;
}
void kernel_3224121226_00(int xa,int ya,int za,DATA_TYPE POLYBENCH_3D(A,xA,yA,zA,xa,ya,za),int xb,int yb,DATA_TYPE POLYBENCH_2D(B,xB,yB,xb,yb)){
polybench_start_instruments;
  int t1, t2, t3, t4, t5, t6;
 int lb, ub, lbp, ubp, lb2, ub2;
 register int lbv, ubv;
/* Start of CLooG code */
lbp=-1;
ubp=floord(PB_L-1,16);
#pragma omp parallel for private(lbv,ubv,t2,t3,t4,t5,t6)
for (t1=lbp;t1<=ubp;t1++) {
  for (t2=max(0,ceild(32*t1-PB_L-30,32));t2<=min(floord(PB_P-2,16),floord(-3168*t1+99*PB_L+119701,6416));t2++) {
    for (t3=max(max(0,ceild(89*t2-1112,66)),ceild(-23*t1+144*t2-1512,144));t3<=min(min(min(floord(PB_P-2,32),floord(-4768*t1+4768*t2+149*PB_L+16*PB_P-330,5280)),floord(-9568*t1+299*PB_L+119301,12832)),t2);t3++) {
      if ((t2 <= floord(PB_P+30,32)) && (t3 == 0)) {
        for (t4=max(-1,32*t1);t4<=min(32*t1+31,32*t2-1);t4++) {
          for (t5=max(1,32*t2);t5<=min(PB_P+30,32*t2+31);t5++) {
            for (t6=max(0,t5-PB_P+1);t6<=min(31,t5-1);t6++) {
              A[t6][t4+1][(t5-t6)] = A[(t5-t6)-1][t4+1][t6+1] + 2;;
            }
          }
        }
      }
      if ((t2 <= floord(32*t3+PB_P+30,32)) && (t3 >= 1)) {
        for (t4=max(-1,32*t1);t4<=min(PB_L-2,32*t1+31);t4++) {
          for (t5=max(32*t2,32*t3+1);t5<=min(min(2*PB_P-3,32*t2+31),32*t3+PB_P+30);t5++) {
            for (t6=max(32*t3,t5-PB_P+1);t6<=min(min(PB_P-2,32*t3+31),t5-1);t6++) {
              A[t6][t4+1][(t5-t6)] = A[(t5-t6)-1][t4+1][t6+1] + 2;;
            }
          }
        }
      }
      if ((t2 >= ceild(PB_P+31,32)) && (t3 == 0)) {
        for (t4=max(32*t1,32*t2);t4<=min(min(2*PB_L-2,32*t1+31),32*t2+PB_L+30);t4++) {
          for (t5=max(32*t2,t4-PB_L+1);t5<=min(min(t4,PB_L-1),32*t2+31);t5++) {
            B[t5][(t4-t5)] = B[(t4-t5)][t5] - B[t5][(t4-t5)] * 1;;
          }
        }
      }
      if ((t2 <= floord(PB_P+30,32)) && (t3 == 0)) {
        for (t4=max(32*t1,32*t2);t4<=min(PB_L-2,32*t1+31);t4++) {
          if (t2 == 0) {
            B[0][t4] = B[t4][0] - B[0][t4] * 1;;
          }
          for (t5=max(1,32*t2);t5<=min(min(t4,PB_P+30),32*t2+31);t5++) {
            if (t5 <= PB_P-1) {
              A[0][t4+1][t5] = A[t5-1][t4+1][0 +1] + 2;;
              B[t5][(t4-t5)] = B[(t4-t5)][t5] - B[t5][(t4-t5)] * 1;;
            }
            if (t5 >= PB_P) {
              B[t5][(t4-t5)] = B[(t4-t5)][t5] - B[t5][(t4-t5)] * 1;;
            }
            for (t6=max(1,t5-PB_P+1);t6<=min(31,t5-1);t6++) {
              A[t6][t4+1][(t5-t6)] = A[(t5-t6)-1][t4+1][t6+1] + 2;;
            }
          }
          if (t1 == t2) {
            for (t5=t4+1;t5<=min(PB_P+30,32*t1+31);t5++) {
              for (t6=max(0,t5-PB_P+1);t6<=min(31,t5-1);t6++) {
                A[t6][t4+1][(t5-t6)] = A[(t5-t6)-1][t4+1][t6+1] + 2;;
              }
            }
          }
          if (t2 == 10) {
            for (t5=PB_P+31;t5<=min(351,t4);t5++) {
              B[t5][(t4-t5)] = B[(t4-t5)][t5] - B[t5][(t4-t5)] * 1;;
            }
          }
        }
      }
      if ((t2 <= floord(PB_P+30,32)) && (t3 == 0)) {
        for (t4=max(32*t1,PB_L-1);t4<=min(32*t1+31,32*t2+PB_L+30);t4++) {
          for (t5=max(32*t2,t4-PB_L+1);t5<=32*t2+31;t5++) {
            B[t5][(t4-t5)] = B[(t4-t5)][t5] - B[t5][(t4-t5)] * 1;;
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
POLYBENCH_3D_ARRAY_DECL(A, DATA_TYPE,xA,yA,zA,xa,ya,za);
POLYBENCH_2D_ARRAY_DECL(B, DATA_TYPE,xB,yB,xb,yb);
init_array(xa,ya,za,POLYBENCH_ARRAY(A),xb,yb,POLYBENCH_ARRAY(B),INIT_SEED);
kernel_3224121226_00(xa,ya,za,POLYBENCH_ARRAY(A),xb,yb,POLYBENCH_ARRAY(B));
polybench_prevent_dce(print_array(xa,ya,za,POLYBENCH_ARRAY(A),xb,yb,POLYBENCH_ARRAY(B)));
POLYBENCH_FREE_ARRAY(A);
POLYBENCH_FREE_ARRAY(B);
return 0;
}
