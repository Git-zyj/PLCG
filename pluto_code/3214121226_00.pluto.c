#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <math.h>
#include <polybench.h>
#include <time.h>
#include <stdlib.h>
#include "3214121226_00.h"
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
static void init_array(int xb,int yb,DATA_TYPE POLYBENCH_2D(B,xB,yB,xb,yb),int xa,int ya,int za,DATA_TYPE POLYBENCH_3D(A,xA,yA,zA,xa,ya,za),int seed)
{
srand(seed);
int i,j,k,l;
for (i = 0; i < xb; i++) {
for (j = 0; j < yb; j++) {
B[i][j] = rand()%3;;
}}
for (i = 0; i < xa; i++) {
for (j = 0; j < ya; j++) {
for (k = 0; k < za; k++) {
A[i][j][k] = rand()%3;;
}}}
}
static void print_array(int xb,int yb,DATA_TYPE POLYBENCH_2D(B,xB,yB,xb,yb),int xa,int ya,int za,DATA_TYPE POLYBENCH_3D(A,xA,yA,zA,xa,ya,za))
{
int i,j,k,l;
POLYBENCH_DUMP_START;
POLYBENCH_DUMP_BEGIN("B");
for (i = 0; i < xb; i++) {
for (j = 0; j < yb; j++) {
fprintf (POLYBENCH_DUMP_TARGET, "\n");
fprintf (POLYBENCH_DUMP_TARGET, DATA_PRINTF_MODIFIER, B[i][j]);
}}
POLYBENCH_DUMP_END("B");
POLYBENCH_DUMP_FINISH;
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
}
void kernel_3214121226_00(int xb,int yb,DATA_TYPE POLYBENCH_2D(B,xB,yB,xb,yb),int xa,int ya,int za,DATA_TYPE POLYBENCH_3D(A,xA,yA,zA,xa,ya,za)){
polybench_start_instruments;
  int t1, t2, t3, t4, t5, t6;
 int lb, ub, lbp, ubp, lb2, ub2;
 register int lbv, ubv;
/* Start of CLooG code */
lbp=0;
ubp=floord(PB_Q,32);
#pragma omp parallel for private(lbv,ubv,t2,t3,t4,t5,t6)
for (t1=lbp;t1<=ubp;t1++) {
  for (t2=max(0,t1-1);t2<=floord(PB_Q-1,32);t2++) {
    if (t1 == 0) {
      for (t3=1;t3<=2;t3++) {
        for (t4=max(32*t2,t3+1);t4<=min(PB_Q-1,32*t2+31);t4++) {
          for (t6=1;t6<=PB_Q-1;t6++) {
            B[t3+3][t3-1] = A[t6][t3][t6] + 3;;
          }
        }
      }
    }
    for (t3=max(3,32*t1);t3<=min(min(PB_Q-2,32*t1+31),32*t2+30);t3++) {
      if (t1 == t2) {
        for (t4=max(32*t1,t3-1);t4<=t3;t4++) {
          for (t6=1;t6<=PB_Q-1;t6++) {
            B[(t3-2)+1][(t3-2)] = B[(t3-2)+5][(t3-2)+1] + A[t6][t6-1][t4] - A[t6][t6][(t3-2)+1] + 4;;
          }
        }
      }
      for (t4=max(32*t2,t3+1);t4<=min(PB_Q-1,32*t2+31);t4++) {
        for (t6=1;t6<=PB_Q-1;t6++) {
          B[(t3-2)+1][(t3-2)] = B[(t3-2)+5][(t3-2)+1] + A[t6][t6-1][t4] - A[t6][t6][(t3-2)+1] + 4;;
        }
        for (t6=1;t6<=PB_Q-1;t6++) {
          B[t3+3][t3-1] = A[t6][t3][t6] + 3;;
        }
      }
    }
    if ((t1 == 9) && (t2 == 9)) {
      for (t3=PB_Q-1;t3<=PB_Q;t3++) {
        for (t4=t3-1;t4<=PB_Q-1;t4++) {
          for (t6=1;t6<=PB_Q-1;t6++) {
            B[(t3-2)+1][(t3-2)] = B[(t3-2)+5][(t3-2)+1] + A[t6][t6-1][t4] - A[t6][t6][(t3-2)+1] + 4;;
          }
        }
      }
    }
    if ((t1 >= t2) && (t1 <= -31*t2+PB_Q-31)) {
      for (t4=t1+31*t2+30;t4<=32*t2+31;t4++) {
        for (t6=1;t6<=PB_Q-1;t6++) {
          B[(t1+31*t2+29)+1][(t1+31*t2+29)] = B[(t1+31*t2+29)+5][(t1+31*t2+29)+1] + A[t6][t6-1][t4] - A[t6][t6][(t1+31*t2+29)+1] + 4;;
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
int xb = xB;
int yb = yB;
int xa = xA;
int ya = yA;
int za = zA;
POLYBENCH_2D_ARRAY_DECL(B, DATA_TYPE,xB,yB,xb,yb);
POLYBENCH_3D_ARRAY_DECL(A, DATA_TYPE,xA,yA,zA,xa,ya,za);
init_array(xb,yb,POLYBENCH_ARRAY(B),xa,ya,za,POLYBENCH_ARRAY(A),INIT_SEED);
kernel_3214121226_00(xb,yb,POLYBENCH_ARRAY(B),xa,ya,za,POLYBENCH_ARRAY(A));
polybench_prevent_dce(print_array(xb,yb,POLYBENCH_ARRAY(B),xa,ya,za,POLYBENCH_ARRAY(A)));
POLYBENCH_FREE_ARRAY(B);
POLYBENCH_FREE_ARRAY(A);
return 0;
}
