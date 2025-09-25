#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <math.h>
#include <polybench.h>
#include <time.h>
#include <stdlib.h>
#include "3134121226_00.h"
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
static void init_array(int xa,DATA_TYPE POLYBENCH_1D(A,xA,xa),int seed)
{
srand(seed);
int i,j,k,l;
for (i = 0; i < xa; i++) {
A[i] = rand()%3;;
}
}
static void print_array(int xa,DATA_TYPE POLYBENCH_1D(A,xA,xa))
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
}
void kernel_3134121226_00(int xa,DATA_TYPE POLYBENCH_1D(A,xA,xa)){
polybench_start_instruments;
  int t1, t2;
 int lb, ub, lbp, ubp, lb2, ub2;
 register int lbv, ubv;
/* Start of CLooG code */
lbp=-1;
ubp=floord(PB_M-2,32);
#pragma omp parallel for private(lbv,ubv,t2)
for (t1=lbp;t1<=ubp;t1++) {
  lbv=max(-1,32*t1);
  ubv=min(PB_M-2,32*t1+31);
#pragma ivdep
#pragma vector always
  for (t2=lbv;t2<=ubv;t2++) {
    A[t2+1] = 6;;
  }
}
/* End of CLooG code */
polybench_stop_instruments;
polybench_print_instruments;
}
int main(int argc, char** argv)
{
int xa = xA;
POLYBENCH_1D_ARRAY_DECL(A, DATA_TYPE,xA,xa);
init_array(xa,POLYBENCH_ARRAY(A),INIT_SEED);
kernel_3134121226_00(xa,POLYBENCH_ARRAY(A));
polybench_prevent_dce(print_array(xa,POLYBENCH_ARRAY(A)));
POLYBENCH_FREE_ARRAY(A);
return 0;
}
