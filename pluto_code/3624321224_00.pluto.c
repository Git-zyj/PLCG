#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <math.h>
#include <polybench.h>
#include <time.h>
#include <stdlib.h>
#include "3624321224_00.h"
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
static void init_array(int xa,int ya,int za,DATA_TYPE POLYBENCH_3D(A,xA,yA,zA,xa,ya,za),int xc,int yc,DATA_TYPE POLYBENCH_2D(C,xC,yC,xc,yc),int xd,DATA_TYPE POLYBENCH_1D(D,xD,xd),int xe,int ye,DATA_TYPE POLYBENCH_2D(E,xE,yE,xe,ye),int xf,DATA_TYPE POLYBENCH_1D(F,xF,xf),int xb,int yb,int zb,DATA_TYPE POLYBENCH_3D(B,xB,yB,zB,xb,yb,zb),int seed)
{
srand(seed);
int i,j,k,l;
for (i = 0; i < xa; i++) {
for (j = 0; j < ya; j++) {
for (k = 0; k < za; k++) {
A[i][j][k] = rand()%3;;
}}}
for (i = 0; i < xc; i++) {
for (j = 0; j < yc; j++) {
C[i][j] = rand()%3;;
}}
for (i = 0; i < xd; i++) {
D[i] = rand()%3;;
}
for (i = 0; i < xe; i++) {
for (j = 0; j < ye; j++) {
E[i][j] = rand()%3;;
}}
for (i = 0; i < xf; i++) {
F[i] = rand()%3;;
}
for (i = 0; i < xb; i++) {
for (j = 0; j < yb; j++) {
for (k = 0; k < zb; k++) {
B[i][j][k] = rand()%3;;
}}}
}
static void print_array(int xa,int ya,int za,DATA_TYPE POLYBENCH_3D(A,xA,yA,zA,xa,ya,za),int xc,int yc,DATA_TYPE POLYBENCH_2D(C,xC,yC,xc,yc),int xd,DATA_TYPE POLYBENCH_1D(D,xD,xd),int xe,int ye,DATA_TYPE POLYBENCH_2D(E,xE,yE,xe,ye),int xf,DATA_TYPE POLYBENCH_1D(F,xF,xf),int xb,int yb,int zb,DATA_TYPE POLYBENCH_3D(B,xB,yB,zB,xb,yb,zb))
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
for (j = 0; j < yc; j++) {
fprintf (POLYBENCH_DUMP_TARGET, "\n");
fprintf (POLYBENCH_DUMP_TARGET, DATA_PRINTF_MODIFIER, C[i][j]);
}}
POLYBENCH_DUMP_END("C");
POLYBENCH_DUMP_FINISH;
POLYBENCH_DUMP_START;
POLYBENCH_DUMP_BEGIN("D");
for (i = 0; i < xd; i++) {
fprintf (POLYBENCH_DUMP_TARGET, "\n");
fprintf (POLYBENCH_DUMP_TARGET, DATA_PRINTF_MODIFIER, D[i]);
}
POLYBENCH_DUMP_END("D");
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
fprintf (POLYBENCH_DUMP_TARGET, "\n");
fprintf (POLYBENCH_DUMP_TARGET, DATA_PRINTF_MODIFIER, F[i]);
}
POLYBENCH_DUMP_END("F");
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
}
void kernel_3624321224_00(int xa,int ya,int za,DATA_TYPE POLYBENCH_3D(A,xA,yA,zA,xa,ya,za),int xc,int yc,DATA_TYPE POLYBENCH_2D(C,xC,yC,xc,yc),int xd,DATA_TYPE POLYBENCH_1D(D,xD,xd),int xe,int ye,DATA_TYPE POLYBENCH_2D(E,xE,yE,xe,ye),int xf,DATA_TYPE POLYBENCH_1D(F,xF,xf),int xb,int yb,int zb,DATA_TYPE POLYBENCH_3D(B,xB,yB,zB,xb,yb,zb)){
polybench_start_instruments;
  int t1, t2, t3, t4;
 int lb, ub, lbp, ubp, lb2, ub2;
 register int lbv, ubv;
/* Start of CLooG code */
F[0] = F[0] - 4;;
for (t1=1;t1<=3;t1++) {
  F[t1] = F[t1] - 4;;
  for (t2=1;t2<=t1;t2++) {
    for (t3=0;t3<=t2-1;t3++) {
      C[t2+1][t1-1] = C[t2-1][t1-1] * D[t2-1] - 3;;
    }
    D[t2-1] = C[t2+1][t1] - 6;;
    for (t3=t2;t3<=t1+t2-1;t3++) {
      E[t1][t2] = D[t2-1] - E[(-t2+t3)][t1+1] + A[(-t2+t3)][t1][t2-1] + 4;;
    }
  }
  for (t2=t1+1;t2<=t1+PB_P-1;t2++) {
    for (t3=0;t3<=min(2*t1-1,t2-1);t3++) {
      C[t2+1][t1-1] = C[t2-1][t1-1] * D[t2-1] - 3;;
    }
    if (t1 >= ceild(t2+1,2)) {
      D[t2-1] = C[t2+1][t1] - 6;;
      E[t1][t2] = D[t2-1] - E[0][t1+1] + A[0][t1][t2-1] + 4;;
    }
    if ((t1 == 3) && (t2 == 4)) {
      E[3][4] = D[4 -1] - E[1][3 +1] + A[1][3][4 -1] + 4;;
    }
    for (t3=2*t1;t3<=min(3*t1-1,t2-1);t3++) {
      A[(-t1+t2)][t1][t1] = A[(-t1+t2)][t1][t1] - A[(-t1+t2)][t1+1][t1] + B[(-2*t1+t3)][(-t1+t2)+1][(-t1+t2)-1] + 3;;
      C[t2+1][t1-1] = C[t2-1][t1-1] * D[t2-1] - 3;;
    }
    for (t3=3*t1;t3<=t2-1;t3++) {
      C[t2+1][t1-1] = C[t2-1][t1-1] * D[t2-1] - 3;;
    }
    if ((t1 <= floord(t2,2)) && (t1 >= ceild(t2+1,3))) {
      D[t2-1] = C[t2+1][t1] - 6;;
      E[t1][t2] = D[t2-1] - E[0][t1+1] + A[0][t1][t2-1] + 4;;
      A[(-t1+t2)][t1][t1] = A[(-t1+t2)][t1][t1] - A[(-t1+t2)][t1+1][t1] + B[(-2*t1+t2)][(-t1+t2)+1][(-t1+t2)-1] + 3;;
    }
    if (t1 <= floord(t2,3)) {
      D[t2-1] = C[t2+1][t1] - 6;;
      E[t1][t2] = D[t2-1] - E[0][t1+1] + A[0][t1][t2-1] + 4;;
    }
    for (t3=max(2*t1,t2+1);t3<=min(3*t1-1,t1+t2-1);t3++) {
      E[t1][t2] = D[t2-1] - E[(-t2+t3)][t1+1] + A[(-t2+t3)][t1][t2-1] + 4;;
      A[(-t1+t2)][t1][t1] = A[(-t1+t2)][t1][t1] - A[(-t1+t2)][t1+1][t1] + B[(-2*t1+t3)][(-t1+t2)+1][(-t1+t2)-1] + 3;;
    }
    for (t3=max(3*t1,t2+1);t3<=t1+t2-1;t3++) {
      E[t1][t2] = D[t2-1] - E[(-t2+t3)][t1+1] + A[(-t2+t3)][t1][t2-1] + 4;;
    }
    for (t3=t1+t2;t3<=3*t1-1;t3++) {
      A[(-t1+t2)][t1][t1] = A[(-t1+t2)][t1][t1] - A[(-t1+t2)][t1+1][t1] + B[(-2*t1+t3)][(-t1+t2)+1][(-t1+t2)-1] + 3;;
    }
  }
  for (t2=t1+PB_P;t2<=PB_M-2;t2++) {
    for (t3=0;t3<=t2-1;t3++) {
      C[t2+1][t1-1] = C[t2-1][t1-1] * D[t2-1] - 3;;
    }
    D[t2-1] = C[t2+1][t1] - 6;;
    for (t3=t2;t3<=t1+t2-1;t3++) {
      E[t1][t2] = D[t2-1] - E[(-t2+t3)][t1+1] + A[(-t2+t3)][t1][t2-1] + 4;;
    }
  }
}
for (t1=4;t1<=PB_P-1;t1++) {
  F[t1] = F[t1] - 4;;
  for (t2=1;t2<=2;t2++) {
    for (t3=0;t3<=t2-1;t3++) {
      C[t2+1][t1-1] = C[t2-1][t1-1] * D[t2-1] - 3;;
    }
    D[t2-1] = C[t2+1][t1] - 6;;
    for (t3=t2;t3<=t1+t2-1;t3++) {
      E[t1][t2] = D[t2-1] - E[(-t2+t3)][t1+1] + A[(-t2+t3)][t1][t2-1] + 4;;
    }
  }
  for (t2=3;t2<=t1-1;t2++) {
    for (t3=0;t3<=t2-1;t3++) {
      C[t2+1][t1-1] = C[t2-1][t1-1] * D[t2-1] - 3;;
      A[t3][t1][t2-1] = A[t3+2][t1][t2-1] + A[t3][t1][t2-3] * B[t3][t3][t2-1] + 2;;
    }
    if (t2 <= PB_P-3) {
      D[t2-1] = C[t2+1][t1] - 6;;
      E[t1][t2] = D[t2-1] - E[0][t1+1] + A[0][t1][t2-1] + 4;;
      A[t2][t1][t2-1] = A[t2+2][t1][t2-1] + A[t2][t1][t2-3] * B[t2][t2][t2-1] + 2;;
    }
    for (t3=t2+1;t3<=min(PB_P-3,t1+t2-1);t3++) {
      E[t1][t2] = D[t2-1] - E[(-t2+t3)][t1+1] + A[(-t2+t3)][t1][t2-1] + 4;;
      A[t3][t1][t2-1] = A[t3+2][t1][t2-1] + A[t3][t1][t2-3] * B[t3][t3][t2-1] + 2;;
    }
    for (t3=t1+t2;t3<=PB_P-3;t3++) {
      A[t3][t1][t2-1] = A[t3+2][t1][t2-1] + A[t3][t1][t2-3] * B[t3][t3][t2-1] + 2;;
    }
    if ((t1 == PB_P-1) && (t2 == PB_P-2)) {
      D[(PB_P-2)-1] = C[(PB_P-2)+1][(PB_P-1)] - 6;;
      E[(PB_P-1)][(PB_P-2)] = D[(PB_P-2)-1] - E[0][(PB_P-1)+1] + A[0][(PB_P-1)][(PB_P-2)-1] + 4;;
    }
    for (t3=max(PB_P-2,t2+1);t3<=t1+t2-1;t3++) {
      E[t1][t2] = D[t2-1] - E[(-t2+t3)][t1+1] + A[(-t2+t3)][t1][t2-1] + 4;;
    }
  }
  for (t3=0;t3<=t1-1;t3++) {
    C[t1+1][t1-1] = C[t1-1][t1-1] * D[t1-1] - 3;;
  }
  D[t1-1] = C[t1+1][t1] - 6;;
  for (t3=t1;t3<=2*t1-1;t3++) {
    E[t1][t1] = D[t1-1] - E[(-t1+t3)][t1+1] + A[(-t1+t3)][t1][t1-1] + 4;;
  }
  for (t2=t1+1;t2<=min(PB_M-2,t1+PB_P-1);t2++) {
    for (t3=0;t3<=min(2*t1-1,t2-1);t3++) {
      C[t2+1][t1-1] = C[t2-1][t1-1] * D[t2-1] - 3;;
    }
    if (t1 >= ceild(t2+1,2)) {
      D[t2-1] = C[t2+1][t1] - 6;;
      E[t1][t2] = D[t2-1] - E[0][t1+1] + A[0][t1][t2-1] + 4;;
    }
    for (t3=t2+1;t3<=2*t1-1;t3++) {
      E[t1][t2] = D[t2-1] - E[(-t2+t3)][t1+1] + A[(-t2+t3)][t1][t2-1] + 4;;
    }
    for (t3=2*t1;t3<=min(3*t1-1,t2-1);t3++) {
      A[(-t1+t2)][t1][t1] = A[(-t1+t2)][t1][t1] - A[(-t1+t2)][t1+1][t1] + B[(-2*t1+t3)][(-t1+t2)+1][(-t1+t2)-1] + 3;;
      C[t2+1][t1-1] = C[t2-1][t1-1] * D[t2-1] - 3;;
    }
    for (t3=3*t1;t3<=t2-1;t3++) {
      C[t2+1][t1-1] = C[t2-1][t1-1] * D[t2-1] - 3;;
    }
    if ((t1 <= floord(t2,2)) && (t1 >= ceild(t2+1,3))) {
      D[t2-1] = C[t2+1][t1] - 6;;
      E[t1][t2] = D[t2-1] - E[0][t1+1] + A[0][t1][t2-1] + 4;;
      A[(-t1+t2)][t1][t1] = A[(-t1+t2)][t1][t1] - A[(-t1+t2)][t1+1][t1] + B[(-2*t1+t2)][(-t1+t2)+1][(-t1+t2)-1] + 3;;
    }
    if (t1 <= floord(t2,3)) {
      D[t2-1] = C[t2+1][t1] - 6;;
      E[t1][t2] = D[t2-1] - E[0][t1+1] + A[0][t1][t2-1] + 4;;
    }
    for (t3=max(2*t1,t2+1);t3<=min(3*t1-1,t1+t2-1);t3++) {
      E[t1][t2] = D[t2-1] - E[(-t2+t3)][t1+1] + A[(-t2+t3)][t1][t2-1] + 4;;
      A[(-t1+t2)][t1][t1] = A[(-t1+t2)][t1][t1] - A[(-t1+t2)][t1+1][t1] + B[(-2*t1+t3)][(-t1+t2)+1][(-t1+t2)-1] + 3;;
    }
    for (t3=max(3*t1,t2+1);t3<=t1+t2-1;t3++) {
      E[t1][t2] = D[t2-1] - E[(-t2+t3)][t1+1] + A[(-t2+t3)][t1][t2-1] + 4;;
    }
    for (t3=t1+t2;t3<=3*t1-1;t3++) {
      A[(-t1+t2)][t1][t1] = A[(-t1+t2)][t1][t1] - A[(-t1+t2)][t1+1][t1] + B[(-2*t1+t3)][(-t1+t2)+1][(-t1+t2)-1] + 3;;
    }
  }
  for (t2=t1+PB_P;t2<=PB_M-2;t2++) {
    for (t3=0;t3<=t2-1;t3++) {
      C[t2+1][t1-1] = C[t2-1][t1-1] * D[t2-1] - 3;;
    }
    D[t2-1] = C[t2+1][t1] - 6;;
    for (t3=t2;t3<=t1+t2-1;t3++) {
      E[t1][t2] = D[t2-1] - E[(-t2+t3)][t1+1] + A[(-t2+t3)][t1][t2-1] + 4;;
    }
  }
  for (t2=PB_M-1;t2<=t1+PB_P-1;t2++) {
    for (t3=2*t1;t3<=3*t1-1;t3++) {
      A[(-t1+t2)][t1][t1] = A[(-t1+t2)][t1][t1] - A[(-t1+t2)][t1+1][t1] + B[(-2*t1+t3)][(-t1+t2)+1][(-t1+t2)-1] + 3;;
    }
  }
}
for (t1=PB_P;t1<=PB_M-1;t1++) {
  F[t1] = F[t1] - 4;;
  for (t2=t1+1;t2<=t1+PB_P-1;t2++) {
    for (t3=2*t1;t3<=3*t1-1;t3++) {
      A[(-t1+t2)][t1][t1] = A[(-t1+t2)][t1][t1] - A[(-t1+t2)][t1+1][t1] + B[(-2*t1+t3)][(-t1+t2)+1][(-t1+t2)-1] + 3;;
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
int yc = yC;
int xd = xD;
int xe = xE;
int ye = yE;
int xf = xF;
int xb = xB;
int yb = yB;
int zb = zB;
POLYBENCH_3D_ARRAY_DECL(A, DATA_TYPE,xA,yA,zA,xa,ya,za);
POLYBENCH_2D_ARRAY_DECL(C, DATA_TYPE,xC,yC,xc,yc);
POLYBENCH_1D_ARRAY_DECL(D, DATA_TYPE,xD,xd);
POLYBENCH_2D_ARRAY_DECL(E, DATA_TYPE,xE,yE,xe,ye);
POLYBENCH_1D_ARRAY_DECL(F, DATA_TYPE,xF,xf);
POLYBENCH_3D_ARRAY_DECL(B, DATA_TYPE,xB,yB,zB,xb,yb,zb);
init_array(xa,ya,za,POLYBENCH_ARRAY(A),xc,yc,POLYBENCH_ARRAY(C),xd,POLYBENCH_ARRAY(D),xe,ye,POLYBENCH_ARRAY(E),xf,POLYBENCH_ARRAY(F),xb,yb,zb,POLYBENCH_ARRAY(B),INIT_SEED);
kernel_3624321224_00(xa,ya,za,POLYBENCH_ARRAY(A),xc,yc,POLYBENCH_ARRAY(C),xd,POLYBENCH_ARRAY(D),xe,ye,POLYBENCH_ARRAY(E),xf,POLYBENCH_ARRAY(F),xb,yb,zb,POLYBENCH_ARRAY(B));
polybench_prevent_dce(print_array(xa,ya,za,POLYBENCH_ARRAY(A),xc,yc,POLYBENCH_ARRAY(C),xd,POLYBENCH_ARRAY(D),xe,ye,POLYBENCH_ARRAY(E),xf,POLYBENCH_ARRAY(F),xb,yb,zb,POLYBENCH_ARRAY(B)));
POLYBENCH_FREE_ARRAY(A);
POLYBENCH_FREE_ARRAY(C);
POLYBENCH_FREE_ARRAY(D);
POLYBENCH_FREE_ARRAY(E);
POLYBENCH_FREE_ARRAY(F);
POLYBENCH_FREE_ARRAY(B);
return 0;
}
