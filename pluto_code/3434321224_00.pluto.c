#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <math.h>
#include <polybench.h>
#include <time.h>
#include <stdlib.h>
#include "3434321224_00.h"
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
static void init_array(int xa,DATA_TYPE POLYBENCH_1D(A,xA,xa),int xb,int yb,DATA_TYPE POLYBENCH_2D(B,xB,yB,xb,yb),int xc,int yc,DATA_TYPE POLYBENCH_2D(C,xC,yC,xc,yc),int xd,int yd,DATA_TYPE POLYBENCH_2D(D,xD,yD,xd,yd),int seed)
{
srand(seed);
int i,j,k,l;
for (i = 0; i < xa; i++) {
A[i] = rand()%3;;
}
for (i = 0; i < xb; i++) {
for (j = 0; j < yb; j++) {
B[i][j] = rand()%3;;
}}
for (i = 0; i < xc; i++) {
for (j = 0; j < yc; j++) {
C[i][j] = rand()%3;;
}}
for (i = 0; i < xd; i++) {
for (j = 0; j < yd; j++) {
D[i][j] = rand()%3;;
}}
}
static void print_array(int xa,DATA_TYPE POLYBENCH_1D(A,xA,xa),int xb,int yb,DATA_TYPE POLYBENCH_2D(B,xB,yB,xb,yb),int xc,int yc,DATA_TYPE POLYBENCH_2D(C,xC,yC,xc,yc),int xd,int yd,DATA_TYPE POLYBENCH_2D(D,xD,yD,xd,yd))
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
for (j = 0; j < yd; j++) {
fprintf (POLYBENCH_DUMP_TARGET, "\n");
fprintf (POLYBENCH_DUMP_TARGET, DATA_PRINTF_MODIFIER, D[i][j]);
}}
POLYBENCH_DUMP_END("D");
POLYBENCH_DUMP_FINISH;
}
void kernel_3434321224_00(int xa,DATA_TYPE POLYBENCH_1D(A,xA,xa),int xb,int yb,DATA_TYPE POLYBENCH_2D(B,xB,yB,xb,yb),int xc,int yc,DATA_TYPE POLYBENCH_2D(C,xC,yC,xc,yc),int xd,int yd,DATA_TYPE POLYBENCH_2D(D,xD,yD,xd,yd)){
polybench_start_instruments;
  int t1, t2, t3, t4;
 int lb, ub, lbp, ubp, lb2, ub2;
 register int lbv, ubv;
/* Start of CLooG code */
for (t1=0;t1<=floord(PB_L+47988*PB_N+15996*PB_M-121972,511872);t1++) {
  lbp=max(0,ceild(511968*t1-PB_L-15999*PB_N+16000,511936));
  ubp=min(floord(64*t1+PB_M+61,96),t1);
#pragma omp parallel for private(lbv,ubv,t3,t4)
  for (t2=lbp;t2<=ubp;t2++) {
    for (t3=max(32*t1-32*t2,32*t2+32);t3<=min(PB_N-2,32*t1-32*t2+31);t3++) {
      for (t4=32*t2;t4<=32*t2+31;t4++) {
        A[t3] = 6;;
        B[t3+1][t4] = 3;;
      }
    }
    if ((t1 == t2) && (t1 <= floord(PB_L-1,32))) {
      for (t4=32*t1;t4<=min(PB_L-1,32*t1+31);t4++) {
        A[0] = 6;;
      }
    }
    for (t3=max(ceild(32*t2-PB_M+1,2),32*t1-32*t2);t3<=min(min(PB_N-2,32*t1-32*t2+31),32*t2-PB_L+1);t3++) {
      for (t4=32*t2;t4<=min(32*t2+31,2*t3+PB_M-1);t4++) {
        B[t3-1][t3] = B[t3-1][t3] * B[t3-1][t3+2] - D[t3+1][(-2*t3+t4)] + D[t3][(-2*t3+t4)] - 1;;
      }
    }
    if ((t1 == 0) && (t2 == 0)) {
      for (t3=1;t3<=15;t3++) {
        for (t4=0;t4<=t3-1;t4++) {
          A[t3] = 6;;
          B[t3+1][t4] = 3;;
        }
        for (t4=t3;t4<=2*t3-1;t4++) {
          A[t3] = 6;;
          B[t3+1][(-t3+t4)+1] = B[t3+1][(-t3+t4)] + C[(-t3+t4)+1][t3] * B[(-t3+t4)][(-t3+t4)] * 3;;
        }
        for (t4=2*t3;t4<=31;t4++) {
          A[t3] = 6;;
          B[t3+1][(-t3+t4)+1] = B[t3+1][(-t3+t4)] + C[(-t3+t4)+1][t3] * B[(-t3+t4)][(-t3+t4)] * 3;;
          B[t3-1][t3] = B[t3-1][t3] * B[t3-1][t3+2] - D[t3+1][(-2*t3+t4)] + D[t3][(-2*t3+t4)] - 1;;
        }
      }
    }
    if (t2 <= floord(PB_L-1,32)) {
      for (t3=max(1,32*t1-32*t2);t3<=min(min(32*t2,16*t2+15),32*t1-32*t2+31);t3++) {
        for (t4=32*t2;t4<=min(PB_L-1,2*t3-1);t4++) {
          A[t3] = 6;;
          B[t3+1][(-t3+t4)+1] = B[t3+1][(-t3+t4)] + C[(-t3+t4)+1][t3] * B[(-t3+t4)][(-t3+t4)] * 3;;
        }
        if ((t1 == 468) && (t2 == 312)) {
          for (t4=PB_L;t4<=2*t3-1;t4++) {
            B[t3+1][(-t3+t4)+1] = B[t3+1][(-t3+t4)] + C[(-t3+t4)+1][t3] * B[(-t3+t4)][(-t3+t4)] * 3;;
          }
        }
        for (t4=max(32*t2,2*t3);t4<=min(PB_L-1,32*t2+31);t4++) {
          A[t3] = 6;;
          B[t3+1][(-t3+t4)+1] = B[t3+1][(-t3+t4)] + C[(-t3+t4)+1][t3] * B[(-t3+t4)][(-t3+t4)] * 3;;
          B[t3-1][t3] = B[t3-1][t3] * B[t3-1][t3+2] - D[t3+1][(-2*t3+t4)] + D[t3][(-2*t3+t4)] - 1;;
        }
        if (t2 == 312) {
          for (t4=max(PB_L,2*t3);t4<=min(10015,t3+PB_L-2);t4++) {
            B[t3+1][(-t3+t4)+1] = B[t3+1][(-t3+t4)] + C[(-t3+t4)+1][t3] * B[(-t3+t4)][(-t3+t4)] * 3;;
            B[t3-1][t3] = B[t3-1][t3] * B[t3-1][t3+2] - D[t3+1][(-2*t3+t4)] + D[t3][(-2*t3+t4)] - 1;;
          }
        }
        if ((t1 == 312) && (t2 == 312)) {
          for (t4=t3+PB_L-1;t4<=min(10015,2*t3+PB_M-1);t4++) {
            B[t3-1][t3] = B[t3-1][t3] * B[t3-1][t3+2] - D[t3+1][(-2*t3+t4)] + D[t3][(-2*t3+t4)] - 1;;
          }
        }
      }
    }
    if (t2 <= floord(PB_L-1,32)) {
      for (t3=max(32*t1-32*t2,16*t2+16);t3<=min(min(32*t2,PB_N-2),32*t1-32*t2+31);t3++) {
        for (t4=32*t2;t4<=min(PB_L-1,32*t2+31);t4++) {
          A[t3] = 6;;
          B[t3+1][(-t3+t4)+1] = B[t3+1][(-t3+t4)] + C[(-t3+t4)+1][t3] * B[(-t3+t4)][(-t3+t4)] * 3;;
        }
        if (t2 == 312) {
          for (t4=PB_L;t4<=10015;t4++) {
            B[t3+1][(-t3+t4)+1] = B[t3+1][(-t3+t4)] + C[(-t3+t4)+1][t3] * B[(-t3+t4)][(-t3+t4)] * 3;;
          }
        }
      }
    }
    if ((t1 == t2+PB_N-7751) && (t1 <= floord(PB_L+32*PB_N-248033,32)) && (t1 >= ceild(33*PB_N-248033,32))) {
      for (t4=32*t1-32*PB_N+248032;t4<=min(PB_L-1,32*t1-32*PB_N+248063);t4++) {
        A[(PB_N-1)] = 6;;
      }
    }
    if (t2 >= ceild(PB_L,32)) {
      for (t3=max(32*t1-32*t2,32*t2-PB_L+2);t3<=min(min(PB_N-2,16*t2+15),32*t1-32*t2+31);t3++) {
        for (t4=32*t2;t4<=2*t3-1;t4++) {
          B[t3+1][(-t3+t4)+1] = B[t3+1][(-t3+t4)] + C[(-t3+t4)+1][t3] * B[(-t3+t4)][(-t3+t4)] * 3;;
        }
        for (t4=max(32*t2,2*t3);t4<=min(32*t2+31,t3+PB_L-2);t4++) {
          B[t3+1][(-t3+t4)+1] = B[t3+1][(-t3+t4)] + C[(-t3+t4)+1][t3] * B[(-t3+t4)][(-t3+t4)] * 3;;
          B[t3-1][t3] = B[t3-1][t3] * B[t3-1][t3+2] - D[t3+1][(-2*t3+t4)] + D[t3][(-2*t3+t4)] - 1;;
        }
        for (t4=t3+PB_L-1;t4<=min(32*t2+31,2*t3+PB_M-1);t4++) {
          B[t3-1][t3] = B[t3-1][t3] * B[t3-1][t3+2] - D[t3+1][(-2*t3+t4)] + D[t3][(-2*t3+t4)] - 1;;
        }
      }
    }
    if (t2 >= ceild(PB_L,32)) {
      for (t3=max(32*t1-32*t2,16*t2+16);t3<=min(PB_N-2,32*t1-32*t2+31);t3++) {
        for (t4=32*t2;t4<=32*t2+31;t4++) {
          B[t3+1][(-t3+t4)+1] = B[t3+1][(-t3+t4)] + C[(-t3+t4)+1][t3] * B[(-t3+t4)][(-t3+t4)] * 3;;
        }
      }
    }
    if (t1 == 2*t2) {
      for (t3=max(8*t1+16,16*t1+1);t3<=min(PB_N-2,16*t1+31);t3++) {
        for (t4=16*t1;t4<=t3-1;t4++) {
          if (t1%2 == 0) {
            A[t3] = 6;;
          }
          if (t1%2 == 0) {
            B[t3+1][t4] = 3;;
          }
        }
        for (t4=t3;t4<=16*t1+31;t4++) {
          if (t1%2 == 0) {
            A[t3] = 6;;
          }
          if (t1%2 == 0) {
            B[t3+1][(-t3+t4)+1] = B[t3+1][(-t3+t4)] + C[(-t3+t4)+1][t3] * B[(-t3+t4)][(-t3+t4)] * 3;;
          }
        }
      }
    }
    if ((t1 == t2+PB_N-7751) && (t1 <= floord(33*PB_N-248034,32))) {
      for (t4=32*t1-32*PB_N+248032;t4<=32*t1-32*PB_N+248063;t4++) {
        A[(PB_N-1)] = 6;;
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
int xb = xB;
int yb = yB;
int xc = xC;
int yc = yC;
int xd = xD;
int yd = yD;
POLYBENCH_1D_ARRAY_DECL(A, DATA_TYPE,xA,xa);
POLYBENCH_2D_ARRAY_DECL(B, DATA_TYPE,xB,yB,xb,yb);
POLYBENCH_2D_ARRAY_DECL(C, DATA_TYPE,xC,yC,xc,yc);
POLYBENCH_2D_ARRAY_DECL(D, DATA_TYPE,xD,yD,xd,yd);
init_array(xa,POLYBENCH_ARRAY(A),xb,yb,POLYBENCH_ARRAY(B),xc,yc,POLYBENCH_ARRAY(C),xd,yd,POLYBENCH_ARRAY(D),INIT_SEED);
kernel_3434321224_00(xa,POLYBENCH_ARRAY(A),xb,yb,POLYBENCH_ARRAY(B),xc,yc,POLYBENCH_ARRAY(C),xd,yd,POLYBENCH_ARRAY(D));
polybench_prevent_dce(print_array(xa,POLYBENCH_ARRAY(A),xb,yb,POLYBENCH_ARRAY(B),xc,yc,POLYBENCH_ARRAY(C),xd,yd,POLYBENCH_ARRAY(D)));
POLYBENCH_FREE_ARRAY(A);
POLYBENCH_FREE_ARRAY(B);
POLYBENCH_FREE_ARRAY(C);
POLYBENCH_FREE_ARRAY(D);
return 0;
}
