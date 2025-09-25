#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <math.h>
#include <polybench.h>
#include <time.h>
#include <stdlib.h>
#include "3514221222_00.h"
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
static void init_array(int xa,int ya,DATA_TYPE POLYBENCH_2D(A,xA,yA,xa,ya),int xc,int yc,int zc,DATA_TYPE POLYBENCH_3D(C,xC,yC,zC,xc,yc,zc),int xd,DATA_TYPE POLYBENCH_1D(D,xD,xd),int xb,int yb,DATA_TYPE POLYBENCH_2D(B,xB,yB,xb,yb),int xe,DATA_TYPE POLYBENCH_1D(E,xE,xe),int seed)
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
for (i = 0; i < xd; i++) {
D[i] = rand()%3;;
}
for (i = 0; i < xb; i++) {
for (j = 0; j < yb; j++) {
B[i][j] = rand()%3;;
}}
for (i = 0; i < xe; i++) {
E[i] = rand()%3;;
}
}
static void print_array(int xa,int ya,DATA_TYPE POLYBENCH_2D(A,xA,yA,xa,ya),int xc,int yc,int zc,DATA_TYPE POLYBENCH_3D(C,xC,yC,zC,xc,yc,zc),int xd,DATA_TYPE POLYBENCH_1D(D,xD,xd),int xb,int yb,DATA_TYPE POLYBENCH_2D(B,xB,yB,xb,yb),int xe,DATA_TYPE POLYBENCH_1D(E,xE,xe))
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
POLYBENCH_DUMP_BEGIN("D");
for (i = 0; i < xd; i++) {
fprintf (POLYBENCH_DUMP_TARGET, "\n");
fprintf (POLYBENCH_DUMP_TARGET, DATA_PRINTF_MODIFIER, D[i]);
}
POLYBENCH_DUMP_END("D");
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
POLYBENCH_DUMP_BEGIN("E");
for (i = 0; i < xe; i++) {
fprintf (POLYBENCH_DUMP_TARGET, "\n");
fprintf (POLYBENCH_DUMP_TARGET, DATA_PRINTF_MODIFIER, E[i]);
}
POLYBENCH_DUMP_END("E");
POLYBENCH_DUMP_FINISH;
}
void kernel_3514221222_00(int xa,int ya,DATA_TYPE POLYBENCH_2D(A,xA,yA,xa,ya),int xc,int yc,int zc,DATA_TYPE POLYBENCH_3D(C,xC,yC,zC,xc,yc,zc),int xd,DATA_TYPE POLYBENCH_1D(D,xD,xd),int xb,int yb,DATA_TYPE POLYBENCH_2D(B,xB,yB,xb,yb),int xe,DATA_TYPE POLYBENCH_1D(E,xE,xe)){
polybench_start_instruments;
  int t1, t2, t3, t4, t5, t6, t7, t8;
 int lb, ub, lbp, ubp, lb2, ub2;
 register int lbv, ubv;
/* Start of CLooG code */
for (t2=1;t2<=PB_L-2;t2++) {
  D[t2+1] = D[t2] - D[t2+3] + E[t2] - 6;;
}
lbp=0;
ubp=floord(PB_L-2,32);
#pragma omp parallel for private(lbv,ubv,t3,t4,t5,t6,t7,t8)
for (t2=lbp;t2<=ubp;t2++) {
  for (t4=0;t4<=t2;t4++) {
    for (t5=max(max(3,32*t2),32*t4+1);t5<=min(PB_L-2,32*t2+31);t5++) {
      lbv=max(2,32*t4);
      ubv=min(32*t4+31,t5-1);
#pragma ivdep
#pragma vector always
      for (t7=lbv;t7<=ubv;t7++) {
        A[t7][t5+1] = B[t7][t5-1] - B[t7-1][t5-1] + 2;;
      }
    }
  }
}
for (t2=0;t2<=floord(3*PB_L-7,32);t2++) {
  lbp=ceild(t2,2);
  ubp=min(floord(PB_L-2,32),t2);
#pragma omp parallel for private(lbv,ubv,t5,t6,t7,t8)
  for (t4=lbp;t4<=ubp;t4++) {
    for (t5=32*t2-32*t4;t5<=min(min(PB_L-3,32*t4+30),32*t2-32*t4+31);t5++) {
      for (t7=max(max(3,32*t4),t5+1);t7<=min(PB_L-2,32*t4+31);t7++) {
        for (t8=2;t8<=t7-1;t8++) {
          C[t5][t7][t7] = A[t8-2][t7+1] - A[t8][t7+1] + 3;;
        }
      }
    }
  }
  lbp=max(max(0,ceild(16*t2-PB_L+2,16)),ceild(32*t2-PB_L-31,64));
  ubp=min(floord(t2,2),floord(PB_L-3,32));
#pragma omp parallel for private(lbv,ubv,t5,t6,t7,t8)
  for (t4=lbp;t4<=ubp;t4++) {
    for (t5=max(32*t2-32*t4,32*t4+3);t5<=min(min(2*PB_L-3,32*t2-32*t4+31),32*t4+PB_L+31);t5++) {
      for (t7=max(32*t4,t5-PB_L);t7<=min(min(PB_L-3,32*t4+31),t5-3);t7++) {
        A[(t5-t7-1)][t7] = A[(t5-t7-1)][t7] * 5;;
        lbv=1;
        ubv=PB_P-1;
#pragma ivdep
#pragma vector always
        for (t8=lbv;t8<=ubv;t8++) {
          C[(t5-t7-1)+1][t8][t8] = A[(t5-t7-1)-2][t7+2] * A[(t5-t7-1)+2][t7] - C[t8][(t5-t7-1)-1][t8-1] - A[t7][(t5-t7-1)] + 5;;
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
int xc = xC;
int yc = yC;
int zc = zC;
int xd = xD;
int xb = xB;
int yb = yB;
int xe = xE;
POLYBENCH_2D_ARRAY_DECL(A, DATA_TYPE,xA,yA,xa,ya);
POLYBENCH_3D_ARRAY_DECL(C, DATA_TYPE,xC,yC,zC,xc,yc,zc);
POLYBENCH_1D_ARRAY_DECL(D, DATA_TYPE,xD,xd);
POLYBENCH_2D_ARRAY_DECL(B, DATA_TYPE,xB,yB,xb,yb);
POLYBENCH_1D_ARRAY_DECL(E, DATA_TYPE,xE,xe);
init_array(xa,ya,POLYBENCH_ARRAY(A),xc,yc,zc,POLYBENCH_ARRAY(C),xd,POLYBENCH_ARRAY(D),xb,yb,POLYBENCH_ARRAY(B),xe,POLYBENCH_ARRAY(E),INIT_SEED);
kernel_3514221222_00(xa,ya,POLYBENCH_ARRAY(A),xc,yc,zc,POLYBENCH_ARRAY(C),xd,POLYBENCH_ARRAY(D),xb,yb,POLYBENCH_ARRAY(B),xe,POLYBENCH_ARRAY(E));
polybench_prevent_dce(print_array(xa,ya,POLYBENCH_ARRAY(A),xc,yc,zc,POLYBENCH_ARRAY(C),xd,POLYBENCH_ARRAY(D),xb,yb,POLYBENCH_ARRAY(B),xe,POLYBENCH_ARRAY(E)));
POLYBENCH_FREE_ARRAY(A);
POLYBENCH_FREE_ARRAY(C);
POLYBENCH_FREE_ARRAY(D);
POLYBENCH_FREE_ARRAY(B);
POLYBENCH_FREE_ARRAY(E);
return 0;
}
