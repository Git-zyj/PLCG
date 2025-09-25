#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <math.h>
#include <polybench.h>
#include <time.h>
#include <stdlib.h>
#include "3634321224_00.h"
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
static void init_array(int xa,int ya,DATA_TYPE POLYBENCH_2D(A,xA,yA,xa,ya),int xb,int yb,DATA_TYPE POLYBENCH_2D(B,xB,yB,xb,yb),int xc,DATA_TYPE POLYBENCH_1D(C,xC,xc),int xd,int yd,DATA_TYPE POLYBENCH_2D(D,xD,yD,xd,yd),int xe,DATA_TYPE POLYBENCH_1D(E,xE,xe),int seed)
{
srand(seed);
int i,j,k,l;
for (i = 0; i < xa; i++) {
for (j = 0; j < ya; j++) {
A[i][j] = rand()%3;;
}}
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
}
static void print_array(int xa,int ya,DATA_TYPE POLYBENCH_2D(A,xA,yA,xa,ya),int xb,int yb,DATA_TYPE POLYBENCH_2D(B,xB,yB,xb,yb),int xc,DATA_TYPE POLYBENCH_1D(C,xC,xc),int xd,int yd,DATA_TYPE POLYBENCH_2D(D,xD,yD,xd,yd),int xe,DATA_TYPE POLYBENCH_1D(E,xE,xe))
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
}
void kernel_3634321224_00(int xa,int ya,DATA_TYPE POLYBENCH_2D(A,xA,yA,xa,ya),int xb,int yb,DATA_TYPE POLYBENCH_2D(B,xB,yB,xb,yb),int xc,DATA_TYPE POLYBENCH_1D(C,xC,xc),int xd,int yd,DATA_TYPE POLYBENCH_2D(D,xD,yD,xd,yd),int xe,DATA_TYPE POLYBENCH_1D(E,xE,xe)){
polybench_start_instruments;
  int t1, t2, t3, t4, t5, t6, t7, t8, t9, t10, t11, t12, t13, t14, t15, t16;
 int lb, ub, lbp, ubp, lb2, ub2;
 register int lbv, ubv;
/* Start of CLooG code */
lbp=0;
ubp=floord(PB_L,32);
#pragma omp parallel for private(lbv,ubv,t3,t4,t5,t6,t7,t8,t9,t10,t11,t12,t13,t14,t15,t16)
for (t2=lbp;t2<=ubp;t2++) {
  for (t7=0;t7<=t2;t7++) {
    for (t8=max(max(4,32*t2),32*t7+3);t8<=min(PB_L,32*t2+31);t8++) {
      lbv=max(1,32*t7);
      ubv=min(32*t7+31,t8-3);
#pragma ivdep
#pragma vector always
      for (t13=lbv;t13<=ubv;t13++) {
        A[t13][(t8-2)] = B[(t8-2)+1][t13-1] * A[(t8-2)][t13+1] * 2;;
      }
    }
  }
  for (t6=0;t6<=t2;t6++) {
    for (t8=max(max(2,32*t2),32*t6+1);t8<=min(PB_L-1,32*t2+31);t8++) {
      lbv=max(1,32*t6);
      ubv=min(32*t6+31,t8-1);
#pragma ivdep
#pragma vector always
      for (t12=lbv;t12<=ubv;t12++) {
        B[t8-1][t12] = C[t12] - D[t12-1][t8] * 5;;
      }
    }
  }
}
lbp=0;
ubp=floord(PB_L-1,32);
#pragma omp parallel for private(lbv,ubv,t3,t4,t5,t6,t7,t8,t9,t10,t11,t12,t13,t14,t15,t16)
for (t2=lbp;t2<=ubp;t2++) {
  lbv=32*t2;
  ubv=min(PB_L-1,32*t2+31);
#pragma ivdep
#pragma vector always
  for (t3=lbv;t3<=ubv;t3++) {
    C[t3] = C[t3] * E[t3] + 4;;
  }
}
lbp=0;
ubp=floord(PB_Q-1,32);
#pragma omp parallel for private(lbv,ubv,t3,t4,t5,t6,t7,t8,t9,t10,t11,t12,t13,t14,t15,t16)
for (t2=lbp;t2<=ubp;t2++) {
  for (t8=0;t8<=floord(-32*t2+3005*PB_L-9016,96128);t8++) {
    if ((t2 == 0) && (t8 == 0)) {
      for (t15=1;t15<=31;t15++) {
        B[t15][0] = 2;;
      }
    }
    for (t9=32*t2;t9<=min(32*t2+31,32*t8-2);t9++) {
      for (t15=32*t8;t15<=min(PB_L-4,32*t8+31);t15++) {
        B[t15][t9] = 2;;
      }
    }
    for (t9=max(max(1,32*t2),32*t8-1);t9<=min(min(PB_L-4,32*t2+31),32*t8+30);t9++) {
      if (t2 == t8) {
        for (t15=max(1,32*t2);t15<=t9;t15++) {
          B[t15][t9] = 2;;
        }
      }
      if ((t2 == 187) && (t8 == 187) && (t9 == PB_L-4)) {
        for (t16=0;t16<=PB_L-5;t16++) {
          B[(PB_L-4)+1][(PB_L-4)] = B[(PB_L-4)-1][(PB_L-4)] - B[(PB_L-4)+3][(PB_L-4)] - 6;;
        }
      }
      if (t9 <= PB_L-5) {
        for (t16=0;t16<=t9-1;t16++) {
          B[t9+1][t9] = B[t9-1][t9] - B[t9+3][t9] - 6;;
        }
        B[(t9+1)][t9] = 2;;
      }
      for (t15=t9+2;t15<=min(PB_L-4,32*t8+31);t15++) {
        B[t15][t9] = 2;;
      }
    }
    if ((t2 == 187) && (t8 == 187)) {
      for (t9=PB_L-3;t9<=6014;t9++) {
        for (t15=5984;t15<=PB_L-4;t15++) {
          B[t15][t9] = 2;;
        }
      }
    }
    for (t9=max(32*t2,32*t8+31);t9<=min(PB_Q-1,32*t2+31);t9++) {
      for (t15=max(1,32*t8);t15<=min(PB_L-4,32*t8+31);t15++) {
        B[t15][t9] = 2;;
      }
    }
  }
  if (t2 <= floord(PB_L-2,32)) {
    for (t5=t2;t5<=floord(PB_L-1,32);t5++) {
      for (t9=32*t2;t9<=min(min(PB_L-2,32*t2+31),32*t5+30);t9++) {
        lbv=max(32*t5,t9+1);
        ubv=min(PB_L-1,32*t5+31);
#pragma ivdep
#pragma vector always
        for (t12=lbv;t12<=ubv;t12++) {
          D[t9][t12] = C[t12] * D[t9][t12] + B[t9+1][t9] + E[t12+1] + 6;;
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
int xc = xC;
int xd = xD;
int yd = yD;
int xe = xE;
POLYBENCH_2D_ARRAY_DECL(A, DATA_TYPE,xA,yA,xa,ya);
POLYBENCH_2D_ARRAY_DECL(B, DATA_TYPE,xB,yB,xb,yb);
POLYBENCH_1D_ARRAY_DECL(C, DATA_TYPE,xC,xc);
POLYBENCH_2D_ARRAY_DECL(D, DATA_TYPE,xD,yD,xd,yd);
POLYBENCH_1D_ARRAY_DECL(E, DATA_TYPE,xE,xe);
init_array(xa,ya,POLYBENCH_ARRAY(A),xb,yb,POLYBENCH_ARRAY(B),xc,POLYBENCH_ARRAY(C),xd,yd,POLYBENCH_ARRAY(D),xe,POLYBENCH_ARRAY(E),INIT_SEED);
kernel_3634321224_00(xa,ya,POLYBENCH_ARRAY(A),xb,yb,POLYBENCH_ARRAY(B),xc,POLYBENCH_ARRAY(C),xd,yd,POLYBENCH_ARRAY(D),xe,POLYBENCH_ARRAY(E));
polybench_prevent_dce(print_array(xa,ya,POLYBENCH_ARRAY(A),xb,yb,POLYBENCH_ARRAY(B),xc,POLYBENCH_ARRAY(C),xd,yd,POLYBENCH_ARRAY(D),xe,POLYBENCH_ARRAY(E)));
POLYBENCH_FREE_ARRAY(A);
POLYBENCH_FREE_ARRAY(B);
POLYBENCH_FREE_ARRAY(C);
POLYBENCH_FREE_ARRAY(D);
POLYBENCH_FREE_ARRAY(E);
return 0;
}
