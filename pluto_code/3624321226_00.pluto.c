#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <math.h>
#include <polybench.h>
#include <time.h>
#include <stdlib.h>
#include "3624321226_00.h"
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
static void init_array(int xa,DATA_TYPE POLYBENCH_1D(A,xA,xa),int xc,int yc,int zc,DATA_TYPE POLYBENCH_3D(C,xC,yC,zC,xc,yc,zc),int xb,DATA_TYPE POLYBENCH_1D(B,xB,xb),int xd,int yd,DATA_TYPE POLYBENCH_2D(D,xD,yD,xd,yd),int xe,int ye,int ze,DATA_TYPE POLYBENCH_3D(E,xE,yE,zE,xe,ye,ze),int seed)
{
srand(seed);
int i,j,k,l;
for (i = 0; i < xa; i++) {
A[i] = rand()%3;;
}
for (i = 0; i < xc; i++) {
for (j = 0; j < yc; j++) {
for (k = 0; k < zc; k++) {
C[i][j][k] = rand()%3;;
}}}
for (i = 0; i < xb; i++) {
B[i] = rand()%3;;
}
for (i = 0; i < xd; i++) {
for (j = 0; j < yd; j++) {
D[i][j] = rand()%3;;
}}
for (i = 0; i < xe; i++) {
for (j = 0; j < ye; j++) {
for (k = 0; k < ze; k++) {
E[i][j][k] = rand()%3;;
}}}
}
static void print_array(int xa,DATA_TYPE POLYBENCH_1D(A,xA,xa),int xc,int yc,int zc,DATA_TYPE POLYBENCH_3D(C,xC,yC,zC,xc,yc,zc),int xb,DATA_TYPE POLYBENCH_1D(B,xB,xb),int xd,int yd,DATA_TYPE POLYBENCH_2D(D,xD,yD,xd,yd),int xe,int ye,int ze,DATA_TYPE POLYBENCH_3D(E,xE,yE,zE,xe,ye,ze))
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
for (k = 0; k < zc; k++) {
fprintf (POLYBENCH_DUMP_TARGET, "\n");
fprintf (POLYBENCH_DUMP_TARGET, DATA_PRINTF_MODIFIER, C[i][j][k]);
}}}
POLYBENCH_DUMP_END("C");
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
POLYBENCH_DUMP_BEGIN("E");
for (i = 0; i < xe; i++) {
for (j = 0; j < ye; j++) {
for (k = 0; k < ze; k++) {
fprintf (POLYBENCH_DUMP_TARGET, "\n");
fprintf (POLYBENCH_DUMP_TARGET, DATA_PRINTF_MODIFIER, E[i][j][k]);
}}}
POLYBENCH_DUMP_END("E");
POLYBENCH_DUMP_FINISH;
}
void kernel_3624321226_00(int xa,DATA_TYPE POLYBENCH_1D(A,xA,xa),int xc,int yc,int zc,DATA_TYPE POLYBENCH_3D(C,xC,yC,zC,xc,yc,zc),int xb,DATA_TYPE POLYBENCH_1D(B,xB,xb),int xd,int yd,DATA_TYPE POLYBENCH_2D(D,xD,yD,xd,yd),int xe,int ye,int ze,DATA_TYPE POLYBENCH_3D(E,xE,yE,zE,xe,ye,ze)){
polybench_start_instruments;
  int t1, t2, t3, t4, t5, t6, t7;
 int lb, ub, lbp, ubp, lb2, ub2;
 register int lbv, ubv;
/* Start of CLooG code */
for (t1=0;t1<=floord(498*PB_M+PB_P-998,15936);t1++) {
  for (t2=0;t2<=floord(PB_P-2,32);t2++) {
    for (t3=max(max(max(0,ceild(3136*t1+28704*t2-799*PB_P+1598,3136)),ceild(15968*t2-499*PB_M+499,3200)),ceild(3200*t1+28704*t2-997*PB_M+1097,3200));t3<=floord(32*t1+PB_P+30,32);t3++) {
      if ((t1 == 0) && (t2 == 0) && (t3 == 0)) {
        for (t5=0;t5<=30;t5++) {
          D[t5][0] = 4;;
          for (t6=2;t6<=t5;t6++) {
            C[t5][0][t6] = C[t5][0][t6-2] - 2;;
          }
          if (t5 == 0) {
            E[0 +1][0][0] = 2;;
          }
          for (t6=max(2,t5+1);t6<=31;t6++) {
            E[0 +1][0][t5] = 2;;
            C[t5][0][t6] = C[t5][0][t6-2] - 2;;
          }
        }
        D[31][0] = 4;;
        for (t6=2;t6<=31;t6++) {
          C[31][0][t6] = C[31][0][t6-2] - 2;;
        }
      }
      if ((t2 >= 1) && (t3 == 0)) {
        for (t4=32*t1;t4<=min(32*t2,32*t1+31);t4++) {
          for (t5=32*t2;t5<=min(PB_M-1,32*t2+31);t5++) {
            D[t5][t4] = 4;;
            for (t6=2;t6<=31;t6++) {
              C[t5][t4][t6] = C[t5][t4][t6-2] - 2;;
            }
          }
        }
      }
      if ((t3 >= 1) && (t3 <= floord(PB_M-1,32))) {
        for (t4=32*t1;t4<=min(min(32*t2,32*t1+31),-32*t2+32*t3+30);t4++) {
          for (t5=32*t2;t5<=min(min(PB_M-1,32*t2+31),32*t3-t4+30);t5++) {
            for (t6=32*t3;t6<=t4+t5;t6++) {
              C[t5][t4][t6] = C[t5][t4][t6-2] - 2;;
            }
            for (t6=max(32*t3,t4+t5+1);t6<=32*t3+31;t6++) {
              E[t4+1][t4][t5] = 2;;
              C[t5][t4][t6] = C[t5][t4][t6-2] - 2;;
            }
          }
          if (t1 == -t2+t3) {
            for (t5=32*t1+32*t2-t4+31;t5<=min(PB_M-1,32*t2+31);t5++) {
              for (t6=32*t1+32*t2;t6<=32*t1+32*t2+31;t6++) {
                C[t5][t4][t6] = C[t5][t4][t6-2] - 2;;
              }
            }
          }
          if ((t1 == 0) && (t2 == 12) && (t3 == 12)) {
            for (t5=PB_M;t5<=-t4+414;t5++) {
              for (t6=t4+t5+1;t6<=415;t6++) {
                E[t4+1][t4][t5] = 2;;
              }
            }
          }
        }
      }
      if ((t2 <= floord(PB_M-1,32)) && (t3 <= floord(PB_P-1,32)) && (t3 >= ceild(PB_M,32))) {
        for (t4=32*t1;t4<=min(min(PB_M-2,32*t1+31),-32*t2+32*t3+30);t4++) {
          for (t5=32*t2;t5<=min(min(PB_M-1,32*t2+31),32*t3-t4+30);t5++) {
            for (t6=32*t3;t6<=min(PB_P-1,t4+t5);t6++) {
              C[t5][t4][t6] = C[t5][t4][t6-2] - 2;;
            }
            for (t6=max(32*t3,t4+t5+1);t6<=min(PB_P-1,32*t3+31);t6++) {
              E[t4+1][t4][t5] = 2;;
              C[t5][t4][t6] = C[t5][t4][t6-2] - 2;;
            }
            if (t3 == 15) {
              for (t6=max(PB_P,t4+t5+1);t6<=min(511,t4+PB_P-1);t6++) {
                E[t4+1][t4][t5] = 2;;
              }
            }
          }
          if (t1 == -t2+t3) {
            for (t5=32*t1+32*t2-t4+31;t5<=min(PB_M-1,32*t2+31);t5++) {
              for (t6=32*t1+32*t2;t6<=min(PB_P-1,32*t1+32*t2+31);t6++) {
                C[t5][t4][t6] = C[t5][t4][t6-2] - 2;;
              }
            }
          }
          if (t2 == 12) {
            for (t5=PB_M;t5<=min(415,32*t3-t4+30);t5++) {
              for (t6=max(32*t3,t4+t5+1);t6<=min(32*t3+31,t4+PB_P-1);t6++) {
                E[t4+1][t4][t5] = 2;;
              }
            }
          }
        }
      }
      if ((t2 <= floord(PB_M-1,32)) && (t3 >= 1) && (t3 <= floord(PB_M-1,32))) {
        for (t4=max(32*t1,-32*t2+32*t3+31);t4<=min(32*t2,32*t1+31);t4++) {
          for (t5=32*t2;t5<=min(PB_M-1,32*t2+31);t5++) {
            for (t6=32*t3;t6<=32*t3+31;t6++) {
              C[t5][t4][t6] = C[t5][t4][t6-2] - 2;;
            }
          }
        }
      }
      if ((t2 <= floord(PB_M-1,32)) && (t3 <= floord(PB_P-1,32)) && (t3 >= ceild(PB_M,32))) {
        for (t4=max(32*t1,-32*t2+32*t3+31);t4<=min(PB_M-2,32*t1+31);t4++) {
          for (t5=32*t2;t5<=min(PB_M-1,32*t2+31);t5++) {
            for (t6=32*t3;t6<=min(PB_P-1,32*t3+31);t6++) {
              C[t5][t4][t6] = C[t5][t4][t6-2] - 2;;
            }
          }
        }
      }
      if ((t2 <= floord(PB_M-1,32)) && (t3 >= ceild(PB_P,32))) {
        for (t4=max(32*t1,32*t3-PB_P+1);t4<=min(min(PB_M-2,32*t1+31),-32*t2+32*t3+30);t4++) {
          for (t5=32*t2;t5<=min(32*t2+31,32*t3-t4+30);t5++) {
            for (t6=max(32*t3,t4+t5+1);t6<=min(32*t3+31,t4+PB_P-1);t6++) {
              E[t4+1][t4][t5] = 2;;
            }
          }
        }
      }
      if (t2 >= ceild(PB_M,32)) {
        for (t4=max(32*t1,32*t3-PB_P+1);t4<=min(min(PB_M-2,32*t1+31),-32*t2+32*t3+30);t4++) {
          for (t5=32*t2;t5<=min(min(PB_P-2,32*t2+31),32*t3-t4+30);t5++) {
            for (t6=max(32*t3,t4+t5+1);t6<=min(32*t3+31,t4+PB_P-1);t6++) {
              E[t4+1][t4][t5] = 2;;
            }
          }
        }
      }
      if ((t1 == 0) && (t2 == 0) && (t3 == 0)) {
        E[0][1 +1][0] = 3;;
        D[0][1] = 4;;
        B[0 +1] = A[0 +1] * 5;;
        E[1][1 +1][0] = 3;;
        for (t6=2;t6<=31;t6++) {
          E[t6][1 +1][0] = 3;;
          E[1 +1][1][0] = 2;;
          C[0][1][t6] = C[0][1][t6-2] - 2;;
        }
        for (t5=1;t5<=29;t5++) {
          D[t5][1] = 4;;
          for (t6=2;t6<=t5+1;t6++) {
            C[t5][1][t6] = C[t5][1][t6-2] - 2;;
          }
          for (t6=t5+2;t6<=31;t6++) {
            E[1 +1][1][t5] = 2;;
            C[t5][1][t6] = C[t5][1][t6-2] - 2;;
          }
        }
        for (t5=30;t5<=31;t5++) {
          D[t5][1] = 4;;
          for (t6=2;t6<=31;t6++) {
            C[t5][1][t6] = C[t5][1][t6-2] - 2;;
          }
        }
      }
      if ((t2 >= 1) && (t3 == 0)) {
        for (t4=max(32*t1,32*t2+1);t4<=min(PB_M-2,32*t1+31);t4++) {
          for (t5=32*t2;t5<=min(32*t2+31,t4-1);t5++) {
            E[0][t4+1][t5] = 3;;
            D[t5][t4] = 4;;
            E[1][t4+1][t5] = 3;;
            for (t6=2;t6<=31;t6++) {
              E[t6][t4+1][t5] = 3;;
              C[t5][t4][t6] = C[t5][t4][t6-2] - 2;;
            }
          }
          if (t1 == t2) {
            for (t5=t4;t5<=min(PB_M-1,32*t1+31);t5++) {
              D[t5][t4] = 4;;
              for (t6=2;t6<=31;t6++) {
                C[t5][t4][t6] = C[t5][t4][t6-2] - 2;;
              }
            }
          }
        }
      }
      if ((t3 >= 1) && (t3 <= floord(PB_M-1,32))) {
        for (t4=max(32*t1,32*t2+1);t4<=min(min(PB_M-2,32*t1+31),-32*t2+32*t3+30);t4++) {
          for (t5=32*t2;t5<=min(min(32*t2+31,t4-1),32*t3-t4+30);t5++) {
            for (t6=32*t3;t6<=min(PB_M-1,t4+t5);t6++) {
              E[t6][t4+1][t5] = 3;;
              C[t5][t4][t6] = C[t5][t4][t6-2] - 2;;
            }
            if (t3 == 12) {
              for (t6=PB_M;t6<=t4+t5;t6++) {
                C[t5][t4][t6] = C[t5][t4][t6-2] - 2;;
              }
            }
            for (t6=max(32*t3,t4+t5+1);t6<=min(PB_M-1,32*t3+31);t6++) {
              E[t6][t4+1][t5] = 3;;
              E[t4+1][t4][t5] = 2;;
              C[t5][t4][t6] = C[t5][t4][t6-2] - 2;;
            }
            if (t3 == 12) {
              for (t6=max(PB_M,t4+t5+1);t6<=415;t6++) {
                E[t4+1][t4][t5] = 2;;
                C[t5][t4][t6] = C[t5][t4][t6-2] - 2;;
              }
            }
          }
          if (t1 == t2) {
            for (t5=t4;t5<=min(32*t1+31,32*t3-t4+30);t5++) {
              for (t6=32*t3;t6<=t4+t5;t6++) {
                C[t5][t4][t6] = C[t5][t4][t6-2] - 2;;
              }
              for (t6=max(32*t3,t4+t5+1);t6<=32*t3+31;t6++) {
                E[t4+1][t4][t5] = 2;;
                C[t5][t4][t6] = C[t5][t4][t6-2] - 2;;
              }
            }
          }
          if (t1 == -t2+t3) {
            for (t5=32*t1+32*t2-t4+31;t5<=min(32*t2+31,t4-1);t5++) {
              for (t6=32*t1+32*t2;t6<=min(PB_M-1,32*t1+32*t2+31);t6++) {
                E[t6][t4+1][t5] = 3;;
                C[t5][t4][t6] = C[t5][t4][t6-2] - 2;;
              }
              if (t1 == -t2+12) {
                for (t6=PB_M;t6<=415;t6++) {
                  C[t5][t4][t6] = C[t5][t4][t6-2] - 2;;
                }
              }
            }
          }
          if ((t1 == t2) && (2*t1 == t3)) {
            for (t5=max(t4,64*t1-t4+31);t5<=32*t1+31;t5++) {
              for (t6=64*t1;t6<=64*t1+31;t6++) {
                C[t5][t4][t6] = C[t5][t4][t6-2] - 2;;
              }
            }
          }
        }
      }
      if ((t3 >= 1) && (t3 <= floord(PB_M-1,32))) {
        for (t4=max(max(32*t1,32*t2+1),-32*t2+32*t3+31);t4<=min(PB_M-2,32*t1+31);t4++) {
          for (t5=32*t2;t5<=min(32*t2+31,t4-1);t5++) {
            for (t6=32*t3;t6<=min(PB_M-1,32*t3+31);t6++) {
              E[t6][t4+1][t5] = 3;;
              C[t5][t4][t6] = C[t5][t4][t6-2] - 2;;
            }
            if (t3 == 12) {
              for (t6=PB_M;t6<=415;t6++) {
                C[t5][t4][t6] = C[t5][t4][t6-2] - 2;;
              }
            }
          }
          if (t1 == t2) {
            for (t5=t4;t5<=min(PB_M-1,32*t1+31);t5++) {
              for (t6=32*t3;t6<=32*t3+31;t6++) {
                C[t5][t4][t6] = C[t5][t4][t6-2] - 2;;
              }
            }
          }
        }
      }
      if ((t1 == 0) && (t2 == 0) && (t3 == 0)) {
        for (t4=2;t4<=30;t4++) {
          E[0][t4+1][0] = 3;;
          D[0][t4] = 4;;
          A[t4] = A[t4-2] + B[t4] - 4;;
          B[(t4-1)+1] = A[(t4-1)+1] * 5;;
          E[1][t4+1][0] = 3;;
          for (t6=2;t6<=t4;t6++) {
            E[t6][t4+1][0] = 3;;
            C[0][t4][t6] = C[0][t4][t6-2] - 2;;
          }
          for (t6=t4+1;t6<=31;t6++) {
            E[t6][t4+1][0] = 3;;
            E[t4+1][t4][0] = 2;;
            C[0][t4][t6] = C[0][t4][t6-2] - 2;;
          }
          for (t5=1;t5<=min(-t4+30,t4-1);t5++) {
            E[0][t4+1][t5] = 3;;
            D[t5][t4] = 4;;
            E[1][t4+1][t5] = 3;;
            for (t6=2;t6<=t4+t5;t6++) {
              E[t6][t4+1][t5] = 3;;
              C[t5][t4][t6] = C[t5][t4][t6-2] - 2;;
            }
            for (t6=t4+t5+1;t6<=31;t6++) {
              E[t6][t4+1][t5] = 3;;
              E[t4+1][t4][t5] = 2;;
              C[t5][t4][t6] = C[t5][t4][t6-2] - 2;;
            }
          }
          for (t5=t4;t5<=-t4+30;t5++) {
            D[t5][t4] = 4;;
            for (t6=2;t6<=t4+t5;t6++) {
              C[t5][t4][t6] = C[t5][t4][t6-2] - 2;;
            }
            for (t6=t4+t5+1;t6<=31;t6++) {
              E[t4+1][t4][t5] = 2;;
              C[t5][t4][t6] = C[t5][t4][t6-2] - 2;;
            }
          }
          for (t5=-t4+31;t5<=t4-1;t5++) {
            E[0][t4+1][t5] = 3;;
            D[t5][t4] = 4;;
            E[1][t4+1][t5] = 3;;
            for (t6=2;t6<=31;t6++) {
              E[t6][t4+1][t5] = 3;;
              C[t5][t4][t6] = C[t5][t4][t6-2] - 2;;
            }
          }
          for (t5=max(t4,-t4+31);t5<=31;t5++) {
            D[t5][t4] = 4;;
            for (t6=2;t6<=31;t6++) {
              C[t5][t4][t6] = C[t5][t4][t6-2] - 2;;
            }
          }
        }
      }
      if ((t2 == 0) && (t3 == 0)) {
        for (t4=max(31,32*t1);t4<=min(PB_M-2,32*t1+31);t4++) {
          E[0][t4+1][0] = 3;;
          D[0][t4] = 4;;
          A[t4] = A[t4-2] + B[t4] - 4;;
          B[(t4-1)+1] = A[(t4-1)+1] * 5;;
          E[1][t4+1][0] = 3;;
          for (t6=2;t6<=31;t6++) {
            E[t6][t4+1][0] = 3;;
            C[0][t4][t6] = C[0][t4][t6-2] - 2;;
          }
          for (t5=1;t5<=min(31,t4-1);t5++) {
            E[0][t4+1][t5] = 3;;
            D[t5][t4] = 4;;
            E[1][t4+1][t5] = 3;;
            for (t6=2;t6<=31;t6++) {
              E[t6][t4+1][t5] = 3;;
              C[t5][t4][t6] = C[t5][t4][t6-2] - 2;;
            }
          }
          if ((t1 == 0) && (t4 == 31)) {
            D[31][31] = 4;;
            for (t6=2;t6<=31;t6++) {
              C[31][31][t6] = C[31][31][t6-2] - 2;;
            }
          }
        }
      }
      if ((t1 == 12) && (t2 == 0) && (t3 == 0)) {
        A[(PB_M-1)] = A[(PB_M-1)-2] + B[(PB_M-1)] - 4;;
        B[(PB_M-2)+1] = A[(PB_M-2)+1] * 5;;
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
int zc = zC;
int xb = xB;
int xd = xD;
int yd = yD;
int xe = xE;
int ye = yE;
int ze = zE;
POLYBENCH_1D_ARRAY_DECL(A, DATA_TYPE,xA,xa);
POLYBENCH_3D_ARRAY_DECL(C, DATA_TYPE,xC,yC,zC,xc,yc,zc);
POLYBENCH_1D_ARRAY_DECL(B, DATA_TYPE,xB,xb);
POLYBENCH_2D_ARRAY_DECL(D, DATA_TYPE,xD,yD,xd,yd);
POLYBENCH_3D_ARRAY_DECL(E, DATA_TYPE,xE,yE,zE,xe,ye,ze);
init_array(xa,POLYBENCH_ARRAY(A),xc,yc,zc,POLYBENCH_ARRAY(C),xb,POLYBENCH_ARRAY(B),xd,yd,POLYBENCH_ARRAY(D),xe,ye,ze,POLYBENCH_ARRAY(E),INIT_SEED);
kernel_3624321226_00(xa,POLYBENCH_ARRAY(A),xc,yc,zc,POLYBENCH_ARRAY(C),xb,POLYBENCH_ARRAY(B),xd,yd,POLYBENCH_ARRAY(D),xe,ye,ze,POLYBENCH_ARRAY(E));
polybench_prevent_dce(print_array(xa,POLYBENCH_ARRAY(A),xc,yc,zc,POLYBENCH_ARRAY(C),xb,POLYBENCH_ARRAY(B),xd,yd,POLYBENCH_ARRAY(D),xe,ye,ze,POLYBENCH_ARRAY(E)));
POLYBENCH_FREE_ARRAY(A);
POLYBENCH_FREE_ARRAY(C);
POLYBENCH_FREE_ARRAY(B);
POLYBENCH_FREE_ARRAY(D);
POLYBENCH_FREE_ARRAY(E);
return 0;
}
