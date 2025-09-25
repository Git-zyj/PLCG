#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <math.h>
#include <polybench.h>
#include <time.h>
#include <stdlib.h>
#include "3614121226_00.h"
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
static void init_array(int xa,int ya,int za,DATA_TYPE POLYBENCH_3D(A,xA,yA,zA,xa,ya,za),int xb,DATA_TYPE POLYBENCH_1D(B,xB,xb),int xc,int yc,DATA_TYPE POLYBENCH_2D(C,xC,yC,xc,yc),int seed)
{
srand(seed);
int i,j,k,l;
for (i = 0; i < xa; i++) {
for (j = 0; j < ya; j++) {
for (k = 0; k < za; k++) {
A[i][j][k] = rand()%3;;
}}}
for (i = 0; i < xb; i++) {
B[i] = rand()%3;;
}
for (i = 0; i < xc; i++) {
for (j = 0; j < yc; j++) {
C[i][j] = rand()%3;;
}}
}
static void print_array(int xa,int ya,int za,DATA_TYPE POLYBENCH_3D(A,xA,yA,zA,xa,ya,za),int xb,DATA_TYPE POLYBENCH_1D(B,xB,xb),int xc,int yc,DATA_TYPE POLYBENCH_2D(C,xC,yC,xc,yc))
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
fprintf (POLYBENCH_DUMP_TARGET, "\n");
fprintf (POLYBENCH_DUMP_TARGET, DATA_PRINTF_MODIFIER, B[i]);
}
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
void kernel_3614121226_00(int xa,int ya,int za,DATA_TYPE POLYBENCH_3D(A,xA,yA,zA,xa,ya,za),int xb,DATA_TYPE POLYBENCH_1D(B,xB,xb),int xc,int yc,DATA_TYPE POLYBENCH_2D(C,xC,yC,xc,yc)){
polybench_start_instruments;
  int t1, t2, t3, t4, t5, t6, t7, t8, t9;
 int lb, ub, lbp, ubp, lb2, ub2;
 register int lbv, ubv;
/* Start of CLooG code */
lbp=0;
ubp=floord(PB_Q-2,32);
#pragma omp parallel for private(lbv,ubv,t3,t4,t5,t6,t7,t8,t9)
for (t2=lbp;t2<=ubp;t2++) {
  for (t3=0;t3<=t2;t3++) {
    for (t4=max(32*t2,32*t3+1);t4<=min(PB_Q-2,32*t2+31);t4++) {
      for (t5=32*t3;t5<=min(32*t3+31,t4-1);t5++) {
        for (t9=0;t9<=t4-1;t9++) {
          C[t9][t4] = C[t5][t4] * 5;;
        }
        C[t5][t4] = C[t5][t4] + 2;;
      }
    }
  }
}
for (t2=1;t2<=PB_Q-2;t2++) {
  B[t2] = B[t2-1] - B[t2+1] + 6;;
}
for (t2=1;t2<=2*PB_Q-4;t2++) {
  for (t3=max(0,t2-PB_Q+2);t3<=min(floord(-300*t2+898*PB_Q-1497,299),t2+PB_Q-1);t3++) {
    if ((t2 <= PB_Q-2) && (t3 <= PB_Q-2)) {
      for (t7=t3+1;t7<=PB_Q-1;t7++) {
        A[t3][t3][t2] = A[t2][t7][t3] * A[t7][t2][t7] * 1;;
      }
    }
    if ((t2 >= 3) && (t3 >= 2) && (t3 <= PB_Q-2)) {
      lbp=max(0,ceild(t2-t3-31,32));
      ubp=min(floord(PB_Q-2,32),floord(t2-2,32));
#pragma omp parallel for private(lbv,ubv,t8,t9)
      for (t7=lbp;t7<=ubp;t7++) {
        lbv=max(max(1,32*t7),t2-t3);
        ubv=min(min(PB_Q-2,t2-2),32*t7+31);
#pragma ivdep
#pragma vector always
        for (t8=lbv;t8<=ubv;t8++) {
          A[(t2-t8-1)-1][t8+1][t8-1] = A[(t2-t8-1)-1][t8+1][t8+1] * A[(t2-t8-1)+1][t8-1][t8-1] + C[t8][t3-1] * A[t3][t8+1][t3+1] + 3;;
        }
      }
    }
    if (t2 <= min(t3,PB_Q-2)) {
      lbp=-1;
      ubp=floord(PB_L-2,32);
#pragma omp parallel for private(lbv,ubv,t8,t9)
      for (t7=lbp;t7<=ubp;t7++) {
        lbv=max(-1,32*t7);
        ubv=min(PB_L-2,32*t7+31);
#pragma ivdep
#pragma vector always
        for (t8=lbv;t8<=ubv;t8++) {
          A[t8+1][t2+1][(-t2+t3)] = 4;;
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
int xc = xC;
int yc = yC;
POLYBENCH_3D_ARRAY_DECL(A, DATA_TYPE,xA,yA,zA,xa,ya,za);
POLYBENCH_1D_ARRAY_DECL(B, DATA_TYPE,xB,xb);
POLYBENCH_2D_ARRAY_DECL(C, DATA_TYPE,xC,yC,xc,yc);
init_array(xa,ya,za,POLYBENCH_ARRAY(A),xb,POLYBENCH_ARRAY(B),xc,yc,POLYBENCH_ARRAY(C),INIT_SEED);
kernel_3614121226_00(xa,ya,za,POLYBENCH_ARRAY(A),xb,POLYBENCH_ARRAY(B),xc,yc,POLYBENCH_ARRAY(C));
polybench_prevent_dce(print_array(xa,ya,za,POLYBENCH_ARRAY(A),xb,POLYBENCH_ARRAY(B),xc,yc,POLYBENCH_ARRAY(C)));
POLYBENCH_FREE_ARRAY(A);
POLYBENCH_FREE_ARRAY(B);
POLYBENCH_FREE_ARRAY(C);
return 0;
}
