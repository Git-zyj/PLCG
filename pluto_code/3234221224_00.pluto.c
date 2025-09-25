#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <math.h>
#include <polybench.h>
#include <time.h>
#include <stdlib.h>
#include "3234221224_00.h"
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
void kernel_3234221224_00(int xa,int ya,int za,DATA_TYPE POLYBENCH_3D(A,xA,yA,zA,xa,ya,za),int xb,int yb,DATA_TYPE POLYBENCH_2D(B,xB,yB,xb,yb)){
polybench_start_instruments;
  int t1, t2, t3, t4, t5, t6;
 int lb, ub, lbp, ubp, lb2, ub2;
 register int lbv, ubv;
/* Start of CLooG code */
for (t1=0;t1<=floord(PB_M-2,8);t1++) {
  lbp=max(0,ceild(4800*t1-149*PB_M+149,4816));
  ubp=min(floord(1584*t1+51*PB_M+1450,2656),t1);
#pragma omp parallel for private(lbv,ubv,t3,t4,t5,t6)
  for (t2=lbp;t2<=ubp;t2++) {
    for (t3=0;t3<=min(floord(PB_M,32),floord(-1376*t2+57*PB_M+21500,1824));t3++) {
      if ((t2 <= floord(PB_N-1,32)) && (t3 == 0)) {
        for (t4=32*t1-32*t2;t4<=min(floord(32*t2-PB_M+1,2),32*t1-32*t2+31);t4++) {
          for (t5=32*t2;t5<=min(PB_N-1,32*t2+31);t5++) {
            lbv=1;
            ubv=31;
#pragma ivdep
#pragma vector always
            for (t6=lbv;t6<=ubv;t6++) {
              A[t5][t4][t6-1] = A[t5][t4+2][t6-1] * 3;;
            }
          }
        }
      }
      if ((t2 <= floord(PB_N-1,32)) && (t3 >= 1)) {
        for (t4=32*t1-32*t2;t4<=min(PB_M-3,32*t1-32*t2+31);t4++) {
          for (t5=32*t2;t5<=min(PB_N-1,32*t2+31);t5++) {
            lbv=32*t3;
            ubv=min(PB_M,32*t3+31);
#pragma ivdep
#pragma vector always
            for (t6=lbv;t6<=ubv;t6++) {
              A[t5][t4][t6-1] = A[t5][t4+2][t6-1] * 3;;
            }
          }
        }
      }
      if ((t2 >= ceild(PB_N,32)) && (t3 == 0)) {
        for (t4=max(ceild(32*t2-PB_M+2,2),32*t1-32*t2);t4<=min(min(PB_M-1,16*t2+15),32*t1-32*t2+31);t4++) {
          for (t5=max(32*t2,2*t4);t5<=min(32*t2+31,2*t4+PB_M-2);t5++) {
            B[(-2*t4+t5)+1][t4] = B[(-2*t4+t5)+1][t4+1] + B[t4][(-2*t4+t5)] * B[(-2*t4+t5)+1][t4] - 6;;
          }
        }
      }
      if ((t2 <= floord(PB_N-1,32)) && (t3 == 0)) {
        for (t4=max(ceild(32*t2-PB_M+2,2),32*t1-32*t2);t4<=min(16*t2+15,32*t1-32*t2+31);t4++) {
          for (t5=32*t2;t5<=min(PB_N-1,2*t4-1);t5++) {
            lbv=1;
            ubv=31;
#pragma ivdep
#pragma vector always
            for (t6=lbv;t6<=ubv;t6++) {
              A[t5][t4][t6-1] = A[t5][t4+2][t6-1] * 3;;
            }
          }
          for (t5=max(32*t2,2*t4);t5<=min(min(PB_N-1,32*t2+31),2*t4+PB_M-2);t5++) {
            B[(-2*t4+t5)+1][t4] = B[(-2*t4+t5)+1][t4+1] + B[t4][(-2*t4+t5)] * B[(-2*t4+t5)+1][t4] - 6;;
            lbv=1;
            ubv=31;
#pragma ivdep
#pragma vector always
            for (t6=lbv;t6<=ubv;t6++) {
              A[t5][t4][t6-1] = A[t5][t4+2][t6-1] * 3;;
            }
          }
          for (t5=2*t4+PB_M-1;t5<=min(PB_N-1,32*t2+31);t5++) {
            lbv=1;
            ubv=31;
#pragma ivdep
#pragma vector always
            for (t6=lbv;t6<=ubv;t6++) {
              A[t5][t4][t6-1] = A[t5][t4+2][t6-1] * 3;;
            }
          }
          if (t2 == 15) {
            for (t5=max(PB_N,2*t4);t5<=min(511,2*t4+PB_M-2);t5++) {
              B[(-2*t4+t5)+1][t4] = B[(-2*t4+t5)+1][t4+1] + B[t4][(-2*t4+t5)] * B[(-2*t4+t5)+1][t4] - 6;;
            }
          }
        }
      }
      if ((t2 <= floord(PB_N-1,32)) && (t3 == 0)) {
        for (t4=max(32*t1-32*t2,16*t2+16);t4<=min(PB_M-3,32*t1-32*t2+31);t4++) {
          for (t5=32*t2;t5<=min(PB_N-1,32*t2+31);t5++) {
            lbv=1;
            ubv=31;
#pragma ivdep
#pragma vector always
            for (t6=lbv;t6<=ubv;t6++) {
              A[t5][t4][t6-1] = A[t5][t4+2][t6-1] * 3;;
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
int ya = yA;
int za = zA;
int xb = xB;
int yb = yB;
POLYBENCH_3D_ARRAY_DECL(A, DATA_TYPE,xA,yA,zA,xa,ya,za);
POLYBENCH_2D_ARRAY_DECL(B, DATA_TYPE,xB,yB,xb,yb);
init_array(xa,ya,za,POLYBENCH_ARRAY(A),xb,yb,POLYBENCH_ARRAY(B),INIT_SEED);
kernel_3234221224_00(xa,ya,za,POLYBENCH_ARRAY(A),xb,yb,POLYBENCH_ARRAY(B));
polybench_prevent_dce(print_array(xa,ya,za,POLYBENCH_ARRAY(A),xb,yb,POLYBENCH_ARRAY(B)));
POLYBENCH_FREE_ARRAY(A);
POLYBENCH_FREE_ARRAY(B);
return 0;
}
