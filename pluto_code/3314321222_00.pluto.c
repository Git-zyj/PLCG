#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <math.h>
#include <polybench.h>
#include <time.h>
#include <stdlib.h>
#include "3314321222_00.h"
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
static void init_array(int xa,int ya,DATA_TYPE POLYBENCH_2D(A,xA,yA,xa,ya),int xc,DATA_TYPE POLYBENCH_1D(C,xC,xc),int xd,DATA_TYPE POLYBENCH_1D(D,xD,xd),int xb,int yb,DATA_TYPE POLYBENCH_2D(B,xB,yB,xb,yb),int xe,DATA_TYPE POLYBENCH_1D(E,xE,xe),int seed)
{
srand(seed);
int i,j,k,l;
for (i = 0; i < xa; i++) {
for (j = 0; j < ya; j++) {
A[i][j] = rand()%3;;
}}
for (i = 0; i < xc; i++) {
C[i] = rand()%3;;
}
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
static void print_array(int xa,int ya,DATA_TYPE POLYBENCH_2D(A,xA,yA,xa,ya),int xc,DATA_TYPE POLYBENCH_1D(C,xC,xc),int xd,DATA_TYPE POLYBENCH_1D(D,xD,xd),int xb,int yb,DATA_TYPE POLYBENCH_2D(B,xB,yB,xb,yb),int xe,DATA_TYPE POLYBENCH_1D(E,xE,xe))
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
fprintf (POLYBENCH_DUMP_TARGET, "\n");
fprintf (POLYBENCH_DUMP_TARGET, DATA_PRINTF_MODIFIER, C[i]);
}
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
void kernel_3314321222_00(int xa,int ya,DATA_TYPE POLYBENCH_2D(A,xA,yA,xa,ya),int xc,DATA_TYPE POLYBENCH_1D(C,xC,xc),int xd,DATA_TYPE POLYBENCH_1D(D,xD,xd),int xb,int yb,DATA_TYPE POLYBENCH_2D(B,xB,yB,xb,yb),int xe,DATA_TYPE POLYBENCH_1D(E,xE,xe)){
polybench_start_instruments;
  int t1, t2, t3, t4;
 int lb, ub, lbp, ubp, lb2, ub2;
 register int lbv, ubv;
/* Start of CLooG code */
for (t1=0;t1<=floord(PB_M-1,32);t1++) {
  for (t2=0;t2<=floord(PB_M-1,32);t2++) {
    if ((t1 == 0) && (t2 == 0)) {
      D[0] = D[0 +1] * D[0] * E[0 +1] + 5;;
      for (t4=1;t4<=31;t4++) {
        C[0] = 2;;
      }
    }
    if (t2 >= 1) {
      for (t3=32*t1;t3<=min(32*t2,32*t1+31);t3++) {
        for (t4=max(32*t2,t3+1);t4<=min(PB_M-1,32*t2+31);t4++) {
          C[t3] = 2;;
        }
      }
    }
    if ((t1 == 0) && (t2 == 0)) {
      for (t3=1;t3<=30;t3++) {
        A[0][t3] = B[0][t3] * 4;;
        D[t3] = D[t3+1] * D[t3] * E[t3+1] + 5;;
        for (t4=1;t4<=t3-1;t4++) {
          A[t4][t3] = B[t4][t3] * 4;;
        }
        for (t4=t3+1;t4<=31;t4++) {
          C[t3] = 2;;
        }
      }
    }
    if ((t1 >= 1) && (t1 == t2)) {
      for (t3=32*t1+1;t3<=min(PB_M-2,32*t1+30);t3++) {
        for (t4=32*t1;t4<=t3-1;t4++) {
          A[t4][t3] = B[t4][t3] * 4;;
        }
        for (t4=t3+1;t4<=min(PB_M-1,32*t1+31);t4++) {
          C[t3] = 2;;
        }
      }
    }
    if ((t1 == 187) && (t2 == 187)) {
      for (t4=5984;t4<=PB_M-2;t4++) {
        A[t4][(PB_M-1)] = B[t4][(PB_M-1)] * 4;;
      }
    }
    if (t2 == 0) {
      for (t3=max(31,32*t1);t3<=min(PB_M-2,32*t1+31);t3++) {
        A[0][t3] = B[0][t3] * 4;;
        D[t3] = D[t3+1] * D[t3] * E[t3+1] + 5;;
        for (t4=1;t4<=min(31,t3-1);t4++) {
          A[t4][t3] = B[t4][t3] * 4;;
        }
      }
    }
    if ((t1 == 187) && (t2 == 0)) {
      for (t4=0;t4<=31;t4++) {
        A[t4][(PB_M-1)] = B[t4][(PB_M-1)] * 4;;
      }
    }
    if (t2 >= 1) {
      for (t3=max(32*t1,32*t2+31);t3<=min(PB_M-1,32*t1+31);t3++) {
        for (t4=32*t2;t4<=min(32*t2+31,t3-1);t4++) {
          A[t4][t3] = B[t4][t3] * 4;;
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
int xd = xD;
int xb = xB;
int yb = yB;
int xe = xE;
POLYBENCH_2D_ARRAY_DECL(A, DATA_TYPE,xA,yA,xa,ya);
POLYBENCH_1D_ARRAY_DECL(C, DATA_TYPE,xC,xc);
POLYBENCH_1D_ARRAY_DECL(D, DATA_TYPE,xD,xd);
POLYBENCH_2D_ARRAY_DECL(B, DATA_TYPE,xB,yB,xb,yb);
POLYBENCH_1D_ARRAY_DECL(E, DATA_TYPE,xE,xe);
init_array(xa,ya,POLYBENCH_ARRAY(A),xc,POLYBENCH_ARRAY(C),xd,POLYBENCH_ARRAY(D),xb,yb,POLYBENCH_ARRAY(B),xe,POLYBENCH_ARRAY(E),INIT_SEED);
kernel_3314321222_00(xa,ya,POLYBENCH_ARRAY(A),xc,POLYBENCH_ARRAY(C),xd,POLYBENCH_ARRAY(D),xb,yb,POLYBENCH_ARRAY(B),xe,POLYBENCH_ARRAY(E));
polybench_prevent_dce(print_array(xa,ya,POLYBENCH_ARRAY(A),xc,POLYBENCH_ARRAY(C),xd,POLYBENCH_ARRAY(D),xb,yb,POLYBENCH_ARRAY(B),xe,POLYBENCH_ARRAY(E)));
POLYBENCH_FREE_ARRAY(A);
POLYBENCH_FREE_ARRAY(C);
POLYBENCH_FREE_ARRAY(D);
POLYBENCH_FREE_ARRAY(B);
POLYBENCH_FREE_ARRAY(E);
return 0;
}
