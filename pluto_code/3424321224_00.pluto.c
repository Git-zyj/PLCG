#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <math.h>
#include <polybench.h>
#include <time.h>
#include <stdlib.h>
#include "3424321224_00.h"
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
static void init_array(int xa,int ya,DATA_TYPE POLYBENCH_2D(A,xA,yA,xa,ya),int xb,int yb,int zb,DATA_TYPE POLYBENCH_3D(B,xB,yB,zB,xb,yb,zb),int xe,int ye,DATA_TYPE POLYBENCH_2D(E,xE,yE,xe,ye),int xc,int yc,DATA_TYPE POLYBENCH_2D(C,xC,yC,xc,yc),int xd,int yd,int zd,DATA_TYPE POLYBENCH_3D(D,xD,yD,zD,xd,yd,zd),int xf,int yf,int zf,DATA_TYPE POLYBENCH_3D(F,xF,yF,zF,xf,yf,zf),int seed)
{
srand(seed);
int i,j,k,l;
for (i = 0; i < xa; i++) {
for (j = 0; j < ya; j++) {
A[i][j] = rand()%3;;
}}
for (i = 0; i < xb; i++) {
for (j = 0; j < yb; j++) {
for (k = 0; k < zb; k++) {
B[i][j][k] = rand()%3;;
}}}
for (i = 0; i < xe; i++) {
for (j = 0; j < ye; j++) {
E[i][j] = rand()%3;;
}}
for (i = 0; i < xc; i++) {
for (j = 0; j < yc; j++) {
C[i][j] = rand()%3;;
}}
for (i = 0; i < xd; i++) {
for (j = 0; j < yd; j++) {
for (k = 0; k < zd; k++) {
D[i][j][k] = rand()%3;;
}}}
for (i = 0; i < xf; i++) {
for (j = 0; j < yf; j++) {
for (k = 0; k < zf; k++) {
F[i][j][k] = rand()%3;;
}}}
}
static void print_array(int xa,int ya,DATA_TYPE POLYBENCH_2D(A,xA,yA,xa,ya),int xb,int yb,int zb,DATA_TYPE POLYBENCH_3D(B,xB,yB,zB,xb,yb,zb),int xe,int ye,DATA_TYPE POLYBENCH_2D(E,xE,yE,xe,ye),int xc,int yc,DATA_TYPE POLYBENCH_2D(C,xC,yC,xc,yc),int xd,int yd,int zd,DATA_TYPE POLYBENCH_3D(D,xD,yD,zD,xd,yd,zd),int xf,int yf,int zf,DATA_TYPE POLYBENCH_3D(F,xF,yF,zF,xf,yf,zf))
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
for (k = 0; k < zb; k++) {
fprintf (POLYBENCH_DUMP_TARGET, "\n");
fprintf (POLYBENCH_DUMP_TARGET, DATA_PRINTF_MODIFIER, B[i][j][k]);
}}}
POLYBENCH_DUMP_END("B");
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
for (k = 0; k < zd; k++) {
fprintf (POLYBENCH_DUMP_TARGET, "\n");
fprintf (POLYBENCH_DUMP_TARGET, DATA_PRINTF_MODIFIER, D[i][j][k]);
}}}
POLYBENCH_DUMP_END("D");
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
void kernel_3424321224_00(int xa,int ya,DATA_TYPE POLYBENCH_2D(A,xA,yA,xa,ya),int xb,int yb,int zb,DATA_TYPE POLYBENCH_3D(B,xB,yB,zB,xb,yb,zb),int xe,int ye,DATA_TYPE POLYBENCH_2D(E,xE,yE,xe,ye),int xc,int yc,DATA_TYPE POLYBENCH_2D(C,xC,yC,xc,yc),int xd,int yd,int zd,DATA_TYPE POLYBENCH_3D(D,xD,yD,zD,xd,yd,zd),int xf,int yf,int zf,DATA_TYPE POLYBENCH_3D(F,xF,yF,zF,xf,yf,zf)){
polybench_start_instruments;
  int t1, t2, t3, t4, t5, t6, t7;
 int lb, ub, lbp, ubp, lb2, ub2;
 register int lbv, ubv;
/* Start of CLooG code */
lbp=0;
ubp=floord(PB_M-1,32);
#pragma omp parallel for private(lbv,ubv,t3,t4,t5,t6,t7)
for (t2=lbp;t2<=ubp;t2++) {
  for (t3=0;t3<=t2;t3++) {
    for (t4=max(max(2,32*t2),32*t3+1);t4<=min(PB_M-1,32*t2+31);t4++) {
      lbv=32*t3;
      ubv=min(32*t3+31,t4-1);
#pragma ivdep
#pragma vector always
      for (t5=lbv;t5<=ubv;t5++) {
        E[t4][t5] = 3;;
      }
    }
  }
}
lbp=0;
ubp=floord(PB_M,32);
#pragma omp parallel for private(lbv,ubv,t3,t4,t5,t6,t7)
for (t2=lbp;t2<=ubp;t2++) {
  for (t3=0;t3<=floord(PB_M-1,32);t3++) {
    for (t4=0;t4<=t3;t4++) {
      for (t5=max(1,32*t2);t5<=min(PB_M,32*t2+31);t5++) {
        for (t6=max(max(2,32*t3),32*t4+1);t6<=min(PB_M-1,32*t3+31);t6++) {
          for (t7=32*t4;t7<=min(32*t4+31,t6-1);t7++) {
            B[t6][t5-1][t7+1] = B[t6-2][t5-1][t7+1] - B[t6][t5-1][t7+3] * C[t5-1][t7] - D[t7][t7][t6] * 5;;
          }
        }
      }
    }
  }
}
lbp=0;
ubp=floord(PB_M-1,32);
#pragma omp parallel for private(lbv,ubv,t3,t4,t5,t6,t7)
for (t2=lbp;t2<=ubp;t2++) {
  for (t3=0;t3<=floord(PB_L,32);t3++) {
    for (t4=32*t2;t4<=min(PB_M-1,32*t2+31);t4++) {
      for (t5=max(1,32*t3);t5<=min(PB_L,32*t3+31);t5++) {
        A[t4][t5-1] = A[t4][t4+1] * 2;;
      }
    }
  }
}
for (t2=1;t2<=PB_M-1;t2++) {
  for (t3=0;t3<=floord(2*t2+PB_M-2,32);t3++) {
    lbp=max(ceild(t3,2),ceild(-t2+32*t3+1,32));
    ubp=min(min(floord(t2+PB_M-1,32),floord(32*t3+PB_M+31,64)),t3);
#pragma omp parallel for private(lbv,ubv,t5,t6,t7)
    for (t4=lbp;t4<=ubp;t4++) {
      for (t5=max(32*t3-32*t4,32*t4-PB_M);t5<=min(min(t2-1,32*t4+29),32*t3-32*t4+31);t5++) {
        for (t6=max(32*t4,t5+2);t6<=min(32*t4+31,t5+PB_M);t6++) {
          A[(-t5+t6)-1][t2] = A[(-t5+t6)-1][t2+1] - A[(-t5+t6)-2][t2] - F[t5][t2][(-t5+t6)] + 1;;
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
int zb = zB;
int xe = xE;
int ye = yE;
int xc = xC;
int yc = yC;
int xd = xD;
int yd = yD;
int zd = zD;
int xf = xF;
int yf = yF;
int zf = zF;
POLYBENCH_2D_ARRAY_DECL(A, DATA_TYPE,xA,yA,xa,ya);
POLYBENCH_3D_ARRAY_DECL(B, DATA_TYPE,xB,yB,zB,xb,yb,zb);
POLYBENCH_2D_ARRAY_DECL(E, DATA_TYPE,xE,yE,xe,ye);
POLYBENCH_2D_ARRAY_DECL(C, DATA_TYPE,xC,yC,xc,yc);
POLYBENCH_3D_ARRAY_DECL(D, DATA_TYPE,xD,yD,zD,xd,yd,zd);
POLYBENCH_3D_ARRAY_DECL(F, DATA_TYPE,xF,yF,zF,xf,yf,zf);
init_array(xa,ya,POLYBENCH_ARRAY(A),xb,yb,zb,POLYBENCH_ARRAY(B),xe,ye,POLYBENCH_ARRAY(E),xc,yc,POLYBENCH_ARRAY(C),xd,yd,zd,POLYBENCH_ARRAY(D),xf,yf,zf,POLYBENCH_ARRAY(F),INIT_SEED);
kernel_3424321224_00(xa,ya,POLYBENCH_ARRAY(A),xb,yb,zb,POLYBENCH_ARRAY(B),xe,ye,POLYBENCH_ARRAY(E),xc,yc,POLYBENCH_ARRAY(C),xd,yd,zd,POLYBENCH_ARRAY(D),xf,yf,zf,POLYBENCH_ARRAY(F));
polybench_prevent_dce(print_array(xa,ya,POLYBENCH_ARRAY(A),xb,yb,zb,POLYBENCH_ARRAY(B),xe,ye,POLYBENCH_ARRAY(E),xc,yc,POLYBENCH_ARRAY(C),xd,yd,zd,POLYBENCH_ARRAY(D),xf,yf,zf,POLYBENCH_ARRAY(F)));
POLYBENCH_FREE_ARRAY(A);
POLYBENCH_FREE_ARRAY(B);
POLYBENCH_FREE_ARRAY(E);
POLYBENCH_FREE_ARRAY(C);
POLYBENCH_FREE_ARRAY(D);
POLYBENCH_FREE_ARRAY(F);
return 0;
}
