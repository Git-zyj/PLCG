#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <math.h>
#include <polybench.h>
#include <time.h>
#include <stdlib.h>
#include "3434321226_00.h"
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
static void init_array(int xa,DATA_TYPE POLYBENCH_1D(A,xA,xa),int xb,int yb,DATA_TYPE POLYBENCH_2D(B,xB,yB,xb,yb),int xe,int ye,int ze,DATA_TYPE POLYBENCH_3D(E,xE,yE,zE,xe,ye,ze),int xg,int yg,DATA_TYPE POLYBENCH_2D(G,xG,yG,xg,yg),int xc,int yc,DATA_TYPE POLYBENCH_2D(C,xC,yC,xc,yc),int xd,DATA_TYPE POLYBENCH_1D(D,xD,xd),int xf,int yf,int zf,DATA_TYPE POLYBENCH_3D(F,xF,yF,zF,xf,yf,zf),int seed)
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
for (i = 0; i < xe; i++) {
for (j = 0; j < ye; j++) {
for (k = 0; k < ze; k++) {
E[i][j][k] = rand()%3;;
}}}
for (i = 0; i < xg; i++) {
for (j = 0; j < yg; j++) {
G[i][j] = rand()%3;;
}}
for (i = 0; i < xc; i++) {
for (j = 0; j < yc; j++) {
C[i][j] = rand()%3;;
}}
for (i = 0; i < xd; i++) {
D[i] = rand()%3;;
}
for (i = 0; i < xf; i++) {
for (j = 0; j < yf; j++) {
for (k = 0; k < zf; k++) {
F[i][j][k] = rand()%3;;
}}}
}
static void print_array(int xa,DATA_TYPE POLYBENCH_1D(A,xA,xa),int xb,int yb,DATA_TYPE POLYBENCH_2D(B,xB,yB,xb,yb),int xe,int ye,int ze,DATA_TYPE POLYBENCH_3D(E,xE,yE,zE,xe,ye,ze),int xg,int yg,DATA_TYPE POLYBENCH_2D(G,xG,yG,xg,yg),int xc,int yc,DATA_TYPE POLYBENCH_2D(C,xC,yC,xc,yc),int xd,DATA_TYPE POLYBENCH_1D(D,xD,xd),int xf,int yf,int zf,DATA_TYPE POLYBENCH_3D(F,xF,yF,zF,xf,yf,zf))
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
POLYBENCH_DUMP_BEGIN("E");
for (i = 0; i < xe; i++) {
for (j = 0; j < ye; j++) {
for (k = 0; k < ze; k++) {
fprintf (POLYBENCH_DUMP_TARGET, "\n");
fprintf (POLYBENCH_DUMP_TARGET, DATA_PRINTF_MODIFIER, E[i][j][k]);
}}}
POLYBENCH_DUMP_END("E");
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
fprintf (POLYBENCH_DUMP_TARGET, "\n");
fprintf (POLYBENCH_DUMP_TARGET, DATA_PRINTF_MODIFIER, D[i]);
}
POLYBENCH_DUMP_END("D");
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
}
void kernel_3434321226_00(int xa,DATA_TYPE POLYBENCH_1D(A,xA,xa),int xb,int yb,DATA_TYPE POLYBENCH_2D(B,xB,yB,xb,yb),int xe,int ye,int ze,DATA_TYPE POLYBENCH_3D(E,xE,yE,zE,xe,ye,ze),int xg,int yg,DATA_TYPE POLYBENCH_2D(G,xG,yG,xg,yg),int xc,int yc,DATA_TYPE POLYBENCH_2D(C,xC,yC,xc,yc),int xd,DATA_TYPE POLYBENCH_1D(D,xD,xd),int xf,int yf,int zf,DATA_TYPE POLYBENCH_3D(F,xF,yF,zF,xf,yf,zf)){
polybench_start_instruments;
  int t1, t2, t3, t4, t5, t6, t7, t8, t9;
 int lb, ub, lbp, ubp, lb2, ub2;
 register int lbv, ubv;
/* Start of CLooG code */
for (t1=0;t1<=floord(PB_M-1,16);t1++) {
  lbp=max(0,ceild(13280*t1-415*PB_M,13296));
  ubp=min(15,t1);
#pragma omp parallel for private(lbv,ubv,t4,t5,t6,t7,t8,t9)
  for (t3=lbp;t3<=ubp;t3++) {
    for (t4=0;t4<=min(min(min(floord(16*t3+PB_P+14,16),floord(-1195*t3+47*PB_P-129,103)),floord(-19168*t3+599*PB_M-599,1616)),floord(-38240*t3+1195*PB_M+1501*PB_P-601595,3264));t4++) {
      if ((t3 == 0) && (t4 == 0)) {
        for (t5=max(1,32*t1);t5<=min(PB_M-1,32*t1+31);t5++) {
          A[t5] = A[t5] + B[t5-1][0] - C[0 +1][0] + 6;;
          lbv=2;
          ubv=31;
#pragma ivdep
#pragma vector always
          for (t8=lbv;t8<=ubv;t8+=2) {
            E[t5-1][(t8/2)][0] = E[t5-1][(t8/2)][0] * E[t5-1][(t8/2)-1][0 +2] * F[t5][0][(t8/2)] - C[t5][0] * 4;;
          }
          for (t7=1;t7<=min(29,t5-1);t7++) {
            B[(t5-1)][(t5-1)] = B[(t5-1)][(t5-1)] * D[t7-1] + 1;;
            A[t5] = A[t5] + B[t5-1][t7] - C[t7+1][t7] + 6;;
            lbv=t7+2;
            ubv=31;
#pragma ivdep
#pragma vector always
            for (t8=lbv;t8<=ubv;t8+=2) {
              E[t5-1][((-t7+t8)/2)][t7] = E[t5-1][((-t7+t8)/2)][t7] * E[t5-1][((-t7+t8)/2)-1][t7+2] * F[t5][t7][((-t7+t8)/2)] - C[t5][t7] * 4;;
            }
          }
          for (t7=30;t7<=min(31,t5-1);t7++) {
            B[(t5-1)][(t5-1)] = B[(t5-1)][(t5-1)] * D[t7-1] + 1;;
            A[t5] = A[t5] + B[t5-1][t7] - C[t7+1][t7] + 6;;
          }
          if (t1 == 0) {
            for (t7=t5;t7<=29;t7++) {
              B[(t5-1)][(t5-1)] = B[(t5-1)][(t5-1)] * D[t7-1] + 1;;
              lbv=t7+2;
              ubv=31;
#pragma ivdep
#pragma vector always
              for (t8=lbv;t8<=ubv;t8+=2) {
                E[t5-1][((-t7+t8)/2)][t7] = E[t5-1][((-t7+t8)/2)][t7] * E[t5-1][((-t7+t8)/2)-1][t7+2] * F[t5][t7][((-t7+t8)/2)] - C[t5][t7] * 4;;
              }
            }
          }
          if (t1 == 0) {
            for (t7=max(30,t5);t7<=31;t7++) {
              B[(t5-1)][(t5-1)] = B[(t5-1)][(t5-1)] * D[t7-1] + 1;;
            }
          }
        }
      }
      if (t4 == 0) {
        for (t5=max(1,32*t1-32*t3);t5<=min(32*t3,32*t1-32*t3+31);t5++) {
          for (t7=32*t3;t7<=min(PB_M-1,32*t3+31);t7++) {
            B[(t5-1)][(t5-1)] = B[(t5-1)][(t5-1)] * D[t7-1] + 1;;
          }
        }
      }
      if ((t3 <= min(floord(PB_P-3,32),t4)) && (t4 >= 1)) {
        for (t5=max(1,32*t1-32*t3);t5<=min(PB_M-1,32*t1-32*t3+31);t5++) {
          for (t7=max(32*t3,32*t4-2*PB_P+2);t7<=min(min(PB_P-3,32*t3+31),32*t4+29);t7++) {
            lbv=max(t7+2,32*t4+t7-2*floord(t7,2));
            ubv=min(32*t4+31,t7+2*PB_P-2);
#pragma ivdep
#pragma vector always
            for (t8=lbv;t8<=ubv;t8+=2) {
              E[t5-1][((-t7+t8)/2)][t7] = E[t5-1][((-t7+t8)/2)][t7] * E[t5-1][((-t7+t8)/2)-1][t7+2] * F[t5][t7][((-t7+t8)/2)] - C[t5][t7] * 4;;
            }
          }
        }
      }
      if ((t3 >= 1) && (t4 == 0)) {
        for (t5=max(32*t1-32*t3,32*t3+1);t5<=min(PB_M-1,32*t1-32*t3+31);t5++) {
          for (t7=32*t3;t7<=min(32*t3+31,t5-1);t7++) {
            B[(t5-1)][(t5-1)] = B[(t5-1)][(t5-1)] * D[t7-1] + 1;;
            A[t5] = A[t5] + B[t5-1][t7] - C[t7+1][t7] + 6;;
          }
          if (t1 == 2*t3) {
            for (t7=t5;t7<=min(PB_M-1,16*t1+31);t7++) {
              if (t1%2 == 0) {
                B[(t5-1)][(t5-1)] = B[(t5-1)][(t5-1)] * D[t7-1] + 1;;
              }
            }
          }
        }
      }
      if ((t1 == t3+15) && (t4 == 0)) {
        for (t7=max(1,32*t1-480);t7<=min(PB_M-1,32*t1-449);t7++) {
          B[(PB_M-1)][(PB_M-1)] = B[(PB_M-1)][(PB_M-1)] * D[t7-1] + 1;;
        }
      }
    }
  }
  lbp=max(0,ceild(32*t1-PB_P+1,32));
  ubp=min(floord(PB_L-3,32),t1);
#pragma omp parallel for private(lbv,ubv,t4,t5,t6,t7,t8,t9)
  for (t3=lbp;t3<=ubp;t3++) {
    for (t5=max(1,32*t1-32*t3);t5<=min(PB_P-1,32*t1-32*t3+31);t5++) {
      lbv=max(1,32*t3);
      ubv=min(PB_L-3,32*t3+31);
#pragma ivdep
#pragma vector always
      for (t7=lbv;t7<=ubv;t7++) {
        G[t7][t5-1] = G[t7+2][t5] * B[t7-1][t5-1] * 2;;
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
int xe = xE;
int ye = yE;
int ze = zE;
int xg = xG;
int yg = yG;
int xc = xC;
int yc = yC;
int xd = xD;
int xf = xF;
int yf = yF;
int zf = zF;
POLYBENCH_1D_ARRAY_DECL(A, DATA_TYPE,xA,xa);
POLYBENCH_2D_ARRAY_DECL(B, DATA_TYPE,xB,yB,xb,yb);
POLYBENCH_3D_ARRAY_DECL(E, DATA_TYPE,xE,yE,zE,xe,ye,ze);
POLYBENCH_2D_ARRAY_DECL(G, DATA_TYPE,xG,yG,xg,yg);
POLYBENCH_2D_ARRAY_DECL(C, DATA_TYPE,xC,yC,xc,yc);
POLYBENCH_1D_ARRAY_DECL(D, DATA_TYPE,xD,xd);
POLYBENCH_3D_ARRAY_DECL(F, DATA_TYPE,xF,yF,zF,xf,yf,zf);
init_array(xa,POLYBENCH_ARRAY(A),xb,yb,POLYBENCH_ARRAY(B),xe,ye,ze,POLYBENCH_ARRAY(E),xg,yg,POLYBENCH_ARRAY(G),xc,yc,POLYBENCH_ARRAY(C),xd,POLYBENCH_ARRAY(D),xf,yf,zf,POLYBENCH_ARRAY(F),INIT_SEED);
kernel_3434321226_00(xa,POLYBENCH_ARRAY(A),xb,yb,POLYBENCH_ARRAY(B),xe,ye,ze,POLYBENCH_ARRAY(E),xg,yg,POLYBENCH_ARRAY(G),xc,yc,POLYBENCH_ARRAY(C),xd,POLYBENCH_ARRAY(D),xf,yf,zf,POLYBENCH_ARRAY(F));
polybench_prevent_dce(print_array(xa,POLYBENCH_ARRAY(A),xb,yb,POLYBENCH_ARRAY(B),xe,ye,ze,POLYBENCH_ARRAY(E),xg,yg,POLYBENCH_ARRAY(G),xc,yc,POLYBENCH_ARRAY(C),xd,POLYBENCH_ARRAY(D),xf,yf,zf,POLYBENCH_ARRAY(F)));
POLYBENCH_FREE_ARRAY(A);
POLYBENCH_FREE_ARRAY(B);
POLYBENCH_FREE_ARRAY(E);
POLYBENCH_FREE_ARRAY(G);
POLYBENCH_FREE_ARRAY(C);
POLYBENCH_FREE_ARRAY(D);
POLYBENCH_FREE_ARRAY(F);
return 0;
}
