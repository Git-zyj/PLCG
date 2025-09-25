#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <math.h>
#include <polybench.h>
#include <time.h>
#include <stdlib.h>
#include "3234321222_00.h"
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
void kernel_3234321222_00(int xa,int ya,DATA_TYPE POLYBENCH_2D(A,xA,yA,xa,ya),int xb,int yb,DATA_TYPE POLYBENCH_2D(B,xB,yB,xb,yb)){
polybench_start_instruments;
  int t1, t2, t3, t4;
 int lb, ub, lbp, ubp, lb2, ub2;
 register int lbv, ubv;
/* Start of CLooG code */
for (t1=0;t1<=floord(5*PB_M-5,32);t1++) {
  lbp=max(max(max(0,ceild(32*t1-PB_M+1,32)),ceild(60000*t1-1875*PB_L+3750,66004)),ceild(959904*t1-20994*PB_M-29997*PB_L+209999994,1055936));
  ubp=min(min(floord(PB_M-1,8),floord(96*t1+PB_M+92,128)),t1);
#pragma omp parallel for private(lbv,ubv,t3,t4)
  for (t2=lbp;t2<=ubp;t2++) {
    if (t2 >= ceild(PB_L,32)) {
      for (t3=max(max(1,ceild(32*t2-PB_M+1,3)),32*t1-32*t2);t3<=min(min(floord(32*t2+30,3),PB_M-1),32*t1-32*t2+31);t3++) {
        for (t4=max(32*t2,3*t3+1);t4<=min(32*t2+31,3*t3+PB_M-1);t4++) {
          A[(-3*t3+t4)-1][t3-1] = A[(-3*t3+t4)-1][t3-1] + A[t3][(-3*t3+t4)] * 4;;
        }
      }
    }
    if ((t1 == t2) && (t1 <= floord(PB_L-1,32))) {
      for (t4=32*t1;t4<=min(PB_L-1,32*t1+31);t4++) {
        B[0][0 +1] = 2;;
      }
    }
    if (t2 <= floord(PB_L-1,32)) {
      for (t3=max(1,32*t1-32*t2);t3<=min(floord(32*t2+30,3),32*t1-32*t2+31);t3++) {
        for (t4=32*t2;t4<=min(3*t3,PB_L-1);t4++) {
          B[t3][t3+1] = 2;;
        }
        for (t4=max(32*t2,3*t3+1);t4<=min(PB_L-1,32*t2+31);t4++) {
          A[(-3*t3+t4)-1][t3-1] = A[(-3*t3+t4)-1][t3-1] + A[t3][(-3*t3+t4)] * 4;;
          B[t3][t3+1] = 2;;
        }
        if (t2 == 218) {
          for (t4=max(PB_L,3*t3+1);t4<=7007;t4++) {
            A[(-3*t3+t4)-1][t3-1] = A[(-3*t3+t4)-1][t3-1] + A[t3][(-3*t3+t4)] * 4;;
          }
        }
      }
    }
    if (t2 <= floord(PB_L-1,32)) {
      for (t3=max(ceild(32*t2+31,3),32*t1-32*t2);t3<=min(PB_L-2,32*t1-32*t2+31);t3++) {
        for (t4=32*t2;t4<=min(PB_L-1,32*t2+31);t4++) {
          B[t3][t3+1] = 2;;
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
kernel_3234321222_00(xa,ya,POLYBENCH_ARRAY(A),xb,yb,POLYBENCH_ARRAY(B));
polybench_prevent_dce(print_array(xa,ya,POLYBENCH_ARRAY(A),xb,yb,POLYBENCH_ARRAY(B)));
POLYBENCH_FREE_ARRAY(A);
POLYBENCH_FREE_ARRAY(B);
return 0;
}
