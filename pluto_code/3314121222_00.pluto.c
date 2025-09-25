#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <math.h>
#include <polybench.h>
#include <time.h>
#include <stdlib.h>
#include "3314121222_00.h"
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
static void init_array(int xa,int ya,DATA_TYPE POLYBENCH_2D(A,xA,yA,xa,ya),int xb,int yb,int zb,DATA_TYPE POLYBENCH_3D(B,xB,yB,zB,xb,yb,zb),int xc,DATA_TYPE POLYBENCH_1D(C,xC,xc),int seed)
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
for (i = 0; i < xc; i++) {
C[i] = rand()%3;;
}
}
static void print_array(int xa,int ya,DATA_TYPE POLYBENCH_2D(A,xA,yA,xa,ya),int xb,int yb,int zb,DATA_TYPE POLYBENCH_3D(B,xB,yB,zB,xb,yb,zb),int xc,DATA_TYPE POLYBENCH_1D(C,xC,xc))
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
POLYBENCH_DUMP_BEGIN("C");
for (i = 0; i < xc; i++) {
fprintf (POLYBENCH_DUMP_TARGET, "\n");
fprintf (POLYBENCH_DUMP_TARGET, DATA_PRINTF_MODIFIER, C[i]);
}
POLYBENCH_DUMP_END("C");
POLYBENCH_DUMP_FINISH;
}
void kernel_3314121222_00(int xa,int ya,DATA_TYPE POLYBENCH_2D(A,xA,yA,xa,ya),int xb,int yb,int zb,DATA_TYPE POLYBENCH_3D(B,xB,yB,zB,xb,yb,zb),int xc,DATA_TYPE POLYBENCH_1D(C,xC,xc)){
polybench_start_instruments;
  int t1, t2, t3, t4, t5;
 int lb, ub, lbp, ubp, lb2, ub2;
 register int lbv, ubv;
/* Start of CLooG code */
for (t1=0;t1<=floord(PB_M-1,32);t1++) {
  for (t2=0;t2<=floord(32*t1+PB_L+29,16);t2++) {
    if ((t1 == 0) && (t2 <= floord(PB_L-1,32))) {
      for (t3=0;t3<=min(1,t2);t3++) {
        for (t4=32*t2;t4<=min(PB_L-1,32*t2+31);t4++) {
          for (t5=1;t5<=PB_M-2;t5++) {
            A[t5+1][t3+1] = A[t5+1][t3+1] - A[t5][t3+1] * B[t3][t5-1][t4] + 5;;
          }
        }
      }
    }
    if (t2 >= ceild(PB_L,32)) {
      for (t3=max(max(2,32*t1),16*t2-PB_L+2);t3<=min(min(PB_M-1,32*t1+31),16*t2+15);t3++) {
        for (t4=max(32*t2,2*t3);t4<=min(32*t2+31,2*t3+2*PB_L-4);t4++) {
          for (t5=max(1,-2*t3+t4-PB_L+3);t5<=min(PB_L-1,-2*t3+t4+1);t5++) {
            B[(t3-1)+1][(-2*t3+t4-t5+2)-1][t5-1] = B[t5+1][(-2*t3+t4-t5+2)][t5] + B[t5][(t3-1)-1][(-2*t3+t4-t5+2)] * 2;;
          }
        }
      }
    }
    if ((t2 >= 1) && (t2 <= floord(PB_L-1,32))) {
      for (t3=max(2,32*t1);t3<=min(32*t1+31,16*t2+15);t3++) {
        for (t4=32*t2;t4<=min(PB_L-1,2*t3-1);t4++) {
          for (t5=1;t5<=PB_M-2;t5++) {
            A[t5+1][t3+1] = A[t5+1][t3+1] - A[t5][t3+1] * B[t3][t5-1][t4] + 5;;
          }
        }
        for (t4=max(32*t2,2*t3);t4<=min(PB_L-1,32*t2+31);t4++) {
          for (t5=1;t5<=-2*t3+t4+1;t5++) {
            A[t5+1][t3+1] = A[t5+1][t3+1] - A[t5][t3+1] * B[t3][t5-1][t4] + 5;;
            B[(t3-1)+1][(-2*t3+t4-t5+2)-1][t5-1] = B[t5+1][(-2*t3+t4-t5+2)][t5] + B[t5][(t3-1)-1][(-2*t3+t4-t5+2)] * 2;;
          }
          for (t5=-2*t3+t4+2;t5<=PB_M-2;t5++) {
            A[t5+1][t3+1] = A[t5+1][t3+1] - A[t5][t3+1] * B[t3][t5-1][t4] + 5;;
          }
        }
        if (t2 == 12) {
          for (t4=max(PB_L,2*t3);t4<=415;t4++) {
            for (t5=max(1,-2*t3+t4-PB_L+3);t5<=min(PB_L-1,-2*t3+t4+1);t5++) {
              B[(t3-1)+1][(-2*t3+t4-t5+2)-1][t5-1] = B[t5+1][(-2*t3+t4-t5+2)][t5] + B[t5][(t3-1)-1][(-2*t3+t4-t5+2)] * 2;;
            }
          }
        }
      }
    }
    if ((t2 >= 1) && (t2 <= floord(PB_L-1,32))) {
      for (t3=max(32*t1,16*t2+16);t3<=min(PB_L-2,32*t1+31);t3++) {
        for (t4=32*t2;t4<=min(PB_L-1,32*t2+31);t4++) {
          for (t5=1;t5<=PB_M-2;t5++) {
            A[t5+1][t3+1] = A[t5+1][t3+1] - A[t5][t3+1] * B[t3][t5-1][t4] + 5;;
          }
        }
      }
    }
    if ((t1 == 0) && (t2 == 0)) {
      C[1 -1] = C[1 -1] * C[1] - C[1 -1] + 4;;
      for (t4=0;t4<=31;t4++) {
        for (t5=1;t5<=PB_M-2;t5++) {
          A[t5+1][1 +1] = A[t5+1][1 +1] - A[t5][1 +1] * B[1][t5-1][t4] + 5;;
        }
      }
    }
    if ((t1 == 0) && (t2 == 0)) {
      for (t3=2;t3<=15;t3++) {
        C[t3-1] = C[t3-1] * C[t3] - C[t3-1] + 4;;
        for (t4=0;t4<=2*t3-1;t4++) {
          for (t5=1;t5<=PB_M-2;t5++) {
            A[t5+1][t3+1] = A[t5+1][t3+1] - A[t5][t3+1] * B[t3][t5-1][t4] + 5;;
          }
        }
        for (t4=2*t3;t4<=31;t4++) {
          for (t5=1;t5<=-2*t3+t4+1;t5++) {
            A[t5+1][t3+1] = A[t5+1][t3+1] - A[t5][t3+1] * B[t3][t5-1][t4] + 5;;
            B[(t3-1)+1][(-2*t3+t4-t5+2)-1][t5-1] = B[t5+1][(-2*t3+t4-t5+2)][t5] + B[t5][(t3-1)-1][(-2*t3+t4-t5+2)] * 2;;
          }
          for (t5=-2*t3+t4+2;t5<=PB_M-2;t5++) {
            A[t5+1][t3+1] = A[t5+1][t3+1] - A[t5][t3+1] * B[t3][t5-1][t4] + 5;;
          }
        }
      }
    }
    if (t2 == 0) {
      for (t3=max(16,32*t1);t3<=min(PB_L-2,32*t1+31);t3++) {
        C[t3-1] = C[t3-1] * C[t3] - C[t3-1] + 4;;
        for (t4=0;t4<=31;t4++) {
          for (t5=1;t5<=PB_M-2;t5++) {
            A[t5+1][t3+1] = A[t5+1][t3+1] - A[t5][t3+1] * B[t3][t5-1][t4] + 5;;
          }
        }
      }
    }
    if (t2 == 0) {
      for (t3=max(32*t1,PB_L-1);t3<=min(PB_M-2,32*t1+31);t3++) {
        C[t3-1] = C[t3-1] * C[t3] - C[t3-1] + 4;;
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
int xc = xC;
POLYBENCH_2D_ARRAY_DECL(A, DATA_TYPE,xA,yA,xa,ya);
POLYBENCH_3D_ARRAY_DECL(B, DATA_TYPE,xB,yB,zB,xb,yb,zb);
POLYBENCH_1D_ARRAY_DECL(C, DATA_TYPE,xC,xc);
init_array(xa,ya,POLYBENCH_ARRAY(A),xb,yb,zb,POLYBENCH_ARRAY(B),xc,POLYBENCH_ARRAY(C),INIT_SEED);
kernel_3314121222_00(xa,ya,POLYBENCH_ARRAY(A),xb,yb,zb,POLYBENCH_ARRAY(B),xc,POLYBENCH_ARRAY(C));
polybench_prevent_dce(print_array(xa,ya,POLYBENCH_ARRAY(A),xb,yb,zb,POLYBENCH_ARRAY(B),xc,POLYBENCH_ARRAY(C)));
POLYBENCH_FREE_ARRAY(A);
POLYBENCH_FREE_ARRAY(B);
POLYBENCH_FREE_ARRAY(C);
return 0;
}
