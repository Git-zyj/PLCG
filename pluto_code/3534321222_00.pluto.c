#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <math.h>
#include <polybench.h>
#include <time.h>
#include <stdlib.h>
#include "3534321222_00.h"
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
static void init_array(int xa,DATA_TYPE POLYBENCH_1D(A,xA,xa),int xb,int yb,int zb,DATA_TYPE POLYBENCH_3D(B,xB,yB,zB,xb,yb,zb),int xe,int ye,DATA_TYPE POLYBENCH_2D(E,xE,yE,xe,ye),int xf,int yf,DATA_TYPE POLYBENCH_2D(F,xF,yF,xf,yf),int xh,DATA_TYPE POLYBENCH_1D(H,xH,xh),int xc,int yc,int zc,DATA_TYPE POLYBENCH_3D(C,xC,yC,zC,xc,yc,zc),int xd,int yd,int zd,DATA_TYPE POLYBENCH_3D(D,xD,yD,zD,xd,yd,zd),int xg,int yg,DATA_TYPE POLYBENCH_2D(G,xG,yG,xg,yg),int seed)
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
for (i = 0; i < xe; i++) {
for (j = 0; j < ye; j++) {
E[i][j] = rand()%3;;
}}
for (i = 0; i < xf; i++) {
for (j = 0; j < yf; j++) {
F[i][j] = rand()%3;;
}}
for (i = 0; i < xh; i++) {
H[i] = rand()%3;;
}
for (i = 0; i < xc; i++) {
for (j = 0; j < yc; j++) {
for (k = 0; k < zc; k++) {
C[i][j][k] = rand()%3;;
}}}
for (i = 0; i < xd; i++) {
for (j = 0; j < yd; j++) {
for (k = 0; k < zd; k++) {
D[i][j][k] = rand()%3;;
}}}
for (i = 0; i < xg; i++) {
for (j = 0; j < yg; j++) {
G[i][j] = rand()%3;;
}}
}
static void print_array(int xa,DATA_TYPE POLYBENCH_1D(A,xA,xa),int xb,int yb,int zb,DATA_TYPE POLYBENCH_3D(B,xB,yB,zB,xb,yb,zb),int xe,int ye,DATA_TYPE POLYBENCH_2D(E,xE,yE,xe,ye),int xf,int yf,DATA_TYPE POLYBENCH_2D(F,xF,yF,xf,yf),int xh,DATA_TYPE POLYBENCH_1D(H,xH,xh),int xc,int yc,int zc,DATA_TYPE POLYBENCH_3D(C,xC,yC,zC,xc,yc,zc),int xd,int yd,int zd,DATA_TYPE POLYBENCH_3D(D,xD,yD,zD,xd,yd,zd),int xg,int yg,DATA_TYPE POLYBENCH_2D(G,xG,yG,xg,yg))
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
POLYBENCH_DUMP_BEGIN("E");
for (i = 0; i < xe; i++) {
for (j = 0; j < ye; j++) {
fprintf (POLYBENCH_DUMP_TARGET, "\n");
fprintf (POLYBENCH_DUMP_TARGET, DATA_PRINTF_MODIFIER, E[i][j]);
}}
POLYBENCH_DUMP_END("E");
POLYBENCH_DUMP_FINISH;
POLYBENCH_DUMP_START;
POLYBENCH_DUMP_BEGIN("F");
for (i = 0; i < xf; i++) {
for (j = 0; j < yf; j++) {
fprintf (POLYBENCH_DUMP_TARGET, "\n");
fprintf (POLYBENCH_DUMP_TARGET, DATA_PRINTF_MODIFIER, F[i][j]);
}}
POLYBENCH_DUMP_END("F");
POLYBENCH_DUMP_FINISH;
POLYBENCH_DUMP_START;
POLYBENCH_DUMP_BEGIN("H");
for (i = 0; i < xh; i++) {
fprintf (POLYBENCH_DUMP_TARGET, "\n");
fprintf (POLYBENCH_DUMP_TARGET, DATA_PRINTF_MODIFIER, H[i]);
}
POLYBENCH_DUMP_END("H");
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
for (k = 0; k < zd; k++) {
fprintf (POLYBENCH_DUMP_TARGET, "\n");
fprintf (POLYBENCH_DUMP_TARGET, DATA_PRINTF_MODIFIER, D[i][j][k]);
}}}
POLYBENCH_DUMP_END("D");
POLYBENCH_DUMP_FINISH;
POLYBENCH_DUMP_START;
POLYBENCH_DUMP_BEGIN("G");
for (i = 0; i < xg; i++) {
for (j = 0; j < yg; j++) {
fprintf (POLYBENCH_DUMP_TARGET, "\n");
fprintf (POLYBENCH_DUMP_TARGET, DATA_PRINTF_MODIFIER, G[i][j]);
}}
POLYBENCH_DUMP_END("G");
POLYBENCH_DUMP_FINISH;
}
void kernel_3534321222_00(int xa,DATA_TYPE POLYBENCH_1D(A,xA,xa),int xb,int yb,int zb,DATA_TYPE POLYBENCH_3D(B,xB,yB,zB,xb,yb,zb),int xe,int ye,DATA_TYPE POLYBENCH_2D(E,xE,yE,xe,ye),int xf,int yf,DATA_TYPE POLYBENCH_2D(F,xF,yF,xf,yf),int xh,DATA_TYPE POLYBENCH_1D(H,xH,xh),int xc,int yc,int zc,DATA_TYPE POLYBENCH_3D(C,xC,yC,zC,xc,yc,zc),int xd,int yd,int zd,DATA_TYPE POLYBENCH_3D(D,xD,yD,zD,xd,yd,zd),int xg,int yg,DATA_TYPE POLYBENCH_2D(G,xG,yG,xg,yg)){
polybench_start_instruments;
  int t1, t2, t3, t4, t5, t6;
 int lb, ub, lbp, ubp, lb2, ub2;
 register int lbv, ubv;
/* Start of CLooG code */
for (t1=0;t1<=floord(83*PB_P+16*PB_N+166300,13280);t1++) {
  for (t2=0;t2<=min(12,floord(-133*t1+5*PB_L-5,27));t2++) {
    for (t3=0;t3<=min(min(min(floord(PB_N-2,32),floord(-5312*t2+166*PB_L+33*PB_N-16666,1056)),floord(-15936*t1+79*PB_N+199540,2528)),floord(-66367*t1-13473*t2+2495*PB_L-2495,2540));t3++) {
      if ((t1 == 0) && (t2 == 0) && (t3 == 0)) {
        A[0 +1] = A[0 +1] + A[0 +1] - A[0] - 5;;
      }
      if ((t2 <= floord(PB_P-1,32)) && (t3 == 0)) {
        for (t4=max(1,32*t1);t4<=min(32*t2,32*t1+31);t4++) {
          for (t5=32*t2;t5<=min(PB_P-1,32*t2+31);t5++) {
            F[t4][t5] = 1;;
            lbv=1;
            ubv=31;
#pragma ivdep
#pragma vector always
            for (t6=lbv;t6<=ubv;t6++) {
              B[t6-1][t4][t5-1] = C[t6+1][t5][t5-1] + D[t6+1][t4-1][t5] + 6;;
            }
          }
          if (t2 == 9) {
            for (t5=PB_P;t5<=319;t5++) {
              F[t4][t5] = 1;;
            }
          }
        }
      }
      if ((t2 <= floord(PB_P-1,32)) && (t3 >= 1)) {
        for (t4=max(1,32*t1);t4<=min(PB_L,32*t1+31);t4++) {
          for (t5=max(1,32*t2);t5<=min(PB_P-1,32*t2+31);t5++) {
            lbv=32*t3;
            ubv=min(PB_N-2,32*t3+31);
#pragma ivdep
#pragma vector always
            for (t6=lbv;t6<=ubv;t6++) {
              B[t6-1][t4][t5-1] = C[t6+1][t5][t5-1] + D[t6+1][t4-1][t5] + 6;;
            }
          }
        }
      }
      if ((t2 >= ceild(PB_P,32)) && (t3 == 0)) {
        for (t4=max(1,32*t1);t4<=min(PB_L-1,32*t1+31);t4++) {
          for (t5=32*t2;t5<=min(PB_L-1,32*t2+31);t5++) {
            F[t4][t5] = 1;;
          }
        }
      }
      if ((t1 == 0) && (t2 == 0) && (t3 == 0)) {
        E[1][0 +1] = F[1][1] - G[1 -1][0] + 1;;
        F[1][0] = 1;;
        A[1 +1] = A[1 +1] + A[1 +1] - A[1] - 5;;
        for (t5=1;t5<=31;t5++) {
          F[1][t5] = 1;;
          lbv=1;
          ubv=31;
#pragma ivdep
#pragma vector always
          for (t6=lbv;t6<=ubv;t6++) {
            B[t6-1][1][t5-1] = C[t6+1][t5][t5-1] + D[t6+1][1 -1][t5] + 6;;
          }
        }
      }
      if ((t2 >= 1) && (t2 <= floord(PB_P-1,32)) && (t3 == 0)) {
        for (t4=max(32*t1,32*t2+1);t4<=min(PB_L-1,32*t1+31);t4++) {
          for (t5=32*t2;t5<=min(min(PB_P-1,32*t2+31),t4-1);t5++) {
            E[t4][t5+1] = F[t4][t4] - G[t4-1][t5] + 1;;
            F[t4][t5] = 1;;
            lbv=1;
            ubv=31;
#pragma ivdep
#pragma vector always
            for (t6=lbv;t6<=ubv;t6++) {
              B[t6-1][t4][t5-1] = C[t6+1][t5][t5-1] + D[t6+1][t4-1][t5] + 6;;
            }
          }
          if (t1 == t2) {
            for (t5=t4;t5<=min(PB_P-1,32*t1+31);t5++) {
              F[t4][t5] = 1;;
              lbv=1;
              ubv=31;
#pragma ivdep
#pragma vector always
              for (t6=lbv;t6<=ubv;t6++) {
                B[t6-1][t4][t5-1] = C[t6+1][t5][t5-1] + D[t6+1][t4-1][t5] + 6;;
              }
            }
          }
          if (t2 == 9) {
            for (t5=PB_P;t5<=319;t5++) {
              F[t4][t5] = 1;;
            }
          }
        }
      }
      if ((t1 == 12) && (t2 >= 1) && (t2 <= floord(PB_P-1,32)) && (t3 == 0)) {
        for (t5=32*t2;t5<=min(PB_P-1,32*t2+31);t5++) {
          lbv=1;
          ubv=31;
#pragma ivdep
#pragma vector always
          for (t6=lbv;t6<=ubv;t6++) {
            B[t6-1][PB_L][t5-1] = C[t6+1][t5][t5-1] + D[t6+1][PB_L-1][t5] + 6;;
          }
        }
      }
      if ((t2 == 0) && (t3 == 0)) {
        for (t4=max(2,32*t1);t4<=min(PB_L-1,32*t1+31);t4++) {
          E[t4][0 +1] = F[t4][t4] - G[t4-1][0] + 1;;
          F[t4][0] = 1;;
          A[t4+1] = A[t4+1] + A[t4+1] - A[t4] - 5;;
          H[t4] = H[t4] - H[t4-2] - A[t4] + 2;;
          for (t5=1;t5<=min(31,t4-1);t5++) {
            E[t4][t5+1] = F[t4][t4] - G[t4-1][t5] + 1;;
            F[t4][t5] = 1;;
            lbv=1;
            ubv=31;
#pragma ivdep
#pragma vector always
            for (t6=lbv;t6<=ubv;t6++) {
              B[t6-1][t4][t5-1] = C[t6+1][t5][t5-1] + D[t6+1][t4-1][t5] + 6;;
            }
          }
          if (t1 == 0) {
            for (t5=t4;t5<=31;t5++) {
              F[t4][t5] = 1;;
              lbv=1;
              ubv=31;
#pragma ivdep
#pragma vector always
              for (t6=lbv;t6<=ubv;t6++) {
                B[t6-1][t4][t5-1] = C[t6+1][t5][t5-1] + D[t6+1][t4-1][t5] + 6;;
              }
            }
          }
        }
      }
      if ((t1 == 12) && (t2 == 0) && (t3 == 0)) {
        A[PB_L+1] = A[PB_L+1] + A[PB_L+1] - A[PB_L] - 5;;
        H[PB_L] = H[PB_L] - H[PB_L-2] - A[PB_L] + 2;;
        for (t5=1;t5<=31;t5++) {
          lbv=1;
          ubv=31;
#pragma ivdep
#pragma vector always
          for (t6=lbv;t6<=ubv;t6++) {
            B[t6-1][PB_L][t5-1] = C[t6+1][t5][t5-1] + D[t6+1][PB_L-1][t5] + 6;;
          }
        }
      }
      if ((t2 == 0) && (t3 == 0)) {
        for (t4=max(32*t1,PB_L+1);t4<=min(PB_M-2,32*t1+31);t4++) {
          A[t4+1] = A[t4+1] + A[t4+1] - A[t4] - 5;;
          H[t4] = H[t4] - H[t4-2] - A[t4] + 2;;
        }
      }
      if ((t1 == 15) && (t2 == 0) && (t3 == 0)) {
        H[(PB_M-1)] = H[(PB_M-1)] - H[(PB_M-1)-2] - A[(PB_M-1)] + 2;;
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
int xe = xE;
int ye = yE;
int xf = xF;
int yf = yF;
int xh = xH;
int xc = xC;
int yc = yC;
int zc = zC;
int xd = xD;
int yd = yD;
int zd = zD;
int xg = xG;
int yg = yG;
POLYBENCH_1D_ARRAY_DECL(A, DATA_TYPE,xA,xa);
POLYBENCH_3D_ARRAY_DECL(B, DATA_TYPE,xB,yB,zB,xb,yb,zb);
POLYBENCH_2D_ARRAY_DECL(E, DATA_TYPE,xE,yE,xe,ye);
POLYBENCH_2D_ARRAY_DECL(F, DATA_TYPE,xF,yF,xf,yf);
POLYBENCH_1D_ARRAY_DECL(H, DATA_TYPE,xH,xh);
POLYBENCH_3D_ARRAY_DECL(C, DATA_TYPE,xC,yC,zC,xc,yc,zc);
POLYBENCH_3D_ARRAY_DECL(D, DATA_TYPE,xD,yD,zD,xd,yd,zd);
POLYBENCH_2D_ARRAY_DECL(G, DATA_TYPE,xG,yG,xg,yg);
init_array(xa,POLYBENCH_ARRAY(A),xb,yb,zb,POLYBENCH_ARRAY(B),xe,ye,POLYBENCH_ARRAY(E),xf,yf,POLYBENCH_ARRAY(F),xh,POLYBENCH_ARRAY(H),xc,yc,zc,POLYBENCH_ARRAY(C),xd,yd,zd,POLYBENCH_ARRAY(D),xg,yg,POLYBENCH_ARRAY(G),INIT_SEED);
kernel_3534321222_00(xa,POLYBENCH_ARRAY(A),xb,yb,zb,POLYBENCH_ARRAY(B),xe,ye,POLYBENCH_ARRAY(E),xf,yf,POLYBENCH_ARRAY(F),xh,POLYBENCH_ARRAY(H),xc,yc,zc,POLYBENCH_ARRAY(C),xd,yd,zd,POLYBENCH_ARRAY(D),xg,yg,POLYBENCH_ARRAY(G));
polybench_prevent_dce(print_array(xa,POLYBENCH_ARRAY(A),xb,yb,zb,POLYBENCH_ARRAY(B),xe,ye,POLYBENCH_ARRAY(E),xf,yf,POLYBENCH_ARRAY(F),xh,POLYBENCH_ARRAY(H),xc,yc,zc,POLYBENCH_ARRAY(C),xd,yd,zd,POLYBENCH_ARRAY(D),xg,yg,POLYBENCH_ARRAY(G)));
POLYBENCH_FREE_ARRAY(A);
POLYBENCH_FREE_ARRAY(B);
POLYBENCH_FREE_ARRAY(E);
POLYBENCH_FREE_ARRAY(F);
POLYBENCH_FREE_ARRAY(H);
POLYBENCH_FREE_ARRAY(C);
POLYBENCH_FREE_ARRAY(D);
POLYBENCH_FREE_ARRAY(G);
return 0;
}
