#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <math.h>
#include <polybench.h>
#include <time.h>
#include <stdlib.h>
#include "3224321224_00.h"
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
void kernel_3224321224_00(int xa,int ya,int za,DATA_TYPE POLYBENCH_3D(A,xA,yA,zA,xa,ya,za),int xb,int yb,DATA_TYPE POLYBENCH_2D(B,xB,yB,xb,yb)){
polybench_start_instruments;
  int t1, t2, t3, t4, t5, t6;
 int lb, ub, lbp, ubp, lb2, ub2;
 register int lbv, ubv;
/* Start of CLooG code */
lbp=0;
ubp=floord(PB_Q,32);
#pragma omp parallel for private(lbv,ubv,t2,t3,t4,t5,t6)
for (t1=lbp;t1<=ubp;t1++) {
  for (t2=0;t2<=floord(PB_M-1,32);t2++) {
    for (t3=max(0,-2*t1+2*t2);t3<=min(min(floord(3*PB_M-3,32),floord(19*t1+400*t2+2262,200)),floord(500*t2+3362,269));t3++) {
      if ((t1 == 12) && (t2 == 0) && (t3 == 12)) {
        for (t4=385;t4<=PB_Q;t4++) {
          for (t5=0;t5<=31;t5++) {
            for (t6=384;t6<=t4-1;t6++) {
              A[t5][t4][t4-1] = 4;;
            }
          }
        }
      }
      if (t2 >= ceild(t3+1,2)) {
        for (t4=max(max(32*t1,32*t2+1),32*t3+1);t4<=min(PB_Q,32*t1+31);t4++) {
          for (t5=32*t2;t5<=min(min(PB_M-1,32*t2+31),t4-1);t5++) {
            for (t6=32*t3;t6<=min(32*t3+31,t4-1);t6++) {
              A[t5][t4][t4-1] = 4;;
            }
          }
        }
      }
      if ((t2 <= floord(t3,2)) && (t2 >= ceild(32*t3-PB_M-61,64))) {
        for (t4=max(1,32*t1);t4<=min(min(32*t3,PB_Q-1),32*t1+31);t4++) {
          for (t5=max(ceild(32*t3-PB_M+1,2),32*t2);t5<=min(min(PB_M-1,32*t2+31),16*t3+14);t5++) {
            for (t6=max(32*t3,2*t5+3);t6<=min(32*t3+31,2*t5+PB_M-1);t6++) {
              B[t4-1][(-2*t5+t6)-1] = B[t4-1][(-2*t5+t6)-3] + A[(-2*t5+t6)][t4][t4] - 2;;
            }
          }
        }
      }
      if ((t2 <= floord(t3,2)) && (t2 >= ceild(32*t3-PB_M-61,64))) {
        for (t4=max(32*t1,32*t3+1);t4<=min(PB_Q-1,32*t1+31);t4++) {
          for (t5=32*t2;t5<=floord(32*t3-PB_M,2);t5++) {
            for (t6=32*t3;t6<=min(32*t3+31,t4-1);t6++) {
              A[t5][t4][t4-1] = 4;;
            }
          }
          for (t5=max(ceild(32*t3-PB_M+1,2),32*t2);t5<=min(min(32*t2+31,16*t3+14),t4-1);t5++) {
            for (t6=32*t3;t6<=min(t4-1,2*t5+2);t6++) {
              A[t5][t4][t4-1] = 4;;
            }
            for (t6=max(32*t3,2*t5+3);t6<=min(min(32*t3+31,t4-1),2*t5+PB_M-1);t6++) {
              A[t5][t4][t4-1] = 4;;
              B[t4-1][(-2*t5+t6)-1] = B[t4-1][(-2*t5+t6)-3] + A[(-2*t5+t6)][t4][t4] - 2;;
            }
            for (t6=2*t5+PB_M;t6<=min(32*t3+31,t4-1);t6++) {
              A[t5][t4][t4-1] = 4;;
            }
            if (t1 == t3) {
              for (t6=max(t4,2*t5+3);t6<=min(32*t1+31,2*t5+PB_M-1);t6++) {
                B[t4-1][(-2*t5+t6)-1] = B[t4-1][(-2*t5+t6)-3] + A[(-2*t5+t6)][t4][t4] - 2;;
              }
            }
          }
          for (t5=16*t3+15;t5<=min(32*t2+31,t4-1);t5++) {
            for (t6=32*t3;t6<=min(32*t3+31,t4-1);t6++) {
              A[t5][t4][t4-1] = 4;;
            }
          }
          if ((t1 == 0) && (t2 == 0) && (t3 == 0)) {
            for (t5=t4;t5<=14;t5++) {
              for (t6=2*t5+3;t6<=31;t6++) {
                B[t4-1][(-2*t5+t6)-1] = B[t4-1][(-2*t5+t6)-3] + A[(-2*t5+t6)][t4][t4] - 2;;
              }
            }
          }
        }
      }
      if ((t1 == 12) && (t2 <= floord(t3,2)) && (t2 >= ceild(32*t3-PB_M-61,64)) && (t3 <= floord(PB_Q-1,32))) {
        for (t5=32*t2;t5<=32*t2+31;t5++) {
          for (t6=32*t3;t6<=min(PB_Q-1,32*t3+31);t6++) {
            A[t5][PB_Q][PB_Q-1] = 4;;
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
kernel_3224321224_00(xa,ya,za,POLYBENCH_ARRAY(A),xb,yb,POLYBENCH_ARRAY(B));
polybench_prevent_dce(print_array(xa,ya,za,POLYBENCH_ARRAY(A),xb,yb,POLYBENCH_ARRAY(B)));
POLYBENCH_FREE_ARRAY(A);
POLYBENCH_FREE_ARRAY(B);
return 0;
}
