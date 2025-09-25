#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <math.h>
#include <polybench.h>
#include <time.h>
#include <stdlib.h>
#include "3214221226_00.h"
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
static void init_array(int xa,int ya,DATA_TYPE POLYBENCH_2D(A,xA,yA,xa,ya),int xb,int yb,DATA_TYPE POLYBENCH_2D(B,xB,yB,xb,yb),int seed)
{
srand(seed);
int i,j,k,l;
for (i = 0; i < xa; i++) {
for (j = 0; j < ya; j++) {
A[i][j] = rand()%3;;
}}
for (i = 0; i < xb; i++) {
for (j = 0; j < yb; j++) {
B[i][j] = rand()%3;;
}}
}
static void print_array(int xa,int ya,DATA_TYPE POLYBENCH_2D(A,xA,yA,xa,ya),int xb,int yb,DATA_TYPE POLYBENCH_2D(B,xB,yB,xb,yb))
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
for (j = 0; j < yb; j++) {
fprintf (POLYBENCH_DUMP_TARGET, "\n");
fprintf (POLYBENCH_DUMP_TARGET, DATA_PRINTF_MODIFIER, B[i][j]);
}}
POLYBENCH_DUMP_END("B");
POLYBENCH_DUMP_FINISH;
}
void kernel_3214221226_00(int xa,int ya,DATA_TYPE POLYBENCH_2D(A,xA,yA,xa,ya),int xb,int yb,DATA_TYPE POLYBENCH_2D(B,xB,yB,xb,yb)){
polybench_start_instruments;
  int t1, t2, t3, t4, t5, t6;
 int lb, ub, lbp, ubp, lb2, ub2;
 register int lbv, ubv;
/* Start of CLooG code */
lbp=0;
ubp=floord(25*PB_M-75,796);
#pragma omp parallel for private(lbv,ubv,t2,t3,t4,t5,t6)
for (t1=lbp;t1<=ubp;t1++) {
  for (t2=t1;t2<=15;t2++) {
    for (t3=0;t3<=min(min(min(floord(3*PB_M-6,32),floord(64*t2+PB_M+60,32)),floord(-399*t2+6246,34)),floord(-38208*t2+1503*PB_M-3006,3296));t3++) {
      if ((t1 == 0) && (t2 == 0) && (t3 == 0)) {
        for (t4=0;t4<=14;t4++) {
          for (t5=t4+1;t5<=2;t5++) {
            for (t6=2*t5+1;t6<=31;t6++) {
              A[(-2*t5+t6)-1][t4] = A[(-2*t5+t6)+1][t4] + B[t5+1][t4] - 4;;
            }
          }
          for (t5=max(3,t4+1);t5<=15;t5++) {
            B[t4][t5-1] = B[t4][t5-3] + B[t4][t5-1] + 5;;
            for (t6=2*t5+1;t6<=31;t6++) {
              A[(-2*t5+t6)-1][t4] = A[(-2*t5+t6)+1][t4] + B[t5+1][t4] - 4;;
            }
          }
          for (t5=16;t5<=31;t5++) {
            B[t4][t5-1] = B[t4][t5-3] + B[t4][t5-1] + 5;;
          }
        }
      }
      if ((t2 <= min(floord(t3,2),floord(PB_M-2,32))) && (t3 >= 1)) {
        for (t4=32*t1;t4<=min(min(min(PB_M-3,32*t1+31),32*t2+30),16*t3+14);t4++) {
          for (t5=max(max(ceild(32*t3-PB_M+2,2),32*t2),t4+1);t5<=min(min(PB_M-2,32*t2+31),16*t3+15);t5++) {
            for (t6=max(32*t3,2*t5+1);t6<=min(32*t3+31,2*t5+PB_M-2);t6++) {
              A[(-2*t5+t6)-1][t4] = A[(-2*t5+t6)+1][t4] + B[t5+1][t4] - 4;;
            }
          }
        }
      }
      if ((t1 == 0) && (t2 == 0) && (t3 == 0)) {
        for (t4=15;t4<=30;t4++) {
          for (t5=t4+1;t5<=31;t5++) {
            B[t4][t5-1] = B[t4][t5-3] + B[t4][t5-1] + 5;;
          }
        }
      }
      if ((t2 >= 1) && (t3 == 0)) {
        for (t4=32*t1;t4<=min(min(PB_M-1,32*t1+31),32*t2+30);t4++) {
          for (t5=max(32*t2,t4+1);t5<=min(PB_L,32*t2+31);t5++) {
            B[t4][t5-1] = B[t4][t5-3] + B[t4][t5-1] + 5;;
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
int xb = xB;
int yb = yB;
POLYBENCH_2D_ARRAY_DECL(A, DATA_TYPE,xA,yA,xa,ya);
POLYBENCH_2D_ARRAY_DECL(B, DATA_TYPE,xB,yB,xb,yb);
init_array(xa,ya,POLYBENCH_ARRAY(A),xb,yb,POLYBENCH_ARRAY(B),INIT_SEED);
kernel_3214221226_00(xa,ya,POLYBENCH_ARRAY(A),xb,yb,POLYBENCH_ARRAY(B));
polybench_prevent_dce(print_array(xa,ya,POLYBENCH_ARRAY(A),xb,yb,POLYBENCH_ARRAY(B)));
POLYBENCH_FREE_ARRAY(A);
POLYBENCH_FREE_ARRAY(B);
return 0;
}
