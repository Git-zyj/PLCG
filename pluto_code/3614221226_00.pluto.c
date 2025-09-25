#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <math.h>
#include <polybench.h>
#include <time.h>
#include <stdlib.h>
#include "3614221226_00.h"
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
static void init_array(int xb,DATA_TYPE POLYBENCH_1D(B,xB,xb),int xd,int yd,int zd,DATA_TYPE POLYBENCH_3D(D,xD,yD,zD,xd,yd,zd),int xc,DATA_TYPE POLYBENCH_1D(C,xC,xc),int xa,int ya,DATA_TYPE POLYBENCH_2D(A,xA,yA,xa,ya),int xe,int ye,int ze,DATA_TYPE POLYBENCH_3D(E,xE,yE,zE,xe,ye,ze),int seed)
{
srand(seed);
int i,j,k,l;
for (i = 0; i < xb; i++) {
B[i] = rand()%3;;
}
for (i = 0; i < xd; i++) {
for (j = 0; j < yd; j++) {
for (k = 0; k < zd; k++) {
D[i][j][k] = rand()%3;;
}}}
for (i = 0; i < xc; i++) {
C[i] = rand()%3;;
}
for (i = 0; i < xa; i++) {
for (j = 0; j < ya; j++) {
A[i][j] = rand()%3;;
}}
for (i = 0; i < xe; i++) {
for (j = 0; j < ye; j++) {
for (k = 0; k < ze; k++) {
E[i][j][k] = rand()%3;;
}}}
}
static void print_array(int xb,DATA_TYPE POLYBENCH_1D(B,xB,xb),int xd,int yd,int zd,DATA_TYPE POLYBENCH_3D(D,xD,yD,zD,xd,yd,zd),int xc,DATA_TYPE POLYBENCH_1D(C,xC,xc),int xa,int ya,DATA_TYPE POLYBENCH_2D(A,xA,yA,xa,ya),int xe,int ye,int ze,DATA_TYPE POLYBENCH_3D(E,xE,yE,zE,xe,ye,ze))
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
POLYBENCH_DUMP_BEGIN("D");
for (i = 0; i < xd; i++) {
for (j = 0; j < yd; j++) {
for (k = 0; k < zd; k++) {
fprintf (POLYBENCH_DUMP_TARGET, "\n");
fprintf (POLYBENCH_DUMP_TARGET, DATA_PRINTF_MODIFIER, D[i][j][k]);
}}}
POLYBENCH_DUMP_END("D");
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
POLYBENCH_DUMP_BEGIN("A");
for (i = 0; i < xa; i++) {
for (j = 0; j < ya; j++) {
fprintf (POLYBENCH_DUMP_TARGET, "\n");
fprintf (POLYBENCH_DUMP_TARGET, DATA_PRINTF_MODIFIER, A[i][j]);
}}
POLYBENCH_DUMP_END("A");
POLYBENCH_DUMP_FINISH;
POLYBENCH_DUMP_START;
POLYBENCH_DUMP_BEGIN("E");
for (i = 0; i < xe; i++) {
for (j = 0; j < ye; j++) {
for (k = 0; k < ze; k++) {
fprintf (POLYBENCH_DUMP_TARGET, "\n");
fprintf (POLYBENCH_DUMP_TARGET, DATA_PRINTF_MODIFIER, E[i][j][k]);
}}}
POLYBENCH_DUMP_END("E");
POLYBENCH_DUMP_FINISH;
}
void kernel_3614221226_00(int xb,DATA_TYPE POLYBENCH_1D(B,xB,xb),int xd,int yd,int zd,DATA_TYPE POLYBENCH_3D(D,xD,yD,zD,xd,yd,zd),int xc,DATA_TYPE POLYBENCH_1D(C,xC,xc),int xa,int ya,DATA_TYPE POLYBENCH_2D(A,xA,yA,xa,ya),int xe,int ye,int ze,DATA_TYPE POLYBENCH_3D(E,xE,yE,zE,xe,ye,ze)){
polybench_start_instruments;
  int t1, t2, t3, t4, t5;
 int lb, ub, lbp, ubp, lb2, ub2;
 register int lbv, ubv;
/* Start of CLooG code */
for (t2=1;t2<=PB_L-1;t2++) {
  for (t3=0;t3<=PB_M-1;t3++) {
    for (t4=2;t4<=t2+1;t4++) {
      D[t3][t4][t2-1] = D[t3][t4-2][t2-1] + 4;;
      D[(t4-2)+1][(t4-2)][t3] = D[t2][(t4-2)][t3] * 6;;
    }
    for (t4=t2+2;t4<=PB_M-1;t4++) {
      D[t3][t4][t2-1] = D[t3][t4-2][t2-1] + 4;;
    }
  }
}
for (t2=1;t2<=PB_L-1;t2++) {
  for (t3=0;t3<=PB_L-1;t3++) {
    B[t2] = B[t2+1] + B[t2+1] * 5;;
  }
}
for (t2=1;t2<=PB_L-1;t2++) {
  B[t2-1] = B[t2] + C[t2] + C[t2] * 4;;
}
for (t2=0;t2<=PB_L-1;t2++) {
  for (t3=2;t3<=PB_P-1;t3++) {
    B[t3] = A[t3][t2] * C[t2] + 1;;
    for (t4=0;t4<=PB_L-1;t4++) {
      B[t3] = B[t3-2] - B[t3-1] - E[t2][t4][t3] * 1;;
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
int xd = xD;
int yd = yD;
int zd = zD;
int xc = xC;
int xa = xA;
int ya = yA;
int xe = xE;
int ye = yE;
int ze = zE;
POLYBENCH_1D_ARRAY_DECL(B, DATA_TYPE,xB,xb);
POLYBENCH_3D_ARRAY_DECL(D, DATA_TYPE,xD,yD,zD,xd,yd,zd);
POLYBENCH_1D_ARRAY_DECL(C, DATA_TYPE,xC,xc);
POLYBENCH_2D_ARRAY_DECL(A, DATA_TYPE,xA,yA,xa,ya);
POLYBENCH_3D_ARRAY_DECL(E, DATA_TYPE,xE,yE,zE,xe,ye,ze);
init_array(xb,POLYBENCH_ARRAY(B),xd,yd,zd,POLYBENCH_ARRAY(D),xc,POLYBENCH_ARRAY(C),xa,ya,POLYBENCH_ARRAY(A),xe,ye,ze,POLYBENCH_ARRAY(E),INIT_SEED);
kernel_3614221226_00(xb,POLYBENCH_ARRAY(B),xd,yd,zd,POLYBENCH_ARRAY(D),xc,POLYBENCH_ARRAY(C),xa,ya,POLYBENCH_ARRAY(A),xe,ye,ze,POLYBENCH_ARRAY(E));
polybench_prevent_dce(print_array(xb,POLYBENCH_ARRAY(B),xd,yd,zd,POLYBENCH_ARRAY(D),xc,POLYBENCH_ARRAY(C),xa,ya,POLYBENCH_ARRAY(A),xe,ye,ze,POLYBENCH_ARRAY(E)));
POLYBENCH_FREE_ARRAY(B);
POLYBENCH_FREE_ARRAY(D);
POLYBENCH_FREE_ARRAY(C);
POLYBENCH_FREE_ARRAY(A);
POLYBENCH_FREE_ARRAY(E);
return 0;
}
