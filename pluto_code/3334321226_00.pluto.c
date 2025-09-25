#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <math.h>
#include <polybench.h>
#include <time.h>
#include <stdlib.h>
#include "3334321226_00.h"
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
static void init_array(int xa,int ya,DATA_TYPE POLYBENCH_2D(A,xA,yA,xa,ya),int xb,int yb,DATA_TYPE POLYBENCH_2D(B,xB,yB,xb,yb),int xc,int yc,DATA_TYPE POLYBENCH_2D(C,xC,yC,xc,yc),int xd,DATA_TYPE POLYBENCH_1D(D,xD,xd),int seed)
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
for (j = 0; j < yc; j++) {
C[i][j] = rand()%3;;
}}
for (i = 0; i < xd; i++) {
D[i] = rand()%3;;
}
}
static void print_array(int xa,int ya,DATA_TYPE POLYBENCH_2D(A,xA,yA,xa,ya),int xb,int yb,DATA_TYPE POLYBENCH_2D(B,xB,yB,xb,yb),int xc,int yc,DATA_TYPE POLYBENCH_2D(C,xC,yC,xc,yc),int xd,DATA_TYPE POLYBENCH_1D(D,xD,xd))
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
}
void kernel_3334321226_00(int xa,int ya,DATA_TYPE POLYBENCH_2D(A,xA,yA,xa,ya),int xb,int yb,DATA_TYPE POLYBENCH_2D(B,xB,yB,xb,yb),int xc,int yc,DATA_TYPE POLYBENCH_2D(C,xC,yC,xc,yc),int xd,DATA_TYPE POLYBENCH_1D(D,xD,xd)){
polybench_start_instruments;
  int t1, t2, t3, t4, t5;
 int lb, ub, lbp, ubp, lb2, ub2;
 register int lbv, ubv;
/* Start of CLooG code */
for (t1=-1;t1<=floord(PB_M-1,16);t1++) {
  lbp=max(max(max(max(-1,ceild(879*t1-164937,1004)),ceild(14062*t1-377*PB_M+377,16060)),ceild(28128*t1-879*PB_L-3125,32132)),ceild(224992*t1-6031*PB_M-7031*PB_L+42192031,256992));
  ubp=min(floord(PB_N-2,32),t1);
#pragma omp parallel for private(lbv,ubv,t3,t4,t5)
  for (t2=lbp;t2<=ubp;t2++) {
    if ((t1 >= 2) && (t1 == 2*t2) && (t1 <= floord(PB_L-1,16))) {
      if (t1%2 == 0) {
        C[16*t1+1][16*t1] = D[16*t1] - 3;;
      }
      if (t1%2 == 0) {
        B[16*t1][(16*t1-1)+1] = 4;;
      }
      for (t4=16*t1+1;t4<=min(PB_L-1,16*t1+31);t4++) {
        if (t1%2 == 0) {
          C[16*t1+1][t4] = D[t4] - 3;;
        }
      }
    }
    if (t1 >= ceild(32*t2+PB_L,32)) {
      for (t3=max(32*t2,32*t1-32*t2);t3<=min(PB_M-1,32*t2+31);t3++) {
        for (t4=32*t1-32*t2;t4<=min(t3,32*t1-32*t2+31);t4++) {
          B[t3][(t4-1)+1] = 4;;
        }
      }
    }
    if ((t1 == 0) && (t2 == 0)) {
      for (t4=0;t4<=31;t4++) {
        C[0 +1][t4] = D[t4] - 3;;
      }
    }
    if (t1 <= floord(32*t2+PB_L-1,32)) {
      for (t3=max(-1,32*t2);t3<=min(32*t2+31,32*t1-32*t2-1);t3++) {
        for (t4=32*t1-32*t2;t4<=min(PB_L-1,32*t1-32*t2+31);t4++) {
          C[t3+1][t4] = D[t4] - 3;;
        }
      }
    }
    if ((t1 == 0) && (t2 == 0)) {
      C[1 +1][0] = D[0] - 3;;
      C[1 +1][1] = D[1] - 3;;
      B[1][0 +1] = 4;;
      for (t4=2;t4<=31;t4++) {
        C[1 +1][t4] = D[t4] - 3;;
      }
    }
    if (t1 <= floord(32*t2+PB_L-1,32)) {
      for (t3=max(max(2,32*t2),32*t1-32*t2+1);t3<=min(PB_M-2,32*t2+31);t3++) {
        if (t1 == t2) {
          C[t3+1][0] = D[0] - 3;;
        }
        for (t4=max(1,32*t1-32*t2);t4<=min(min(PB_L-1,t3-1),32*t1-32*t2+31);t4++) {
          C[t3+1][t4] = D[t4] - 3;;
          A[t3-1][t4] = A[t3-1][t4-1] * A[t3+1][t4] - B[t3][t4] + 3;;
          B[t3][(t4-1)+1] = 4;;
        }
        if (t1 == t2+187) {
          for (t4=PB_L;t4<=min(6015,t3-1);t4++) {
            B[t3][(t4-1)+1] = 4;;
          }
        }
        if ((t1 == 2*t2) && (t3 <= PB_L-1)) {
          if (t1%2 == 0) {
            C[t3+1][t3] = D[t3] - 3;;
          }
          if (t1%2 == 0) {
            B[t3][(t3-1)+1] = 4;;
          }
        }
        if ((t1 == 374) && (t2 == 187) && (t3 >= PB_L)) {
          B[t3][(t3-1)+1] = 4;;
        }
        if (t1 == 2*t2) {
          for (t4=t3+1;t4<=min(PB_L-1,16*t1+31);t4++) {
            if (t1%2 == 0) {
              C[t3+1][t4] = D[t4] - 3;;
            }
          }
        }
      }
    }
    if ((t1 <= floord(PB_L+6975,32)) && (t2 == 218)) {
      if (t1 == 218) {
        C[(PB_M-1)+1][0] = D[0] - 3;;
      }
      for (t4=max(1,32*t1-6976);t4<=min(PB_L-1,32*t1-6945);t4++) {
        C[(PB_M-1)+1][t4] = D[t4] - 3;;
        B[(PB_M-1)][(t4-1)+1] = 4;;
      }
      if (t1 == 405) {
        for (t4=PB_L;t4<=6015;t4++) {
          B[(PB_M-1)][(t4-1)+1] = 4;;
        }
      }
    }
    if (t1 <= floord(32*t2+PB_L-1,32)) {
      for (t3=max(PB_M,32*t2);t3<=min(PB_N-2,32*t2+31);t3++) {
        for (t4=32*t1-32*t2;t4<=min(PB_L-1,32*t1-32*t2+31);t4++) {
          C[t3+1][t4] = D[t4] - 3;;
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
int yc = yC;
int xd = xD;
POLYBENCH_2D_ARRAY_DECL(A, DATA_TYPE,xA,yA,xa,ya);
POLYBENCH_2D_ARRAY_DECL(B, DATA_TYPE,xB,yB,xb,yb);
POLYBENCH_2D_ARRAY_DECL(C, DATA_TYPE,xC,yC,xc,yc);
POLYBENCH_1D_ARRAY_DECL(D, DATA_TYPE,xD,xd);
init_array(xa,ya,POLYBENCH_ARRAY(A),xb,yb,POLYBENCH_ARRAY(B),xc,yc,POLYBENCH_ARRAY(C),xd,POLYBENCH_ARRAY(D),INIT_SEED);
kernel_3334321226_00(xa,ya,POLYBENCH_ARRAY(A),xb,yb,POLYBENCH_ARRAY(B),xc,yc,POLYBENCH_ARRAY(C),xd,POLYBENCH_ARRAY(D));
polybench_prevent_dce(print_array(xa,ya,POLYBENCH_ARRAY(A),xb,yb,POLYBENCH_ARRAY(B),xc,yc,POLYBENCH_ARRAY(C),xd,POLYBENCH_ARRAY(D)));
POLYBENCH_FREE_ARRAY(A);
POLYBENCH_FREE_ARRAY(B);
POLYBENCH_FREE_ARRAY(C);
POLYBENCH_FREE_ARRAY(D);
return 0;
}
