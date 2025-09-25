#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <math.h>
#include <polybench.h>
#include <time.h>
#include <stdlib.h>
#include "3534321226_00.h"
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
static void init_array(int xa,int ya,int za,DATA_TYPE POLYBENCH_3D(A,xA,yA,zA,xa,ya,za),int xb,int yb,int zb,DATA_TYPE POLYBENCH_3D(B,xB,yB,zB,xb,yb,zb),int xe,DATA_TYPE POLYBENCH_1D(E,xE,xe),int xh,int yh,DATA_TYPE POLYBENCH_2D(H,xH,yH,xh,yh),int xf,DATA_TYPE POLYBENCH_1D(F,xF,xf),int xc,int yc,int zc,DATA_TYPE POLYBENCH_3D(C,xC,yC,zC,xc,yc,zc),int xd,int yd,DATA_TYPE POLYBENCH_2D(D,xD,yD,xd,yd),int xg,DATA_TYPE POLYBENCH_1D(G,xG,xg),int seed)
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
for (i = 0; i < xe; i++) {
E[i] = rand()%3;;
}
for (i = 0; i < xh; i++) {
for (j = 0; j < yh; j++) {
H[i][j] = rand()%3;;
}}
for (i = 0; i < xf; i++) {
F[i] = rand()%3;;
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
for (i = 0; i < xg; i++) {
G[i] = rand()%3;;
}
}
static void print_array(int xa,int ya,int za,DATA_TYPE POLYBENCH_3D(A,xA,yA,zA,xa,ya,za),int xb,int yb,int zb,DATA_TYPE POLYBENCH_3D(B,xB,yB,zB,xb,yb,zb),int xe,DATA_TYPE POLYBENCH_1D(E,xE,xe),int xh,int yh,DATA_TYPE POLYBENCH_2D(H,xH,yH,xh,yh),int xf,DATA_TYPE POLYBENCH_1D(F,xF,xf),int xc,int yc,int zc,DATA_TYPE POLYBENCH_3D(C,xC,yC,zC,xc,yc,zc),int xd,int yd,DATA_TYPE POLYBENCH_2D(D,xD,yD,xd,yd),int xg,DATA_TYPE POLYBENCH_1D(G,xG,xg))
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
POLYBENCH_DUMP_BEGIN("E");
for (i = 0; i < xe; i++) {
fprintf (POLYBENCH_DUMP_TARGET, "\n");
fprintf (POLYBENCH_DUMP_TARGET, DATA_PRINTF_MODIFIER, E[i]);
}
POLYBENCH_DUMP_END("E");
POLYBENCH_DUMP_FINISH;
POLYBENCH_DUMP_START;
POLYBENCH_DUMP_BEGIN("H");
for (i = 0; i < xh; i++) {
for (j = 0; j < yh; j++) {
fprintf (POLYBENCH_DUMP_TARGET, "\n");
fprintf (POLYBENCH_DUMP_TARGET, DATA_PRINTF_MODIFIER, H[i][j]);
}}
POLYBENCH_DUMP_END("H");
POLYBENCH_DUMP_FINISH;
POLYBENCH_DUMP_START;
POLYBENCH_DUMP_BEGIN("F");
for (i = 0; i < xf; i++) {
fprintf (POLYBENCH_DUMP_TARGET, "\n");
fprintf (POLYBENCH_DUMP_TARGET, DATA_PRINTF_MODIFIER, F[i]);
}
POLYBENCH_DUMP_END("F");
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
POLYBENCH_DUMP_BEGIN("G");
for (i = 0; i < xg; i++) {
fprintf (POLYBENCH_DUMP_TARGET, "\n");
fprintf (POLYBENCH_DUMP_TARGET, DATA_PRINTF_MODIFIER, G[i]);
}
POLYBENCH_DUMP_END("G");
POLYBENCH_DUMP_FINISH;
}
void kernel_3534321226_00(int xa,int ya,int za,DATA_TYPE POLYBENCH_3D(A,xA,yA,zA,xa,ya,za),int xb,int yb,int zb,DATA_TYPE POLYBENCH_3D(B,xB,yB,zB,xb,yb,zb),int xe,DATA_TYPE POLYBENCH_1D(E,xE,xe),int xh,int yh,DATA_TYPE POLYBENCH_2D(H,xH,yH,xh,yh),int xf,DATA_TYPE POLYBENCH_1D(F,xF,xf),int xc,int yc,int zc,DATA_TYPE POLYBENCH_3D(C,xC,yC,zC,xc,yc,zc),int xd,int yd,DATA_TYPE POLYBENCH_2D(D,xD,yD,xd,yd),int xg,DATA_TYPE POLYBENCH_1D(G,xG,xg)){
polybench_start_instruments;
  int t1, t2, t3, t4, t5, t6, t7;
 int lb, ub, lbp, ubp, lb2, ub2;
 register int lbv, ubv;
/* Start of CLooG code */
lbp=0;
ubp=floord(PB_M,32);
#pragma omp parallel for private(lbv,ubv,t2,t3,t4,t5,t6,t7)
for (t1=lbp;t1<=ubp;t1++) {
  for (t2=0;t2<=floord(PB_L-1,32);t2++) {
    for (t3=0;t3<=min(min(floord(32*t2+PB_L+30,32),floord(-15968*t2+601*PB_M+102*PB_L+102*PB_Q-42104,3264)),floord(20128*t1-4160*t2+499*PB_L+499*PB_Q-185129,15968));t3++) {
      if (t3 >= ceild(PB_Q,32)) {
        for (t4=max(max(max(2,32*t1),32*t2+1),32*t3-PB_L+2);t4<=min(PB_M-1,32*t1+31);t4++) {
          for (t5=max(32*t2,32*t3-PB_L+1);t5<=min(32*t2+31,t4-1);t5++) {
            for (t6=32*t3;t6<=min(32*t3+31,t5+PB_L-1);t6++) {
              A[t4][(-t5+t6)-1][t4] = A[t4][(-t5+t6)][t4] * A[t4][(-t5+t6)-1][t4-2] - 6;;
            }
          }
        }
      }
      if ((t2 <= t3) && (t3 <= floord(PB_Q-1,32))) {
        for (t4=max(2,32*t1);t4<=min(32*t2,32*t1+31);t4++) {
          for (t5=32*t2;t5<=32*t2+31;t5++) {
            for (t6=32*t3;t6<=min(PB_Q-1,32*t3+31);t6++) {
              B[t4][t5][t6] = C[t6][t5][t4-1] * D[t4][t5] + 2;;
            }
          }
        }
      }
      if ((t2 >= ceild(PB_M,32)) && (t3 == 0)) {
        for (t4=max(2,32*t1);t4<=min(PB_M-1,32*t1+31);t4++) {
          for (t5=32*t2;t5<=min(PB_L-1,32*t2+31);t5++) {
            for (t6=0;t6<=31;t6++) {
              B[t4][t5][t6] = C[t6][t5][t4-1] * D[t4][t5] + 2;;
            }
          }
        }
      }
      if ((t2 >= t3+1) && (t3 >= 1) && (t3 <= floord(PB_Q-1,32))) {
        for (t4=max(2,32*t1);t4<=min(PB_M-1,32*t1+31);t4++) {
          for (t5=32*t2;t5<=min(PB_L-1,32*t2+31);t5++) {
            for (t6=32*t3;t6<=min(PB_Q-1,32*t3+31);t6++) {
              B[t4][t5][t6] = C[t6][t5][t4-1] * D[t4][t5] + 2;;
            }
          }
        }
      }
      if ((t1 == 0) && (t2 <= floord(PB_M-1,32)) && (t3 == 0)) {
        for (t4=0;t4<=1;t4++) {
          for (t5=max(2,32*t2);t5<=min(PB_M-1,32*t2+31);t5++) {
            H[t5][t4] = H[t5-2][t4] + 2;;
          }
        }
      }
      if ((t2 == 0) && (t3 == 0)) {
        for (t4=max(2,32*t1);t4<=min(PB_M-1,32*t1+31);t4++) {
          E[t4] = F[t4-1] + G[t4] - 6;;
          F[(t4-1)] = G[(t4-1)-1] + G[(t4-1)-1] - 2;;
          for (t5=0;t5<=1;t5++) {
            for (t6=0;t6<=t5;t6++) {
              B[t4][t5][t6] = C[t6][t5][t4-1] * D[t4][t5] + 2;;
            }
            for (t6=t5+1;t6<=31;t6++) {
              B[t4][t5][t6] = C[t6][t5][t4-1] * D[t4][t5] + 2;;
              A[t4][(-t5+t6)-1][t4] = A[t4][(-t5+t6)][t4] * A[t4][(-t5+t6)-1][t4-2] - 6;;
            }
          }
          for (t5=2;t5<=min(30,t4-1);t5++) {
            H[t5][t4] = H[t5-2][t4] + 2;;
            for (t6=0;t6<=t5;t6++) {
              B[t4][t5][t6] = C[t6][t5][t4-1] * D[t4][t5] + 2;;
            }
            for (t6=t5+1;t6<=31;t6++) {
              B[t4][t5][t6] = C[t6][t5][t4-1] * D[t4][t5] + 2;;
              A[t4][(-t5+t6)-1][t4] = A[t4][(-t5+t6)][t4] * A[t4][(-t5+t6)-1][t4-2] - 6;;
            }
          }
          if (t1 == 0) {
            for (t5=t4;t5<=30;t5++) {
              H[t5][t4] = H[t5-2][t4] + 2;;
              for (t6=0;t6<=31;t6++) {
                B[t4][t5][t6] = C[t6][t5][t4-1] * D[t4][t5] + 2;;
              }
            }
          }
          H[31][t4] = H[31 -2][t4] + 2;;
          for (t6=0;t6<=31;t6++) {
            B[t4][31][t6] = C[t6][31][t4-1] * D[t4][31] + 2;;
          }
        }
      }
      if ((t2 <= t3) && (t3 >= 1) && (t3 <= floord(PB_Q-1,32))) {
        for (t4=max(max(2,32*t1),32*t2+1);t4<=min(PB_M-1,32*t1+31);t4++) {
          for (t5=32*t2;t5<=min(min(32*t2+31,32*t3+30),t4-1);t5++) {
            if (t2 == t3) {
              for (t6=32*t2;t6<=t5;t6++) {
                B[t4][t5][t6] = C[t6][t5][t4-1] * D[t4][t5] + 2;;
              }
            }
            for (t6=max(32*t3,t5+1);t6<=min(PB_Q-1,32*t3+31);t6++) {
              B[t4][t5][t6] = C[t6][t5][t4-1] * D[t4][t5] + 2;;
              A[t4][(-t5+t6)-1][t4] = A[t4][(-t5+t6)][t4] * A[t4][(-t5+t6)-1][t4-2] - 6;;
            }
            if (t3 == 12) {
              for (t6=PB_Q;t6<=415;t6++) {
                A[t4][(-t5+t6)-1][t4] = A[t4][(-t5+t6)][t4] * A[t4][(-t5+t6)-1][t4-2] - 6;;
              }
            }
          }
          if ((t2 == t3) && (t2 <= floord(t4-32,32))) {
            for (t6=32*t2;t6<=32*t2+31;t6++) {
              B[t4][(32*t2+31)][t6] = C[t6][(32*t2+31)][t4-1] * D[t4][(32*t2+31)] + 2;;
            }
          }
          if (t1 == t2) {
            for (t5=t4;t5<=32*t1+31;t5++) {
              for (t6=32*t3;t6<=min(PB_Q-1,32*t3+31);t6++) {
                B[t4][t5][t6] = C[t6][t5][t4-1] * D[t4][t5] + 2;;
              }
            }
          }
        }
      }
      if ((t2 >= 1) && (t2 <= floord(PB_M-1,32)) && (t3 == 0)) {
        for (t4=max(2,32*t1);t4<=min(PB_M-1,32*t1+31);t4++) {
          for (t5=32*t2;t5<=min(PB_M-1,32*t2+31);t5++) {
            H[t5][t4] = H[t5-2][t4] + 2;;
            for (t6=0;t6<=31;t6++) {
              B[t4][t5][t6] = C[t6][t5][t4-1] * D[t4][t5] + 2;;
            }
          }
          if (t2 == 12) {
            for (t5=PB_M;t5<=415;t5++) {
              for (t6=0;t6<=31;t6++) {
                B[t4][t5][t6] = C[t6][t5][t4-1] * D[t4][t5] + 2;;
              }
            }
          }
        }
      }
      if ((t1 == 12) && (t2 == 0) && (t3 == 0)) {
        F[(PB_M-1)] = G[(PB_M-1)-1] + G[(PB_M-1)-1] - 2;;
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
int xe = xE;
int xh = xH;
int yh = yH;
int xf = xF;
int xc = xC;
int yc = yC;
int zc = zC;
int xd = xD;
int yd = yD;
int xg = xG;
POLYBENCH_3D_ARRAY_DECL(A, DATA_TYPE,xA,yA,zA,xa,ya,za);
POLYBENCH_3D_ARRAY_DECL(B, DATA_TYPE,xB,yB,zB,xb,yb,zb);
POLYBENCH_1D_ARRAY_DECL(E, DATA_TYPE,xE,xe);
POLYBENCH_2D_ARRAY_DECL(H, DATA_TYPE,xH,yH,xh,yh);
POLYBENCH_1D_ARRAY_DECL(F, DATA_TYPE,xF,xf);
POLYBENCH_3D_ARRAY_DECL(C, DATA_TYPE,xC,yC,zC,xc,yc,zc);
POLYBENCH_2D_ARRAY_DECL(D, DATA_TYPE,xD,yD,xd,yd);
POLYBENCH_1D_ARRAY_DECL(G, DATA_TYPE,xG,xg);
init_array(xa,ya,za,POLYBENCH_ARRAY(A),xb,yb,zb,POLYBENCH_ARRAY(B),xe,POLYBENCH_ARRAY(E),xh,yh,POLYBENCH_ARRAY(H),xf,POLYBENCH_ARRAY(F),xc,yc,zc,POLYBENCH_ARRAY(C),xd,yd,POLYBENCH_ARRAY(D),xg,POLYBENCH_ARRAY(G),INIT_SEED);
kernel_3534321226_00(xa,ya,za,POLYBENCH_ARRAY(A),xb,yb,zb,POLYBENCH_ARRAY(B),xe,POLYBENCH_ARRAY(E),xh,yh,POLYBENCH_ARRAY(H),xf,POLYBENCH_ARRAY(F),xc,yc,zc,POLYBENCH_ARRAY(C),xd,yd,POLYBENCH_ARRAY(D),xg,POLYBENCH_ARRAY(G));
polybench_prevent_dce(print_array(xa,ya,za,POLYBENCH_ARRAY(A),xb,yb,zb,POLYBENCH_ARRAY(B),xe,POLYBENCH_ARRAY(E),xh,yh,POLYBENCH_ARRAY(H),xf,POLYBENCH_ARRAY(F),xc,yc,zc,POLYBENCH_ARRAY(C),xd,yd,POLYBENCH_ARRAY(D),xg,POLYBENCH_ARRAY(G)));
POLYBENCH_FREE_ARRAY(A);
POLYBENCH_FREE_ARRAY(B);
POLYBENCH_FREE_ARRAY(E);
POLYBENCH_FREE_ARRAY(H);
POLYBENCH_FREE_ARRAY(F);
POLYBENCH_FREE_ARRAY(C);
POLYBENCH_FREE_ARRAY(D);
POLYBENCH_FREE_ARRAY(G);
return 0;
}
