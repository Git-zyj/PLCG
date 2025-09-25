#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <math.h>
#include <polybench.h>
#include <time.h>
#include <stdlib.h>
#include "3324121226_00.h"
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
static void init_array(int xb,DATA_TYPE POLYBENCH_1D(B,xB,xb),int xc,int yc,int zc,DATA_TYPE POLYBENCH_3D(C,xC,yC,zC,xc,yc,zc),int seed)
{
srand(seed);
int i,j,k,l;
for (i = 0; i < xb; i++) {
B[i] = rand()%3;;
}
for (i = 0; i < xc; i++) {
for (j = 0; j < yc; j++) {
for (k = 0; k < zc; k++) {
C[i][j][k] = rand()%3;;
}}}
}
static void print_array(int xb,DATA_TYPE POLYBENCH_1D(B,xB,xb),int xc,int yc,int zc,DATA_TYPE POLYBENCH_3D(C,xC,yC,zC,xc,yc,zc))
{
int i,j,k,l;
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
for (k = 0; k < zc; k++) {
fprintf (POLYBENCH_DUMP_TARGET, "\n");
fprintf (POLYBENCH_DUMP_TARGET, DATA_PRINTF_MODIFIER, C[i][j][k]);
}}}
POLYBENCH_DUMP_END("C");
POLYBENCH_DUMP_FINISH;
}
void kernel_3324121226_00(int xb,DATA_TYPE POLYBENCH_1D(B,xB,xb),int xc,int yc,int zc,DATA_TYPE POLYBENCH_3D(C,xC,yC,zC,xc,yc,zc)){
polybench_start_instruments;
  int t1, t2, t3, t4, t5, t6;
 int lb, ub, lbp, ubp, lb2, ub2;
 register int lbv, ubv;
/* Start of CLooG code */
for (t1=1;t1<=2*PB_L+PB_Q-5;t1++) {
  for (t3=max(max(0,ceild(t1-PB_Q-60,32)),ceild(t1-PB_Q-59,64));t3<=min(floord(PB_L-2,16),floord(t1,32));t3++) {
    lbp=max(max(ceild(t3,2),ceild(-t1+64*t3+1,64)),ceild(t1-PB_Q-59,64));
    ubp=min(min(floord(PB_L-1,32),floord(-t1+32*t3+PB_L+PB_Q+28,32)),t3);
#pragma omp parallel for private(lbv,ubv,t5,t6)
    for (t4=lbp;t4<=ubp;t4++) {
      for (t5=max(max(32*t3-32*t4,t1-PB_L-PB_Q+3),t1-32*t4-PB_Q-29);t5<=min(min(min(min(floord(t1-1,2),PB_L-2),t1-32*t4),32*t4+30),32*t3-32*t4+31);t5++) {
        for (t6=max(max(32*t4,t5+1),t1-t5-PB_Q+2);t6<=min(min(PB_L-1,t1-t5),32*t4+31);t6++) {
          C[(t1-t5-t6)][t5+1][t6] = C[(t1-t5-t6)][t5+1][t6] + C[(t1-t5-t6)][t5][t6-1] + C[t5][t6][(t1-t5-t6)+1] * 4;;
        }
      }
    }
  }
  if (t1 <= PB_M-2) {
    for (t3=0;t3<=PB_M-1;t3++) {
      B[t1-1] = B[t1] * 4;;
    }
  }
  if (t1 <= PB_M-2) {
    B[t1-1] = B[t1-1] * B[t1] + B[t1+1] + 6;;
  }
}
/* End of CLooG code */
polybench_stop_instruments;
polybench_print_instruments;
}
int main(int argc, char** argv)
{
int xb = xB;
int xc = xC;
int yc = yC;
int zc = zC;
POLYBENCH_1D_ARRAY_DECL(B, DATA_TYPE,xB,xb);
POLYBENCH_3D_ARRAY_DECL(C, DATA_TYPE,xC,yC,zC,xc,yc,zc);
init_array(xb,POLYBENCH_ARRAY(B),xc,yc,zc,POLYBENCH_ARRAY(C),INIT_SEED);
kernel_3324121226_00(xb,POLYBENCH_ARRAY(B),xc,yc,zc,POLYBENCH_ARRAY(C));
polybench_prevent_dce(print_array(xb,POLYBENCH_ARRAY(B),xc,yc,zc,POLYBENCH_ARRAY(C)));
POLYBENCH_FREE_ARRAY(B);
POLYBENCH_FREE_ARRAY(C);
return 0;
}
