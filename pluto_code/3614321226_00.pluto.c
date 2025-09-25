#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <math.h>
#include <polybench.h>
#include <time.h>
#include <stdlib.h>
#include "3614321226_00.h"
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
static void init_array(int xa,int ya,int za,DATA_TYPE POLYBENCH_3D(A,xA,yA,zA,xa,ya,za),int xb,DATA_TYPE POLYBENCH_1D(B,xB,xb),int xd,int yd,DATA_TYPE POLYBENCH_2D(D,xD,yD,xd,yd),int xc,DATA_TYPE POLYBENCH_1D(C,xC,xc),int xe,int ye,DATA_TYPE POLYBENCH_2D(E,xE,yE,xe,ye),int xf,int yf,DATA_TYPE POLYBENCH_2D(F,xF,yF,xf,yf),int seed)
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
for (i = 0; i < xd; i++) {
for (j = 0; j < yd; j++) {
D[i][j] = rand()%3;;
}}
for (i = 0; i < xc; i++) {
C[i] = rand()%3;;
}
for (i = 0; i < xe; i++) {
for (j = 0; j < ye; j++) {
E[i][j] = rand()%3;;
}}
for (i = 0; i < xf; i++) {
for (j = 0; j < yf; j++) {
F[i][j] = rand()%3;;
}}
}
static void print_array(int xa,int ya,int za,DATA_TYPE POLYBENCH_3D(A,xA,yA,zA,xa,ya,za),int xb,DATA_TYPE POLYBENCH_1D(B,xB,xb),int xd,int yd,DATA_TYPE POLYBENCH_2D(D,xD,yD,xd,yd),int xc,DATA_TYPE POLYBENCH_1D(C,xC,xc),int xe,int ye,DATA_TYPE POLYBENCH_2D(E,xE,yE,xe,ye),int xf,int yf,DATA_TYPE POLYBENCH_2D(F,xF,yF,xf,yf))
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
POLYBENCH_DUMP_BEGIN("D");
for (i = 0; i < xd; i++) {
for (j = 0; j < yd; j++) {
fprintf (POLYBENCH_DUMP_TARGET, "\n");
fprintf (POLYBENCH_DUMP_TARGET, DATA_PRINTF_MODIFIER, D[i][j]);
}}
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
POLYBENCH_DUMP_BEGIN("E");
for (i = 0; i < xe; i++) {
for (j = 0; j < ye; j++) {
fprintf (POLYBENCH_DUMP_TARGET, "\n");
fprintf (POLYBENCH_DUMP_TARGET, DATA_PRINTF_MODIFIER, E[i][j]);
}}
POLYBENCH_DUMP_END("E");
POLYBENCH_DUMP_FINISH;
POLYBENCH_DUMP_START;
POLYBENCH_DUMP_BEGIN("F");
for (i = 0; i < xf; i++) {
for (j = 0; j < yf; j++) {
fprintf (POLYBENCH_DUMP_TARGET, "\n");
fprintf (POLYBENCH_DUMP_TARGET, DATA_PRINTF_MODIFIER, F[i][j]);
}}
POLYBENCH_DUMP_END("F");
POLYBENCH_DUMP_FINISH;
}
void kernel_3614321226_00(int xa,int ya,int za,DATA_TYPE POLYBENCH_3D(A,xA,yA,zA,xa,ya,za),int xb,DATA_TYPE POLYBENCH_1D(B,xB,xb),int xd,int yd,DATA_TYPE POLYBENCH_2D(D,xD,yD,xd,yd),int xc,DATA_TYPE POLYBENCH_1D(C,xC,xc),int xe,int ye,DATA_TYPE POLYBENCH_2D(E,xE,yE,xe,ye),int xf,int yf,DATA_TYPE POLYBENCH_2D(F,xF,yF,xf,yf)){
polybench_start_instruments;
  int t1, t2, t3, t4;
 int lb, ub, lbp, ubp, lb2, ub2;
 register int lbv, ubv;
/* Start of CLooG code */
C[1] = 5;;
D[1][1] = E[1 +1][0] - F[1][1] - 3;;
for (t3=3;t3<=PB_L;t3++) {
  D[t3-1][1 +1] = D[t3-1][1 -1] - D[t3-3][1 +1] + 6;;
}
for (t1=2;t1<=PB_M-2;t1++) {
  C[t1] = 5;;
  D[t1][t1] = E[t1+1][0] - F[t1][t1] - 3;;
  B[t1-1] = B[t1-2] * C[t1+1] + 5;;
  for (t3=3;t3<=PB_L;t3++) {
    D[t3-1][t1+1] = D[t3-1][t1-1] - D[t3-3][t1+1] + 6;;
  }
  for (t2=1;t2<=t1-1;t2++) {
    D[t1][t1] = E[t1+1][t2] - F[t1][t1] - 3;;
    for (t3=3;t3<=min(PB_L,t1+t2);t3++) {
      D[t3-1][t1+1] = D[t3-1][t1-1] - D[t3-3][t1+1] + 6;;
    }
    for (t3=t1+t2+1;t3<=min(PB_L,t1+t2+PB_M-1);t3++) {
      D[t3-1][t1+1] = D[t3-1][t1-1] - D[t3-3][t1+1] + 6;;
      A[t1][(-t1-t2+t3)][t2+1] = A[t1-1][(-t1-t2+t3)-1][t2+1] + A[t2+1][(-t1-t2+t3)-1][(-t1-t2+t3)-1] - A[t2][t1-1][t2-1] * 6;;
      A[t2][(-t1-t2+t3)-1][(-t1-t2+t3)] = A[t1-2][(-t1-t2+t3)+1][t2+1] + A[(-t1-t2+t3)][t1][t2+1] + A[(-t1-t2+t3)-1][t2+1][t1] - 3;;
    }
    for (t3=max(PB_L+1,t1+t2+1);t3<=t1+t2+PB_M-1;t3++) {
      A[t1][(-t1-t2+t3)][t2+1] = A[t1-1][(-t1-t2+t3)-1][t2+1] + A[t2+1][(-t1-t2+t3)-1][(-t1-t2+t3)-1] - A[t2][t1-1][t2-1] * 6;;
      A[t2][(-t1-t2+t3)-1][(-t1-t2+t3)] = A[t1-2][(-t1-t2+t3)+1][t2+1] + A[(-t1-t2+t3)][t1][t2+1] + A[(-t1-t2+t3)-1][t2+1][t1] - 3;;
    }
    for (t3=t1+t2+PB_M;t3<=PB_L;t3++) {
      D[t3-1][t1+1] = D[t3-1][t1-1] - D[t3-3][t1+1] + 6;;
    }
  }
  for (t2=t1;t2<=PB_M-2;t2++) {
    for (t3=t1+t2+1;t3<=t1+t2+PB_M-1;t3++) {
      A[t1][(-t1-t2+t3)][t2+1] = A[t1-1][(-t1-t2+t3)-1][t2+1] + A[t2+1][(-t1-t2+t3)-1][(-t1-t2+t3)-1] - A[t2][t1-1][t2-1] * 6;;
      A[t2][(-t1-t2+t3)-1][(-t1-t2+t3)] = A[t1-2][(-t1-t2+t3)+1][t2+1] + A[(-t1-t2+t3)][t1][t2+1] + A[(-t1-t2+t3)-1][t2+1][t1] - 3;;
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
int xd = xD;
int yd = yD;
int xc = xC;
int xe = xE;
int ye = yE;
int xf = xF;
int yf = yF;
POLYBENCH_3D_ARRAY_DECL(A, DATA_TYPE,xA,yA,zA,xa,ya,za);
POLYBENCH_1D_ARRAY_DECL(B, DATA_TYPE,xB,xb);
POLYBENCH_2D_ARRAY_DECL(D, DATA_TYPE,xD,yD,xd,yd);
POLYBENCH_1D_ARRAY_DECL(C, DATA_TYPE,xC,xc);
POLYBENCH_2D_ARRAY_DECL(E, DATA_TYPE,xE,yE,xe,ye);
POLYBENCH_2D_ARRAY_DECL(F, DATA_TYPE,xF,yF,xf,yf);
init_array(xa,ya,za,POLYBENCH_ARRAY(A),xb,POLYBENCH_ARRAY(B),xd,yd,POLYBENCH_ARRAY(D),xc,POLYBENCH_ARRAY(C),xe,ye,POLYBENCH_ARRAY(E),xf,yf,POLYBENCH_ARRAY(F),INIT_SEED);
kernel_3614321226_00(xa,ya,za,POLYBENCH_ARRAY(A),xb,POLYBENCH_ARRAY(B),xd,yd,POLYBENCH_ARRAY(D),xc,POLYBENCH_ARRAY(C),xe,ye,POLYBENCH_ARRAY(E),xf,yf,POLYBENCH_ARRAY(F));
polybench_prevent_dce(print_array(xa,ya,za,POLYBENCH_ARRAY(A),xb,POLYBENCH_ARRAY(B),xd,yd,POLYBENCH_ARRAY(D),xc,POLYBENCH_ARRAY(C),xe,ye,POLYBENCH_ARRAY(E),xf,yf,POLYBENCH_ARRAY(F)));
POLYBENCH_FREE_ARRAY(A);
POLYBENCH_FREE_ARRAY(B);
POLYBENCH_FREE_ARRAY(D);
POLYBENCH_FREE_ARRAY(C);
POLYBENCH_FREE_ARRAY(E);
POLYBENCH_FREE_ARRAY(F);
return 0;
}
