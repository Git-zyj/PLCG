#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <math.h>
#include <polybench.h>
#include <time.h>
#include <stdlib.h>
#include "3524321226_00.h"
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
static void init_array(int xa,int ya,int za,DATA_TYPE POLYBENCH_3D(A,xA,yA,zA,xa,ya,za),int xb,DATA_TYPE POLYBENCH_1D(B,xB,xb),int xc,int yc,int zc,DATA_TYPE POLYBENCH_3D(C,xC,yC,zC,xc,yc,zc),int xd,int yd,DATA_TYPE POLYBENCH_2D(D,xD,yD,xd,yd),int xe,int ye,DATA_TYPE POLYBENCH_2D(E,xE,yE,xe,ye),int seed)
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
for (i = 0; i < xc; i++) {
for (j = 0; j < yc; j++) {
for (k = 0; k < zc; k++) {
C[i][j][k] = rand()%3;;
}}}
for (i = 0; i < xd; i++) {
for (j = 0; j < yd; j++) {
D[i][j] = rand()%3;;
}}
for (i = 0; i < xe; i++) {
for (j = 0; j < ye; j++) {
E[i][j] = rand()%3;;
}}
}
static void print_array(int xa,int ya,int za,DATA_TYPE POLYBENCH_3D(A,xA,yA,zA,xa,ya,za),int xb,DATA_TYPE POLYBENCH_1D(B,xB,xb),int xc,int yc,int zc,DATA_TYPE POLYBENCH_3D(C,xC,yC,zC,xc,yc,zc),int xd,int yd,DATA_TYPE POLYBENCH_2D(D,xD,yD,xd,yd),int xe,int ye,DATA_TYPE POLYBENCH_2D(E,xE,yE,xe,ye))
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
}
void kernel_3524321226_00(int xa,int ya,int za,DATA_TYPE POLYBENCH_3D(A,xA,yA,zA,xa,ya,za),int xb,DATA_TYPE POLYBENCH_1D(B,xB,xb),int xc,int yc,int zc,DATA_TYPE POLYBENCH_3D(C,xC,yC,zC,xc,yc,zc),int xd,int yd,DATA_TYPE POLYBENCH_2D(D,xD,yD,xd,yd),int xe,int ye,DATA_TYPE POLYBENCH_2D(E,xE,yE,xe,ye)){
polybench_start_instruments;
  int t1, t2, t3, t4, t5, t6;
 int lb, ub, lbp, ubp, lb2, ub2;
 register int lbv, ubv;
/* Start of CLooG code */
lbp=0;
ubp=floord(PB_M+PB_N-5,32);
#pragma omp parallel for private(lbv,ubv,t2,t3,t4,t5,t6)
for (t1=lbp;t1<=ubp;t1++) {
  for (t2=max(0,ceild(32*t1-PB_M-28,32));t2<=floord(-32*t1+PB_M+248000,15872);t2++) {
    if (t2 <= floord(PB_P-3,32)) {
      for (t3=max(1,32*t1);t3<=min(32*t1+31,32*t2-1);t3++) {
        for (t4=32*t2;t4<=min(PB_P-3,32*t2+31);t4++) {
          for (t5=0;t5<=3;t5++) {
            C[t4][t3-1][t4] = C[t4][t3-1][t4] - C[t4-2][t3-1][t4] * C[t5][t3-1][t4+1] - 4;;
            A[(t3-1)][(t4-1)+1][t5] = A[(t3-1)][(t4-1)+1][t5+1] - 6;;
          }
          for (t5=4;t5<=t4-2;t5++) {
            C[t4][t3-1][t4] = C[t4][t3-1][t4] - C[t4-2][t3-1][t4] * C[t5][t3-1][t4+1] - 4;;
            A[(t3-1)][(t4-1)+1][t5] = A[(t3-1)][(t4-1)+1][t5+1] - 6;;
            A[t3-1][t4][(t5-2)] = A[t3-1][t4-2][(t5-2)] + A[t3-1][t4][(t5-2)+2] + 5;;
          }
          for (t5=t4-1;t5<=PB_P-1;t5++) {
            C[t4][t3-1][t4] = C[t4][t3-1][t4] - C[t4-2][t3-1][t4] * C[t5][t3-1][t4+1] - 4;;
            A[t3-1][t4][(t5-2)] = A[t3-1][t4-2][(t5-2)] + A[t3-1][t4][(t5-2)+2] + 5;;
          }
          for (t5=PB_P;t5<=PB_L-1;t5++) {
            C[t4][t3-1][t4] = C[t4][t3-1][t4] - C[t4-2][t3-1][t4] * C[t5][t3-1][t4+1] - 4;;
          }
        }
        if (t2 == 9) {
          for (t4=PB_P-2;t4<=319;t4++) {
            for (t5=0;t5<=3;t5++) {
              A[(t3-1)][(t4-1)+1][t5] = A[(t3-1)][(t4-1)+1][t5+1] - 6;;
            }
            for (t5=4;t5<=min(PB_P-2,t4-2);t5++) {
              A[(t3-1)][(t4-1)+1][t5] = A[(t3-1)][(t4-1)+1][t5+1] - 6;;
              A[t3-1][t4][(t5-2)] = A[t3-1][t4-2][(t5-2)] + A[t3-1][t4][(t5-2)+2] + 5;;
            }
            if (t4 >= PB_P+1) {
              A[t3-1][t4][(PB_P-3)] = A[t3-1][t4-2][(PB_P-3)] + A[t3-1][t4][(PB_P-3)+2] + 5;;
            }
            for (t5=t4-1;t5<=PB_P-1;t5++) {
              A[t3-1][t4][(t5-2)] = A[t3-1][t4-2][(t5-2)] + A[t3-1][t4][(t5-2)+2] + 5;;
            }
          }
        }
      }
    }
    if (t2 >= ceild(PB_P-2,32)) {
      for (t3=max(1,32*t1);t3<=min(32*t1+31,32*t2-1);t3++) {
        for (t4=32*t2;t4<=min(PB_L-1,32*t2+31);t4++) {
          for (t5=0;t5<=3;t5++) {
            A[(t3-1)][(t4-1)+1][t5] = A[(t3-1)][(t4-1)+1][t5+1] - 6;;
          }
          for (t5=4;t5<=PB_P-2;t5++) {
            A[(t3-1)][(t4-1)+1][t5] = A[(t3-1)][(t4-1)+1][t5+1] - 6;;
            A[t3-1][t4][(t5-2)] = A[t3-1][t4-2][(t5-2)] + A[t3-1][t4][(t5-2)+2] + 5;;
          }
          A[t3-1][t4][(PB_P-3)] = A[t3-1][t4-2][(PB_P-3)] + A[t3-1][t4][(PB_P-3)+2] + 5;;
        }
      }
    }
    if ((t1 == 0) && (t2 == 0)) {
      B[0] = B[0] * 5;;
    }
    if (t2 == 0) {
      for (t3=max(1,32*t1);t3<=min(PB_P,32*t1+31);t3++) {
        B[t3] = B[t3] * 5;;
        D[1 +1][(t3-1)] = D[1 -1][(t3-1)+2] * E[(t3-1)][(t3-1)] - 2;;
        for (t4=2;t4<=min(31,t3);t4++) {
          D[t4+1][(t3-t4)] = D[t4-1][(t3-t4)+2] * E[(t3-t4)][(t3-t4)] - 2;;
          for (t5=0;t5<=min(3,t4-2);t5++) {
            C[t4][t3-1][t4] = C[t4][t3-1][t4] - C[t4-2][t3-1][t4] * C[t5][t3-1][t4+1] - 4;;
            A[(t3-1)][(t4-1)+1][t5] = A[(t3-1)][(t4-1)+1][t5+1] - 6;;
          }
          for (t5=t4-1;t5<=3;t5++) {
            C[t4][t3-1][t4] = C[t4][t3-1][t4] - C[t4-2][t3-1][t4] * C[t5][t3-1][t4+1] - 4;;
          }
          for (t5=4;t5<=t4-2;t5++) {
            C[t4][t3-1][t4] = C[t4][t3-1][t4] - C[t4-2][t3-1][t4] * C[t5][t3-1][t4+1] - 4;;
            A[(t3-1)][(t4-1)+1][t5] = A[(t3-1)][(t4-1)+1][t5+1] - 6;;
            A[t3-1][t4][(t5-2)] = A[t3-1][t4-2][(t5-2)] + A[t3-1][t4][(t5-2)+2] + 5;;
          }
          for (t5=max(4,t4-1);t5<=PB_P-1;t5++) {
            C[t4][t3-1][t4] = C[t4][t3-1][t4] - C[t4-2][t3-1][t4] * C[t5][t3-1][t4+1] - 4;;
            A[t3-1][t4][(t5-2)] = A[t3-1][t4-2][(t5-2)] + A[t3-1][t4][(t5-2)+2] + 5;;
          }
          for (t5=PB_P;t5<=PB_L-1;t5++) {
            C[t4][t3-1][t4] = C[t4][t3-1][t4] - C[t4-2][t3-1][t4] * C[t5][t3-1][t4+1] - 4;;
          }
        }
        if (t1 == 0) {
          for (t4=t3+1;t4<=31;t4++) {
            for (t5=0;t5<=min(3,t4-2);t5++) {
              C[t4][t3-1][t4] = C[t4][t3-1][t4] - C[t4-2][t3-1][t4] * C[t5][t3-1][t4+1] - 4;;
              A[(t3-1)][(t4-1)+1][t5] = A[(t3-1)][(t4-1)+1][t5+1] - 6;;
            }
            for (t5=t4-1;t5<=3;t5++) {
              C[t4][t3-1][t4] = C[t4][t3-1][t4] - C[t4-2][t3-1][t4] * C[t5][t3-1][t4+1] - 4;;
            }
            for (t5=4;t5<=t4-2;t5++) {
              C[t4][t3-1][t4] = C[t4][t3-1][t4] - C[t4-2][t3-1][t4] * C[t5][t3-1][t4+1] - 4;;
              A[(t3-1)][(t4-1)+1][t5] = A[(t3-1)][(t4-1)+1][t5+1] - 6;;
              A[t3-1][t4][(t5-2)] = A[t3-1][t4-2][(t5-2)] + A[t3-1][t4][(t5-2)+2] + 5;;
            }
            for (t5=max(4,t4-1);t5<=PB_P-1;t5++) {
              C[t4][t3-1][t4] = C[t4][t3-1][t4] - C[t4-2][t3-1][t4] * C[t5][t3-1][t4+1] - 4;;
              A[t3-1][t4][(t5-2)] = A[t3-1][t4-2][(t5-2)] + A[t3-1][t4][(t5-2)+2] + 5;;
            }
            for (t5=PB_P;t5<=PB_L-1;t5++) {
              C[t4][t3-1][t4] = C[t4][t3-1][t4] - C[t4-2][t3-1][t4] * C[t5][t3-1][t4+1] - 4;;
            }
          }
        }
      }
    }
    if (t2 == 0) {
      for (t3=max(32*t1,PB_P+1);t3<=min(PB_L-2,32*t1+31);t3++) {
        B[t3] = B[t3] * 5;;
        if (t3 <= PB_M-2) {
          D[1 +1][(t3-1)] = D[1 -1][(t3-1)+2] * E[(t3-1)][(t3-1)] - 2;;
        }
        for (t4=2;t4<=31;t4++) {
          D[t4+1][(t3-t4)] = D[t4-1][(t3-t4)+2] * E[(t3-t4)][(t3-t4)] - 2;;
          for (t5=0;t5<=min(3,t4-2);t5++) {
            A[(t3-1)][(t4-1)+1][t5] = A[(t3-1)][(t4-1)+1][t5+1] - 6;;
          }
          for (t5=4;t5<=t4-2;t5++) {
            A[(t3-1)][(t4-1)+1][t5] = A[(t3-1)][(t4-1)+1][t5+1] - 6;;
            A[t3-1][t4][(t5-2)] = A[t3-1][t4-2][(t5-2)] + A[t3-1][t4][(t5-2)+2] + 5;;
          }
          for (t5=max(4,t4-1);t5<=PB_P-1;t5++) {
            A[t3-1][t4][(t5-2)] = A[t3-1][t4-2][(t5-2)] + A[t3-1][t4][(t5-2)+2] + 5;;
          }
        }
      }
    }
    if ((t1 == 15) && (t2 == 0)) {
      for (t3=PB_L-1;t3<=PB_M;t3++) {
        if (t3 == PB_M) {
          A[(PB_M-1)][1 +1][0] = A[(PB_M-1)][1 +1][0 +1] - 6;;
          for (t5=4;t5<=PB_P-1;t5++) {
            A[PB_M-1][2][(t5-2)] = A[PB_M-1][2 -2][(t5-2)] + A[PB_M-1][2][(t5-2)+2] + 5;;
          }
        }
        if ((PB_L == 500) && (PB_M == 501) && (t3 == 499)) {
          D[1 +1][498] = D[1 -1][498 +2] * E[498][498] - 2;;
        }
        for (t4=max(2,t3-PB_M+3);t4<=31;t4++) {
          D[t4+1][(t3-t4)] = D[t4-1][(t3-t4)+2] * E[(t3-t4)][(t3-t4)] - 2;;
          for (t5=0;t5<=min(3,t4-2);t5++) {
            A[(t3-1)][(t4-1)+1][t5] = A[(t3-1)][(t4-1)+1][t5+1] - 6;;
          }
          for (t5=4;t5<=t4-2;t5++) {
            A[(t3-1)][(t4-1)+1][t5] = A[(t3-1)][(t4-1)+1][t5+1] - 6;;
            A[t3-1][t4][(t5-2)] = A[t3-1][t4-2][(t5-2)] + A[t3-1][t4][(t5-2)+2] + 5;;
          }
          for (t5=max(4,t4-1);t5<=PB_P-1;t5++) {
            A[t3-1][t4][(t5-2)] = A[t3-1][t4-2][(t5-2)] + A[t3-1][t4][(t5-2)+2] + 5;;
          }
        }
      }
    }
    if (t2 >= 1) {
      for (t3=max(32*t1,32*t2);t3<=min(PB_P,32*t1+31);t3++) {
        for (t4=32*t2;t4<=min(min(t3,PB_P-3),32*t2+31);t4++) {
          D[t4+1][(t3-t4)] = D[t4-1][(t3-t4)+2] * E[(t3-t4)][(t3-t4)] - 2;;
          for (t5=0;t5<=3;t5++) {
            C[t4][t3-1][t4] = C[t4][t3-1][t4] - C[t4-2][t3-1][t4] * C[t5][t3-1][t4+1] - 4;;
            A[(t3-1)][(t4-1)+1][t5] = A[(t3-1)][(t4-1)+1][t5+1] - 6;;
          }
          for (t5=4;t5<=t4-2;t5++) {
            C[t4][t3-1][t4] = C[t4][t3-1][t4] - C[t4-2][t3-1][t4] * C[t5][t3-1][t4+1] - 4;;
            A[(t3-1)][(t4-1)+1][t5] = A[(t3-1)][(t4-1)+1][t5+1] - 6;;
            A[t3-1][t4][(t5-2)] = A[t3-1][t4-2][(t5-2)] + A[t3-1][t4][(t5-2)+2] + 5;;
          }
          for (t5=t4-1;t5<=PB_P-1;t5++) {
            C[t4][t3-1][t4] = C[t4][t3-1][t4] - C[t4-2][t3-1][t4] * C[t5][t3-1][t4+1] - 4;;
            A[t3-1][t4][(t5-2)] = A[t3-1][t4-2][(t5-2)] + A[t3-1][t4][(t5-2)+2] + 5;;
          }
          for (t5=PB_P;t5<=PB_L-1;t5++) {
            C[t4][t3-1][t4] = C[t4][t3-1][t4] - C[t4-2][t3-1][t4] * C[t5][t3-1][t4+1] - 4;;
          }
        }
        if (t1 == t2) {
          for (t4=t3+1;t4<=min(PB_P-3,32*t1+31);t4++) {
            for (t5=0;t5<=3;t5++) {
              C[t4][t3-1][t4] = C[t4][t3-1][t4] - C[t4-2][t3-1][t4] * C[t5][t3-1][t4+1] - 4;;
              A[(t3-1)][(t4-1)+1][t5] = A[(t3-1)][(t4-1)+1][t5+1] - 6;;
            }
            for (t5=4;t5<=t4-2;t5++) {
              C[t4][t3-1][t4] = C[t4][t3-1][t4] - C[t4-2][t3-1][t4] * C[t5][t3-1][t4+1] - 4;;
              A[(t3-1)][(t4-1)+1][t5] = A[(t3-1)][(t4-1)+1][t5+1] - 6;;
              A[t3-1][t4][(t5-2)] = A[t3-1][t4-2][(t5-2)] + A[t3-1][t4][(t5-2)+2] + 5;;
            }
            for (t5=t4-1;t5<=PB_P-1;t5++) {
              C[t4][t3-1][t4] = C[t4][t3-1][t4] - C[t4-2][t3-1][t4] * C[t5][t3-1][t4+1] - 4;;
              A[t3-1][t4][(t5-2)] = A[t3-1][t4-2][(t5-2)] + A[t3-1][t4][(t5-2)+2] + 5;;
            }
            for (t5=PB_P;t5<=PB_L-1;t5++) {
              C[t4][t3-1][t4] = C[t4][t3-1][t4] - C[t4-2][t3-1][t4] * C[t5][t3-1][t4+1] - 4;;
            }
          }
        }
        if ((t1 == 9) && (t2 == 9)) {
          for (t4=PB_P-2;t4<=t3;t4++) {
            D[t4+1][(t3-t4)] = D[t4-1][(t3-t4)+2] * E[(t3-t4)][(t3-t4)] - 2;;
            for (t5=0;t5<=3;t5++) {
              A[(t3-1)][(t4-1)+1][t5] = A[(t3-1)][(t4-1)+1][t5+1] - 6;;
            }
            for (t5=4;t5<=t4-2;t5++) {
              A[(t3-1)][(t4-1)+1][t5] = A[(t3-1)][(t4-1)+1][t5+1] - 6;;
              A[t3-1][t4][(t5-2)] = A[t3-1][t4-2][(t5-2)] + A[t3-1][t4][(t5-2)+2] + 5;;
            }
            for (t5=t4-1;t5<=PB_P-1;t5++) {
              A[t3-1][t4][(t5-2)] = A[t3-1][t4-2][(t5-2)] + A[t3-1][t4][(t5-2)+2] + 5;;
            }
          }
        }
        if ((t1 == 9) && (t2 == 9)) {
          for (t4=max(PB_P-2,t3+1);t4<=319;t4++) {
            for (t5=0;t5<=3;t5++) {
              A[(t3-1)][(t4-1)+1][t5] = A[(t3-1)][(t4-1)+1][t5+1] - 6;;
            }
            for (t5=4;t5<=min(PB_P-2,t4-2);t5++) {
              A[(t3-1)][(t4-1)+1][t5] = A[(t3-1)][(t4-1)+1][t5+1] - 6;;
              A[t3-1][t4][(t5-2)] = A[t3-1][t4-2][(t5-2)] + A[t3-1][t4][(t5-2)+2] + 5;;
            }
            if (t4 >= PB_P+1) {
              A[t3-1][t4][(PB_P-3)] = A[t3-1][t4-2][(PB_P-3)] + A[t3-1][t4][(PB_P-3)+2] + 5;;
            }
            for (t5=t4-1;t5<=PB_P-1;t5++) {
              A[t3-1][t4][(t5-2)] = A[t3-1][t4-2][(t5-2)] + A[t3-1][t4][(t5-2)+2] + 5;;
            }
          }
        }
      }
    }
    if ((t2 >= 1) && (t2 <= floord(PB_P-3,32))) {
      for (t3=max(32*t1,PB_P+1);t3<=min(PB_M,32*t1+31);t3++) {
        for (t4=32*t2;t4<=min(t3,32*t2+31);t4++) {
          D[t4+1][(t3-t4)] = D[t4-1][(t3-t4)+2] * E[(t3-t4)][(t3-t4)] - 2;;
          for (t5=0;t5<=3;t5++) {
            A[(t3-1)][(t4-1)+1][t5] = A[(t3-1)][(t4-1)+1][t5+1] - 6;;
          }
          for (t5=4;t5<=min(PB_P-2,t4-2);t5++) {
            A[(t3-1)][(t4-1)+1][t5] = A[(t3-1)][(t4-1)+1][t5+1] - 6;;
            A[t3-1][t4][(t5-2)] = A[t3-1][t4-2][(t5-2)] + A[t3-1][t4][(t5-2)+2] + 5;;
          }
          if ((t2 == 9) && (t4 >= PB_P+1)) {
            A[t3-1][t4][(PB_P-3)] = A[t3-1][t4-2][(PB_P-3)] + A[t3-1][t4][(PB_P-3)+2] + 5;;
          }
          for (t5=t4-1;t5<=PB_P-1;t5++) {
            A[t3-1][t4][(t5-2)] = A[t3-1][t4-2][(t5-2)] + A[t3-1][t4][(t5-2)+2] + 5;;
          }
        }
        if ((t1 == 9) && (t2 == 9)) {
          for (t4=t3+1;t4<=319;t4++) {
            for (t5=0;t5<=3;t5++) {
              A[(t3-1)][(t4-1)+1][t5] = A[(t3-1)][(t4-1)+1][t5+1] - 6;;
            }
            for (t5=4;t5<=PB_P-2;t5++) {
              A[(t3-1)][(t4-1)+1][t5] = A[(t3-1)][(t4-1)+1][t5+1] - 6;;
              A[t3-1][t4][(t5-2)] = A[t3-1][t4-2][(t5-2)] + A[t3-1][t4][(t5-2)+2] + 5;;
            }
            A[t3-1][t4][(PB_P-3)] = A[t3-1][t4-2][(PB_P-3)] + A[t3-1][t4][(PB_P-3)+2] + 5;;
          }
        }
      }
    }
    if (t2 >= ceild(PB_P-2,32)) {
      for (t3=max(32*t1,32*t2);t3<=min(PB_M,32*t1+31);t3++) {
        for (t4=32*t2;t4<=min(min(t3,PB_N-2),32*t2+31);t4++) {
          D[t4+1][(t3-t4)] = D[t4-1][(t3-t4)+2] * E[(t3-t4)][(t3-t4)] - 2;;
          for (t5=0;t5<=3;t5++) {
            A[(t3-1)][(t4-1)+1][t5] = A[(t3-1)][(t4-1)+1][t5+1] - 6;;
          }
          for (t5=4;t5<=PB_P-2;t5++) {
            A[(t3-1)][(t4-1)+1][t5] = A[(t3-1)][(t4-1)+1][t5+1] - 6;;
            A[t3-1][t4][(t5-2)] = A[t3-1][t4-2][(t5-2)] + A[t3-1][t4][(t5-2)+2] + 5;;
          }
          A[t3-1][t4][(PB_P-3)] = A[t3-1][t4-2][(PB_P-3)] + A[t3-1][t4][(PB_P-3)+2] + 5;;
        }
        if ((t1 == 15) && (t2 == 15)) {
          for (t4=PB_N-1;t4<=min(t3,PB_L-1);t4++) {
            for (t5=0;t5<=3;t5++) {
              A[(t3-1)][(t4-1)+1][t5] = A[(t3-1)][(t4-1)+1][t5+1] - 6;;
            }
            for (t5=4;t5<=PB_P-2;t5++) {
              A[(t3-1)][(t4-1)+1][t5] = A[(t3-1)][(t4-1)+1][t5+1] - 6;;
              A[t3-1][t4][(t5-2)] = A[t3-1][t4-2][(t5-2)] + A[t3-1][t4][(t5-2)+2] + 5;;
            }
            A[t3-1][t4][(PB_P-3)] = A[t3-1][t4-2][(PB_P-3)] + A[t3-1][t4][(PB_P-3)+2] + 5;;
          }
        }
        if (t1 == t2) {
          for (t4=t3+1;t4<=min(PB_L-1,32*t1+31);t4++) {
            for (t5=0;t5<=3;t5++) {
              A[(t3-1)][(t4-1)+1][t5] = A[(t3-1)][(t4-1)+1][t5+1] - 6;;
            }
            for (t5=4;t5<=PB_P-2;t5++) {
              A[(t3-1)][(t4-1)+1][t5] = A[(t3-1)][(t4-1)+1][t5+1] - 6;;
              A[t3-1][t4][(t5-2)] = A[t3-1][t4-2][(t5-2)] + A[t3-1][t4][(t5-2)+2] + 5;;
            }
            A[t3-1][t4][(PB_P-3)] = A[t3-1][t4-2][(PB_P-3)] + A[t3-1][t4][(PB_P-3)+2] + 5;;
          }
        }
      }
    }
    for (t3=max(32*t1,PB_M+1);t3<=min(min(32*t1+31,PB_M+PB_N-5),32*t2+PB_M+28);t3++) {
      for (t4=max(32*t2,t3-PB_M+3);t4<=min(PB_N-2,32*t2+31);t4++) {
        D[t4+1][(t3-t4)] = D[t4-1][(t3-t4)+2] * E[(t3-t4)][(t3-t4)] - 2;;
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
int xc = xC;
int yc = yC;
int zc = zC;
int xd = xD;
int yd = yD;
int xe = xE;
int ye = yE;
POLYBENCH_3D_ARRAY_DECL(A, DATA_TYPE,xA,yA,zA,xa,ya,za);
POLYBENCH_1D_ARRAY_DECL(B, DATA_TYPE,xB,xb);
POLYBENCH_3D_ARRAY_DECL(C, DATA_TYPE,xC,yC,zC,xc,yc,zc);
POLYBENCH_2D_ARRAY_DECL(D, DATA_TYPE,xD,yD,xd,yd);
POLYBENCH_2D_ARRAY_DECL(E, DATA_TYPE,xE,yE,xe,ye);
init_array(xa,ya,za,POLYBENCH_ARRAY(A),xb,POLYBENCH_ARRAY(B),xc,yc,zc,POLYBENCH_ARRAY(C),xd,yd,POLYBENCH_ARRAY(D),xe,ye,POLYBENCH_ARRAY(E),INIT_SEED);
kernel_3524321226_00(xa,ya,za,POLYBENCH_ARRAY(A),xb,POLYBENCH_ARRAY(B),xc,yc,zc,POLYBENCH_ARRAY(C),xd,yd,POLYBENCH_ARRAY(D),xe,ye,POLYBENCH_ARRAY(E));
polybench_prevent_dce(print_array(xa,ya,za,POLYBENCH_ARRAY(A),xb,POLYBENCH_ARRAY(B),xc,yc,zc,POLYBENCH_ARRAY(C),xd,yd,POLYBENCH_ARRAY(D),xe,ye,POLYBENCH_ARRAY(E)));
POLYBENCH_FREE_ARRAY(A);
POLYBENCH_FREE_ARRAY(B);
POLYBENCH_FREE_ARRAY(C);
POLYBENCH_FREE_ARRAY(D);
POLYBENCH_FREE_ARRAY(E);
return 0;
}
