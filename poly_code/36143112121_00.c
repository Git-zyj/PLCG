#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <math.h>
#include <polybench.h>
#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include "36143112121_00.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
#ifndef USE_INIT_SEED
#define INIT_SEED time(NULL)
#else
#define INIT_SEED atoi(argv[1])
#endif
#ifndef POLYBENCH_DUMP_ARRAYS
#define DUMP 0
#else
#define DUMP 1
#endif
#ifndef POLYBENCH_CHECKSUM_ARRAYS
#define CHECKSUM 0
#else
#define CHECKSUM 1
#endif
static void init_array(int xc,DATA_TYPE POLYBENCH_1D(C,xC,xc),int xg,DATA_TYPE POLYBENCH_1D(G,xG,xg),int xh,int yh,int zh,DATA_TYPE POLYBENCH_3D(H,xH,yH,zH,xh,yh,zh),int xi,int yi,int zi,DATA_TYPE POLYBENCH_3D(I,xI,yI,zI,xi,yi,zi),int xj,int yj,int zj,int vj,DATA_TYPE POLYBENCH_4D(J,xJ,yJ,zJ,vJ,xj,yj,zj,vj),int xk,int yk,int zk,DATA_TYPE POLYBENCH_3D(K,xK,yK,zK,xk,yk,zk),int seed)
{
srand(seed);
int i,j,k,l;
for (i = 0; i < xc; i++) {
    C[i] = 0.9 + (rand() / (DATA_TYPE)RAND_MAX) * (1.1 - 0.9);
}
for (i = 0; i < xg; i++) {
    G[i] = 0.9 + (rand() / (DATA_TYPE)RAND_MAX) * (1.1 - 0.9);
}
for (i = 0; i < xh; i++) {
    for (j = 0; j < yh; j++) {
        for (k = 0; k < zh; k++) {
            H[i][j][k] = 0.9 + (rand() / (DATA_TYPE)RAND_MAX) * (1.1 - 0.9);
        }
    }
}
for (i = 0; i < xi; i++) {
    for (j = 0; j < yi; j++) {
        for (k = 0; k < zi; k++) {
            I[i][j][k] = 0.9 + (rand() / (DATA_TYPE)RAND_MAX) * (1.1 - 0.9);
        }
    }
}
for (i = 0; i < xj; i++) {
    for (j = 0; j < yj; j++) {
        for (k = 0; k < zj; k++) {
            for (l = 0; l < vj; l++) {
                J[i][j][k][l] = 0.9 + (rand() / (DATA_TYPE)RAND_MAX) * (1.1 - 0.9);
            }
        }
    }
}
for (i = 0; i < xk; i++) {
    for (j = 0; j < yk; j++) {
        for (k = 0; k < zk; k++) {
            K[i][j][k] = 0.9 + (rand() / (DATA_TYPE)RAND_MAX) * (1.1 - 0.9);
        }
    }
}
}
static void print_array(int xc,DATA_TYPE POLYBENCH_1D(C,xC,xc),int xg,DATA_TYPE POLYBENCH_1D(G,xG,xg),int xh,int yh,int zh,DATA_TYPE POLYBENCH_3D(H,xH,yH,zH,xh,yh,zh),int xi,int yi,int zi,DATA_TYPE POLYBENCH_3D(I,xI,yI,zI,xi,yi,zi),int xj,int yj,int zj,int vj,DATA_TYPE POLYBENCH_4D(J,xJ,yJ,zJ,vJ,xj,yj,zj,vj),int xk,int yk,int zk,DATA_TYPE POLYBENCH_3D(K,xK,yK,zK,xk,yk,zk))
{
int i,j,k,l;
POLYBENCH_DUMP_START;
if (DUMP) {
    POLYBENCH_DUMP_BEGIN("C");
    for (i = 0; i < xc; i++) {
        fprintf(POLYBENCH_DUMP_TARGET, "\n");
        fprintf (POLYBENCH_DUMP_TARGET, DATA_PRINTF_MODIFIER, C[i]);
    }
    POLYBENCH_DUMP_END("C");
    POLYBENCH_DUMP_BEGIN("G");
    for (i = 0; i < xg; i++) {
        fprintf(POLYBENCH_DUMP_TARGET, "\n");
        fprintf (POLYBENCH_DUMP_TARGET, DATA_PRINTF_MODIFIER, G[i]);
    }
    POLYBENCH_DUMP_END("G");
    POLYBENCH_DUMP_BEGIN("H");
    for (i = 0; i < xh; i++) {
        for (j = 0; j < yh; j++) {
            for (k = 0; k < zh; k++) {
                fprintf(POLYBENCH_DUMP_TARGET, "\n");
                fprintf (POLYBENCH_DUMP_TARGET, DATA_PRINTF_MODIFIER, H[i][j][k]);
            }
        }
    }
    POLYBENCH_DUMP_END("H");
    POLYBENCH_DUMP_BEGIN("I");
    for (i = 0; i < xi; i++) {
        for (j = 0; j < yi; j++) {
            for (k = 0; k < zi; k++) {
                fprintf(POLYBENCH_DUMP_TARGET, "\n");
                fprintf (POLYBENCH_DUMP_TARGET, DATA_PRINTF_MODIFIER, I[i][j][k]);
            }
        }
    }
    POLYBENCH_DUMP_END("I");
    POLYBENCH_DUMP_BEGIN("J");
    for (i = 0; i < xj; i++) {
        for (j = 0; j < yj; j++) {
            for (k = 0; k < zj; k++) {
                for (l = 0; l < vj; l++) {
                    fprintf(POLYBENCH_DUMP_TARGET, "\n");
                    fprintf (POLYBENCH_DUMP_TARGET, DATA_PRINTF_MODIFIER, J[i][j][k][l]);
                }
            }
        }
    }
    POLYBENCH_DUMP_END("J");
    POLYBENCH_DUMP_BEGIN("K");
    for (i = 0; i < xk; i++) {
        for (j = 0; j < yk; j++) {
            for (k = 0; k < zk; k++) {
                fprintf(POLYBENCH_DUMP_TARGET, "\n");
                fprintf (POLYBENCH_DUMP_TARGET, DATA_PRINTF_MODIFIER, K[i][j][k]);
            }
        }
    }
    POLYBENCH_DUMP_END("K");
}
if (CHECKSUM) {
    POLYBENCH_DUMP_BEGIN("C");
    DATA_TYPE sum_C = 0;
    for (i = 0; i < xc; i++) {
        sum_C += C[i];
    }
    fprintf(POLYBENCH_DUMP_TARGET, "\nsum: ");
    fprintf (POLYBENCH_DUMP_TARGET, DATA_PRINTF_MODIFIER, sum_C);
    POLYBENCH_DUMP_END("C");
    POLYBENCH_DUMP_BEGIN("G");
    DATA_TYPE sum_G = 0;
    for (i = 0; i < xg; i++) {
        sum_G += G[i];
    }
    fprintf(POLYBENCH_DUMP_TARGET, "\nsum: ");
    fprintf (POLYBENCH_DUMP_TARGET, DATA_PRINTF_MODIFIER, sum_G);
    POLYBENCH_DUMP_END("G");
    POLYBENCH_DUMP_BEGIN("H");
    DATA_TYPE sum_H = 0;
    for (i = 0; i < xh; i++) {
        for (j = 0; j < yh; j++) {
            for (k = 0; k < zh; k++) {
                sum_H += H[i][j][k];
            }
        }
    }
    fprintf(POLYBENCH_DUMP_TARGET, "\nsum: ");
    fprintf (POLYBENCH_DUMP_TARGET, DATA_PRINTF_MODIFIER, sum_H);
    POLYBENCH_DUMP_END("H");
    POLYBENCH_DUMP_BEGIN("I");
    DATA_TYPE sum_I = 0;
    for (i = 0; i < xi; i++) {
        for (j = 0; j < yi; j++) {
            for (k = 0; k < zi; k++) {
                sum_I += I[i][j][k];
            }
        }
    }
    fprintf(POLYBENCH_DUMP_TARGET, "\nsum: ");
    fprintf (POLYBENCH_DUMP_TARGET, DATA_PRINTF_MODIFIER, sum_I);
    POLYBENCH_DUMP_END("I");
    POLYBENCH_DUMP_BEGIN("J");
    DATA_TYPE sum_J = 0;
    for (i = 0; i < xj; i++) {
        for (j = 0; j < yj; j++) {
            for (k = 0; k < zj; k++) {
                for (l = 0; l < vj; l++) {
                    sum_J += J[i][j][k][l];
                }
            }
        }
    }
    fprintf(POLYBENCH_DUMP_TARGET, "\nsum: ");
    fprintf (POLYBENCH_DUMP_TARGET, DATA_PRINTF_MODIFIER, sum_J);
    POLYBENCH_DUMP_END("J");
    POLYBENCH_DUMP_BEGIN("K");
    DATA_TYPE sum_K = 0;
    for (i = 0; i < xk; i++) {
        for (j = 0; j < yk; j++) {
            for (k = 0; k < zk; k++) {
                sum_K += K[i][j][k];
            }
        }
    }
    fprintf(POLYBENCH_DUMP_TARGET, "\nsum: ");
    fprintf (POLYBENCH_DUMP_TARGET, DATA_PRINTF_MODIFIER, sum_K);
    POLYBENCH_DUMP_END("K");
}
POLYBENCH_DUMP_FINISH;
}
void kernel_36143112121_00(int xc,DATA_TYPE POLYBENCH_1D(C,xC,xc),int xg,DATA_TYPE POLYBENCH_1D(G,xG,xg),int xh,int yh,int zh,DATA_TYPE POLYBENCH_3D(H,xH,yH,zH,xh,yh,zh),int xi,int yi,int zi,DATA_TYPE POLYBENCH_3D(I,xI,yI,zI,xi,yi,zi),int xj,int yj,int zj,int vj,DATA_TYPE POLYBENCH_4D(J,xJ,yJ,zJ,vJ,xj,yj,zj,vj),int xk,int yk,int zk,DATA_TYPE POLYBENCH_3D(K,xK,yK,zK,xk,yk,zk)){
polybench_start_instruments;
#pragma scop
    for (int i = 2; i < PB_M; i++) {
        for (int j = 3; j < i; j++) {
            C[j-1] = C[j-3] - C[j-2] * 5;
            C[j-2] = C[i-1] + 1;
        }
        C[i-1] = C[i] + C[i-2] * C[i] - C[i-2] + C[i-2] * G[i] - 5;
    }
    for (int k = 2; k < PB_M; k++) {
        for (int l = 2; l < k; l++) {
            for (int m = 1; m < l; m++) {
                C[k-2] = C[l-2] - C[l-2] - H[l][k][m] * I[l][0][m-1] * 5;
            }
        }
        for (int n = 2; n < PB_M; n++) {
            for (int o = 2; o < n; o++) {
                C[o-2] = C[n-2] - J[k][o-1][n][o-1] * I[o][n][k] + K[n][k+1][o-1] + 2;
            }
            C[n-2] = C[n-2] - 5;
        }
    }
#pragma endscop
polybench_stop_instruments;
polybench_print_instruments;
}
int main(int argc, char** argv)
{
int xc = xC;
int xg = xG;
int xh = xH;
int yh = yH;
int zh = zH;
int xi = xI;
int yi = yI;
int zi = zI;
int xj = xJ;
int yj = yJ;
int zj = zJ;
int vj = vJ;
int xk = xK;
int yk = yK;
int zk = zK;
POLYBENCH_1D_ARRAY_DECL(C, DATA_TYPE, xC,xc);
POLYBENCH_1D_ARRAY_DECL(G, DATA_TYPE, xG,xg);
POLYBENCH_3D_ARRAY_DECL(H, DATA_TYPE, xH,yH,zH,xh,yh,zh);
POLYBENCH_3D_ARRAY_DECL(I, DATA_TYPE, xI,yI,zI,xi,yi,zi);
POLYBENCH_4D_ARRAY_DECL(J, DATA_TYPE, xJ,yJ,zJ,vJ,xj,yj,zj,vj);
POLYBENCH_3D_ARRAY_DECL(K, DATA_TYPE, xK,yK,zK,xk,yk,zk);
init_array(xc,POLYBENCH_ARRAY(C), xg,POLYBENCH_ARRAY(G), xh,yh,zh,POLYBENCH_ARRAY(H), xi,yi,zi,POLYBENCH_ARRAY(I), xj,yj,zj,vj,POLYBENCH_ARRAY(J), xk,yk,zk,POLYBENCH_ARRAY(K), INIT_SEED);
kernel_36143112121_00(xc,POLYBENCH_ARRAY(C), xg,POLYBENCH_ARRAY(G), xh,yh,zh,POLYBENCH_ARRAY(H), xi,yi,zi,POLYBENCH_ARRAY(I), xj,yj,zj,vj,POLYBENCH_ARRAY(J), xk,yk,zk,POLYBENCH_ARRAY(K));
polybench_prevent_dce(print_array(xc,POLYBENCH_ARRAY(C), xg,POLYBENCH_ARRAY(G), xh,yh,zh,POLYBENCH_ARRAY(H), xi,yi,zi,POLYBENCH_ARRAY(I), xj,yj,zj,vj,POLYBENCH_ARRAY(J), xk,yk,zk,POLYBENCH_ARRAY(K)));
POLYBENCH_FREE_ARRAY(C);
POLYBENCH_FREE_ARRAY(G);
POLYBENCH_FREE_ARRAY(H);
POLYBENCH_FREE_ARRAY(I);
POLYBENCH_FREE_ARRAY(J);
POLYBENCH_FREE_ARRAY(K);
return 0;
}
