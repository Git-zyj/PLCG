#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <math.h>
#include <polybench.h>
#include <time.h>
#include <stdlib.h>
#include "3624221226_00.h"
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
static void init_array(int xa,int ya,DATA_TYPE POLYBENCH_2D(A,xA,yA,xa,ya),int xb,int yb,DATA_TYPE POLYBENCH_2D(B,xB,yB,xb,yb),int xd,DATA_TYPE POLYBENCH_1D(D,xD,xd),int xe,int ye,int ze,DATA_TYPE POLYBENCH_3D(E,xE,yE,zE,xe,ye,ze),int xc,DATA_TYPE POLYBENCH_1D(C,xC,xc),int xf,int yf,int zf,DATA_TYPE POLYBENCH_3D(F,xF,yF,zF,xf,yf,zf),int seed)
{
srand(seed);
int i,j,k,l;
for (i = 0; i < xa; i++) {
for (j = 0; j < ya; j++) {
A[i][j] = rand()%3;;
}}
for (i = 0; i < xb; i++) {
for (j = 0; j < yb; j++) {
B[i][j] = rand()%3;;
}}
for (i = 0; i < xd; i++) {
D[i] = rand()%3;;
}
for (i = 0; i < xe; i++) {
for (j = 0; j < ye; j++) {
for (k = 0; k < ze; k++) {
E[i][j][k] = rand()%3;;
}}}
for (i = 0; i < xc; i++) {
C[i] = rand()%3;;
}
for (i = 0; i < xf; i++) {
for (j = 0; j < yf; j++) {
for (k = 0; k < zf; k++) {
F[i][j][k] = rand()%3;;
}}}
}
static void print_array(int xa,int ya,DATA_TYPE POLYBENCH_2D(A,xA,yA,xa,ya),int xb,int yb,DATA_TYPE POLYBENCH_2D(B,xB,yB,xb,yb),int xd,DATA_TYPE POLYBENCH_1D(D,xD,xd),int xe,int ye,int ze,DATA_TYPE POLYBENCH_3D(E,xE,yE,zE,xe,ye,ze),int xc,DATA_TYPE POLYBENCH_1D(C,xC,xc),int xf,int yf,int zf,DATA_TYPE POLYBENCH_3D(F,xF,yF,zF,xf,yf,zf))
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
fprintf (POLYBENCH_DUMP_TARGET, "\n");
fprintf (POLYBENCH_DUMP_TARGET, DATA_PRINTF_MODIFIER, B[i][j]);
}}
POLYBENCH_DUMP_END("B");
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
}
void kernel_3624221226_00(int xa,int ya,DATA_TYPE POLYBENCH_2D(A,xA,yA,xa,ya),int xb,int yb,DATA_TYPE POLYBENCH_2D(B,xB,yB,xb,yb),int xd,DATA_TYPE POLYBENCH_1D(D,xD,xd),int xe,int ye,int ze,DATA_TYPE POLYBENCH_3D(E,xE,yE,zE,xe,ye,ze),int xc,DATA_TYPE POLYBENCH_1D(C,xC,xc),int xf,int yf,int zf,DATA_TYPE POLYBENCH_3D(F,xF,yF,zF,xf,yf,zf)){
polybench_start_instruments;
  int t1, t2, t3, t4, t5, t6, t7;
 int lb, ub, lbp, ubp, lb2, ub2;
 register int lbv, ubv;
/* Start of CLooG code */
for (t2=0;t2<=floord(3*PB_M-8,32);t2++) {
  lbp=max(ceild(t2,2),ceild(32*t2-PB_M+2,32));
  ubp=floord(2*t2+1,3);
#pragma omp parallel for private(lbv,ubv,t4,t5,t6,t7)
  for (t3=lbp;t3<=ubp;t3++) {
    for (t4=max(max(2,32*t2-32*t3),16*t3+1);t4<=min(min(PB_M-2,32*t3+30),32*t2-32*t3+31);t4++) {
      for (t5=max(32*t3,t4+1);t5<=min(32*t3+31,2*t4-1);t5++) {
        D[(-t4+t5)-1] = D[(-t4+t5)-1] * D[(-t4+t5)-1] + B[t4][t4+1] * 2;;
        lbv=1;
        ubv=PB_Q;
#pragma ivdep
#pragma vector always
        for (t6=lbv;t6<=ubv;t6++) {
          E[(-t4+t5)-1][t4][t6-1] = D[(-t4+t5)-1] + E[(-t4+t5)][t4-2][t6-1] + 1;;
        }
      }
    }
  }
}
for (t2=0;t2<=floord(PB_M-3,8);t2++) {
  lbp=max(ceild(2*t2,3),ceild(32*t2-PB_M+2,32));
  ubp=min(floord(3*t2+2,4),floord(3*PB_M-7,32));
#pragma omp parallel for private(lbv,ubv,t4,t5,t6,t7)
  for (t3=lbp;t3<=ubp;t3++) {
    for (t4=max(max(2,ceild(32*t3+1,3)),32*t2-32*t3);t4<=min(min(PB_M-2,16*t3+15),32*t2-32*t3+31);t4++) {
      lbv=max(32*t3,2*t4);
      ubv=min(32*t3+31,3*t4-1);
#pragma ivdep
#pragma vector always
      for (t5=lbv;t5<=ubv;t5++) {
        B[t4][(-2*t4+t5)] = B[t4-1][(-2*t4+t5)+2] - C[t4-1] * 5;;
      }
    }
  }
}
lbp=-1;
ubp=floord(PB_M-2,32);
#pragma omp parallel for private(lbv,ubv,t3,t4,t5,t6,t7)
for (t2=lbp;t2<=ubp;t2++) {
  for (t3=0;t3<=floord(PB_M-1,32);t3++) {
    for (t4=0;t4<=floord(PB_N-1,32);t4++) {
      for (t5=max(-1,32*t2);t5<=min(PB_M-2,32*t2+31);t5++) {
        for (t6=32*t4;t6<=min(PB_N-1,32*t4+31);t6++) {
          lbv=32*t3;
          ubv=min(PB_M-1,32*t3+31);
#pragma ivdep
#pragma vector always
          for (t7=lbv;t7<=ubv;t7++) {
            A[t5+1][t7] = A[t5+1][t7] * 5;;
          }
        }
      }
    }
  }
}
lbp=0;
ubp=floord(PB_M-1,32);
#pragma omp parallel for private(lbv,ubv,t3,t4,t5,t6,t7)
for (t2=lbp;t2<=ubp;t2++) {
  for (t3=0;t3<=floord(PB_M,32);t3++) {
    for (t4=max(1,32*t3);t4<=min(PB_M,32*t3+31);t4++) {
      lbv=max(1,32*t2);
      ubv=min(PB_M-1,32*t2+31);
#pragma ivdep
#pragma vector always
      for (t5=lbv;t5<=ubv;t5++) {
        A[t4-1][t5] = A[t4-1][t5] * 6;;
      }
    }
  }
}
for (t2=0;t2<=floord(PB_M-2,16);t2++) {
  lbp=max(0,ceild(32*t2-PB_M+1,32));
  ubp=floord(t2,2);
#pragma omp parallel for private(lbv,ubv,t4,t5,t6,t7)
  for (t3=lbp;t3<=ubp;t3++) {
    for (t4=0;t4<=floord(PB_M-2,32);t4++) {
      for (t5=max(max(2,32*t2-32*t3),32*t3+1);t5<=min(PB_M-1,32*t2-32*t3+31);t5++) {
        for (t6=max(1,32*t3);t6<=min(32*t3+31,t5-1);t6++) {
          lbv=32*t4;
          ubv=min(PB_M-2,32*t4+31);
#pragma ivdep
#pragma vector always
          for (t7=lbv;t7<=ubv;t7++) {
            E[t7+1][t5][t6-1] = E[t7+1][t5+2][t6-1] - A[t5-1][t5] - F[t6][t6][t7] + 3;;
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
int xd = xD;
int xe = xE;
int ye = yE;
int ze = zE;
int xc = xC;
int xf = xF;
int yf = yF;
int zf = zF;
POLYBENCH_2D_ARRAY_DECL(A, DATA_TYPE,xA,yA,xa,ya);
POLYBENCH_2D_ARRAY_DECL(B, DATA_TYPE,xB,yB,xb,yb);
POLYBENCH_1D_ARRAY_DECL(D, DATA_TYPE,xD,xd);
POLYBENCH_3D_ARRAY_DECL(E, DATA_TYPE,xE,yE,zE,xe,ye,ze);
POLYBENCH_1D_ARRAY_DECL(C, DATA_TYPE,xC,xc);
POLYBENCH_3D_ARRAY_DECL(F, DATA_TYPE,xF,yF,zF,xf,yf,zf);
init_array(xa,ya,POLYBENCH_ARRAY(A),xb,yb,POLYBENCH_ARRAY(B),xd,POLYBENCH_ARRAY(D),xe,ye,ze,POLYBENCH_ARRAY(E),xc,POLYBENCH_ARRAY(C),xf,yf,zf,POLYBENCH_ARRAY(F),INIT_SEED);
kernel_3624221226_00(xa,ya,POLYBENCH_ARRAY(A),xb,yb,POLYBENCH_ARRAY(B),xd,POLYBENCH_ARRAY(D),xe,ye,ze,POLYBENCH_ARRAY(E),xc,POLYBENCH_ARRAY(C),xf,yf,zf,POLYBENCH_ARRAY(F));
polybench_prevent_dce(print_array(xa,ya,POLYBENCH_ARRAY(A),xb,yb,POLYBENCH_ARRAY(B),xd,POLYBENCH_ARRAY(D),xe,ye,ze,POLYBENCH_ARRAY(E),xc,POLYBENCH_ARRAY(C),xf,yf,zf,POLYBENCH_ARRAY(F)));
POLYBENCH_FREE_ARRAY(A);
POLYBENCH_FREE_ARRAY(B);
POLYBENCH_FREE_ARRAY(D);
POLYBENCH_FREE_ARRAY(E);
POLYBENCH_FREE_ARRAY(C);
POLYBENCH_FREE_ARRAY(F);
return 0;
}
