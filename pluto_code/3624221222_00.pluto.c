#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <math.h>
#include <polybench.h>
#include <time.h>
#include <stdlib.h>
#include "3624221222_00.h"
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
static void init_array(int xa,DATA_TYPE POLYBENCH_1D(A,xA,xa),int xb,DATA_TYPE POLYBENCH_1D(B,xB,xb),int xc,int yc,DATA_TYPE POLYBENCH_2D(C,xC,yC,xc,yc),int xd,int yd,DATA_TYPE POLYBENCH_2D(D,xD,yD,xd,yd),int seed)
{
srand(seed);
int i,j,k,l;
for (i = 0; i < xa; i++) {
A[i] = rand()%3;;
}
for (i = 0; i < xb; i++) {
B[i] = rand()%3;;
}
for (i = 0; i < xc; i++) {
for (j = 0; j < yc; j++) {
C[i][j] = rand()%3;;
}}
for (i = 0; i < xd; i++) {
for (j = 0; j < yd; j++) {
D[i][j] = rand()%3;;
}}
}
static void print_array(int xa,DATA_TYPE POLYBENCH_1D(A,xA,xa),int xb,DATA_TYPE POLYBENCH_1D(B,xB,xb),int xc,int yc,DATA_TYPE POLYBENCH_2D(C,xC,yC,xc,yc),int xd,int yd,DATA_TYPE POLYBENCH_2D(D,xD,yD,xd,yd))
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
void kernel_3624221222_00(int xa,DATA_TYPE POLYBENCH_1D(A,xA,xa),int xb,DATA_TYPE POLYBENCH_1D(B,xB,xb),int xc,int yc,DATA_TYPE POLYBENCH_2D(C,xC,yC,xc,yc),int xd,int yd,DATA_TYPE POLYBENCH_2D(D,xD,yD,xd,yd)){
polybench_start_instruments;
  int t1, t2, t3, t4, t5;
 int lb, ub, lbp, ubp, lb2, ub2;
 register int lbv, ubv;
/* Start of CLooG code */
for (t1=0;t1<=floord(PB_M-1,32);t1++) {
  for (t2=0;t2<=min(floord(2*PB_M+PB_P-4,32),floord(64*t1+PB_P+60,32));t2++) {
    if ((t1 == 0) && (t2 == 0)) {
      for (t3=0;t3<=1;t3++) {
        A[t3] = 6;;
        A[t3] = A[t3] - 6;;
      }
    }
    if (t2 >= 1) {
      for (t3=max(max(2,ceild(32*t2-PB_P+2,2)),32*t1);t3<=min(min(PB_M-1,32*t1+31),16*t2+15);t3++) {
        for (t4=max(32*t2,2*t3+1);t4<=min(32*t2+31,2*t3+PB_P-2);t4++) {
          C[t3][(-2*t3+t4)] = D[(-2*t3+t4)][(-2*t3+t4)+1] - C[(-2*t3+t4)][(-2*t3+t4)] + 1;;
          D[t3][(-2*t3+t4)] = C[t3][(-2*t3+t4)] - D[t3][(-2*t3+t4)] - C[(-2*t3+t4)-1][t3] + 6;;
        }
      }
    }
    if ((t1 == 0) && (t2 == 0)) {
      for (t3=2;t3<=15;t3++) {
        B[t3] = B[t3-2] - 1;;
        A[t3] = 6;;
        A[t3] = B[t3-2] * A[t3] + B[t3] * 6;;
        A[t3] = A[t3] - 6;;
        for (t4=2*t3+1;t4<=31;t4++) {
          C[t3][(-2*t3+t4)] = D[(-2*t3+t4)][(-2*t3+t4)+1] - C[(-2*t3+t4)][(-2*t3+t4)] + 1;;
          D[t3][(-2*t3+t4)] = C[t3][(-2*t3+t4)] - D[t3][(-2*t3+t4)] - C[(-2*t3+t4)-1][t3] + 6;;
        }
      }
    }
    if (t2 == 0) {
      for (t3=max(16,32*t1);t3<=min(PB_M-1,32*t1+31);t3++) {
        B[t3] = B[t3-2] - 1;;
        A[t3] = 6;;
        A[t3] = B[t3-2] * A[t3] + B[t3] * 6;;
        A[t3] = A[t3] - 6;;
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
int xc = xC;
int yc = yC;
int xd = xD;
int yd = yD;
POLYBENCH_1D_ARRAY_DECL(A, DATA_TYPE,xA,xa);
POLYBENCH_1D_ARRAY_DECL(B, DATA_TYPE,xB,xb);
POLYBENCH_2D_ARRAY_DECL(C, DATA_TYPE,xC,yC,xc,yc);
POLYBENCH_2D_ARRAY_DECL(D, DATA_TYPE,xD,yD,xd,yd);
init_array(xa,POLYBENCH_ARRAY(A),xb,POLYBENCH_ARRAY(B),xc,yc,POLYBENCH_ARRAY(C),xd,yd,POLYBENCH_ARRAY(D),INIT_SEED);
kernel_3624221222_00(xa,POLYBENCH_ARRAY(A),xb,POLYBENCH_ARRAY(B),xc,yc,POLYBENCH_ARRAY(C),xd,yd,POLYBENCH_ARRAY(D));
polybench_prevent_dce(print_array(xa,POLYBENCH_ARRAY(A),xb,POLYBENCH_ARRAY(B),xc,yc,POLYBENCH_ARRAY(C),xd,yd,POLYBENCH_ARRAY(D)));
POLYBENCH_FREE_ARRAY(A);
POLYBENCH_FREE_ARRAY(B);
POLYBENCH_FREE_ARRAY(C);
POLYBENCH_FREE_ARRAY(D);
return 0;
}
