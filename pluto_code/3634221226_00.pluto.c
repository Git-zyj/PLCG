#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <math.h>
#include <polybench.h>
#include <time.h>
#include <stdlib.h>
#include "3634221226_00.h"
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
static void init_array(int xa,int ya,int za,DATA_TYPE POLYBENCH_3D(A,xA,yA,zA,xa,ya,za),int xb,int yb,int zb,DATA_TYPE POLYBENCH_3D(B,xB,yB,zB,xb,yb,zb),int xc,DATA_TYPE POLYBENCH_1D(C,xC,xc),int xd,DATA_TYPE POLYBENCH_1D(D,xD,xd),int xe,int ye,DATA_TYPE POLYBENCH_2D(E,xE,yE,xe,ye),int seed)
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
for (k = 0; k < zb; k++) {
B[i][j][k] = rand()%3;;
}}}
for (i = 0; i < xc; i++) {
C[i] = rand()%3;;
}
for (i = 0; i < xd; i++) {
D[i] = rand()%3;;
}
for (i = 0; i < xe; i++) {
for (j = 0; j < ye; j++) {
E[i][j] = rand()%3;;
}}
}
static void print_array(int xa,int ya,int za,DATA_TYPE POLYBENCH_3D(A,xA,yA,zA,xa,ya,za),int xb,int yb,int zb,DATA_TYPE POLYBENCH_3D(B,xB,yB,zB,xb,yb,zb),int xc,DATA_TYPE POLYBENCH_1D(C,xC,xc),int xd,DATA_TYPE POLYBENCH_1D(D,xD,xd),int xe,int ye,DATA_TYPE POLYBENCH_2D(E,xE,yE,xe,ye))
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
for (k = 0; k < zb; k++) {
fprintf (POLYBENCH_DUMP_TARGET, "\n");
fprintf (POLYBENCH_DUMP_TARGET, DATA_PRINTF_MODIFIER, B[i][j][k]);
}}}
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
fprintf (POLYBENCH_DUMP_TARGET, "\n");
fprintf (POLYBENCH_DUMP_TARGET, DATA_PRINTF_MODIFIER, D[i]);
}
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
void kernel_3634221226_00(int xa,int ya,int za,DATA_TYPE POLYBENCH_3D(A,xA,yA,zA,xa,ya,za),int xb,int yb,int zb,DATA_TYPE POLYBENCH_3D(B,xB,yB,zB,xb,yb,zb),int xc,DATA_TYPE POLYBENCH_1D(C,xC,xc),int xd,DATA_TYPE POLYBENCH_1D(D,xD,xd),int xe,int ye,DATA_TYPE POLYBENCH_2D(E,xE,yE,xe,ye)){
polybench_start_instruments;
  int t1, t2, t3, t4, t5;
 int lb, ub, lbp, ubp, lb2, ub2;
 register int lbv, ubv;
/* Start of CLooG code */
for (t1=0;t1<=floord(PB_M-2,32);t1++) {
  for (t2=0;t2<=min(floord(PB_M-1,32),floord(-160*t1+PB_M+1994,32));t2++) {
    if ((t1 >= 1) && (t1 == t2) && (t1 <= floord(PB_P-2,32))) {
      for (t5=0;t5<=32*t1-1;t5++) {
        A[32*t1][32*t1][t5] = 2;;
        B[32*t1+1][32*t1][32*t1] = B[32*t1+2][32*t1+1][32*t1] + B[32*t1+1][32*t1][32*t1+1] + B[32*t1+1][32*t1][t5] + 4;;
        A[(32*t1-1)][32*t1][32*t1] = A[(32*t1-1)][32*t1][32*t1-2] * A[(32*t1-1)][32*t1][32*t1+1] * 2;;
      }
      for (t5=32*t1;t5<=PB_L-1;t5++) {
        A[(32*t1-1)][32*t1][32*t1] = A[(32*t1-1)][32*t1][32*t1-2] * A[(32*t1-1)][32*t1][32*t1+1] * 2;;
      }
      for (t4=32*t1+1;t4<=32*t1+31;t4++) {
        for (t5=0;t5<=32*t1-1;t5++) {
          A[32*t1][t4][t5] = 2;;
          B[32*t1+1][32*t1][t4] = B[32*t1+2][32*t1+1][t4] + B[32*t1+1][32*t1][t4+1] + B[t4+1][32*t1][t5] + 4;;
        }
        for (t5=32*t1;t5<=t4-1;t5++) {
          B[32*t1+1][32*t1][t4] = B[32*t1+2][32*t1+1][t4] + B[32*t1+1][32*t1][t4+1] + B[t4+1][32*t1][t5] + 4;;
        }
      }
    }
    if (t2 >= ceild(PB_Q-1,32)) {
      for (t3=max(1,32*t1);t3<=min(PB_Q-2,32*t1+31);t3++) {
        for (t4=32*t2;t4<=min(PB_M-1,32*t2+31);t4++) {
          for (t5=0;t5<=min(PB_P-1,t3-1);t5++) {
            A[t3][t4][t5] = 2;;
          }
        }
      }
    }
    if ((t1 == 0) && (t2 == 0)) {
      D[0 +1] = D[0 +1] + D[0] + 5;;
      for (t4=1;t4<=31;t4++) {
        for (t5=0;t5<=t4-1;t5++) {
          B[0 +1][0][t4] = B[0 +2][0 +1][t4] + B[0 +1][0][t4+1] + B[t4+1][0][t5] + 4;;
        }
      }
    }
    if ((t1 == 0) && (t2 >= 1) && (t2 <= floord(PB_Q-2,32))) {
      for (t4=32*t2;t4<=min(PB_Q-2,32*t2+31);t4++) {
        for (t5=0;t5<=t4-1;t5++) {
          B[0 +1][0][t4] = B[0 +2][0 +1][t4] + B[0 +1][0][t4+1] + B[t4+1][0][t5] + 4;;
        }
      }
    }
    if ((t1 == 0) && (t2 == 0)) {
      A[1][0][0] = 2;;
      C[1 -1] = C[1 -1] + C[1 -1] - C[1] + C[1] - 2;;
      D[1 +1] = D[1 +1] + D[1] + 5;;
      for (t4=1;t4<=31;t4++) {
        A[1][t4][0] = 2;;
        for (t5=0;t5<=t4-1;t5++) {
          B[1 +1][1][t4] = B[1 +2][1 +1][t4] + B[1 +1][1][t4+1] + B[t4+1][1][t5] + 4;;
        }
      }
    }
    if (t2 <= floord(PB_Q-2,32)) {
      for (t3=max(1,32*t1);t3<=min(min(PB_P-2,32*t1+31),32*t2-1);t3++) {
        for (t4=32*t2;t4<=min(PB_Q-2,32*t2+31);t4++) {
          for (t5=0;t5<=t3-1;t5++) {
            A[t3][t4][t5] = 2;;
            B[t3+1][t3][t4] = B[t3+2][t3+1][t4] + B[t3+1][t3][t4+1] + B[t4+1][t3][t5] + 4;;
          }
          for (t5=t3;t5<=t4-1;t5++) {
            B[t3+1][t3][t4] = B[t3+2][t3+1][t4] + B[t3+1][t3][t4+1] + B[t4+1][t3][t5] + 4;;
          }
        }
        if (t2 == 12) {
          for (t4=PB_Q-1;t4<=415;t4++) {
            for (t5=0;t5<=t3-1;t5++) {
              A[t3][t4][t5] = 2;;
            }
          }
        }
      }
    }
    if (t2 == 0) {
      for (t3=max(2,32*t1);t3<=min(PB_P-2,32*t1+31);t3++) {
        A[t3][0][0] = 2;;
        E[0][t3-1] = 1;;
        C[t3-1] = C[t3-1] + C[t3-1] - C[t3] + C[t3] - 2;;
        D[t3+1] = D[t3+1] + D[t3] + 5;;
        for (t5=1;t5<=t3-1;t5++) {
          A[t3][0][t5] = 2;;
        }
        for (t4=1;t4<=min(31,t3-1);t4++) {
          B[t3+1][t3][t4] = B[t3+2][t3+1][t4] + B[t3+1][t3][t4+1] + B[t4+1][t3][0] + 4;;
          A[(t4-1)][t3][t3] = A[(t4-1)][t3][t3-2] * A[(t4-1)][t3][t3+1] * 2;;
          A[t3][t4][0] = 2;;
          E[t4][t3-1] = 1;;
          for (t5=1;t5<=t4-1;t5++) {
            A[t3][t4][t5] = 2;;
            B[t3+1][t3][t4] = B[t3+2][t3+1][t4] + B[t3+1][t3][t4+1] + B[t4+1][t3][t5] + 4;;
            A[(t4-1)][t3][t3] = A[(t4-1)][t3][t3-2] * A[(t4-1)][t3][t3+1] * 2;;
          }
          for (t5=t4;t5<=t3-1;t5++) {
            A[t3][t4][t5] = 2;;
            A[(t4-1)][t3][t3] = A[(t4-1)][t3][t3-2] * A[(t4-1)][t3][t3+1] * 2;;
          }
          for (t5=t3;t5<=PB_L-1;t5++) {
            A[(t4-1)][t3][t3] = A[(t4-1)][t3][t3-2] * A[(t4-1)][t3][t3+1] * 2;;
          }
        }
        if (t1 == 0) {
          for (t5=0;t5<=t3-1;t5++) {
            A[t3][t3][t5] = 2;;
            B[t3+1][t3][t3] = B[t3+2][t3+1][t3] + B[t3+1][t3][t3+1] + B[t3+1][t3][t5] + 4;;
            A[(t3-1)][t3][t3] = A[(t3-1)][t3][t3-2] * A[(t3-1)][t3][t3+1] * 2;;
          }
          for (t5=t3;t5<=PB_L-1;t5++) {
            A[(t3-1)][t3][t3] = A[(t3-1)][t3][t3-2] * A[(t3-1)][t3][t3+1] * 2;;
          }
        }
        if (t1 == 0) {
          for (t4=t3+1;t4<=31;t4++) {
            for (t5=0;t5<=t3-1;t5++) {
              A[t3][t4][t5] = 2;;
              B[t3+1][t3][t4] = B[t3+2][t3+1][t4] + B[t3+1][t3][t4+1] + B[t4+1][t3][t5] + 4;;
            }
            for (t5=t3;t5<=t4-1;t5++) {
              B[t3+1][t3][t4] = B[t3+2][t3+1][t4] + B[t3+1][t3][t4+1] + B[t4+1][t3][t5] + 4;;
            }
          }
        }
      }
    }
    if (t2 >= 1) {
      for (t3=max(32*t1,32*t2+1);t3<=min(PB_P-2,32*t1+31);t3++) {
        for (t4=32*t2;t4<=min(32*t2+31,t3-1);t4++) {
          B[t3+1][t3][t4] = B[t3+2][t3+1][t4] + B[t3+1][t3][t4+1] + B[t4+1][t3][0] + 4;;
          A[(t4-1)][t3][t3] = A[(t4-1)][t3][t3-2] * A[(t4-1)][t3][t3+1] * 2;;
          A[t3][t4][0] = 2;;
          E[t4][t3-1] = 1;;
          for (t5=1;t5<=t4-1;t5++) {
            A[t3][t4][t5] = 2;;
            B[t3+1][t3][t4] = B[t3+2][t3+1][t4] + B[t3+1][t3][t4+1] + B[t4+1][t3][t5] + 4;;
            A[(t4-1)][t3][t3] = A[(t4-1)][t3][t3-2] * A[(t4-1)][t3][t3+1] * 2;;
          }
          for (t5=t4;t5<=t3-1;t5++) {
            A[t3][t4][t5] = 2;;
            A[(t4-1)][t3][t3] = A[(t4-1)][t3][t3-2] * A[(t4-1)][t3][t3+1] * 2;;
          }
          for (t5=t3;t5<=PB_L-1;t5++) {
            A[(t4-1)][t3][t3] = A[(t4-1)][t3][t3-2] * A[(t4-1)][t3][t3+1] * 2;;
          }
        }
        if (t1 == t2) {
          for (t5=0;t5<=t3-1;t5++) {
            A[t3][t3][t5] = 2;;
            B[t3+1][t3][t3] = B[t3+2][t3+1][t3] + B[t3+1][t3][t3+1] + B[t3+1][t3][t5] + 4;;
            A[(t3-1)][t3][t3] = A[(t3-1)][t3][t3-2] * A[(t3-1)][t3][t3+1] * 2;;
          }
          for (t5=t3;t5<=PB_L-1;t5++) {
            A[(t3-1)][t3][t3] = A[(t3-1)][t3][t3-2] * A[(t3-1)][t3][t3+1] * 2;;
          }
        }
        if (t1 == t2) {
          for (t4=t3+1;t4<=32*t1+31;t4++) {
            for (t5=0;t5<=t3-1;t5++) {
              A[t3][t4][t5] = 2;;
              B[t3+1][t3][t4] = B[t3+2][t3+1][t4] + B[t3+1][t3][t4+1] + B[t4+1][t3][t5] + 4;;
            }
            for (t5=t3;t5<=t4-1;t5++) {
              B[t3+1][t3][t4] = B[t3+2][t3+1][t4] + B[t3+1][t3][t4+1] + B[t4+1][t3][t5] + 4;;
            }
          }
        }
      }
    }
    if (t2 == 0) {
      for (t3=max(32*t1,PB_P-1);t3<=min(PB_Q-2,32*t1+31);t3++) {
        A[t3][0][0] = 2;;
        C[t3-1] = C[t3-1] + C[t3-1] - C[t3] + C[t3] - 2;;
        D[t3+1] = D[t3+1] + D[t3] + 5;;
        for (t5=1;t5<=min(PB_P-1,t3-1);t5++) {
          A[t3][0][t5] = 2;;
        }
        for (t4=1;t4<=31;t4++) {
          for (t5=0;t5<=min(PB_P-1,t3-1);t5++) {
            A[t3][t4][t5] = 2;;
          }
        }
      }
    }
    if ((t2 >= 1) && (t2 <= floord(PB_Q-2,32))) {
      for (t3=max(32*t1,PB_P-1);t3<=min(PB_Q-2,32*t1+31);t3++) {
        for (t4=32*t2;t4<=32*t2+31;t4++) {
          for (t5=0;t5<=min(PB_P-1,t3-1);t5++) {
            A[t3][t4][t5] = 2;;
          }
        }
      }
    }
    if ((t1 == 12) && (t2 == 0)) {
      for (t3=PB_Q-1;t3<=PB_N-1;t3++) {
        C[t3-1] = C[t3-1] + C[t3-1] - C[t3] + C[t3] - 2;;
        D[t3+1] = D[t3+1] + D[t3] + 5;;
      }
    }
    if (t2 == 0) {
      for (t3=max(PB_N,32*t1);t3<=min(PB_M-2,32*t1+31);t3++) {
        D[t3+1] = D[t3+1] + D[t3] + 5;;
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
int zb = zB;
int xc = xC;
int xd = xD;
int xe = xE;
int ye = yE;
POLYBENCH_3D_ARRAY_DECL(A, DATA_TYPE,xA,yA,zA,xa,ya,za);
POLYBENCH_3D_ARRAY_DECL(B, DATA_TYPE,xB,yB,zB,xb,yb,zb);
POLYBENCH_1D_ARRAY_DECL(C, DATA_TYPE,xC,xc);
POLYBENCH_1D_ARRAY_DECL(D, DATA_TYPE,xD,xd);
POLYBENCH_2D_ARRAY_DECL(E, DATA_TYPE,xE,yE,xe,ye);
init_array(xa,ya,za,POLYBENCH_ARRAY(A),xb,yb,zb,POLYBENCH_ARRAY(B),xc,POLYBENCH_ARRAY(C),xd,POLYBENCH_ARRAY(D),xe,ye,POLYBENCH_ARRAY(E),INIT_SEED);
kernel_3634221226_00(xa,ya,za,POLYBENCH_ARRAY(A),xb,yb,zb,POLYBENCH_ARRAY(B),xc,POLYBENCH_ARRAY(C),xd,POLYBENCH_ARRAY(D),xe,ye,POLYBENCH_ARRAY(E));
polybench_prevent_dce(print_array(xa,ya,za,POLYBENCH_ARRAY(A),xb,yb,zb,POLYBENCH_ARRAY(B),xc,POLYBENCH_ARRAY(C),xd,POLYBENCH_ARRAY(D),xe,ye,POLYBENCH_ARRAY(E)));
POLYBENCH_FREE_ARRAY(A);
POLYBENCH_FREE_ARRAY(B);
POLYBENCH_FREE_ARRAY(C);
POLYBENCH_FREE_ARRAY(D);
POLYBENCH_FREE_ARRAY(E);
return 0;
}
