#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <math.h>
#include <polybench.h>
#include <time.h>
#include <stdlib.h>
#include "3524321224_00.h"
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
static void init_array(int xa,int ya,int za,DATA_TYPE POLYBENCH_3D(A,xA,yA,zA,xa,ya,za),int xb,DATA_TYPE POLYBENCH_1D(B,xB,xb),int xd,int yd,DATA_TYPE POLYBENCH_2D(D,xD,yD,xd,yd),int xe,int ye,DATA_TYPE POLYBENCH_2D(E,xE,yE,xe,ye),int xc,DATA_TYPE POLYBENCH_1D(C,xC,xc),int xf,int yf,int zf,DATA_TYPE POLYBENCH_3D(F,xF,yF,zF,xf,yf,zf),int seed)
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
for (i = 0; i < xe; i++) {
for (j = 0; j < ye; j++) {
E[i][j] = rand()%3;;
}}
for (i = 0; i < xc; i++) {
C[i] = rand()%3;;
}
for (i = 0; i < xf; i++) {
for (j = 0; j < yf; j++) {
for (k = 0; k < zf; k++) {
F[i][j][k] = rand()%3;;
}}}
}
static void print_array(int xa,int ya,int za,DATA_TYPE POLYBENCH_3D(A,xA,yA,zA,xa,ya,za),int xb,DATA_TYPE POLYBENCH_1D(B,xB,xb),int xd,int yd,DATA_TYPE POLYBENCH_2D(D,xD,yD,xd,yd),int xe,int ye,DATA_TYPE POLYBENCH_2D(E,xE,yE,xe,ye),int xc,DATA_TYPE POLYBENCH_1D(C,xC,xc),int xf,int yf,int zf,DATA_TYPE POLYBENCH_3D(F,xF,yF,zF,xf,yf,zf))
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
POLYBENCH_DUMP_BEGIN("E");
for (i = 0; i < xe; i++) {
for (j = 0; j < ye; j++) {
fprintf (POLYBENCH_DUMP_TARGET, "\n");
fprintf (POLYBENCH_DUMP_TARGET, DATA_PRINTF_MODIFIER, E[i][j]);
}}
POLYBENCH_DUMP_END("E");
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
void kernel_3524321224_00(int xa,int ya,int za,DATA_TYPE POLYBENCH_3D(A,xA,yA,zA,xa,ya,za),int xb,DATA_TYPE POLYBENCH_1D(B,xB,xb),int xd,int yd,DATA_TYPE POLYBENCH_2D(D,xD,yD,xd,yd),int xe,int ye,DATA_TYPE POLYBENCH_2D(E,xE,yE,xe,ye),int xc,DATA_TYPE POLYBENCH_1D(C,xC,xc),int xf,int yf,int zf,DATA_TYPE POLYBENCH_3D(F,xF,yF,zF,xf,yf,zf)){
polybench_start_instruments;
  int t1, t2, t3, t4, t5, t6, t7;
 int lb, ub, lbp, ubp, lb2, ub2;
 register int lbv, ubv;
/* Start of CLooG code */
lbp=0;
ubp=floord(PB_N-1,32);
#pragma omp parallel for private(lbv,ubv,t3,t4,t5,t6,t7)
for (t2=lbp;t2<=ubp;t2++) {
  for (t3=0;t3<=floord(PB_N,32);t3++) {
    if (t3 <= floord(PB_L-1,32)) {
      for (t4=max(1,32*t2);t4<=min(32*t3,32*t2+31);t4++) {
        lbv=32*t3;
        ubv=32*t3+31;
#pragma ivdep
#pragma vector always
        for (t5=lbv;t5<=ubv;t5++) {
          E[t4][t5-1] = 5;;
        }
      }
    }
    if (t3 >= ceild(PB_L,32)) {
      for (t4=max(1,32*t2);t4<=min(PB_N-1,32*t2+31);t4++) {
        lbv=32*t3;
        ubv=min(PB_N,32*t3+31);
#pragma ivdep
#pragma vector always
        for (t5=lbv;t5<=ubv;t5++) {
          E[t4][t5-1] = 5;;
        }
      }
    }
    if (t3 <= floord(PB_L-1,32)) {
      for (t4=max(32*t2,32*t3+1);t4<=min(PB_Q-2,32*t2+31);t4++) {
        if (t3 == 0) {
          D[0][t4+1] = D[0][t4+1] - 3;;
        }
        lbv=max(1,32*t3);
        ubv=min(min(PB_L-1,32*t3+31),t4-1);
#pragma ivdep
#pragma vector always
        for (t5=lbv;t5<=ubv;t5++) {
          E[t4][t5-1] = 5;;
          D[t5][t4+1] = D[t5][t4+1] - 3;;
        }
        if (t3 == 12) {
          lbv=PB_L;
          ubv=min(415,t4-1);
#pragma ivdep
#pragma vector always
          for (t5=lbv;t5<=ubv;t5++) {
            E[t4][t5-1] = 5;;
          }
        }
        if (t2 == t3) {
          lbv=t4;
          ubv=32*t2+31;
#pragma ivdep
#pragma vector always
          for (t5=lbv;t5<=ubv;t5++) {
            E[t4][t5-1] = 5;;
          }
        }
      }
    }
    if ((t2 == 15) && (t3 <= floord(PB_L-1,32))) {
      for (t4=PB_Q-1;t4<=PB_N-1;t4++) {
        lbv=max(1,32*t3);
        ubv=32*t3+31;
#pragma ivdep
#pragma vector always
        for (t5=lbv;t5<=ubv;t5++) {
          E[t4][t5-1] = 5;;
        }
      }
    }
  }
}
lbp=0;
ubp=floord(PB_L-2,32);
#pragma omp parallel for private(lbv,ubv,t3,t4,t5,t6,t7)
for (t2=lbp;t2<=ubp;t2++) {
  for (t3=0;t3<=floord(PB_N-1,32);t3++) {
    for (t4=32*t2;t4<=min(PB_L-2,32*t2+31);t4++) {
      for (t5=max(1,32*t3);t5<=min(PB_N-1,32*t3+31);t5++) {
        for (t6=0;t6<=PB_M-2;t6++) {
          D[t4][t4] = D[t4][t4] * D[t4+1][t4] + E[t5-1][t6] + F[t6+1][t4][t4] * 3;;
        }
      }
    }
  }
}
lbp=0;
ubp=floord(PB_M-2,32);
#pragma omp parallel for private(lbv,ubv,t3,t4,t5,t6,t7)
for (t2=lbp;t2<=ubp;t2++) {
  lbv=32*t2;
  ubv=min(PB_M-2,32*t2+31);
#pragma ivdep
#pragma vector always
  for (t3=lbv;t3<=ubv;t3++) {
    B[t3] = B[t3] + C[t3+1] * 2;;
  }
}
lbp=0;
ubp=floord(PB_M-2,32);
#pragma omp parallel for private(lbv,ubv,t3,t4,t5,t6,t7)
for (t2=lbp;t2<=ubp;t2++) {
  for (t3=0;t3<=t2;t3++) {
    for (t4=0;t4<=floord(PB_Q-1,32);t4++) {
      for (t5=max(32*t2,32*t3+1);t5<=min(PB_M-2,32*t2+31);t5++) {
        for (t6=32*t3;t6<=min(32*t3+31,t5-1);t6++) {
          for (t7=32*t4;t7<=min(PB_Q-1,32*t4+31);t7++) {
            A[t6][t5][t6] = A[t6][t5][t6+1] - A[t6][t5][t6] - 2;;
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
int xb = xB;
int xd = xD;
int yd = yD;
int xe = xE;
int ye = yE;
int xc = xC;
int xf = xF;
int yf = yF;
int zf = zF;
POLYBENCH_3D_ARRAY_DECL(A, DATA_TYPE,xA,yA,zA,xa,ya,za);
POLYBENCH_1D_ARRAY_DECL(B, DATA_TYPE,xB,xb);
POLYBENCH_2D_ARRAY_DECL(D, DATA_TYPE,xD,yD,xd,yd);
POLYBENCH_2D_ARRAY_DECL(E, DATA_TYPE,xE,yE,xe,ye);
POLYBENCH_1D_ARRAY_DECL(C, DATA_TYPE,xC,xc);
POLYBENCH_3D_ARRAY_DECL(F, DATA_TYPE,xF,yF,zF,xf,yf,zf);
init_array(xa,ya,za,POLYBENCH_ARRAY(A),xb,POLYBENCH_ARRAY(B),xd,yd,POLYBENCH_ARRAY(D),xe,ye,POLYBENCH_ARRAY(E),xc,POLYBENCH_ARRAY(C),xf,yf,zf,POLYBENCH_ARRAY(F),INIT_SEED);
kernel_3524321224_00(xa,ya,za,POLYBENCH_ARRAY(A),xb,POLYBENCH_ARRAY(B),xd,yd,POLYBENCH_ARRAY(D),xe,ye,POLYBENCH_ARRAY(E),xc,POLYBENCH_ARRAY(C),xf,yf,zf,POLYBENCH_ARRAY(F));
polybench_prevent_dce(print_array(xa,ya,za,POLYBENCH_ARRAY(A),xb,POLYBENCH_ARRAY(B),xd,yd,POLYBENCH_ARRAY(D),xe,ye,POLYBENCH_ARRAY(E),xc,POLYBENCH_ARRAY(C),xf,yf,zf,POLYBENCH_ARRAY(F)));
POLYBENCH_FREE_ARRAY(A);
POLYBENCH_FREE_ARRAY(B);
POLYBENCH_FREE_ARRAY(D);
POLYBENCH_FREE_ARRAY(E);
POLYBENCH_FREE_ARRAY(C);
POLYBENCH_FREE_ARRAY(F);
return 0;
}
