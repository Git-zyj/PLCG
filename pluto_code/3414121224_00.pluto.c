#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <math.h>
#include <polybench.h>
#include <time.h>
#include <stdlib.h>
#include "3414121224_00.h"
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
static void init_array(int xa,int ya,int za,DATA_TYPE POLYBENCH_3D(A,xA,yA,zA,xa,ya,za),int xb,int yb,DATA_TYPE POLYBENCH_2D(B,xB,yB,xb,yb),int xc,DATA_TYPE POLYBENCH_1D(C,xC,xc),int seed)
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
for (i = 0; i < xc; i++) {
C[i] = rand()%3;;
}
}
static void print_array(int xa,int ya,int za,DATA_TYPE POLYBENCH_3D(A,xA,yA,zA,xa,ya,za),int xb,int yb,DATA_TYPE POLYBENCH_2D(B,xB,yB,xb,yb),int xc,DATA_TYPE POLYBENCH_1D(C,xC,xc))
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
POLYBENCH_DUMP_START;
POLYBENCH_DUMP_BEGIN("C");
for (i = 0; i < xc; i++) {
fprintf (POLYBENCH_DUMP_TARGET, "\n");
fprintf (POLYBENCH_DUMP_TARGET, DATA_PRINTF_MODIFIER, C[i]);
}
POLYBENCH_DUMP_END("C");
POLYBENCH_DUMP_FINISH;
}
void kernel_3414121224_00(int xa,int ya,int za,DATA_TYPE POLYBENCH_3D(A,xA,yA,zA,xa,ya,za),int xb,int yb,DATA_TYPE POLYBENCH_2D(B,xB,yB,xb,yb),int xc,DATA_TYPE POLYBENCH_1D(C,xC,xc)){
polybench_start_instruments;
  int t1, t2, t3, t4;
 int lb, ub, lbp, ubp, lb2, ub2;
 register int lbv, ubv;
/* Start of CLooG code */
for (t2=1;t2<=PB_M-3;t2++) {
  B[0][t2] = B[0][t2] - C[0] - B[0][t2-1] - 2;;
  for (t3=1;t3<=t2-1;t3++) {
    B[t3][t2] = B[t3][t2] - C[t3] - B[t3][t2-1] - 2;;
    C[t3-1] = C[t3-1] * C[t2] * C[t3] * 1;;
  }
  for (t3=t2;t3<=PB_M-1;t3++) {
    C[t3-1] = C[t3-1] * C[t2] * C[t3] * 1;;
  }
}
for (t2=2;t2<=PB_M-3;t2++) {
  for (t4=1;t4<=t2-1;t4++) {
    A[t2+1][t4-1][t2] = A[t2+1][t4-1][t2+2] - A[t2+2][t4-1][t2] * A[0 +1][t4][t2] + B[0][t2-1] * 6;;
  }
  for (t3=1;t3<=t2-1;t3++) {
    for (t4=1;t4<=min(2,t2-1);t4++) {
      A[t2+1][t4-1][t2] = A[t2+1][t4-1][t2+2] - A[t2+2][t4-1][t2] * A[t3+1][t4][t2] + B[t3][t2-1] * 6;;
    }
    for (t4=3;t4<=t2-1;t4++) {
      A[t2+1][t4-1][t2] = A[t2+1][t4-1][t2+2] - A[t2+2][t4-1][t2] * A[t3+1][t4][t2] + B[t3][t2-1] * 6;;
      A[t3][t4-1][(t2-1)] = A[t3][t4-3][(t2-1)] + A[t3][t4-1][(t2-1)+1] * A[t3-1][(t2-1)][t3-1] - A[t3-1][t4][(t2-1)-1] - 3;;
    }
    for (t4=max(3,t2);t4<=PB_M-1;t4++) {
      A[t3][t4-1][(t2-1)] = A[t3][t4-3][(t2-1)] + A[t3][t4-1][(t2-1)+1] * A[t3-1][(t2-1)][t3-1] - A[t3-1][t4][(t2-1)-1] - 3;;
    }
  }
  for (t3=t2;t3<=PB_M-1;t3++) {
    for (t4=3;t4<=PB_M-1;t4++) {
      A[t3][t4-1][(t2-1)] = A[t3][t4-3][(t2-1)] + A[t3][t4-1][(t2-1)+1] * A[t3-1][(t2-1)][t3-1] - A[t3-1][t4][(t2-1)-1] - 3;;
    }
  }
}
for (t2=PB_M-2;t2<=PB_M;t2++) {
  for (t3=1;t3<=PB_M-1;t3++) {
    for (t4=3;t4<=PB_M-1;t4++) {
      A[t3][t4-1][(t2-1)] = A[t3][t4-3][(t2-1)] + A[t3][t4-1][(t2-1)+1] * A[t3-1][(t2-1)][t3-1] - A[t3-1][t4][(t2-1)-1] - 3;;
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
int xc = xC;
POLYBENCH_3D_ARRAY_DECL(A, DATA_TYPE,xA,yA,zA,xa,ya,za);
POLYBENCH_2D_ARRAY_DECL(B, DATA_TYPE,xB,yB,xb,yb);
POLYBENCH_1D_ARRAY_DECL(C, DATA_TYPE,xC,xc);
init_array(xa,ya,za,POLYBENCH_ARRAY(A),xb,yb,POLYBENCH_ARRAY(B),xc,POLYBENCH_ARRAY(C),INIT_SEED);
kernel_3414121224_00(xa,ya,za,POLYBENCH_ARRAY(A),xb,yb,POLYBENCH_ARRAY(B),xc,POLYBENCH_ARRAY(C));
polybench_prevent_dce(print_array(xa,ya,za,POLYBENCH_ARRAY(A),xb,yb,POLYBENCH_ARRAY(B),xc,POLYBENCH_ARRAY(C)));
POLYBENCH_FREE_ARRAY(A);
POLYBENCH_FREE_ARRAY(B);
POLYBENCH_FREE_ARRAY(C);
return 0;
}
