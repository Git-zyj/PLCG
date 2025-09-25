#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <math.h>
#include <polybench.h>
#include <time.h>
#include <stdlib.h>
#include "3614221222_00.h"
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
static void init_array(int xa,int ya,int za,DATA_TYPE POLYBENCH_3D(A,xA,yA,zA,xa,ya,za),int xb,int yb,DATA_TYPE POLYBENCH_2D(B,xB,yB,xb,yb),int xc,DATA_TYPE POLYBENCH_1D(C,xC,xc),int xd,int yd,DATA_TYPE POLYBENCH_2D(D,xD,yD,xd,yd),int xe,DATA_TYPE POLYBENCH_1D(E,xE,xe),int xf,int yf,int zf,DATA_TYPE POLYBENCH_3D(F,xF,yF,zF,xf,yf,zf),int seed)
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
for (i = 0; i < xd; i++) {
for (j = 0; j < yd; j++) {
D[i][j] = rand()%3;;
}}
for (i = 0; i < xe; i++) {
E[i] = rand()%3;;
}
for (i = 0; i < xf; i++) {
for (j = 0; j < yf; j++) {
for (k = 0; k < zf; k++) {
F[i][j][k] = rand()%3;;
}}}
}
static void print_array(int xa,int ya,int za,DATA_TYPE POLYBENCH_3D(A,xA,yA,zA,xa,ya,za),int xb,int yb,DATA_TYPE POLYBENCH_2D(B,xB,yB,xb,yb),int xc,DATA_TYPE POLYBENCH_1D(C,xC,xc),int xd,int yd,DATA_TYPE POLYBENCH_2D(D,xD,yD,xd,yd),int xe,DATA_TYPE POLYBENCH_1D(E,xE,xe),int xf,int yf,int zf,DATA_TYPE POLYBENCH_3D(F,xF,yF,zF,xf,yf,zf))
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
POLYBENCH_DUMP_BEGIN("E");
for (i = 0; i < xe; i++) {
fprintf (POLYBENCH_DUMP_TARGET, "\n");
fprintf (POLYBENCH_DUMP_TARGET, DATA_PRINTF_MODIFIER, E[i]);
}
POLYBENCH_DUMP_END("E");
POLYBENCH_DUMP_FINISH;
POLYBENCH_DUMP_START;
POLYBENCH_DUMP_BEGIN("F");
for (i = 0; i < xf; i++) {
for (j = 0; j < yf; j++) {
for (k = 0; k < zf; k++) {
fprintf (POLYBENCH_DUMP_TARGET, "\n");
fprintf (POLYBENCH_DUMP_TARGET, DATA_PRINTF_MODIFIER, F[i][j][k]);
}}}
POLYBENCH_DUMP_END("F");
POLYBENCH_DUMP_FINISH;
}
void kernel_3614221222_00(int xa,int ya,int za,DATA_TYPE POLYBENCH_3D(A,xA,yA,zA,xa,ya,za),int xb,int yb,DATA_TYPE POLYBENCH_2D(B,xB,yB,xb,yb),int xc,DATA_TYPE POLYBENCH_1D(C,xC,xc),int xd,int yd,DATA_TYPE POLYBENCH_2D(D,xD,yD,xd,yd),int xe,DATA_TYPE POLYBENCH_1D(E,xE,xe),int xf,int yf,int zf,DATA_TYPE POLYBENCH_3D(F,xF,yF,zF,xf,yf,zf)){
polybench_start_instruments;
  int t1, t2, t3, t4, t5, t6, t7, t8, t9, t10, t11;
 int lb, ub, lbp, ubp, lb2, ub2;
 register int lbv, ubv;
/* Start of CLooG code */
lbp=0;
ubp=floord(PB_M-1,32);
#pragma omp parallel for private(lbv,ubv,t3,t4,t5,t6,t7,t8,t9,t10,t11)
for (t2=lbp;t2<=ubp;t2++) {
  lbv=32*t2;
  ubv=min(PB_M-1,32*t2+31);
#pragma ivdep
#pragma vector always
  for (t3=lbv;t3<=ubv;t3++) {
    C[t3] = 1;;
  }
}
lbp=0;
ubp=floord(PB_M-2,32);
#pragma omp parallel for private(lbv,ubv,t3,t4,t5,t6,t7,t8,t9,t10,t11)
for (t2=lbp;t2<=ubp;t2++) {
  for (t5=0;t5<=floord(PB_M-2,32);t5++) {
    for (t6=32*t2;t6<=min(min(PB_M-3,32*t2+31),32*t5+30);t6++) {
      if (t2 == t5) {
        for (t9=32*t2;t9<=t6;t9++) {
          lbv=t6+1;
          ubv=PB_M-1;
#pragma ivdep
#pragma vector always
          for (t10=lbv;t10<=ubv;t10++) {
            A[t6][t10][t10] = A[t6][t10+2][t10] + A[t6][t10][t10] - B[t9+1][t6] * B[t10][t6] - 2;;
          }
        }
      }
      for (t9=max(32*t5,t6+1);t9<=min(PB_M-2,32*t5+31);t9++) {
        lbv=t6+1;
        ubv=t9-1;
#pragma ivdep
#pragma vector always
        for (t10=lbv;t10<=ubv;t10++) {
          A[t6][t10][t10] = A[t6][t10+2][t10] + A[t6][t10][t10] - B[t9+1][t6] * B[t10][t6] - 2;;
        }
        A[t6][t9][t9] = A[t6][t9+2][t9] + A[t6][t9][t9] - B[t9+1][t6] * B[t9][t6] - 2;;
        B[t9][t6] = B[t6][t9+1] - 3;;
        lbv=t9+1;
        ubv=PB_M-1;
#pragma ivdep
#pragma vector always
        for (t10=lbv;t10<=ubv;t10++) {
          A[t6][t10][t10] = A[t6][t10+2][t10] + A[t6][t10][t10] - B[t9+1][t6] * B[t10][t6] - 2;;
        }
      }
    }
    if ((t2 == 12) && (t5 == 12)) {
      for (t9=384;t9<=PB_M-2;t9++) {
        A[(PB_M-2)][(PB_M-1)][(PB_M-1)] = A[(PB_M-2)][(PB_M-1)+2][(PB_M-1)] + A[(PB_M-2)][(PB_M-1)][(PB_M-1)] - B[t9+1][(PB_M-2)] * B[(PB_M-1)][(PB_M-2)] - 2;;
      }
    }
    for (t6=max(32*t2,32*t5+31);t6<=min(PB_M-2,32*t2+31);t6++) {
      for (t9=32*t5;t9<=32*t5+31;t9++) {
        lbv=t6+1;
        ubv=PB_M-1;
#pragma ivdep
#pragma vector always
        for (t10=lbv;t10<=ubv;t10++) {
          A[t6][t10][t10] = A[t6][t10+2][t10] + A[t6][t10][t10] - B[t9+1][t6] * B[t10][t6] - 2;;
        }
      }
    }
  }
  for (t5=t2;t5<=floord(PB_M-1,32);t5++) {
    for (t6=max(1,32*t2);t6<=min(min(PB_M-2,32*t2+31),32*t5+30);t6++) {
      for (t9=max(32*t5,t6+1);t9<=min(PB_M-1,32*t5+31);t9++) {
        lbv=1;
        ubv=PB_P-1;
#pragma ivdep
#pragma vector always
        for (t10=lbv;t10<=ubv;t10++) {
          A[t6][t10-1][t6+1] = F[t6][t6][t10] - B[t6][t6] * 4;;
        }
      }
    }
  }
}
lbp=0;
ubp=floord(PB_M-1,32);
#pragma omp parallel for private(lbv,ubv,t3,t4,t5,t6,t7,t8,t9,t10,t11)
for (t2=lbp;t2<=ubp;t2++) {
  for (t5=0;t5<=t2;t5++) {
    for (t6=max(max(2,32*t2),32*t5+1);t6<=min(PB_M-1,32*t2+31);t6++) {
      lbv=max(1,32*t5);
      ubv=min(32*t5+31,t6-1);
#pragma ivdep
#pragma vector always
      for (t9=lbv;t9<=ubv;t9++) {
        B[t9][t6] = B[t9][t6] - D[t6][t6] * E[t9-1] * 4;;
      }
    }
  }
  for (t5=0;t5<=floord(PB_M-1,32);t5++) {
    for (t6=32*t2;t6<=min(PB_M-1,32*t2+31);t6++) {
      for (t9=max(1,32*t5);t9<=min(PB_M-1,32*t5+31);t9++) {
        D[t9-1][t6] = D[t9][t6] * 5;;
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
int xb = xB;
int yb = yB;
int xc = xC;
int xd = xD;
int yd = yD;
int xe = xE;
int xf = xF;
int yf = yF;
int zf = zF;
POLYBENCH_3D_ARRAY_DECL(A, DATA_TYPE,xA,yA,zA,xa,ya,za);
POLYBENCH_2D_ARRAY_DECL(B, DATA_TYPE,xB,yB,xb,yb);
POLYBENCH_1D_ARRAY_DECL(C, DATA_TYPE,xC,xc);
POLYBENCH_2D_ARRAY_DECL(D, DATA_TYPE,xD,yD,xd,yd);
POLYBENCH_1D_ARRAY_DECL(E, DATA_TYPE,xE,xe);
POLYBENCH_3D_ARRAY_DECL(F, DATA_TYPE,xF,yF,zF,xf,yf,zf);
init_array(xa,ya,za,POLYBENCH_ARRAY(A),xb,yb,POLYBENCH_ARRAY(B),xc,POLYBENCH_ARRAY(C),xd,yd,POLYBENCH_ARRAY(D),xe,POLYBENCH_ARRAY(E),xf,yf,zf,POLYBENCH_ARRAY(F),INIT_SEED);
kernel_3614221222_00(xa,ya,za,POLYBENCH_ARRAY(A),xb,yb,POLYBENCH_ARRAY(B),xc,POLYBENCH_ARRAY(C),xd,yd,POLYBENCH_ARRAY(D),xe,POLYBENCH_ARRAY(E),xf,yf,zf,POLYBENCH_ARRAY(F));
polybench_prevent_dce(print_array(xa,ya,za,POLYBENCH_ARRAY(A),xb,yb,POLYBENCH_ARRAY(B),xc,POLYBENCH_ARRAY(C),xd,yd,POLYBENCH_ARRAY(D),xe,POLYBENCH_ARRAY(E),xf,yf,zf,POLYBENCH_ARRAY(F)));
POLYBENCH_FREE_ARRAY(A);
POLYBENCH_FREE_ARRAY(B);
POLYBENCH_FREE_ARRAY(C);
POLYBENCH_FREE_ARRAY(D);
POLYBENCH_FREE_ARRAY(E);
POLYBENCH_FREE_ARRAY(F);
return 0;
}
