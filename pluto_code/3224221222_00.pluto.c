#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <math.h>
#include <polybench.h>
#include <time.h>
#include <stdlib.h>
#include "3224221222_00.h"
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
static void init_array(int xa,int ya,int za,DATA_TYPE POLYBENCH_3D(A,xA,yA,zA,xa,ya,za),int xc,DATA_TYPE POLYBENCH_1D(C,xC,xc),int xb,int yb,int zb,DATA_TYPE POLYBENCH_3D(B,xB,yB,zB,xb,yb,zb),int xd,int yd,DATA_TYPE POLYBENCH_2D(D,xD,yD,xd,yd),int seed)
{
srand(seed);
int i,j,k,l;
for (i = 0; i < xa; i++) {
for (j = 0; j < ya; j++) {
for (k = 0; k < za; k++) {
A[i][j][k] = rand()%3;;
}}}
for (i = 0; i < xc; i++) {
C[i] = rand()%3;;
}
for (i = 0; i < xb; i++) {
for (j = 0; j < yb; j++) {
for (k = 0; k < zb; k++) {
B[i][j][k] = rand()%3;;
}}}
for (i = 0; i < xd; i++) {
for (j = 0; j < yd; j++) {
D[i][j] = rand()%3;;
}}
}
static void print_array(int xa,int ya,int za,DATA_TYPE POLYBENCH_3D(A,xA,yA,zA,xa,ya,za),int xc,DATA_TYPE POLYBENCH_1D(C,xC,xc),int xb,int yb,int zb,DATA_TYPE POLYBENCH_3D(B,xB,yB,zB,xb,yb,zb),int xd,int yd,DATA_TYPE POLYBENCH_2D(D,xD,yD,xd,yd))
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
POLYBENCH_DUMP_START;
POLYBENCH_DUMP_BEGIN("D");
for (i = 0; i < xd; i++) {
for (j = 0; j < yd; j++) {
fprintf (POLYBENCH_DUMP_TARGET, "\n");
fprintf (POLYBENCH_DUMP_TARGET, DATA_PRINTF_MODIFIER, D[i][j]);
}}
POLYBENCH_DUMP_END("D");
POLYBENCH_DUMP_FINISH;
}
void kernel_3224221222_00(int xa,int ya,int za,DATA_TYPE POLYBENCH_3D(A,xA,yA,zA,xa,ya,za),int xc,DATA_TYPE POLYBENCH_1D(C,xC,xc),int xb,int yb,int zb,DATA_TYPE POLYBENCH_3D(B,xB,yB,zB,xb,yb,zb),int xd,int yd,DATA_TYPE POLYBENCH_2D(D,xD,yD,xd,yd)){
polybench_start_instruments;
  int t1, t2, t3, t4, t5;
 int lb, ub, lbp, ubp, lb2, ub2;
 register int lbv, ubv;
/* Start of CLooG code */
for (t1=0;t1<=min(400,PB_L+PB_M-401);t1++) {
  for (t2=0;t2<=floord(PB_M-1,32);t2++) {
    for (t3=0;t3<=min(floord(-399*t1+399*PB_L+PB_M-401,32),t2);t3++) {
      if ((PB_L == 401) && (PB_M == 400) && (t1 == 400) && (t3 == 0)) {
        for (t4=max(2,32*t2);t4<=min(399,32*t2+31);t4++) {
          for (t5=0;t5<=min(31,t4-1);t5++) {
            A[400][t4][t4] = A[400][t4-2][t4] + B[t4][400][t5] * 5;;
          }
        }
      }
      if (t3 >= 1) {
        for (t4=max(32*t2,32*t3+1);t4<=min(PB_M-1,32*t2+31);t4++) {
          for (t5=32*t3;t5<=min(32*t3+31,t4-1);t5++) {
            A[t1][t4][t4] = A[t1][t4-2][t4] + B[t4][t1][t5] * 5;;
          }
        }
      }
      if ((t1 <= min(PB_L-1,PB_M-1)) && (t2 == 0) && (t3 == 0)) {
        C[t1] = C[t1] - C[1 -1] + D[1][t1] - 5;;
      }
      if ((PB_L == 400) && (PB_M == 401) && (t1 == 400) && (t3 == 0)) {
        for (t4=max(1,32*t2);t4<=min(400,32*t2+31);t4++) {
          C[400] = C[400] - C[t4-1] + D[t4][400] - 5;;
        }
      }
      if ((t1 <= min(PB_L-1,PB_M-1)) && (t3 == 0)) {
        for (t4=max(2,32*t2);t4<=min(PB_M-1,32*t2+31);t4++) {
          A[t1][t4][t4] = A[t1][t4-2][t4] + B[t4][t1][0] * 5;;
          C[t1] = C[t1] - C[t4-1] + D[t4][t1] - 5;;
          for (t5=1;t5<=min(31,t4-1);t5++) {
            A[t1][t4][t4] = A[t1][t4-2][t4] + B[t4][t1][t5] * 5;;
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
int xc = xC;
int xb = xB;
int yb = yB;
int zb = zB;
int xd = xD;
int yd = yD;
POLYBENCH_3D_ARRAY_DECL(A, DATA_TYPE,xA,yA,zA,xa,ya,za);
POLYBENCH_1D_ARRAY_DECL(C, DATA_TYPE,xC,xc);
POLYBENCH_3D_ARRAY_DECL(B, DATA_TYPE,xB,yB,zB,xb,yb,zb);
POLYBENCH_2D_ARRAY_DECL(D, DATA_TYPE,xD,yD,xd,yd);
init_array(xa,ya,za,POLYBENCH_ARRAY(A),xc,POLYBENCH_ARRAY(C),xb,yb,zb,POLYBENCH_ARRAY(B),xd,yd,POLYBENCH_ARRAY(D),INIT_SEED);
kernel_3224221222_00(xa,ya,za,POLYBENCH_ARRAY(A),xc,POLYBENCH_ARRAY(C),xb,yb,zb,POLYBENCH_ARRAY(B),xd,yd,POLYBENCH_ARRAY(D));
polybench_prevent_dce(print_array(xa,ya,za,POLYBENCH_ARRAY(A),xc,POLYBENCH_ARRAY(C),xb,yb,zb,POLYBENCH_ARRAY(B),xd,yd,POLYBENCH_ARRAY(D)));
POLYBENCH_FREE_ARRAY(A);
POLYBENCH_FREE_ARRAY(C);
POLYBENCH_FREE_ARRAY(B);
POLYBENCH_FREE_ARRAY(D);
return 0;
}
