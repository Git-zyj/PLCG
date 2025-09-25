#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <math.h>
#include <polybench.h>
#include <time.h>
#include <stdlib.h>
#include "3434121224_00.h"
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
static void init_array(int xa,int ya,int za,DATA_TYPE POLYBENCH_3D(A,xA,yA,zA,xa,ya,za),int xb,int yb,DATA_TYPE POLYBENCH_2D(B,xB,yB,xb,yb),int xc,DATA_TYPE POLYBENCH_1D(C,xC,xc),int seed)
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
B[i][j] = rand()%3;;
}}
for (i = 0; i < xc; i++) {
C[i] = rand()%3;;
}
}
static void print_array(int xa,int ya,int za,DATA_TYPE POLYBENCH_3D(A,xA,yA,zA,xa,ya,za),int xb,int yb,DATA_TYPE POLYBENCH_2D(B,xB,yB,xb,yb),int xc,DATA_TYPE POLYBENCH_1D(C,xC,xc))
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
}
void kernel_3434121224_00(int xa,int ya,int za,DATA_TYPE POLYBENCH_3D(A,xA,yA,zA,xa,ya,za),int xb,int yb,DATA_TYPE POLYBENCH_2D(B,xB,yB,xb,yb),int xc,DATA_TYPE POLYBENCH_1D(C,xC,xc)){
polybench_start_instruments;
  int t1, t2, t3, t4, t5, t6, t7;
 int lb, ub, lbp, ubp, lb2, ub2;
 register int lbv, ubv;
/* Start of CLooG code */
for (t1=0;t1<=floord(PB_M,32);t1++) {
  for (t2=ceild(-256*t1-67*PB_L-2333,22433);t2<=floord(PB_M-2,32);t2++) {
    for (t3=0;t3<=min(min(min(min(min(min(floord(83*t2+83,8),floord(PB_L-1,16)),floord(1200*t1+1200*t2+67*PB_L+1133,2272)),floord(2360*t1+216*t2+67*PB_L+1958,2360)),floord(256*t1+2400*t2+67*PB_L+2333,2400)),floord(-9600*t2+101*PB_L+119899,3232)),floord(3232*t1-864*t2+128*PB_L+27*PB_P-8228,3232));t3++) {
      if ((t1 == 0) && (t2 == 0) && (t3 == 0)) {
        for (t5=0;t5<=31;t5++) {
          for (t6=0;t6<=31;t6++) {
            A[1 -1][t6][(t5-1)+1] = 4;;
          }
        }
      }
      if ((t1 == 0) && (t2 <= t3) && (t3 >= 1) && (t3 <= floord(PB_L-1,32))) {
        for (t4=1;t4<=3;t4++) {
          for (t5=32*t2;t5<=32*t2+31;t5++) {
            for (t6=32*t3;t6<=min(PB_L-1,32*t3+31);t6++) {
              A[t4-1][t6][(t5-1)+1] = 4;;
            }
          }
        }
      }
      if ((t1 == 0) && (t2 >= 1) && (t2 <= floord(PB_L-2,32)) && (t3 == 0)) {
        for (t5=32*t2;t5<=32*t2+31;t5++) {
          for (t6=0;t6<=31;t6++) {
            A[1 -1][t6][(t5-1)+1] = 4;;
          }
        }
      }
      if ((t2 <= floord(PB_L-2,32)) && (t2 >= t3+1) && (t3 >= 1)) {
        for (t4=max(1,32*t1);t4<=min(PB_M,32*t1+31);t4++) {
          for (t5=32*t2;t5<=32*t2+31;t5++) {
            for (t6=32*t3;t6<=32*t3+31;t6++) {
              A[t4-1][t6][(t5-1)+1] = 4;;
            }
          }
        }
      }
      if ((t1 == 0) && (t2 <= floord(PB_P-1,32)) && (t2 >= ceild(PB_L-1,32)) && (t3 == 0)) {
        for (t5=32*t2;t5<=min(PB_P-1,32*t2+31);t5++) {
          for (t6=0;t6<=31;t6++) {
            A[1 -1][t6][(t5-1)+1] = 4;;
          }
        }
      }
      if ((t2 <= floord(PB_P-1,32)) && (t2 >= ceild(PB_L-1,32)) && (t3 >= 1) && (t3 <= floord(PB_L-1,32))) {
        for (t4=max(1,32*t1);t4<=min(PB_M,32*t1+31);t4++) {
          for (t5=32*t2;t5<=min(PB_P-1,32*t2+31);t5++) {
            for (t6=32*t3;t6<=min(PB_L-1,32*t3+31);t6++) {
              A[t4-1][t6][(t5-1)+1] = 4;;
            }
          }
        }
      }
      if ((t2 <= floord(PB_L-2,32)) && (t3 >= ceild(PB_L,32))) {
        for (t4=max(max(32*t1,-32*t2+32*t3-28),32*t3-PB_L+5);t4<=min(PB_M,32*t1+31);t4++) {
          for (t5=max(max(32*t2,32*t3-PB_L),32*t3-t4+3);t5<=min(PB_L-2,32*t2+31);t5++) {
            for (t6=32*t3;t6<=min(min(32*t3+31,t5+PB_L),t4+t5-3);t6++) {
              A[(t4-2)+1][(-t5+t6)-1][t5] = A[(t4-2)+1][(-t5+t6)-1][t5] - A[(t4-2)+1][t5+1][t5] - 1;;
            }
          }
        }
      }
      if ((t2 >= ceild(PB_P,32)) && (t3 == 0)) {
        for (t4=max(2,32*t1);t4<=min(PB_M-1,32*t1+31);t4++) {
          for (t5=32*t2;t5<=min(PB_M-2,32*t2+31);t5++) {
            B[t4][t5+1] = 1;;
          }
        }
      }
      if ((t2 == -1) && (t3 == 0)) {
        for (t4=max(2,32*t1);t4<=min(PB_M-1,32*t1+31);t4++) {
          B[t4][-1 +1] = 1;;
        }
      }
      if (t3 <= floord(PB_L-1,32)) {
        for (t4=max(4,32*t1);t4<=min(32*t1+31,-32*t2+32*t3-29);t4++) {
          for (t5=32*t2;t5<=32*t2+31;t5++) {
            for (t6=32*t3;t6<=min(PB_L-1,32*t3+31);t6++) {
              A[t4-1][t6][(t5-1)+1] = 4;;
            }
          }
        }
      }
      if ((t1 == 0) && (t2 == 0) && (t3 == 0)) {
        for (t4=2;t4<=3;t4++) {
          C[t4] = C[t4-2] + C[t4] * C[t4-1] + 4;;
          for (t5=0;t5<=31;t5++) {
            B[t4][t5+1] = 1;;
            for (t6=0;t6<=31;t6++) {
              A[t4-1][t6][(t5-1)+1] = 4;;
            }
          }
        }
      }
      if ((t2 >= 1) && (t2 <= floord(PB_L-2,32)) && (t3 == 0)) {
        for (t4=max(2,32*t1);t4<=min(PB_M-1,32*t1+31);t4++) {
          for (t5=32*t2;t5<=32*t2+31;t5++) {
            B[t4][t5+1] = 1;;
            for (t6=0;t6<=31;t6++) {
              A[t4-1][t6][(t5-1)+1] = 4;;
            }
          }
        }
      }
      if ((t1 == 15) && (t2 >= 1) && (t2 <= floord(PB_L-2,32)) && (t3 == 0)) {
        for (t5=32*t2;t5<=32*t2+31;t5++) {
          for (t6=0;t6<=31;t6++) {
            A[PB_M-1][t6][(t5-1)+1] = 4;;
          }
        }
      }
      if ((t2 <= floord(PB_P-1,32)) && (t2 >= ceild(PB_L-1,32)) && (t3 == 0)) {
        for (t4=max(2,32*t1);t4<=min(PB_M-1,32*t1+31);t4++) {
          for (t5=32*t2;t5<=min(PB_P-1,32*t2+31);t5++) {
            B[t4][t5+1] = 1;;
            for (t6=0;t6<=31;t6++) {
              A[t4-1][t6][(t5-1)+1] = 4;;
            }
          }
          if (t2 == 12) {
            for (t5=PB_P;t5<=415;t5++) {
              B[t4][t5+1] = 1;;
            }
          }
        }
      }
      if ((t1 == 15) && (t2 <= floord(PB_P-1,32)) && (t2 >= ceild(PB_L-1,32)) && (t3 == 0)) {
        for (t5=32*t2;t5<=min(PB_P-1,32*t2+31);t5++) {
          for (t6=0;t6<=31;t6++) {
            A[PB_M-1][t6][(t5-1)+1] = 4;;
          }
        }
      }
      if ((t2 == 0) && (t3 == 0)) {
        for (t4=max(4,32*t1);t4<=min(PB_M-1,32*t1+31);t4++) {
          C[t4] = C[t4-2] + C[t4] * C[t4-1] + 4;;
          for (t5=0;t5<=30;t5++) {
            B[t4][t5+1] = 1;;
            for (t6=0;t6<=t5;t6++) {
              A[t4-1][t6][(t5-1)+1] = 4;;
            }
            for (t6=t5+1;t6<=min(31,t4+t5-3);t6++) {
              A[t4-1][t6][(t5-1)+1] = 4;;
              A[(t4-2)+1][(-t5+t6)-1][t5] = A[(t4-2)+1][(-t5+t6)-1][t5] - A[(t4-2)+1][t5+1][t5] - 1;;
            }
            for (t6=t4+t5-2;t6<=31;t6++) {
              A[t4-1][t6][(t5-1)+1] = 4;;
            }
          }
          B[t4][31 +1] = 1;;
          for (t6=0;t6<=31;t6++) {
            A[t4-1][t6][30 +1] = 4;;
          }
        }
      }
      if ((t1 == 15) && (t2 == 0) && (t3 == 0)) {
        for (t5=0;t5<=30;t5++) {
          for (t6=0;t6<=t5;t6++) {
            A[PB_M-1][t6][(t5-1)+1] = 4;;
          }
          for (t6=t5+1;t6<=31;t6++) {
            A[PB_M-1][t6][(t5-1)+1] = 4;;
            A[(PB_M-2)+1][(-t5+t6)-1][t5] = A[(PB_M-2)+1][(-t5+t6)-1][t5] - A[(PB_M-2)+1][t5+1][t5] - 1;;
          }
        }
        for (t6=0;t6<=31;t6++) {
          A[PB_M-1][t6][30 +1] = 4;;
        }
      }
      if ((t2 <= t3) && (t3 >= 1) && (t3 <= floord(PB_L-1,32))) {
        for (t4=max(max(4,32*t1),-32*t2+32*t3-28);t4<=min(PB_M,32*t1+31);t4++) {
          for (t5=32*t2;t5<=32*t3-t4+2;t5++) {
            for (t6=32*t3;t6<=min(PB_L-1,32*t3+31);t6++) {
              A[t4-1][t6][(t5-1)+1] = 4;;
            }
          }
          for (t5=max(32*t2,32*t3-t4+3);t5<=min(min(PB_L-2,32*t2+31),32*t3+30);t5++) {
            if (t2 == t3) {
              for (t6=32*t2;t6<=t5;t6++) {
                A[t4-1][t6][(t5-1)+1] = 4;;
              }
            }
            for (t6=max(32*t3,t5+1);t6<=min(min(PB_L-1,32*t3+31),t4+t5-3);t6++) {
              A[t4-1][t6][(t5-1)+1] = 4;;
              A[(t4-2)+1][(-t5+t6)-1][t5] = A[(t4-2)+1][(-t5+t6)-1][t5] - A[(t4-2)+1][t5+1][t5] - 1;;
            }
            for (t6=t4+t5-2;t6<=min(PB_L-1,32*t3+31);t6++) {
              A[t4-1][t6][(t5-1)+1] = 4;;
            }
            if (t3 == 9) {
              for (t6=PB_L;t6<=min(min(319,t5+PB_L),t4+t5-3);t6++) {
                A[(t4-2)+1][(-t5+t6)-1][t5] = A[(t4-2)+1][(-t5+t6)-1][t5] - A[(t4-2)+1][t5+1][t5] - 1;;
              }
            }
          }
          if ((t2 == 9) && (t3 == 9)) {
            for (t5=PB_L-1;t5<=318;t5++) {
              for (t6=288;t6<=PB_L-1;t6++) {
                A[t4-1][t6][(t5-1)+1] = 4;;
              }
            }
          }
          if (t2 == t3) {
            for (t6=32*t2;t6<=min(PB_L-1,32*t2+31);t6++) {
              A[t4-1][t6][(32*t2+30)+1] = 4;;
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
int ya = yA;
int za = zA;
int xb = xB;
int yb = yB;
int xc = xC;
POLYBENCH_3D_ARRAY_DECL(A, DATA_TYPE,xA,yA,zA,xa,ya,za);
POLYBENCH_2D_ARRAY_DECL(B, DATA_TYPE,xB,yB,xb,yb);
POLYBENCH_1D_ARRAY_DECL(C, DATA_TYPE,xC,xc);
init_array(xa,ya,za,POLYBENCH_ARRAY(A),xb,yb,POLYBENCH_ARRAY(B),xc,POLYBENCH_ARRAY(C),INIT_SEED);
kernel_3434121224_00(xa,ya,za,POLYBENCH_ARRAY(A),xb,yb,POLYBENCH_ARRAY(B),xc,POLYBENCH_ARRAY(C));
polybench_prevent_dce(print_array(xa,ya,za,POLYBENCH_ARRAY(A),xb,yb,POLYBENCH_ARRAY(B),xc,POLYBENCH_ARRAY(C)));
POLYBENCH_FREE_ARRAY(A);
POLYBENCH_FREE_ARRAY(B);
POLYBENCH_FREE_ARRAY(C);
return 0;
}
