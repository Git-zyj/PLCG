#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <math.h>
#include <polybench.h>
#include <time.h>
#include <stdlib.h>
#include "3134221226_00.h"
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
static void init_array(int xa,int ya,int za,DATA_TYPE POLYBENCH_3D(A,xA,yA,zA,xa,ya,za),int seed)
{
srand(seed);
int i,j,k,l;
for (i = 0; i < xa; i++) {
for (j = 0; j < ya; j++) {
for (k = 0; k < za; k++) {
A[i][j][k] = rand()%3;;
}}}
}
static void print_array(int xa,int ya,int za,DATA_TYPE POLYBENCH_3D(A,xA,yA,zA,xa,ya,za))
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
}
void kernel_3134221226_00(int xa,int ya,int za,DATA_TYPE POLYBENCH_3D(A,xA,yA,zA,xa,ya,za)){
polybench_start_instruments;
  int t1, t2, t3, t4, t5;
 int lb, ub, lbp, ubp, lb2, ub2;
 register int lbv, ubv;
/* Start of CLooG code */
lbp=0;
ubp=floord(PB_M-2,32);
#pragma omp parallel for private(lbv,ubv,t2,t3,t4,t5)
for (t1=lbp;t1<=ubp;t1++) {
  for (t2=t1;t2<=floord(PB_P-1,32);t2++) {
    for (t3=32*t1;t3<=min(min(PB_M-2,32*t1+31),32*t2+30);t3++) {
      for (t4=max(32*t2,t3+1);t4<=min(PB_P-1,32*t2+31);t4++) {
        lbv=0;
        ubv=PB_M-1;
#pragma ivdep
#pragma vector always
        for (t5=lbv;t5<=ubv;t5++) {
          A[t5][t3][t4] = A[t3+1][t3][t5] + 2;;
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
POLYBENCH_3D_ARRAY_DECL(A, DATA_TYPE,xA,yA,zA,xa,ya,za);
init_array(xa,ya,za,POLYBENCH_ARRAY(A),INIT_SEED);
kernel_3134221226_00(xa,ya,za,POLYBENCH_ARRAY(A));
polybench_prevent_dce(print_array(xa,ya,za,POLYBENCH_ARRAY(A)));
POLYBENCH_FREE_ARRAY(A);
return 0;
}
