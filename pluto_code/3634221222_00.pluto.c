#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <math.h>
#include <polybench.h>
#include <time.h>
#include <stdlib.h>
#include "3634221222_00.h"
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
static void init_array(int xa,int ya,int za,DATA_TYPE POLYBENCH_3D(A,xA,yA,zA,xa,ya,za),int xb,DATA_TYPE POLYBENCH_1D(B,xB,xb),int xd,int yd,DATA_TYPE POLYBENCH_2D(D,xD,yD,xd,yd),int xf,int yf,int zf,DATA_TYPE POLYBENCH_3D(F,xF,yF,zF,xf,yf,zf),int xc,DATA_TYPE POLYBENCH_1D(C,xC,xc),int xe,int ye,DATA_TYPE POLYBENCH_2D(E,xE,yE,xe,ye),int seed)
{
srand(seed);
int i,j,k,l;
for (i = 0; i < xa; i++) {
for (j = 0; j < ya; j++) {
for (k = 0; k < za; k++) {
A[i][j][k] = rand()%3;;
}}}
for (i = 0; i < xb; i++) {
B[i] = rand()%3;;
}
for (i = 0; i < xd; i++) {
for (j = 0; j < yd; j++) {
D[i][j] = rand()%3;;
}}
for (i = 0; i < xf; i++) {
for (j = 0; j < yf; j++) {
for (k = 0; k < zf; k++) {
F[i][j][k] = rand()%3;;
}}}
for (i = 0; i < xc; i++) {
C[i] = rand()%3;;
}
for (i = 0; i < xe; i++) {
for (j = 0; j < ye; j++) {
E[i][j] = rand()%3;;
}}
}
static void print_array(int xa,int ya,int za,DATA_TYPE POLYBENCH_3D(A,xA,yA,zA,xa,ya,za),int xb,DATA_TYPE POLYBENCH_1D(B,xB,xb),int xd,int yd,DATA_TYPE POLYBENCH_2D(D,xD,yD,xd,yd),int xf,int yf,int zf,DATA_TYPE POLYBENCH_3D(F,xF,yF,zF,xf,yf,zf),int xc,DATA_TYPE POLYBENCH_1D(C,xC,xc),int xe,int ye,DATA_TYPE POLYBENCH_2D(E,xE,yE,xe,ye))
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
fprintf (POLYBENCH_DUMP_TARGET, "\n");
fprintf (POLYBENCH_DUMP_TARGET, DATA_PRINTF_MODIFIER, B[i]);
}
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
POLYBENCH_DUMP_BEGIN("C");
for (i = 0; i < xc; i++) {
fprintf (POLYBENCH_DUMP_TARGET, "\n");
fprintf (POLYBENCH_DUMP_TARGET, DATA_PRINTF_MODIFIER, C[i]);
}
POLYBENCH_DUMP_END("C");
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
void kernel_3634221222_00(int xa,int ya,int za,DATA_TYPE POLYBENCH_3D(A,xA,yA,zA,xa,ya,za),int xb,DATA_TYPE POLYBENCH_1D(B,xB,xb),int xd,int yd,DATA_TYPE POLYBENCH_2D(D,xD,yD,xd,yd),int xf,int yf,int zf,DATA_TYPE POLYBENCH_3D(F,xF,yF,zF,xf,yf,zf),int xc,DATA_TYPE POLYBENCH_1D(C,xC,xc),int xe,int ye,DATA_TYPE POLYBENCH_2D(E,xE,yE,xe,ye)){
polybench_start_instruments;
  int t1, t2, t3, t4, t5, t6, t7, t8;
 int lb, ub, lbp, ubp, lb2, ub2;
 register int lbv, ubv;
/* Start of CLooG code */
lbp=0;
ubp=floord(PB_N-2,32);
#pragma omp parallel for private(lbv,ubv,t4,t5,t6,t7,t8)
for (t3=lbp;t3<=ubp;t3++) {
  lbv=32*t3;
  ubv=min(PB_N-2,32*t3+31);
#pragma ivdep
#pragma vector always
  for (t4=lbv;t4<=ubv;t4++) {
    B[t4] = B[t4] * B[t4] + C[t4] + C[t4+1] - 4;;
  }
}
for (t3=0;t3<=PB_L-1;t3++) {
  for (t4=0;t4<=min(min(min(min(min(min(min(floord(2*PB_Q+PB_L-5,32),floord(-166*t3+166*PB_N+34*PB_Q+17*PB_L-417,544)),floord(-199*t3+40*PB_Q+199*PB_L-12199,640)),floord(-499*t3+499*PB_N+51*PB_L+29449,1632)),floord(-997*t3+997*PB_L-997,3200)),floord(-998*t3+101*PB_L+358699,3232)),floord(-997*t3+997*PB_N+997*PB_L-300097,3232)),floord(-996*t3+202*PB_Q+101*PB_L+297299,3232));t4++) {
    if (t4 == 0) {
      B[t3] = B[t3] - B[t3] + 1;;
    }
    if (t3 <= PB_N-2) {
      lbp=max(ceild(t4,2),ceild(32*t4-PB_Q+1,32));
      ubp=min(min(floord(PB_Q+PB_L-4,32),floord(32*t4+PB_L+28,64)),t4);
#pragma omp parallel for private(lbv,ubv,t6,t7,t8)
      for (t5=lbp;t5<=ubp;t5++) {
        for (t6=max(32*t4-32*t5,32*t5-PB_L+3);t6<=min(min(PB_Q-1,32*t5+30),32*t4-32*t5+31);t6++) {
          for (t7=max(32*t5,t6+1);t7<=min(32*t5+31,t6+PB_L-3);t7++) {
            A[(-t6+t7)+1][(-t6+t7)][t6] = A[(-t6+t7)+1][(-t6+t7)-1][t6] - A[(-t6+t7)+2][(-t6+t7)][t6] + A[(-t6+t7)][t6][t3] + 6;;
          }
        }
      }
    }
  }
}
for (t3=1;t3<=PB_M-2;t3++) {
  for (t4=0;t4<=floord(PB_M-1,32);t4++) {
    for (t5=0;t5<=floord(t3-1,32);t5++) {
      if (t5 == 0) {
        for (t6=max(2,32*t4);t6<=min(t3-1,32*t4+31);t6++) {
          D[t3][t6] = D[t3-1][t6] * D[t3][t6-2] + E[t3+1][t3] * 3;;
          F[t3][(t6-1)+1][t3] = D[(t6-1)+2][(t6-1)+1] + A[t3][(t6-1)][0] + 5;;
          D[(t6-1)+1][(t6-1)+1] = D[(t6-1)-1][(t6-1)+1] - D[(t6-1)+1][(t6-1)+1] * E[(t6-1)][t3+1] - D[t3+1][(t6-1)] - 4;;
          for (t7=1;t7<=min(31,t3-1);t7++) {
            F[t3][(t6-1)+1][t3] = D[(t6-1)+2][(t6-1)+1] + A[t3][(t6-1)][t7] + 5;;
          }
        }
      }
      if (t5 == 0) {
        for (t6=max(max(2,t3),32*t4);t6<=min(PB_M-1,32*t4+31);t6++) {
          F[t3][(t6-1)+1][t3] = D[(t6-1)+2][(t6-1)+1] + A[t3][(t6-1)][0] + 5;;
          D[(t6-1)+1][(t6-1)+1] = D[(t6-1)-1][(t6-1)+1] - D[(t6-1)+1][(t6-1)+1] * E[(t6-1)][t3+1] - D[t3+1][(t6-1)] - 4;;
          for (t7=1;t7<=min(31,t3-1);t7++) {
            F[t3][(t6-1)+1][t3] = D[(t6-1)+2][(t6-1)+1] + A[t3][(t6-1)][t7] + 5;;
          }
        }
      }
      if (t5 >= 1) {
        for (t6=max(2,32*t4);t6<=min(PB_M-1,32*t4+31);t6++) {
          for (t7=32*t5;t7<=min(t3-1,32*t5+31);t7++) {
            F[t3][(t6-1)+1][t3] = D[(t6-1)+2][(t6-1)+1] + A[t3][(t6-1)][t7] + 5;;
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
int xd = xD;
int yd = yD;
int xf = xF;
int yf = yF;
int zf = zF;
int xc = xC;
int xe = xE;
int ye = yE;
POLYBENCH_3D_ARRAY_DECL(A, DATA_TYPE,xA,yA,zA,xa,ya,za);
POLYBENCH_1D_ARRAY_DECL(B, DATA_TYPE,xB,xb);
POLYBENCH_2D_ARRAY_DECL(D, DATA_TYPE,xD,yD,xd,yd);
POLYBENCH_3D_ARRAY_DECL(F, DATA_TYPE,xF,yF,zF,xf,yf,zf);
POLYBENCH_1D_ARRAY_DECL(C, DATA_TYPE,xC,xc);
POLYBENCH_2D_ARRAY_DECL(E, DATA_TYPE,xE,yE,xe,ye);
init_array(xa,ya,za,POLYBENCH_ARRAY(A),xb,POLYBENCH_ARRAY(B),xd,yd,POLYBENCH_ARRAY(D),xf,yf,zf,POLYBENCH_ARRAY(F),xc,POLYBENCH_ARRAY(C),xe,ye,POLYBENCH_ARRAY(E),INIT_SEED);
kernel_3634221222_00(xa,ya,za,POLYBENCH_ARRAY(A),xb,POLYBENCH_ARRAY(B),xd,yd,POLYBENCH_ARRAY(D),xf,yf,zf,POLYBENCH_ARRAY(F),xc,POLYBENCH_ARRAY(C),xe,ye,POLYBENCH_ARRAY(E));
polybench_prevent_dce(print_array(xa,ya,za,POLYBENCH_ARRAY(A),xb,POLYBENCH_ARRAY(B),xd,yd,POLYBENCH_ARRAY(D),xf,yf,zf,POLYBENCH_ARRAY(F),xc,POLYBENCH_ARRAY(C),xe,ye,POLYBENCH_ARRAY(E)));
POLYBENCH_FREE_ARRAY(A);
POLYBENCH_FREE_ARRAY(B);
POLYBENCH_FREE_ARRAY(D);
POLYBENCH_FREE_ARRAY(F);
POLYBENCH_FREE_ARRAY(C);
POLYBENCH_FREE_ARRAY(E);
return 0;
}
