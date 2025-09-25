#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <math.h>
#include <polybench.h>
#include <time.h>
#include <stdlib.h>
#include "3624321222_00.h"
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
static void init_array(int xa,int ya,DATA_TYPE POLYBENCH_2D(A,xA,yA,xa,ya),int xb,int yb,int zb,DATA_TYPE POLYBENCH_3D(B,xB,yB,zB,xb,yb,zb),int xc,DATA_TYPE POLYBENCH_1D(C,xC,xc),int xd,DATA_TYPE POLYBENCH_1D(D,xD,xd),int xf,int yf,int zf,DATA_TYPE POLYBENCH_3D(F,xF,yF,zF,xf,yf,zf),int xe,DATA_TYPE POLYBENCH_1D(E,xE,xe),int xg,int yg,DATA_TYPE POLYBENCH_2D(G,xG,yG,xg,yg),int seed)
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
for (i = 0; i < xd; i++) {
D[i] = rand()%3;;
}
for (i = 0; i < xf; i++) {
for (j = 0; j < yf; j++) {
for (k = 0; k < zf; k++) {
F[i][j][k] = rand()%3;;
}}}
for (i = 0; i < xe; i++) {
E[i] = rand()%3;;
}
for (i = 0; i < xg; i++) {
for (j = 0; j < yg; j++) {
G[i][j] = rand()%3;;
}}
}
static void print_array(int xa,int ya,DATA_TYPE POLYBENCH_2D(A,xA,yA,xa,ya),int xb,int yb,int zb,DATA_TYPE POLYBENCH_3D(B,xB,yB,zB,xb,yb,zb),int xc,DATA_TYPE POLYBENCH_1D(C,xC,xc),int xd,DATA_TYPE POLYBENCH_1D(D,xD,xd),int xf,int yf,int zf,DATA_TYPE POLYBENCH_3D(F,xF,yF,zF,xf,yf,zf),int xe,DATA_TYPE POLYBENCH_1D(E,xE,xe),int xg,int yg,DATA_TYPE POLYBENCH_2D(G,xG,yG,xg,yg))
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
POLYBENCH_DUMP_START;
POLYBENCH_DUMP_BEGIN("E");
for (i = 0; i < xe; i++) {
fprintf (POLYBENCH_DUMP_TARGET, "\n");
fprintf (POLYBENCH_DUMP_TARGET, DATA_PRINTF_MODIFIER, E[i]);
}
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
}
void kernel_3624321222_00(int xa,int ya,DATA_TYPE POLYBENCH_2D(A,xA,yA,xa,ya),int xb,int yb,int zb,DATA_TYPE POLYBENCH_3D(B,xB,yB,zB,xb,yb,zb),int xc,DATA_TYPE POLYBENCH_1D(C,xC,xc),int xd,DATA_TYPE POLYBENCH_1D(D,xD,xd),int xf,int yf,int zf,DATA_TYPE POLYBENCH_3D(F,xF,yF,zF,xf,yf,zf),int xe,DATA_TYPE POLYBENCH_1D(E,xE,xe),int xg,int yg,DATA_TYPE POLYBENCH_2D(G,xG,yG,xg,yg)){
polybench_start_instruments;
  int t1, t2, t3, t4, t5, t6, t7;
 int lb, ub, lbp, ubp, lb2, ub2;
 register int lbv, ubv;
/* Start of CLooG code */
for (t1=0;t1<=floord(PB_M-1,32);t1++) {
  for (t2=0;t2<=min(min(28,floord(64*t1+PB_L+59,32)),-3*t1+56);t2++) {
    for (t3=0;t3<=min(min(min(min(min(min(min(min(min(min(floord(PB_P-1,32),floord(4800*t1-2400*t2+75*PB_L+4425,472)),floord(264*t1-264*t2+25*PB_P-25,800)),floord(368*t1-720*t2+11*PB_Q+56*PB_L-3011,1104)),floord(-800*t2+25*PB_Q+15000,1202)),floord(1320*t1-2594*t2+125*PB_P+11818,4000)),floord(9616*t1-18736*t2+285*PB_Q+360315,28848)),floord(157872*t1-311280*t2+4794*PB_Q+14950*PB_P+24249*PB_L-7294444,478400)),floord(483184*t1-932560*t2+73843*PB_Q+72328*PB_L-21772243,1430416)),floord(971216*t1-1866736*t2+148185*PB_Q-148185,2875184)),floord(1923200*t1-3724832*t2+296100*PB_Q+179699*PB_P-72175700,5750368));t3++) {
      if ((t2 <= floord(PB_Q-1,32)) && (t3 >= ceild(PB_Q,32))) {
        for (t4=max(max(2,32*t1),32*t2+1);t4<=min(PB_M-1,32*t1+31);t4++) {
          for (t5=max(1,32*t2);t5<=min(min(PB_Q-1,32*t2+31),t4-1);t5++) {
            lbv=32*t3;
            ubv=min(PB_P-1,32*t3+31);
#pragma ivdep
#pragma vector always
            for (t6=lbv;t6<=ubv;t6++) {
              B[t4][t6][t5] = 5;;
            }
          }
        }
      }
      if ((t1 == 0) && (t2 == 0) && (t3 == 0)) {
        C[0] = C[0 +2] * 6;;
        C[0] = 6;;
        for (t5=1;t5<=31;t5++) {
          C[t5] = C[t5+2] * 6;;
        }
      }
      if ((t1 == 0) && (t2 >= 1) && (t2 <= floord(PB_L-3,32)) && (t3 == 0)) {
        for (t5=32*t2;t5<=min(PB_L-3,32*t2+31);t5++) {
          C[t5] = C[t5+2] * 6;;
        }
      }
      if ((t2 >= ceild(PB_Q,32)) && (t3 == 0)) {
        for (t4=max(ceild(32*t2-PB_L+3,2),32*t1);t4<=min(floord(32*t2-1,3),32*t1+31);t4++) {
          for (t5=32*t2;t5<=min(32*t2+31,2*t4+PB_L-3);t5++) {
            C[(-2*t4+t5)] = C[(-2*t4+t5)+2] * 6;;
          }
        }
      }
      if ((PB_L == 300) && (t1 == 9) && (t2 == 28) && (t3 == 0)) {
        C[299] = 6;;
      }
      if ((t1 == 0) && (t2 == 0) && (t3 >= 1) && (t3 <= floord(PB_Q-1,32))) {
        for (t5=0;t5<=31;t5++) {
          lbv=32*t3;
          ubv=min(PB_Q-1,32*t3+31);
#pragma ivdep
#pragma vector always
          for (t6=lbv;t6<=ubv;t6++) {
            F[1][t5][t6] = F[1][t5+2][t6] - F[1 +2][t5+1][t6] - G[t6][1 -1] - B[t5][t6][t5] + 6;;
          }
        }
      }
      if ((t2 <= floord(PB_Q-1,32)) && (t3 >= 1) && (t3 <= floord(PB_Q-1,32))) {
        for (t4=max(1,32*t1);t4<=min(32*t2,32*t1+31);t4++) {
          for (t5=32*t2;t5<=min(PB_Q-1,32*t2+31);t5++) {
            lbv=32*t3;
            ubv=min(PB_Q-1,32*t3+31);
#pragma ivdep
#pragma vector always
            for (t6=lbv;t6<=ubv;t6++) {
              F[t4][t5][t6] = F[t4][t5+2][t6] - F[t4+2][t5+1][t6] - G[t6][t4-1] - B[t5][t6][t5] + 6;;
            }
          }
        }
      }
      if ((t3 >= 1) && (t3 <= floord(PB_Q-1,32))) {
        for (t4=max(max(2,32*t1),32*t2+1);t4<=min(PB_L-3,32*t1+31);t4++) {
          if (t2 == 0) {
            lbv=32*t3;
            ubv=min(PB_Q-1,32*t3+31);
#pragma ivdep
#pragma vector always
            for (t6=lbv;t6<=ubv;t6++) {
              F[t4][0][t6] = F[t4][0 +2][t6] - F[t4+2][0 +1][t6] - G[t6][t4-1] - B[0][t6][0] + 6;;
            }
          }
          for (t5=max(1,32*t2);t5<=min(32*t2+31,t4-1);t5++) {
            lbv=32*t3;
            ubv=min(PB_Q-1,32*t3+31);
#pragma ivdep
#pragma vector always
            for (t6=lbv;t6<=ubv;t6++) {
              F[t4][t5][t6] = F[t4][t5+2][t6] - F[t4+2][t5+1][t6] - G[t6][t4-1] - B[t5][t6][t5] + 6;;
              B[t4][t6][t5] = 5;;
            }
            if (t3 == 9) {
              lbv=PB_Q;
              ubv=319;
#pragma ivdep
#pragma vector always
              for (t6=lbv;t6<=ubv;t6++) {
                B[t4][t6][t5] = 5;;
              }
            }
          }
          if (t1 == t2) {
            for (t5=t4;t5<=min(PB_Q-1,32*t1+31);t5++) {
              lbv=32*t3;
              ubv=min(PB_Q-1,32*t3+31);
#pragma ivdep
#pragma vector always
              for (t6=lbv;t6<=ubv;t6++) {
                F[t4][t5][t6] = F[t4][t5+2][t6] - F[t4+2][t5+1][t6] - G[t6][t4-1] - B[t5][t6][t5] + 6;;
              }
            }
          }
        }
      }
      if ((t2 <= floord(PB_Q-1,32)) && (t3 >= 1) && (t3 <= floord(PB_Q-1,32))) {
        for (t4=max(32*t1,PB_L-2);t4<=min(PB_M-1,32*t1+31);t4++) {
          for (t5=max(1,32*t2);t5<=min(min(PB_Q-1,32*t2+31),t4-1);t5++) {
            lbv=32*t3;
            ubv=32*t3+31;
#pragma ivdep
#pragma vector always
            for (t6=lbv;t6<=ubv;t6++) {
              B[t4][t6][t5] = 5;;
            }
          }
        }
      }
      if ((t1 == 0) && (t2 == 0) && (t3 == 0)) {
        F[1][0][0] = F[1][0 +2][0] - F[1 +2][0 +1][0] - G[0][1 -1] - B[0][0][0] + 6;;
        D[1] = D[1] - E[1] * 3;;
        lbv=1;
        ubv=31;
#pragma ivdep
#pragma vector always
        for (t6=lbv;t6<=ubv;t6++) {
          F[1][0][t6] = F[1][0 +2][t6] - F[1 +2][0 +1][t6] - G[t6][1 -1] - B[0][t6][0] + 6;;
        }
        lbv=0;
        ubv=31;
#pragma ivdep
#pragma vector always
        for (t6=lbv;t6<=ubv;t6++) {
          F[1][1][t6] = F[1][1 +2][t6] - F[1 +2][1 +1][t6] - G[t6][1 -1] - B[1][t6][1] + 6;;
        }
        F[1][2][0] = F[1][2 +2][0] - F[1 +2][2 +1][0] - G[0][1 -1] - B[2][0][2] + 6;;
        C[0] = C[0 +2] * 6;;
        lbv=1;
        ubv=31;
#pragma ivdep
#pragma vector always
        for (t6=lbv;t6<=ubv;t6++) {
          F[1][2][t6] = F[1][2 +2][t6] - F[1 +2][2 +1][t6] - G[t6][1 -1] - B[2][t6][2] + 6;;
        }
        F[1][3][0] = F[1][3 +2][0] - F[1 +2][3 +1][0] - G[0][1 -1] - B[3][0][3] + 6;;
        C[1] = C[1 +2] * 6;;
        C[1] = 6;;
        lbv=1;
        ubv=31;
#pragma ivdep
#pragma vector always
        for (t6=lbv;t6<=ubv;t6++) {
          F[1][3][t6] = F[1][3 +2][t6] - F[1 +2][3 +1][t6] - G[t6][1 -1] - B[3][t6][3] + 6;;
        }
        for (t5=4;t5<=31;t5++) {
          F[1][t5][0] = F[1][t5+2][0] - F[1 +2][t5+1][0] - G[0][1 -1] - B[t5][0][t5] + 6;;
          C[(t5-2)] = C[(t5-2)+2] * 6;;
          lbv=1;
          ubv=31;
#pragma ivdep
#pragma vector always
          for (t6=lbv;t6<=ubv;t6++) {
            F[1][t5][t6] = F[1][t5+2][t6] - F[1 +2][t5+1][t6] - G[t6][1 -1] - B[t5][t6][t5] + 6;;
          }
        }
      }
      if ((t2 >= ceild(PB_Q,32)) && (t3 == 0)) {
        for (t4=max(max(ceild(32*t2-PB_L+3,2),ceild(32*t2,3)),32*t1);t4<=min(min(floord(32*t2+31,3),PB_L-1),32*t1+31);t4++) {
          for (t5=32*t2;t5<=min(3*t4-1,2*t4+PB_L-3);t5++) {
            C[(-2*t4+t5)] = C[(-2*t4+t5)+2] * 6;;
          }
          if ((t1 == 9) && (t2 == PB_L-273) && (t4 >= PB_L-2)) {
            C[t4] = 6;;
          }
          if (t4 <= PB_L-3) {
            C[t4] = C[t4+2] * 6;;
            C[t4] = 6;;
          }
          for (t5=3*t4+1;t5<=min(32*t2+31,2*t4+PB_L-3);t5++) {
            C[(-2*t4+t5)] = C[(-2*t4+t5)+2] * 6;;
          }
        }
      }
      if ((t2 >= ceild(PB_Q,32)) && (t3 == 0)) {
        for (t4=max(ceild(32*t2+32,3),32*t1);t4<=min(min(PB_L-1,32*t1+31),16*t2+15);t4++) {
          for (t5=max(32*t2,2*t4);t5<=32*t2+31;t5++) {
            C[(-2*t4+t5)] = C[(-2*t4+t5)+2] * 6;;
          }
        }
      }
      if ((t2 <= floord(PB_Q-1,32)) && (t3 == 0)) {
        for (t4=max(1,32*t1);t4<=min(floord(32*t2-1,3),32*t1+31);t4++) {
          for (t5=32*t2;t5<=min(min(PB_Q-1,32*t2+31),2*t4+PB_L-3);t5++) {
            F[t4][t5][0] = F[t4][t5+2][0] - F[t4+2][t5+1][0] - G[0][t4-1] - B[t5][0][t5] + 6;;
            C[(-2*t4+t5)] = C[(-2*t4+t5)+2] * 6;;
            lbv=1;
            ubv=31;
#pragma ivdep
#pragma vector always
            for (t6=lbv;t6<=ubv;t6++) {
              F[t4][t5][t6] = F[t4][t5+2][t6] - F[t4+2][t5+1][t6] - G[t6][t4-1] - B[t5][t6][t5] + 6;;
            }
          }
          if (t2 == 9) {
            for (t5=PB_Q;t5<=min(319,2*t4+PB_L-3);t5++) {
              C[(-2*t4+t5)] = C[(-2*t4+t5)+2] * 6;;
            }
          }
          if ((PB_L == 300) && (PB_Q == 301) && (t1 == 0) && (t2 == 9) && (t4 == 1)) {
            lbv=0;
            ubv=31;
#pragma ivdep
#pragma vector always
            for (t6=lbv;t6<=ubv;t6++) {
              F[1][300][t6] = F[1][300 +2][t6] - F[1 +2][300 +1][t6] - G[t6][1 -1] - B[300][t6][300] + 6;;
            }
          }
        }
      }
      if ((t1 == 0) && (t2 == 0) && (t3 == 0)) {
        for (t4=2;t4<=10;t4++) {
          F[t4][0][0] = F[t4][0 +2][0] - F[t4+2][0 +1][0] - G[0][t4-1] - B[0][0][0] + 6;;
          D[t4] = D[t4] - E[t4] * 3;;
          lbv=1;
          ubv=31;
#pragma ivdep
#pragma vector always
          for (t6=lbv;t6<=ubv;t6++) {
            F[t4][0][t6] = F[t4][0 +2][t6] - F[t4+2][0 +1][t6] - G[t6][t4-1] - B[0][t6][0] + 6;;
          }
          for (t5=1;t5<=t4-1;t5++) {
            F[t4][t5][0] = F[t4][t5+2][0] - F[t4+2][t5+1][0] - G[0][t4-1] - B[t5][0][t5] + 6;;
            B[t4][0][t5] = 5;;
            A[t4][t5-1] = 3;;
            lbv=1;
            ubv=31;
#pragma ivdep
#pragma vector always
            for (t6=lbv;t6<=ubv;t6++) {
              F[t4][t5][t6] = F[t4][t5+2][t6] - F[t4+2][t5+1][t6] - G[t6][t4-1] - B[t5][t6][t5] + 6;;
              B[t4][t6][t5] = 5;;
            }
          }
          for (t5=t4;t5<=2*t4-1;t5++) {
            lbv=0;
            ubv=31;
#pragma ivdep
#pragma vector always
            for (t6=lbv;t6<=ubv;t6++) {
              F[t4][t5][t6] = F[t4][t5+2][t6] - F[t4+2][t5+1][t6] - G[t6][t4-1] - B[t5][t6][t5] + 6;;
            }
          }
          for (t5=2*t4;t5<=3*t4-1;t5++) {
            F[t4][t5][0] = F[t4][t5+2][0] - F[t4+2][t5+1][0] - G[0][t4-1] - B[t5][0][t5] + 6;;
            C[(-2*t4+t5)] = C[(-2*t4+t5)+2] * 6;;
            lbv=1;
            ubv=31;
#pragma ivdep
#pragma vector always
            for (t6=lbv;t6<=ubv;t6++) {
              F[t4][t5][t6] = F[t4][t5+2][t6] - F[t4+2][t5+1][t6] - G[t6][t4-1] - B[t5][t6][t5] + 6;;
            }
          }
          F[t4][3*t4][0] = F[t4][3*t4+2][0] - F[t4+2][3*t4+1][0] - G[0][t4-1] - B[3*t4][0][3*t4] + 6;;
          C[t4] = C[t4+2] * 6;;
          C[t4] = 6;;
          lbv=1;
          ubv=31;
#pragma ivdep
#pragma vector always
          for (t6=lbv;t6<=ubv;t6++) {
            F[t4][3*t4][t6] = F[t4][3*t4+2][t6] - F[t4+2][3*t4+1][t6] - G[t6][t4-1] - B[3*t4][t6][3*t4] + 6;;
          }
          for (t5=3*t4+1;t5<=31;t5++) {
            F[t4][t5][0] = F[t4][t5+2][0] - F[t4+2][t5+1][0] - G[0][t4-1] - B[t5][0][t5] + 6;;
            C[(-2*t4+t5)] = C[(-2*t4+t5)+2] * 6;;
            lbv=1;
            ubv=31;
#pragma ivdep
#pragma vector always
            for (t6=lbv;t6<=ubv;t6++) {
              F[t4][t5][t6] = F[t4][t5+2][t6] - F[t4+2][t5+1][t6] - G[t6][t4-1] - B[t5][t6][t5] + 6;;
            }
          }
        }
      }
      if ((t1 == 0) && (t2 == 0) && (t3 == 0)) {
        for (t4=11;t4<=15;t4++) {
          F[t4][0][0] = F[t4][0 +2][0] - F[t4+2][0 +1][0] - G[0][t4-1] - B[0][0][0] + 6;;
          D[t4] = D[t4] - E[t4] * 3;;
          lbv=1;
          ubv=31;
#pragma ivdep
#pragma vector always
          for (t6=lbv;t6<=ubv;t6++) {
            F[t4][0][t6] = F[t4][0 +2][t6] - F[t4+2][0 +1][t6] - G[t6][t4-1] - B[0][t6][0] + 6;;
          }
          for (t5=1;t5<=t4-1;t5++) {
            F[t4][t5][0] = F[t4][t5+2][0] - F[t4+2][t5+1][0] - G[0][t4-1] - B[t5][0][t5] + 6;;
            B[t4][0][t5] = 5;;
            A[t4][t5-1] = 3;;
            lbv=1;
            ubv=31;
#pragma ivdep
#pragma vector always
            for (t6=lbv;t6<=ubv;t6++) {
              F[t4][t5][t6] = F[t4][t5+2][t6] - F[t4+2][t5+1][t6] - G[t6][t4-1] - B[t5][t6][t5] + 6;;
              B[t4][t6][t5] = 5;;
            }
          }
          for (t5=t4;t5<=2*t4-1;t5++) {
            lbv=0;
            ubv=31;
#pragma ivdep
#pragma vector always
            for (t6=lbv;t6<=ubv;t6++) {
              F[t4][t5][t6] = F[t4][t5+2][t6] - F[t4+2][t5+1][t6] - G[t6][t4-1] - B[t5][t6][t5] + 6;;
            }
          }
          for (t5=2*t4;t5<=31;t5++) {
            F[t4][t5][0] = F[t4][t5+2][0] - F[t4+2][t5+1][0] - G[0][t4-1] - B[t5][0][t5] + 6;;
            C[(-2*t4+t5)] = C[(-2*t4+t5)+2] * 6;;
            lbv=1;
            ubv=31;
#pragma ivdep
#pragma vector always
            for (t6=lbv;t6<=ubv;t6++) {
              F[t4][t5][t6] = F[t4][t5+2][t6] - F[t4+2][t5+1][t6] - G[t6][t4-1] - B[t5][t6][t5] + 6;;
            }
          }
        }
      }
      if ((t2 == 0) && (t3 == 0)) {
        for (t4=max(16,32*t1);t4<=min(PB_L-3,32*t1+31);t4++) {
          F[t4][0][0] = F[t4][0 +2][0] - F[t4+2][0 +1][0] - G[0][t4-1] - B[0][0][0] + 6;;
          D[t4] = D[t4] - E[t4] * 3;;
          lbv=1;
          ubv=31;
#pragma ivdep
#pragma vector always
          for (t6=lbv;t6<=ubv;t6++) {
            F[t4][0][t6] = F[t4][0 +2][t6] - F[t4+2][0 +1][t6] - G[t6][t4-1] - B[0][t6][0] + 6;;
          }
          for (t5=1;t5<=min(31,t4-1);t5++) {
            F[t4][t5][0] = F[t4][t5+2][0] - F[t4+2][t5+1][0] - G[0][t4-1] - B[t5][0][t5] + 6;;
            B[t4][0][t5] = 5;;
            A[t4][t5-1] = 3;;
            lbv=1;
            ubv=31;
#pragma ivdep
#pragma vector always
            for (t6=lbv;t6<=ubv;t6++) {
              F[t4][t5][t6] = F[t4][t5+2][t6] - F[t4+2][t5+1][t6] - G[t6][t4-1] - B[t5][t6][t5] + 6;;
              B[t4][t6][t5] = 5;;
            }
          }
          if (t1 == 0) {
            for (t5=t4;t5<=31;t5++) {
              lbv=0;
              ubv=31;
#pragma ivdep
#pragma vector always
              for (t6=lbv;t6<=ubv;t6++) {
                F[t4][t5][t6] = F[t4][t5+2][t6] - F[t4+2][t5+1][t6] - G[t6][t4-1] - B[t5][t6][t5] + 6;;
              }
            }
          }
        }
      }
      if ((t2 == 0) && (t3 == 0)) {
        for (t4=max(32*t1,PB_L-2);t4<=min(PB_M-1,32*t1+31);t4++) {
          for (t5=1;t5<=31;t5++) {
            B[t4][0][t5] = 5;;
            A[t4][t5-1] = 3;;
            lbv=1;
            ubv=31;
#pragma ivdep
#pragma vector always
            for (t6=lbv;t6<=ubv;t6++) {
              B[t4][t6][t5] = 5;;
            }
          }
        }
      }
      if ((t2 <= floord(PB_Q-1,32)) && (t3 == 0)) {
        for (t4=max(max(1,ceild(32*t2,3)),32*t1);t4<=min(min(floord(32*t2+31,3),32*t2),32*t1+31);t4++) {
          if ((t1 == 0) && (t2 == 1)) {
            for (t5=32;t5<=2*t4-1;t5++) {
              lbv=0;
              ubv=31;
#pragma ivdep
#pragma vector always
              for (t6=lbv;t6<=ubv;t6++) {
                F[t4][t5][t6] = F[t4][t5+2][t6] - F[t4+2][t5+1][t6] - G[t6][t4-1] - B[t5][t6][t5] + 6;;
              }
            }
          }
          for (t5=max(32*t2,2*t4);t5<=min(PB_Q-1,3*t4-1);t5++) {
            F[t4][t5][0] = F[t4][t5+2][0] - F[t4+2][t5+1][0] - G[0][t4-1] - B[t5][0][t5] + 6;;
            C[(-2*t4+t5)] = C[(-2*t4+t5)+2] * 6;;
            lbv=1;
            ubv=31;
#pragma ivdep
#pragma vector always
            for (t6=lbv;t6<=ubv;t6++) {
              F[t4][t5][t6] = F[t4][t5+2][t6] - F[t4+2][t5+1][t6] - G[t6][t4-1] - B[t5][t6][t5] + 6;;
            }
          }
          if ((t1 == 3) && (t2 == 9)) {
            for (t5=PB_Q;t5<=3*t4-1;t5++) {
              C[(-2*t4+t5)] = C[(-2*t4+t5)+2] * 6;;
            }
          }
          if (t4 <= floord(PB_Q-1,3)) {
            F[t4][3*t4][0] = F[t4][3*t4+2][0] - F[t4+2][3*t4+1][0] - G[0][t4-1] - B[3*t4][0][3*t4] + 6;;
            C[t4] = C[t4+2] * 6;;
            C[t4] = 6;;
            lbv=1;
            ubv=31;
#pragma ivdep
#pragma vector always
            for (t6=lbv;t6<=ubv;t6++) {
              F[t4][3*t4][t6] = F[t4][3*t4+2][t6] - F[t4+2][3*t4+1][t6] - G[t6][t4-1] - B[3*t4][t6][3*t4] + 6;;
            }
          }
          if ((t1 == 3) && (t2 == 9) && (t4 >= ceild(PB_Q,3))) {
            C[t4] = C[t4+2] * 6;;
            C[t4] = 6;;
          }
          for (t5=3*t4+1;t5<=min(PB_Q-1,32*t2+31);t5++) {
            F[t4][t5][0] = F[t4][t5+2][0] - F[t4+2][t5+1][0] - G[0][t4-1] - B[t5][0][t5] + 6;;
            C[(-2*t4+t5)] = C[(-2*t4+t5)+2] * 6;;
            lbv=1;
            ubv=31;
#pragma ivdep
#pragma vector always
            for (t6=lbv;t6<=ubv;t6++) {
              F[t4][t5][t6] = F[t4][t5+2][t6] - F[t4+2][t5+1][t6] - G[t6][t4-1] - B[t5][t6][t5] + 6;;
            }
          }
          if ((t1 == 3) && (t2 == 9)) {
            for (t5=max(PB_Q,3*t4+1);t5<=319;t5++) {
              C[(-2*t4+t5)] = C[(-2*t4+t5)+2] * 6;;
            }
          }
        }
      }
      if ((t2 <= floord(PB_Q-1,32)) && (t3 == 0)) {
        for (t4=max(ceild(32*t2+32,3),32*t1);t4<=min(min(32*t2,32*t1+31),16*t2+15);t4++) {
          for (t5=32*t2;t5<=min(PB_Q-1,2*t4-1);t5++) {
            lbv=0;
            ubv=31;
#pragma ivdep
#pragma vector always
            for (t6=lbv;t6<=ubv;t6++) {
              F[t4][t5][t6] = F[t4][t5+2][t6] - F[t4+2][t5+1][t6] - G[t6][t4-1] - B[t5][t6][t5] + 6;;
            }
          }
          for (t5=max(32*t2,2*t4);t5<=min(PB_Q-1,32*t2+31);t5++) {
            F[t4][t5][0] = F[t4][t5+2][0] - F[t4+2][t5+1][0] - G[0][t4-1] - B[t5][0][t5] + 6;;
            C[(-2*t4+t5)] = C[(-2*t4+t5)+2] * 6;;
            lbv=1;
            ubv=31;
#pragma ivdep
#pragma vector always
            for (t6=lbv;t6<=ubv;t6++) {
              F[t4][t5][t6] = F[t4][t5+2][t6] - F[t4+2][t5+1][t6] - G[t6][t4-1] - B[t5][t6][t5] + 6;;
            }
          }
          if (t2 == 9) {
            for (t5=max(PB_Q,2*t4);t5<=319;t5++) {
              C[(-2*t4+t5)] = C[(-2*t4+t5)+2] * 6;;
            }
          }
        }
      }
      if ((t2 <= floord(PB_Q-1,32)) && (t3 == 0)) {
        for (t4=max(32*t1,16*t2+16);t4<=min(32*t2,32*t1+31);t4++) {
          for (t5=32*t2;t5<=min(PB_Q-1,32*t2+31);t5++) {
            lbv=0;
            ubv=31;
#pragma ivdep
#pragma vector always
            for (t6=lbv;t6<=ubv;t6++) {
              F[t4][t5][t6] = F[t4][t5+2][t6] - F[t4+2][t5+1][t6] - G[t6][t4-1] - B[t5][t6][t5] + 6;;
            }
          }
        }
      }
      if ((t2 >= 1) && (t3 == 0)) {
        for (t4=max(32*t1,32*t2+1);t4<=min(PB_L-3,32*t1+31);t4++) {
          for (t5=32*t2;t5<=min(32*t2+31,t4-1);t5++) {
            F[t4][t5][0] = F[t4][t5+2][0] - F[t4+2][t5+1][0] - G[0][t4-1] - B[t5][0][t5] + 6;;
            B[t4][0][t5] = 5;;
            A[t4][t5-1] = 3;;
            lbv=1;
            ubv=31;
#pragma ivdep
#pragma vector always
            for (t6=lbv;t6<=ubv;t6++) {
              F[t4][t5][t6] = F[t4][t5+2][t6] - F[t4+2][t5+1][t6] - G[t6][t4-1] - B[t5][t6][t5] + 6;;
              B[t4][t6][t5] = 5;;
            }
          }
          if (t1 == t2) {
            for (t5=t4;t5<=min(PB_Q-1,32*t1+31);t5++) {
              lbv=0;
              ubv=31;
#pragma ivdep
#pragma vector always
              for (t6=lbv;t6<=ubv;t6++) {
                F[t4][t5][t6] = F[t4][t5+2][t6] - F[t4+2][t5+1][t6] - G[t6][t4-1] - B[t5][t6][t5] + 6;;
              }
            }
          }
        }
      }
      if ((t2 >= 1) && (t2 <= floord(PB_Q-1,32)) && (t3 == 0)) {
        for (t4=max(32*t1,PB_L-2);t4<=min(PB_M-1,32*t1+31);t4++) {
          for (t5=32*t2;t5<=min(min(PB_Q-1,32*t2+31),t4-1);t5++) {
            B[t4][0][t5] = 5;;
            A[t4][t5-1] = 3;;
            lbv=1;
            ubv=31;
#pragma ivdep
#pragma vector always
            for (t6=lbv;t6<=ubv;t6++) {
              B[t4][t6][t5] = 5;;
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
int xb = xB;
int yb = yB;
int zb = zB;
int xc = xC;
int xd = xD;
int xf = xF;
int yf = yF;
int zf = zF;
int xe = xE;
int xg = xG;
int yg = yG;
POLYBENCH_2D_ARRAY_DECL(A, DATA_TYPE,xA,yA,xa,ya);
POLYBENCH_3D_ARRAY_DECL(B, DATA_TYPE,xB,yB,zB,xb,yb,zb);
POLYBENCH_1D_ARRAY_DECL(C, DATA_TYPE,xC,xc);
POLYBENCH_1D_ARRAY_DECL(D, DATA_TYPE,xD,xd);
POLYBENCH_3D_ARRAY_DECL(F, DATA_TYPE,xF,yF,zF,xf,yf,zf);
POLYBENCH_1D_ARRAY_DECL(E, DATA_TYPE,xE,xe);
POLYBENCH_2D_ARRAY_DECL(G, DATA_TYPE,xG,yG,xg,yg);
init_array(xa,ya,POLYBENCH_ARRAY(A),xb,yb,zb,POLYBENCH_ARRAY(B),xc,POLYBENCH_ARRAY(C),xd,POLYBENCH_ARRAY(D),xf,yf,zf,POLYBENCH_ARRAY(F),xe,POLYBENCH_ARRAY(E),xg,yg,POLYBENCH_ARRAY(G),INIT_SEED);
kernel_3624321222_00(xa,ya,POLYBENCH_ARRAY(A),xb,yb,zb,POLYBENCH_ARRAY(B),xc,POLYBENCH_ARRAY(C),xd,POLYBENCH_ARRAY(D),xf,yf,zf,POLYBENCH_ARRAY(F),xe,POLYBENCH_ARRAY(E),xg,yg,POLYBENCH_ARRAY(G));
polybench_prevent_dce(print_array(xa,ya,POLYBENCH_ARRAY(A),xb,yb,zb,POLYBENCH_ARRAY(B),xc,POLYBENCH_ARRAY(C),xd,POLYBENCH_ARRAY(D),xf,yf,zf,POLYBENCH_ARRAY(F),xe,POLYBENCH_ARRAY(E),xg,yg,POLYBENCH_ARRAY(G)));
POLYBENCH_FREE_ARRAY(A);
POLYBENCH_FREE_ARRAY(B);
POLYBENCH_FREE_ARRAY(C);
POLYBENCH_FREE_ARRAY(D);
POLYBENCH_FREE_ARRAY(F);
POLYBENCH_FREE_ARRAY(E);
POLYBENCH_FREE_ARRAY(G);
return 0;
}
