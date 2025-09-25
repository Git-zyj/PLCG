#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <math.h>
#include <polybench.h>
#include <time.h>
#include <stdlib.h>
#include "3414321224_00.h"
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
static void init_array(int xa,DATA_TYPE POLYBENCH_1D(A,xA,xa),int xc,int yc,DATA_TYPE POLYBENCH_2D(C,xC,yC,xc,yc),int xe,int ye,DATA_TYPE POLYBENCH_2D(E,xE,yE,xe,ye),int xb,DATA_TYPE POLYBENCH_1D(B,xB,xb),int xd,int yd,int zd,DATA_TYPE POLYBENCH_3D(D,xD,yD,zD,xd,yd,zd),int seed)
{
srand(seed);
int i,j,k,l;
for (i = 0; i < xa; i++) {
A[i] = rand()%3;;
}
for (i = 0; i < xc; i++) {
for (j = 0; j < yc; j++) {
C[i][j] = rand()%3;;
}}
for (i = 0; i < xe; i++) {
for (j = 0; j < ye; j++) {
E[i][j] = rand()%3;;
}}
for (i = 0; i < xb; i++) {
B[i] = rand()%3;;
}
for (i = 0; i < xd; i++) {
for (j = 0; j < yd; j++) {
for (k = 0; k < zd; k++) {
D[i][j][k] = rand()%3;;
}}}
}
static void print_array(int xa,DATA_TYPE POLYBENCH_1D(A,xA,xa),int xc,int yc,DATA_TYPE POLYBENCH_2D(C,xC,yC,xc,yc),int xe,int ye,DATA_TYPE POLYBENCH_2D(E,xE,yE,xe,ye),int xb,DATA_TYPE POLYBENCH_1D(B,xB,xb),int xd,int yd,int zd,DATA_TYPE POLYBENCH_3D(D,xD,yD,zD,xd,yd,zd))
{
int i,j,k,l;
POLYBENCH_DUMP_START;
POLYBENCH_DUMP_BEGIN("A");
for (i = 0; i < xa; i++) {
fprintf (POLYBENCH_DUMP_TARGET, "\n");
fprintf (POLYBENCH_DUMP_TARGET, DATA_PRINTF_MODIFIER, A[i]);
}
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
POLYBENCH_DUMP_BEGIN("E");
for (i = 0; i < xe; i++) {
for (j = 0; j < ye; j++) {
fprintf (POLYBENCH_DUMP_TARGET, "\n");
fprintf (POLYBENCH_DUMP_TARGET, DATA_PRINTF_MODIFIER, E[i][j]);
}}
POLYBENCH_DUMP_END("E");
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
}
void kernel_3414321224_00(int xa,DATA_TYPE POLYBENCH_1D(A,xA,xa),int xc,int yc,DATA_TYPE POLYBENCH_2D(C,xC,yC,xc,yc),int xe,int ye,DATA_TYPE POLYBENCH_2D(E,xE,yE,xe,ye),int xb,DATA_TYPE POLYBENCH_1D(B,xB,xb),int xd,int yd,int zd,DATA_TYPE POLYBENCH_3D(D,xD,yD,zD,xd,yd,zd)){
polybench_start_instruments;
  int t1, t2, t3, t4, t5, t6;
 int lb, ub, lbp, ubp, lb2, ub2;
 register int lbv, ubv;
/* Start of CLooG code */
for (t1=0;t1<=12;t1++) {
  for (t2=0;t2<=12;t2++) {
    for (t3=max(max(-1,ceild(32*t1-PB_P-98,99)),ceild(32*t2-PB_N+1,99));t3<=min(min(floord(PB_L-2,32),floord(-299*t1+3718,98)),floord(-9568*t2+299*PB_N-299,3168));t3++) {
      if ((t2 <= floord(PB_L-1,32)) && (t3 >= 1)) {
        for (t4=max(1,32*t1);t4<=min(PB_P-1,32*t1+31);t4++) {
          for (t5=32*t2;t5<=min(PB_L-1,32*t2+31);t5++) {
            for (t6=32*t3;t6<=min(PB_L-2,32*t3+31);t6++) {
              C[t5][t4-1] = D[t6+1][t5][t4] - 4;;
            }
          }
        }
      }
      if (t3 == -1) {
        for (t4=max(1,32*t1);t4<=min(PB_P-1,32*t1+31);t4++) {
          for (t5=32*t2;t5<=min(PB_L-1,32*t2+31);t5++) {
            C[t5][t4-1] = D[-1 +1][t5][t4] - 4;;
          }
        }
      }
      if ((t1 == 0) && (t2 == 0) && (t3 == 0)) {
        E[0][0] = 5;;
        B[0] = B[0 +2] + B[0] + 6;;
        for (t5=1;t5<=31;t5++) {
          E[t5][0] = 5;;
        }
      }
      if ((t1 == 0) && (t2 >= 1) && (t2 <= floord(PB_L-1,32)) && (t3 == 0)) {
        for (t5=32*t2;t5<=32*t2+31;t5++) {
          E[t5][0] = 5;;
        }
      }
      if ((t2 >= ceild(PB_L,32)) && (t3 == 0)) {
        for (t4=32*t1;t4<=min(PB_M-3,32*t1+31);t4++) {
          for (t5=32*t2;t5<=min(PB_N-1,32*t2+31);t5++) {
            E[t5][t4] = 5;;
          }
        }
      }
      if ((t2 == 0) && (t3 == 0)) {
        for (t4=max(1,32*t1);t4<=min(PB_P-1,32*t1+31);t4++) {
          C[0][t4-1] = D[0 +1][0][t4] - 4;;
          E[0][t4] = 5;;
          A[t4+1] = A[t4+2] - A[t4+1] + B[t4+1] + A[t4] + 4;;
          B[t4] = B[t4+2] + B[t4] + 6;;
          for (t6=1;t6<=31;t6++) {
            C[0][t4-1] = D[t6+1][0][t4] - 4;;
          }
          for (t5=1;t5<=31;t5++) {
            C[t5][t4-1] = D[0 +1][t5][t4] - 4;;
            E[t5][t4] = 5;;
            for (t6=1;t6<=31;t6++) {
              C[t5][t4-1] = D[t6+1][t5][t4] - 4;;
            }
          }
        }
      }
      if ((t2 >= 1) && (t2 <= floord(PB_L-1,32)) && (t3 == 0)) {
        for (t4=max(1,32*t1);t4<=min(PB_P-1,32*t1+31);t4++) {
          for (t5=32*t2;t5<=min(PB_L-1,32*t2+31);t5++) {
            C[t5][t4-1] = D[0 +1][t5][t4] - 4;;
            E[t5][t4] = 5;;
            for (t6=1;t6<=31;t6++) {
              C[t5][t4-1] = D[t6+1][t5][t4] - 4;;
            }
          }
          if (t2 == 9) {
            for (t5=PB_L;t5<=319;t5++) {
              E[t5][t4] = 5;;
            }
          }
        }
      }
      if ((t2 == 0) && (t3 == 0)) {
        for (t4=max(PB_P,32*t1);t4<=min(PB_M-3,32*t1+31);t4++) {
          E[0][t4] = 5;;
          B[t4] = B[t4+2] + B[t4] + 6;;
          for (t5=1;t5<=31;t5++) {
            E[t5][t4] = 5;;
          }
        }
      }
      if ((t2 >= 1) && (t2 <= floord(PB_L-1,32)) && (t3 == 0)) {
        for (t4=max(PB_P,32*t1);t4<=min(PB_M-3,32*t1+31);t4++) {
          for (t5=32*t2;t5<=32*t2+31;t5++) {
            E[t5][t4] = 5;;
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
int xc = xC;
int yc = yC;
int xe = xE;
int ye = yE;
int xb = xB;
int xd = xD;
int yd = yD;
int zd = zD;
POLYBENCH_1D_ARRAY_DECL(A, DATA_TYPE,xA,xa);
POLYBENCH_2D_ARRAY_DECL(C, DATA_TYPE,xC,yC,xc,yc);
POLYBENCH_2D_ARRAY_DECL(E, DATA_TYPE,xE,yE,xe,ye);
POLYBENCH_1D_ARRAY_DECL(B, DATA_TYPE,xB,xb);
POLYBENCH_3D_ARRAY_DECL(D, DATA_TYPE,xD,yD,zD,xd,yd,zd);
init_array(xa,POLYBENCH_ARRAY(A),xc,yc,POLYBENCH_ARRAY(C),xe,ye,POLYBENCH_ARRAY(E),xb,POLYBENCH_ARRAY(B),xd,yd,zd,POLYBENCH_ARRAY(D),INIT_SEED);
kernel_3414321224_00(xa,POLYBENCH_ARRAY(A),xc,yc,POLYBENCH_ARRAY(C),xe,ye,POLYBENCH_ARRAY(E),xb,POLYBENCH_ARRAY(B),xd,yd,zd,POLYBENCH_ARRAY(D));
polybench_prevent_dce(print_array(xa,POLYBENCH_ARRAY(A),xc,yc,POLYBENCH_ARRAY(C),xe,ye,POLYBENCH_ARRAY(E),xb,POLYBENCH_ARRAY(B),xd,yd,zd,POLYBENCH_ARRAY(D)));
POLYBENCH_FREE_ARRAY(A);
POLYBENCH_FREE_ARRAY(C);
POLYBENCH_FREE_ARRAY(E);
POLYBENCH_FREE_ARRAY(B);
POLYBENCH_FREE_ARRAY(D);
return 0;
}
