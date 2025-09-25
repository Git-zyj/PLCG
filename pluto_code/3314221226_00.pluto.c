#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <math.h>
#include <polybench.h>
#include <time.h>
#include <stdlib.h>
#include "3314221226_00.h"
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
static void init_array(int xa,DATA_TYPE POLYBENCH_1D(A,xA,xa),int xb,int yb,int zb,DATA_TYPE POLYBENCH_3D(B,xB,yB,zB,xb,yb,zb),int xc,int yc,int zc,DATA_TYPE POLYBENCH_3D(C,xC,yC,zC,xc,yc,zc),int seed)
{
srand(seed);
int i,j,k,l;
for (i = 0; i < xa; i++) {
A[i] = rand()%3;;
}
for (i = 0; i < xb; i++) {
for (j = 0; j < yb; j++) {
for (k = 0; k < zb; k++) {
B[i][j][k] = rand()%3;;
}}}
for (i = 0; i < xc; i++) {
for (j = 0; j < yc; j++) {
for (k = 0; k < zc; k++) {
C[i][j][k] = rand()%3;;
}}}
}
static void print_array(int xa,DATA_TYPE POLYBENCH_1D(A,xA,xa),int xb,int yb,int zb,DATA_TYPE POLYBENCH_3D(B,xB,yB,zB,xb,yb,zb),int xc,int yc,int zc,DATA_TYPE POLYBENCH_3D(C,xC,yC,zC,xc,yc,zc))
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
for (k = 0; k < zb; k++) {
fprintf (POLYBENCH_DUMP_TARGET, "\n");
fprintf (POLYBENCH_DUMP_TARGET, DATA_PRINTF_MODIFIER, B[i][j][k]);
}}}
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
}
void kernel_3314221226_00(int xa,DATA_TYPE POLYBENCH_1D(A,xA,xa),int xb,int yb,int zb,DATA_TYPE POLYBENCH_3D(B,xB,yB,zB,xb,yb,zb),int xc,int yc,int zc,DATA_TYPE POLYBENCH_3D(C,xC,yC,zC,xc,yc,zc)){
polybench_start_instruments;
  int t1, t2, t3, t4, t5, t6;
 int lb, ub, lbp, ubp, lb2, ub2;
 register int lbv, ubv;
/* Start of CLooG code */
for (t1=0;t1<=floord(3*PB_P+PB_M-4,32);t1++) {
  lbp=max(0,ceild(32*t1-PB_P+1,32));
  ubp=min(min(floord(2*t1+17,3),floord(2*PB_P+PB_M-3,32)),t1);
#pragma omp parallel for private(lbv,ubv,t3,t4,t5,t6)
  for (t2=lbp;t2<=ubp;t2++) {
    for (t3=0;t3<=min(min(min(floord(PB_L-1,32),floord(160*t1-320*t2+5*PB_M+2150,372)),floord(-800*t2+25*PB_P+22475,1802)),floord(8512*t1-12768*t2+133*PB_M+187*PB_L-66687,5984));t3++) {
      if ((t1 == 0) && (t2 == 0) && (t3 == 0)) {
        for (t5=1;t5<=3;t5++) {
          C[t5][1][t5-1] = C[t5][1][t5-1] - C[t5][1][t5-1] - 3;;
        }
        for (t5=4;t5<=31;t5++) {
          A[(t5-2)] = A[(t5-2)-2] - 6;;
          C[t5][1][t5-1] = C[t5][1][t5-1] - C[t5][1][t5-1] - 3;;
        }
      }
      if ((t2 <= floord(PB_L-1,32)) && (t3 == 0)) {
        for (t4=max(1,32*t1-32*t2);t4<=min(min(32*t2,16*t2+14),32*t1-32*t2+31);t4++) {
          for (t5=32*t2;t5<=min(PB_L-1,2*t4+1);t5++) {
            for (t6=0;t6<=min(31,t4-1);t6++) {
              C[t5][t4][t5-1] = C[t5][t4][t5-1] - C[t5][t4][t5-1] - 3;;
            }
          }
          for (t5=max(32*t2,2*t4+2);t5<=min(PB_L-1,32*t2+31);t5++) {
            C[t5][t4][t5-1] = C[t5][t4][t5-1] - C[t5][t4][t5-1] - 3;;
            A[(-2*t4+t5)] = A[(-2*t4+t5)-2] - 6;;
            for (t6=1;t6<=min(31,t4-1);t6++) {
              C[t5][t4][t5-1] = C[t5][t4][t5-1] - C[t5][t4][t5-1] - 3;;
            }
          }
          if (t2 == 12) {
            for (t5=max(PB_L,2*t4+2);t5<=415;t5++) {
              A[(-2*t4+t5)] = A[(-2*t4+t5)-2] - 6;;
            }
          }
        }
      }
      if ((t2 >= ceild(PB_L,32)) && (t3 == 0)) {
        for (t4=max(max(1,ceild(32*t2-PB_M+1,2)),32*t1-32*t2);t4<=min(min(PB_P-1,16*t2+14),32*t1-32*t2+31);t4++) {
          for (t5=max(32*t2,2*t4+2);t5<=min(32*t2+31,2*t4+PB_M-1);t5++) {
            A[(-2*t4+t5)] = A[(-2*t4+t5)-2] - 6;;
          }
        }
      }
      for (t4=max(max(2,32*t1-32*t2),32*t2+1);t4<=min(32*t3,32*t1-32*t2+31);t4++) {
        for (t5=max(1,32*t2);t5<=min(32*t2+31,t4-1);t5++) {
          for (t6=32*t3;t6<=min(PB_L-1,32*t3+31);t6++) {
            B[t4][t5-1][t4] = B[t4-1][t5-1][t4] * 6;;
          }
        }
      }
      if ((t2 <= floord(PB_L-1,32)) && (t3 == 0)) {
        for (t4=max(32*t1-32*t2,16*t2+15);t4<=min(32*t2,32*t1-32*t2+31);t4++) {
          for (t5=32*t2;t5<=min(PB_L-1,32*t2+31);t5++) {
            for (t6=0;t6<=min(31,t4-1);t6++) {
              C[t5][t4][t5-1] = C[t5][t4][t5-1] - C[t5][t4][t5-1] - 3;;
            }
          }
        }
      }
      if ((t2 <= floord(PB_L-1,32)) && (t3 >= 1)) {
        for (t4=max(32*t1-32*t2,32*t3+1);t4<=min(32*t2,32*t1-32*t2+31);t4++) {
          for (t5=32*t2;t5<=min(PB_L-1,32*t2+31);t5++) {
            for (t6=32*t3;t6<=min(32*t3+31,t4-1);t6++) {
              C[t5][t4][t5-1] = C[t5][t4][t5-1] - C[t5][t4][t5-1] - 3;;
            }
          }
        }
      }
      if ((t1 == 0) && (t2 == 0) && (t3 == 0)) {
        for (t4=2;t4<=14;t4++) {
          for (t5=1;t5<=t4-1;t5++) {
            for (t6=0;t6<=t4-1;t6++) {
              B[t4][t5-1][t4] = B[t4-1][t5-1][t4] * 6;;
              C[t5][t4][t5-1] = C[t5][t4][t5-1] - C[t5][t4][t5-1] - 3;;
            }
            for (t6=t4;t6<=31;t6++) {
              B[t4][t5-1][t4] = B[t4-1][t5-1][t4] * 6;;
            }
          }
          for (t5=t4;t5<=2*t4+1;t5++) {
            for (t6=0;t6<=t4-1;t6++) {
              C[t5][t4][t5-1] = C[t5][t4][t5-1] - C[t5][t4][t5-1] - 3;;
            }
          }
          for (t5=2*t4+2;t5<=31;t5++) {
            C[t5][t4][t5-1] = C[t5][t4][t5-1] - C[t5][t4][t5-1] - 3;;
            A[(-2*t4+t5)] = A[(-2*t4+t5)-2] - 6;;
            for (t6=1;t6<=t4-1;t6++) {
              C[t5][t4][t5-1] = C[t5][t4][t5-1] - C[t5][t4][t5-1] - 3;;
            }
          }
        }
      }
      if (t3 == 0) {
        for (t4=max(max(32*t1-32*t2,16*t2+15),32*t2+1);t4<=min(PB_P-1,32*t1-32*t2+31);t4++) {
          for (t5=max(1,32*t2);t5<=min(32*t2+31,t4-1);t5++) {
            for (t6=0;t6<=min(31,t4-1);t6++) {
              B[t4][t5-1][t4] = B[t4-1][t5-1][t4] * 6;;
              C[t5][t4][t5-1] = C[t5][t4][t5-1] - C[t5][t4][t5-1] - 3;;
            }
            if ((t1 == 0) && (t2 == 0)) {
              for (t6=t4;t6<=31;t6++) {
                B[t4][t5-1][t4] = B[t4-1][t5-1][t4] * 6;;
              }
            }
          }
          if (t1 == 2*t2) {
            for (t5=t4;t5<=min(PB_L-1,16*t1+31);t5++) {
              for (t6=0;t6<=min(31,t4-1);t6++) {
                if (t1%2 == 0) {
                  C[t5][t4][t5-1] = C[t5][t4][t5-1] - C[t5][t4][t5-1] - 3;;
                }
              }
            }
          }
        }
      }
      if (t3 >= 1) {
        for (t4=max(max(32*t1-32*t2,32*t2+1),32*t3+1);t4<=min(PB_P-1,32*t1-32*t2+31);t4++) {
          for (t5=max(1,32*t2);t5<=min(32*t2+31,t4-1);t5++) {
            for (t6=32*t3;t6<=min(32*t3+31,t4-1);t6++) {
              B[t4][t5-1][t4] = B[t4-1][t5-1][t4] * 6;;
              C[t5][t4][t5-1] = C[t5][t4][t5-1] - C[t5][t4][t5-1] - 3;;
            }
            if (t1 == t2+t3) {
              for (t6=t4;t6<=min(PB_L-1,32*t1-32*t2+31);t6++) {
                B[t4][t5-1][t4] = B[t4-1][t5-1][t4] * 6;;
              }
            }
          }
          if (t1 == 2*t2) {
            for (t5=t4;t5<=min(PB_L-1,16*t1+31);t5++) {
              for (t6=32*t3;t6<=min(32*t3+31,t4-1);t6++) {
                if (t1%2 == 0) {
                  C[t5][t4][t5-1] = C[t5][t4][t5-1] - C[t5][t4][t5-1] - 3;;
                }
              }
            }
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
int xb = xB;
int yb = yB;
int zb = zB;
int xc = xC;
int yc = yC;
int zc = zC;
POLYBENCH_1D_ARRAY_DECL(A, DATA_TYPE,xA,xa);
POLYBENCH_3D_ARRAY_DECL(B, DATA_TYPE,xB,yB,zB,xb,yb,zb);
POLYBENCH_3D_ARRAY_DECL(C, DATA_TYPE,xC,yC,zC,xc,yc,zc);
init_array(xa,POLYBENCH_ARRAY(A),xb,yb,zb,POLYBENCH_ARRAY(B),xc,yc,zc,POLYBENCH_ARRAY(C),INIT_SEED);
kernel_3314221226_00(xa,POLYBENCH_ARRAY(A),xb,yb,zb,POLYBENCH_ARRAY(B),xc,yc,zc,POLYBENCH_ARRAY(C));
polybench_prevent_dce(print_array(xa,POLYBENCH_ARRAY(A),xb,yb,zb,POLYBENCH_ARRAY(B),xc,yc,zc,POLYBENCH_ARRAY(C)));
POLYBENCH_FREE_ARRAY(A);
POLYBENCH_FREE_ARRAY(B);
POLYBENCH_FREE_ARRAY(C);
return 0;
}
