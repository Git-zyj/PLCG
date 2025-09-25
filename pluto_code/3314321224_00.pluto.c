#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <math.h>
#include <polybench.h>
#include <time.h>
#include <stdlib.h>
#include "3314321224_00.h"
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
static void init_array(int xa,int ya,DATA_TYPE POLYBENCH_2D(A,xA,yA,xa,ya),int xc,DATA_TYPE POLYBENCH_1D(C,xC,xc),int xf,int yf,int zf,DATA_TYPE POLYBENCH_3D(F,xF,yF,zF,xf,yf,zf),int xb,int yb,DATA_TYPE POLYBENCH_2D(B,xB,yB,xb,yb),int xd,int yd,DATA_TYPE POLYBENCH_2D(D,xD,yD,xd,yd),int xe,DATA_TYPE POLYBENCH_1D(E,xE,xe),int seed)
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
for (i = 0; i < xf; i++) {
for (j = 0; j < yf; j++) {
for (k = 0; k < zf; k++) {
F[i][j][k] = rand()%3;;
}}}
for (i = 0; i < xb; i++) {
for (j = 0; j < yb; j++) {
B[i][j] = rand()%3;;
}}
for (i = 0; i < xd; i++) {
for (j = 0; j < yd; j++) {
D[i][j] = rand()%3;;
}}
for (i = 0; i < xe; i++) {
E[i] = rand()%3;;
}
}
static void print_array(int xa,int ya,DATA_TYPE POLYBENCH_2D(A,xA,yA,xa,ya),int xc,DATA_TYPE POLYBENCH_1D(C,xC,xc),int xf,int yf,int zf,DATA_TYPE POLYBENCH_3D(F,xF,yF,zF,xf,yf,zf),int xb,int yb,DATA_TYPE POLYBENCH_2D(B,xB,yB,xb,yb),int xd,int yd,DATA_TYPE POLYBENCH_2D(D,xD,yD,xd,yd),int xe,DATA_TYPE POLYBENCH_1D(E,xE,xe))
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
POLYBENCH_DUMP_BEGIN("F");
for (i = 0; i < xf; i++) {
for (j = 0; j < yf; j++) {
for (k = 0; k < zf; k++) {
fprintf (POLYBENCH_DUMP_TARGET, "\n");
fprintf (POLYBENCH_DUMP_TARGET, DATA_PRINTF_MODIFIER, F[i][j][k]);
}}}
POLYBENCH_DUMP_END("F");
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
void kernel_3314321224_00(int xa,int ya,DATA_TYPE POLYBENCH_2D(A,xA,yA,xa,ya),int xc,DATA_TYPE POLYBENCH_1D(C,xC,xc),int xf,int yf,int zf,DATA_TYPE POLYBENCH_3D(F,xF,yF,zF,xf,yf,zf),int xb,int yb,DATA_TYPE POLYBENCH_2D(B,xB,yB,xb,yb),int xd,int yd,DATA_TYPE POLYBENCH_2D(D,xD,yD,xd,yd),int xe,DATA_TYPE POLYBENCH_1D(E,xE,xe)){
polybench_start_instruments;
  int t1, t2, t3, t4, t5, t6;
 int lb, ub, lbp, ubp, lb2, ub2;
 register int lbv, ubv;
/* Start of CLooG code */
for (t1=0;t1<=floord(PB_L-2,8);t1++) {
  lbp=max(max(0,ceild(32*t1-PB_P+2,32)),ceild(9568*t1-99*PB_L-299*PB_P+598,6400));
  ubp=min(floord(894*t1+13*PB_L,1310),t1);
#pragma omp parallel for private(lbv,ubv,t3,t4,t5,t6)
  for (t2=lbp;t2<=ubp;t2++) {
    for (t3=0;t3<=min(floord(-4800*t2+449*PB_L-299,9568),t2);t3++) {
      if ((t1 == 0) && (t2 == 0) && (t3 == 0)) {
        for (t4=1;t4<=15;t4++) {
          for (t5=0;t5<=min(1,t4-1);t5++) {
            A[t4+1][t5] = A[t4][t5] + A[t4+1][t5] - B[t5][t4-1] + 1;;
          }
          for (t5=2;t5<=t4-1;t5++) {
            A[t4+1][t5] = A[t4][t5] + A[t4+1][t5] - B[t5][t4-1] + 1;;
            for (t6=1;t6<=t5-1;t6++) {
              F[t6][t5-1][t4+1] = F[t6][t5-1][t4-1] + F[t6-1][t5-1][t4+1] - 4;;
            }
          }
          for (t5=max(2,t4);t5<=2*t4-1;t5++) {
            for (t6=1;t6<=t5-1;t6++) {
              F[t6][t5-1][t4+1] = F[t6][t5-1][t4-1] + F[t6-1][t5-1][t4+1] - 4;;
            }
          }
          for (t5=2*t4;t5<=min(31,3*t4-1);t5++) {
            C[(-2*t4+t5)] = A[t4+1][(-2*t4+t5)] - C[(-2*t4+t5)+2] - D[(-2*t4+t5)+1][t4] * E[t4+1] - 3;;
            for (t6=1;t6<=t5-1;t6++) {
              F[t6][t5-1][t4+1] = F[t6][t5-1][t4-1] + F[t6-1][t5-1][t4+1] - 4;;
            }
          }
          for (t5=3*t4;t5<=31;t5++) {
            for (t6=1;t6<=t5-1;t6++) {
              F[t6][t5-1][t4+1] = F[t6][t5-1][t4-1] + F[t6-1][t5-1][t4+1] - 4;;
            }
          }
        }
      }
      if ((t2 >= ceild(PB_L+1,32)) && (t3 == 0)) {
        for (t4=max(ceild(32*t2+1,3),32*t1-32*t2);t4<=min(min(PB_L-1,16*t2+15),32*t1-32*t2+31);t4++) {
          for (t5=max(32*t2,2*t4);t5<=min(32*t2+31,3*t4-1);t5++) {
            C[(-2*t4+t5)] = A[t4+1][(-2*t4+t5)] - C[(-2*t4+t5)+2] - D[(-2*t4+t5)+1][t4] * E[t4+1] - 3;;
          }
        }
      }
      if ((t2 <= floord(PB_L,32)) && (t3 == 0)) {
        for (t4=max(1,32*t1-32*t2);t4<=min(floord(32*t2,3),32*t1-32*t2+31);t4++) {
          for (t5=32*t2;t5<=min(PB_L,32*t2+31);t5++) {
            for (t6=1;t6<=31;t6++) {
              F[t6][t5-1][t4+1] = F[t6][t5-1][t4-1] + F[t6-1][t5-1][t4+1] - 4;;
            }
          }
        }
      }
      if ((t2 <= floord(PB_L,32)) && (t3 >= 1)) {
        for (t4=max(1,32*t1-32*t2);t4<=min(PB_P-2,32*t1-32*t2+31);t4++) {
          for (t5=max(32*t2,32*t3+1);t5<=min(PB_L,32*t2+31);t5++) {
            for (t6=32*t3;t6<=min(32*t3+31,t5-1);t6++) {
              F[t6][t5-1][t4+1] = F[t6][t5-1][t4-1] + F[t6-1][t5-1][t4+1] - 4;;
            }
          }
        }
      }
      if ((t2 <= floord(PB_L,32)) && (t3 == 0)) {
        for (t4=max(ceild(32*t2+1,3),32*t1-32*t2);t4<=min(min(32*t2,16*t2+15),32*t1-32*t2+31);t4++) {
          for (t5=32*t2;t5<=min(PB_L,2*t4-1);t5++) {
            for (t6=1;t6<=31;t6++) {
              F[t6][t5-1][t4+1] = F[t6][t5-1][t4-1] + F[t6-1][t5-1][t4+1] - 4;;
            }
          }
          for (t5=max(32*t2,2*t4);t5<=min(min(PB_L,32*t2+31),3*t4-1);t5++) {
            C[(-2*t4+t5)] = A[t4+1][(-2*t4+t5)] - C[(-2*t4+t5)+2] - D[(-2*t4+t5)+1][t4] * E[t4+1] - 3;;
            for (t6=1;t6<=31;t6++) {
              F[t6][t5-1][t4+1] = F[t6][t5-1][t4-1] + F[t6-1][t5-1][t4+1] - 4;;
            }
          }
          if (t2 == 9) {
            for (t5=max(2*t4,PB_L+1);t5<=min(319,3*t4-1);t5++) {
              C[(-2*t4+t5)] = A[t4+1][(-2*t4+t5)] - C[(-2*t4+t5)+2] - D[(-2*t4+t5)+1][t4] * E[t4+1] - 3;;
            }
          }
          for (t5=3*t4;t5<=min(PB_L,32*t2+31);t5++) {
            for (t6=1;t6<=31;t6++) {
              F[t6][t5-1][t4+1] = F[t6][t5-1][t4-1] + F[t6-1][t5-1][t4+1] - 4;;
            }
          }
        }
      }
      if ((t2 <= floord(PB_L,32)) && (t3 == 0)) {
        for (t4=max(32*t1-32*t2,16*t2+16);t4<=min(32*t2,32*t1-32*t2+31);t4++) {
          for (t5=32*t2;t5<=min(PB_L,32*t2+31);t5++) {
            for (t6=1;t6<=31;t6++) {
              F[t6][t5-1][t4+1] = F[t6][t5-1][t4-1] + F[t6-1][t5-1][t4+1] - 4;;
            }
          }
        }
      }
      if (t3 == 0) {
        for (t4=max(max(32*t1-32*t2,16*t2+16),32*t2+1);t4<=min(PB_L-1,32*t1-32*t2+31);t4++) {
          if (t2 == 0) {
            for (t5=0;t5<=1;t5++) {
              A[t4+1][t5] = A[t4][t5] + A[t4+1][t5] - B[t5][t4-1] + 1;;
            }
          }
          for (t5=max(2,32*t2);t5<=min(32*t2+31,t4-1);t5++) {
            A[t4+1][t5] = A[t4][t5] + A[t4+1][t5] - B[t5][t4-1] + 1;;
            for (t6=1;t6<=min(31,t5-1);t6++) {
              F[t6][t5-1][t4+1] = F[t6][t5-1][t4-1] + F[t6-1][t5-1][t4+1] - 4;;
            }
          }
          if (t1 == 2*t2) {
            for (t5=t4;t5<=min(PB_L,16*t1+31);t5++) {
              for (t6=1;t6<=min(31,t5-1);t6++) {
                if (t1%2 == 0) {
                  F[t6][t5-1][t4+1] = F[t6][t5-1][t4-1] + F[t6-1][t5-1][t4+1] - 4;;
                }
              }
            }
          }
        }
      }
      if ((t2 <= floord(PB_L,32)) && (t3 == 0)) {
        for (t4=max(PB_L,32*t1-32*t2);t4<=min(PB_P-2,32*t1-32*t2+31);t4++) {
          for (t5=max(2,32*t2);t5<=min(PB_L,32*t2+31);t5++) {
            for (t6=1;t6<=min(31,t5-1);t6++) {
              F[t6][t5-1][t4+1] = F[t6][t5-1][t4-1] + F[t6-1][t5-1][t4+1] - 4;;
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
int xc = xC;
int xf = xF;
int yf = yF;
int zf = zF;
int xb = xB;
int yb = yB;
int xd = xD;
int yd = yD;
int xe = xE;
POLYBENCH_2D_ARRAY_DECL(A, DATA_TYPE,xA,yA,xa,ya);
POLYBENCH_1D_ARRAY_DECL(C, DATA_TYPE,xC,xc);
POLYBENCH_3D_ARRAY_DECL(F, DATA_TYPE,xF,yF,zF,xf,yf,zf);
POLYBENCH_2D_ARRAY_DECL(B, DATA_TYPE,xB,yB,xb,yb);
POLYBENCH_2D_ARRAY_DECL(D, DATA_TYPE,xD,yD,xd,yd);
POLYBENCH_1D_ARRAY_DECL(E, DATA_TYPE,xE,xe);
init_array(xa,ya,POLYBENCH_ARRAY(A),xc,POLYBENCH_ARRAY(C),xf,yf,zf,POLYBENCH_ARRAY(F),xb,yb,POLYBENCH_ARRAY(B),xd,yd,POLYBENCH_ARRAY(D),xe,POLYBENCH_ARRAY(E),INIT_SEED);
kernel_3314321224_00(xa,ya,POLYBENCH_ARRAY(A),xc,POLYBENCH_ARRAY(C),xf,yf,zf,POLYBENCH_ARRAY(F),xb,yb,POLYBENCH_ARRAY(B),xd,yd,POLYBENCH_ARRAY(D),xe,POLYBENCH_ARRAY(E));
polybench_prevent_dce(print_array(xa,ya,POLYBENCH_ARRAY(A),xc,POLYBENCH_ARRAY(C),xf,yf,zf,POLYBENCH_ARRAY(F),xb,yb,POLYBENCH_ARRAY(B),xd,yd,POLYBENCH_ARRAY(D),xe,POLYBENCH_ARRAY(E)));
POLYBENCH_FREE_ARRAY(A);
POLYBENCH_FREE_ARRAY(C);
POLYBENCH_FREE_ARRAY(F);
POLYBENCH_FREE_ARRAY(B);
POLYBENCH_FREE_ARRAY(D);
POLYBENCH_FREE_ARRAY(E);
return 0;
}
