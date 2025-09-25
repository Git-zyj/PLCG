#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <math.h>
#include <polybench.h>
#include <time.h>
#include <stdlib.h>
#include "3314321226_00.h"
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
static void init_array(int xa,DATA_TYPE POLYBENCH_1D(A,xA,xa),int xc,int yc,DATA_TYPE POLYBENCH_2D(C,xC,yC,xc,yc),int xe,int ye,int ze,DATA_TYPE POLYBENCH_3D(E,xE,yE,zE,xe,ye,ze),int xb,DATA_TYPE POLYBENCH_1D(B,xB,xb),int xd,DATA_TYPE POLYBENCH_1D(D,xD,xd),int seed)
{
srand(seed);
int i,j,k,l;
for (i = 0; i < xa; i++) {
A[i] = rand()%3;;
}
for (i = 0; i < xc; i++) {
for (j = 0; j < yc; j++) {
C[i][j] = rand()%3;;
}}
for (i = 0; i < xe; i++) {
for (j = 0; j < ye; j++) {
for (k = 0; k < ze; k++) {
E[i][j][k] = rand()%3;;
}}}
for (i = 0; i < xb; i++) {
B[i] = rand()%3;;
}
for (i = 0; i < xd; i++) {
D[i] = rand()%3;;
}
}
static void print_array(int xa,DATA_TYPE POLYBENCH_1D(A,xA,xa),int xc,int yc,DATA_TYPE POLYBENCH_2D(C,xC,yC,xc,yc),int xe,int ye,int ze,DATA_TYPE POLYBENCH_3D(E,xE,yE,zE,xe,ye,ze),int xb,DATA_TYPE POLYBENCH_1D(B,xB,xb),int xd,DATA_TYPE POLYBENCH_1D(D,xD,xd))
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
POLYBENCH_DUMP_BEGIN("C");
for (i = 0; i < xc; i++) {
for (j = 0; j < yc; j++) {
fprintf (POLYBENCH_DUMP_TARGET, "\n");
fprintf (POLYBENCH_DUMP_TARGET, DATA_PRINTF_MODIFIER, C[i][j]);
}}
POLYBENCH_DUMP_END("C");
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
fprintf (POLYBENCH_DUMP_TARGET, "\n");
fprintf (POLYBENCH_DUMP_TARGET, DATA_PRINTF_MODIFIER, D[i]);
}
POLYBENCH_DUMP_END("D");
POLYBENCH_DUMP_FINISH;
}
void kernel_3314321226_00(int xa,DATA_TYPE POLYBENCH_1D(A,xA,xa),int xc,int yc,DATA_TYPE POLYBENCH_2D(C,xC,yC,xc,yc),int xe,int ye,int ze,DATA_TYPE POLYBENCH_3D(E,xE,yE,zE,xe,ye,ze),int xb,DATA_TYPE POLYBENCH_1D(B,xB,xb),int xd,DATA_TYPE POLYBENCH_1D(D,xD,xd)){
polybench_start_instruments;
  int t1, t2, t3, t4, t5;
 int lb, ub, lbp, ubp, lb2, ub2;
 register int lbv, ubv;
/* Start of CLooG code */
for (t1=0;t1<=PB_M-2;t1++) {
  for (t2=0;t2<=floord(PB_P-1,32);t2++) {
    for (t3=max(max(0,ceild(-299*t1+32*t2,16)),ceild(299*t1+64*t2-299*PB_M+598,32));t3<=min(floord(3*PB_P-4,32),floord(64*t2+PB_P+60,32));t3++) {
      if ((t1 >= 1) && (t1 <= PB_M-4) && (t2 == 0) && (t3 == 0)) {
        C[t1][t1+1] = C[t1][t1+1] * C[t1][t1+3] - D[0 +1] + C[t1][0] - 4;;
        A[t1+1] = A[t1+1] + A[t1+1] * B[t1-1] * B[t1] * 2;;
        for (t5=1;t5<=31;t5++) {
          E[t1][t5+1][t5] = E[t1][t5+1][t5+2] - E[t5-1][t1][0] - E[t1+1][0][t5] * 4;;
        }
      }
      if ((t1 >= 1) && (t1 <= PB_M-4) && (t2 == 0) && (t3 == 0)) {
        for (t4=1;t4<=15;t4++) {
          C[t1][t1+1] = C[t1][t1+1] * C[t1][t1+3] - D[t4+1] + C[t1][t4] - 4;;
          for (t5=2*t4+1;t5<=31;t5++) {
            E[t1][(-2*t4+t5)+1][(-2*t4+t5)] = E[t1][(-2*t4+t5)+1][(-2*t4+t5)+2] - E[(-2*t4+t5)-1][t1][t4] - E[t1+1][t4][(-2*t4+t5)] * 4;;
          }
        }
      }
      if ((t1 >= 1) && (t1 <= PB_M-4) && (t3 == 0)) {
        for (t4=max(16,32*t2);t4<=min(PB_M-2,32*t2+31);t4++) {
          C[t1][t1+1] = C[t1][t1+1] * C[t1][t1+3] - D[t4+1] + C[t1][t4] - 4;;
        }
      }
      if ((t1 >= PB_M-3) && (t2 == 0) && (t3 == 0)) {
        for (t4=0;t4<=15;t4++) {
          for (t5=2*t4+1;t5<=31;t5++) {
            E[t1][(-2*t4+t5)+1][(-2*t4+t5)] = E[t1][(-2*t4+t5)+1][(-2*t4+t5)+2] - E[(-2*t4+t5)-1][t1][t4] - E[t1+1][t4][(-2*t4+t5)] * 4;;
          }
        }
      }
      if ((t1 == 0) && (t2 == 0) && (t3 == 0)) {
        for (t4=0;t4<=15;t4++) {
          for (t5=2*t4+1;t5<=31;t5++) {
            E[0][(-2*t4+t5)+1][(-2*t4+t5)] = E[0][(-2*t4+t5)+1][(-2*t4+t5)+2] - E[(-2*t4+t5)-1][0][t4] - E[0 +1][t4][(-2*t4+t5)] * 4;;
          }
        }
      }
      if (t3 >= 1) {
        for (t4=max(ceild(32*t3-PB_P+2,2),32*t2);t4<=min(min(PB_P-1,32*t2+31),16*t3+15);t4++) {
          for (t5=max(32*t3,2*t4+1);t5<=min(32*t3+31,2*t4+PB_P-2);t5++) {
            E[t1][(-2*t4+t5)+1][(-2*t4+t5)] = E[t1][(-2*t4+t5)+1][(-2*t4+t5)+2] - E[(-2*t4+t5)-1][t1][t4] - E[t1+1][t4][(-2*t4+t5)] * 4;;
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
int xc = xC;
int yc = yC;
int xe = xE;
int ye = yE;
int ze = zE;
int xb = xB;
int xd = xD;
POLYBENCH_1D_ARRAY_DECL(A, DATA_TYPE,xA,xa);
POLYBENCH_2D_ARRAY_DECL(C, DATA_TYPE,xC,yC,xc,yc);
POLYBENCH_3D_ARRAY_DECL(E, DATA_TYPE,xE,yE,zE,xe,ye,ze);
POLYBENCH_1D_ARRAY_DECL(B, DATA_TYPE,xB,xb);
POLYBENCH_1D_ARRAY_DECL(D, DATA_TYPE,xD,xd);
init_array(xa,POLYBENCH_ARRAY(A),xc,yc,POLYBENCH_ARRAY(C),xe,ye,ze,POLYBENCH_ARRAY(E),xb,POLYBENCH_ARRAY(B),xd,POLYBENCH_ARRAY(D),INIT_SEED);
kernel_3314321226_00(xa,POLYBENCH_ARRAY(A),xc,yc,POLYBENCH_ARRAY(C),xe,ye,ze,POLYBENCH_ARRAY(E),xb,POLYBENCH_ARRAY(B),xd,POLYBENCH_ARRAY(D));
polybench_prevent_dce(print_array(xa,POLYBENCH_ARRAY(A),xc,yc,POLYBENCH_ARRAY(C),xe,ye,ze,POLYBENCH_ARRAY(E),xb,POLYBENCH_ARRAY(B),xd,POLYBENCH_ARRAY(D)));
POLYBENCH_FREE_ARRAY(A);
POLYBENCH_FREE_ARRAY(C);
POLYBENCH_FREE_ARRAY(E);
POLYBENCH_FREE_ARRAY(B);
POLYBENCH_FREE_ARRAY(D);
return 0;
}
