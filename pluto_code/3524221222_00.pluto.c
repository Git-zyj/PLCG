#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <math.h>
#include <polybench.h>
#include <time.h>
#include <stdlib.h>
#include "3524221222_00.h"
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
static void init_array(int xa,int ya,DATA_TYPE POLYBENCH_2D(A,xA,yA,xa,ya),int xc,int yc,int zc,DATA_TYPE POLYBENCH_3D(C,xC,yC,zC,xc,yc,zc),int xb,DATA_TYPE POLYBENCH_1D(B,xB,xb),int xd,int yd,int zd,DATA_TYPE POLYBENCH_3D(D,xD,yD,zD,xd,yd,zd),int xe,int ye,DATA_TYPE POLYBENCH_2D(E,xE,yE,xe,ye),int seed)
{
srand(seed);
int i,j,k,l;
for (i = 0; i < xa; i++) {
for (j = 0; j < ya; j++) {
A[i][j] = rand()%3;;
}}
for (i = 0; i < xc; i++) {
for (j = 0; j < yc; j++) {
for (k = 0; k < zc; k++) {
C[i][j][k] = rand()%3;;
}}}
for (i = 0; i < xb; i++) {
B[i] = rand()%3;;
}
for (i = 0; i < xd; i++) {
for (j = 0; j < yd; j++) {
for (k = 0; k < zd; k++) {
D[i][j][k] = rand()%3;;
}}}
for (i = 0; i < xe; i++) {
for (j = 0; j < ye; j++) {
E[i][j] = rand()%3;;
}}
}
static void print_array(int xa,int ya,DATA_TYPE POLYBENCH_2D(A,xA,yA,xa,ya),int xc,int yc,int zc,DATA_TYPE POLYBENCH_3D(C,xC,yC,zC,xc,yc,zc),int xb,DATA_TYPE POLYBENCH_1D(B,xB,xb),int xd,int yd,int zd,DATA_TYPE POLYBENCH_3D(D,xD,yD,zD,xd,yd,zd),int xe,int ye,DATA_TYPE POLYBENCH_2D(E,xE,yE,xe,ye))
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
POLYBENCH_DUMP_BEGIN("C");
for (i = 0; i < xc; i++) {
for (j = 0; j < yc; j++) {
for (k = 0; k < zc; k++) {
fprintf (POLYBENCH_DUMP_TARGET, "\n");
fprintf (POLYBENCH_DUMP_TARGET, DATA_PRINTF_MODIFIER, C[i][j][k]);
}}}
POLYBENCH_DUMP_END("C");
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
for (k = 0; k < zd; k++) {
fprintf (POLYBENCH_DUMP_TARGET, "\n");
fprintf (POLYBENCH_DUMP_TARGET, DATA_PRINTF_MODIFIER, D[i][j][k]);
}}}
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
}
void kernel_3524221222_00(int xa,int ya,DATA_TYPE POLYBENCH_2D(A,xA,yA,xa,ya),int xc,int yc,int zc,DATA_TYPE POLYBENCH_3D(C,xC,yC,zC,xc,yc,zc),int xb,DATA_TYPE POLYBENCH_1D(B,xB,xb),int xd,int yd,int zd,DATA_TYPE POLYBENCH_3D(D,xD,yD,zD,xd,yd,zd),int xe,int ye,DATA_TYPE POLYBENCH_2D(E,xE,yE,xe,ye)){
polybench_start_instruments;
  int t1, t2, t3, t4, t5, t6, t7, t8;
 int lb, ub, lbp, ubp, lb2, ub2;
 register int lbv, ubv;
/* Start of CLooG code */
for (t2=0;t2<=PB_M;t2++) {
  lbp=ceild(15*t2-4515,4816);
  ubp=floord(t2+89999,9632);
#pragma omp parallel for private(lbv,ubv,t5,t6,t7,t8)
  for (t4=lbp;t4<=ubp;t4++) {
    for (t5=0;t5<=floord(16*t4+15*PB_P,480);t5++) {
      if (t2 >= 3) {
        for (t6=max(1,32*t4);t6<=min(t2-1,32*t4+31);t6++) {
          lbv=max(1,32*t5);
          ubv=min(PB_P,32*t5+31);
#pragma ivdep
#pragma vector always
          for (t7=lbv;t7<=ubv;t7++) {
            D[t2-1][t7-1][t6-1] = D[t6][t7-1][t2+1] + 3;;
          }
        }
      }
      for (t6=max(32*t4,t2+1);t6<=min(PB_P-2,32*t4+31);t6++) {
        lbv=max(1,32*t5);
        ubv=min(PB_P-1,32*t5+31);
#pragma ivdep
#pragma vector always
        for (t7=lbv;t7<=ubv;t7++) {
          C[t2][t7][t6] = C[t2+1][t7][t6] - C[t2+2][t7][t6] * D[t7][t7-1][t2+1] - E[t2][t6+1] - 2;;
        }
      }
    }
  }
}
for (t2=0;t2<=floord(PB_L+PB_M-2,32);t2++) {
  lbp=max(0,ceild(32*t2-PB_M+1,32));
  ubp=min(floord(PB_L-1,32),t2);
#pragma omp parallel for private(lbv,ubv,t5,t6,t7,t8)
  for (t4=lbp;t4<=ubp;t4++) {
    for (t5=max(1,32*t2-32*t4);t5<=min(PB_M-1,32*t2-32*t4+31);t5++) {
      lbv=32*t4;
      ubv=min(PB_L-1,32*t4+31);
#pragma ivdep
#pragma vector always
      for (t7=lbv;t7<=ubv;t7++) {
        A[t5][t7] = A[t5][t7] - B[t5-1] - 3;;
      }
    }
  }
  lbp=max(0,ceild(32*t2-PB_P,32));
  ubp=floord(t2,2);
#pragma omp parallel for private(lbv,ubv,t5,t6,t7,t8)
  for (t4=lbp;t4<=ubp;t4++) {
    for (t5=max(max(4,32*t2-32*t4),32*t4+3);t5<=min(PB_P,32*t2-32*t4+31);t5++) {
      for (t7=max(1,32*t4);t7<=min(32*t4+31,t5-3);t7++) {
        B[(t5-2)+1] = B[(t5-2)+1] - B[(t5-2)+1] * B[t7-1] + 6;;
      }
    }
  }
}
for (t2=3;t2<=PB_M;t2++) {
  B[t2-1] = B[t2-3] * B[t2-1] - 6;;
}
/* End of CLooG code */
polybench_stop_instruments;
polybench_print_instruments;
}
int main(int argc, char** argv)
{
int xa = xA;
int ya = yA;
int xc = xC;
int yc = yC;
int zc = zC;
int xb = xB;
int xd = xD;
int yd = yD;
int zd = zD;
int xe = xE;
int ye = yE;
POLYBENCH_2D_ARRAY_DECL(A, DATA_TYPE,xA,yA,xa,ya);
POLYBENCH_3D_ARRAY_DECL(C, DATA_TYPE,xC,yC,zC,xc,yc,zc);
POLYBENCH_1D_ARRAY_DECL(B, DATA_TYPE,xB,xb);
POLYBENCH_3D_ARRAY_DECL(D, DATA_TYPE,xD,yD,zD,xd,yd,zd);
POLYBENCH_2D_ARRAY_DECL(E, DATA_TYPE,xE,yE,xe,ye);
init_array(xa,ya,POLYBENCH_ARRAY(A),xc,yc,zc,POLYBENCH_ARRAY(C),xb,POLYBENCH_ARRAY(B),xd,yd,zd,POLYBENCH_ARRAY(D),xe,ye,POLYBENCH_ARRAY(E),INIT_SEED);
kernel_3524221222_00(xa,ya,POLYBENCH_ARRAY(A),xc,yc,zc,POLYBENCH_ARRAY(C),xb,POLYBENCH_ARRAY(B),xd,yd,zd,POLYBENCH_ARRAY(D),xe,ye,POLYBENCH_ARRAY(E));
polybench_prevent_dce(print_array(xa,ya,POLYBENCH_ARRAY(A),xc,yc,zc,POLYBENCH_ARRAY(C),xb,POLYBENCH_ARRAY(B),xd,yd,zd,POLYBENCH_ARRAY(D),xe,ye,POLYBENCH_ARRAY(E)));
POLYBENCH_FREE_ARRAY(A);
POLYBENCH_FREE_ARRAY(C);
POLYBENCH_FREE_ARRAY(B);
POLYBENCH_FREE_ARRAY(D);
POLYBENCH_FREE_ARRAY(E);
return 0;
}
