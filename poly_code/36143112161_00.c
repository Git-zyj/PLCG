#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <math.h>
#include <polybench.h>
#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include "36143112161_00.h"
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
static void init_array(int xf,DATA_TYPE POLYBENCH_1D(F,xF,xf),int xb,int yb,int zb,DATA_TYPE POLYBENCH_3D(B,xB,yB,zB,xb,yb,zb),int xe,int ye,int ze,DATA_TYPE POLYBENCH_3D(E,xE,yE,zE,xe,ye,ze),int xd,int yd,int zd,DATA_TYPE POLYBENCH_3D(D,xD,yD,zD,xd,yd,zd),int xg,int yg,int zg,DATA_TYPE POLYBENCH_3D(G,xG,yG,zG,xg,yg,zg),int xh,int yh,int zh,DATA_TYPE POLYBENCH_3D(H,xH,yH,zH,xh,yh,zh),int xi,int yi,int zi,DATA_TYPE POLYBENCH_3D(I,xI,yI,zI,xi,yi,zi),int xj,int yj,int zj,int vj,DATA_TYPE POLYBENCH_4D(J,xJ,yJ,zJ,vJ,xj,yj,zj,vj),int xk,DATA_TYPE POLYBENCH_1D(K,xK,xk),int seed)
{
srand(seed);
int i,j,k,l;
for (i = 0; i < xf; i++) {
    F[i] = 0.9 + (rand() / (DATA_TYPE)RAND_MAX) * (1.1 - 0.9);
}
for (i = 0; i < xb; i++) {
    for (j = 0; j < yb; j++) {
        for (k = 0; k < zb; k++) {
            B[i][j][k] = 0.9 + (rand() / (DATA_TYPE)RAND_MAX) * (1.1 - 0.9);
        }
    }
}
for (i = 0; i < xe; i++) {
    for (j = 0; j < ye; j++) {
        for (k = 0; k < ze; k++) {
            E[i][j][k] = 0.9 + (rand() / (DATA_TYPE)RAND_MAX) * (1.1 - 0.9);
        }
    }
}
for (i = 0; i < xd; i++) {
    for (j = 0; j < yd; j++) {
        for (k = 0; k < zd; k++) {
            D[i][j][k] = 0.9 + (rand() / (DATA_TYPE)RAND_MAX) * (1.1 - 0.9);
        }
    }
}
for (i = 0; i < xg; i++) {
    for (j = 0; j < yg; j++) {
        for (k = 0; k < zg; k++) {
            G[i][j][k] = 0.9 + (rand() / (DATA_TYPE)RAND_MAX) * (1.1 - 0.9);
        }
    }
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
    K[i] = 0.9 + (rand() / (DATA_TYPE)RAND_MAX) * (1.1 - 0.9);
}
}
static void print_array(int xf,DATA_TYPE POLYBENCH_1D(F,xF,xf),int xb,int yb,int zb,DATA_TYPE POLYBENCH_3D(B,xB,yB,zB,xb,yb,zb),int xe,int ye,int ze,DATA_TYPE POLYBENCH_3D(E,xE,yE,zE,xe,ye,ze),int xd,int yd,int zd,DATA_TYPE POLYBENCH_3D(D,xD,yD,zD,xd,yd,zd),int xg,int yg,int zg,DATA_TYPE POLYBENCH_3D(G,xG,yG,zG,xg,yg,zg),int xh,int yh,int zh,DATA_TYPE POLYBENCH_3D(H,xH,yH,zH,xh,yh,zh),int xi,int yi,int zi,DATA_TYPE POLYBENCH_3D(I,xI,yI,zI,xi,yi,zi),int xj,int yj,int zj,int vj,DATA_TYPE POLYBENCH_4D(J,xJ,yJ,zJ,vJ,xj,yj,zj,vj),int xk,DATA_TYPE POLYBENCH_1D(K,xK,xk))
{
int i,j,k,l;
POLYBENCH_DUMP_START;
if (DUMP) {
    POLYBENCH_DUMP_BEGIN("F");
    for (i = 0; i < xf; i++) {
        fprintf(POLYBENCH_DUMP_TARGET, "\n");
        fprintf (POLYBENCH_DUMP_TARGET, DATA_PRINTF_MODIFIER, F[i]);
    }
    POLYBENCH_DUMP_END("F");
    POLYBENCH_DUMP_BEGIN("B");
    for (i = 0; i < xb; i++) {
        for (j = 0; j < yb; j++) {
            for (k = 0; k < zb; k++) {
                fprintf(POLYBENCH_DUMP_TARGET, "\n");
                fprintf (POLYBENCH_DUMP_TARGET, DATA_PRINTF_MODIFIER, B[i][j][k]);
            }
        }
    }
    POLYBENCH_DUMP_END("B");
    POLYBENCH_DUMP_BEGIN("E");
    for (i = 0; i < xe; i++) {
        for (j = 0; j < ye; j++) {
            for (k = 0; k < ze; k++) {
                fprintf(POLYBENCH_DUMP_TARGET, "\n");
                fprintf (POLYBENCH_DUMP_TARGET, DATA_PRINTF_MODIFIER, E[i][j][k]);
            }
        }
    }
    POLYBENCH_DUMP_END("E");
    POLYBENCH_DUMP_BEGIN("D");
    for (i = 0; i < xd; i++) {
        for (j = 0; j < yd; j++) {
            for (k = 0; k < zd; k++) {
                fprintf(POLYBENCH_DUMP_TARGET, "\n");
                fprintf (POLYBENCH_DUMP_TARGET, DATA_PRINTF_MODIFIER, D[i][j][k]);
            }
        }
    }
    POLYBENCH_DUMP_END("D");
    POLYBENCH_DUMP_BEGIN("G");
    for (i = 0; i < xg; i++) {
        for (j = 0; j < yg; j++) {
            for (k = 0; k < zg; k++) {
                fprintf(POLYBENCH_DUMP_TARGET, "\n");
                fprintf (POLYBENCH_DUMP_TARGET, DATA_PRINTF_MODIFIER, G[i][j][k]);
            }
        }
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
        fprintf(POLYBENCH_DUMP_TARGET, "\n");
        fprintf (POLYBENCH_DUMP_TARGET, DATA_PRINTF_MODIFIER, K[i]);
    }
    POLYBENCH_DUMP_END("K");
}
if (CHECKSUM) {
    POLYBENCH_DUMP_BEGIN("F");
    DATA_TYPE sum_F = 0;
    for (i = 0; i < xf; i++) {
        sum_F += F[i];
    }
    fprintf(POLYBENCH_DUMP_TARGET, "\nsum: ");
    fprintf (POLYBENCH_DUMP_TARGET, DATA_PRINTF_MODIFIER, sum_F);
    POLYBENCH_DUMP_END("F");
    POLYBENCH_DUMP_BEGIN("B");
    DATA_TYPE sum_B = 0;
    for (i = 0; i < xb; i++) {
        for (j = 0; j < yb; j++) {
            for (k = 0; k < zb; k++) {
                sum_B += B[i][j][k];
            }
        }
    }
    fprintf(POLYBENCH_DUMP_TARGET, "\nsum: ");
    fprintf (POLYBENCH_DUMP_TARGET, DATA_PRINTF_MODIFIER, sum_B);
    POLYBENCH_DUMP_END("B");
    POLYBENCH_DUMP_BEGIN("E");
    DATA_TYPE sum_E = 0;
    for (i = 0; i < xe; i++) {
        for (j = 0; j < ye; j++) {
            for (k = 0; k < ze; k++) {
                sum_E += E[i][j][k];
            }
        }
    }
    fprintf(POLYBENCH_DUMP_TARGET, "\nsum: ");
    fprintf (POLYBENCH_DUMP_TARGET, DATA_PRINTF_MODIFIER, sum_E);
    POLYBENCH_DUMP_END("E");
    POLYBENCH_DUMP_BEGIN("D");
    DATA_TYPE sum_D = 0;
    for (i = 0; i < xd; i++) {
        for (j = 0; j < yd; j++) {
            for (k = 0; k < zd; k++) {
                sum_D += D[i][j][k];
            }
        }
    }
    fprintf(POLYBENCH_DUMP_TARGET, "\nsum: ");
    fprintf (POLYBENCH_DUMP_TARGET, DATA_PRINTF_MODIFIER, sum_D);
    POLYBENCH_DUMP_END("D");
    POLYBENCH_DUMP_BEGIN("G");
    DATA_TYPE sum_G = 0;
    for (i = 0; i < xg; i++) {
        for (j = 0; j < yg; j++) {
            for (k = 0; k < zg; k++) {
                sum_G += G[i][j][k];
            }
        }
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
        sum_K += K[i];
    }
    fprintf(POLYBENCH_DUMP_TARGET, "\nsum: ");
    fprintf (POLYBENCH_DUMP_TARGET, DATA_PRINTF_MODIFIER, sum_K);
    POLYBENCH_DUMP_END("K");
}
POLYBENCH_DUMP_FINISH;
}
void kernel_36143112161_00(int xf,DATA_TYPE POLYBENCH_1D(F,xF,xf),int xb,int yb,int zb,DATA_TYPE POLYBENCH_3D(B,xB,yB,zB,xb,yb,zb),int xe,int ye,int ze,DATA_TYPE POLYBENCH_3D(E,xE,yE,zE,xe,ye,ze),int xd,int yd,int zd,DATA_TYPE POLYBENCH_3D(D,xD,yD,zD,xd,yd,zd),int xg,int yg,int zg,DATA_TYPE POLYBENCH_3D(G,xG,yG,zG,xg,yg,zg),int xh,int yh,int zh,DATA_TYPE POLYBENCH_3D(H,xH,yH,zH,xh,yh,zh),int xi,int yi,int zi,DATA_TYPE POLYBENCH_3D(I,xI,yI,zI,xi,yi,zi),int xj,int yj,int zj,int vj,DATA_TYPE POLYBENCH_4D(J,xJ,yJ,zJ,vJ,xj,yj,zj,vj),int xk,DATA_TYPE POLYBENCH_1D(K,xK,xk)){
polybench_start_instruments;
#pragma scop
    for (int i = 1; i < PB_M-2; i++) {
        F[i+1] = F[i-1] - F[i+1] - F[i+2] + F[i+1] + F[i] * F[i+1] + F[i] + 6;
        for (int j = 0; j < i; j++) {
            for (int k = 0; k < PB_N; k++) {
                B[j+1][k][i] = E[k][j+2][i] * G[i+1][j+1][k+1] + 1;
            }
        }
        for (int l = 1; l < PB_M-1; l++) {
            for (int m = 0; m < PB_Q; m++) {
                E[i][l+1][m] = E[i][m][l] + H[1][l][m] * 3;
            }
            for (int n = 1; n < i; n++) {
                D[i-1][l+1][n-1] = E[l-1][i+1][n] - I[n][i][i-1] + J[n][l-1][l-1][i] * 5;
            }
        }
    }
    for (int o = 1; o < PB_M-1; o++) {
        for (int p = 0; p < o; p++) {
            for (int q = 1; q < PB_N-1; q++) {
                E[o][p+1][q] = E[q+1][o+1][p+1] - D[q-1][p+1][o-1] + I[o+1][q][p] + 5;
            }
        }
        F[o] = K[o] - 5;
    }
#pragma endscop
polybench_stop_instruments;
polybench_print_instruments;
}
int main(int argc, char** argv)
{
int xf = xF;
int xb = xB;
int yb = yB;
int zb = zB;
int xe = xE;
int ye = yE;
int ze = zE;
int xd = xD;
int yd = yD;
int zd = zD;
int xg = xG;
int yg = yG;
int zg = zG;
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
POLYBENCH_1D_ARRAY_DECL(F, DATA_TYPE, xF,xf);
POLYBENCH_3D_ARRAY_DECL(B, DATA_TYPE, xB,yB,zB,xb,yb,zb);
POLYBENCH_3D_ARRAY_DECL(E, DATA_TYPE, xE,yE,zE,xe,ye,ze);
POLYBENCH_3D_ARRAY_DECL(D, DATA_TYPE, xD,yD,zD,xd,yd,zd);
POLYBENCH_3D_ARRAY_DECL(G, DATA_TYPE, xG,yG,zG,xg,yg,zg);
POLYBENCH_3D_ARRAY_DECL(H, DATA_TYPE, xH,yH,zH,xh,yh,zh);
POLYBENCH_3D_ARRAY_DECL(I, DATA_TYPE, xI,yI,zI,xi,yi,zi);
POLYBENCH_4D_ARRAY_DECL(J, DATA_TYPE, xJ,yJ,zJ,vJ,xj,yj,zj,vj);
POLYBENCH_1D_ARRAY_DECL(K, DATA_TYPE, xK,xk);
init_array(xf,POLYBENCH_ARRAY(F), xb,yb,zb,POLYBENCH_ARRAY(B), xe,ye,ze,POLYBENCH_ARRAY(E), xd,yd,zd,POLYBENCH_ARRAY(D), xg,yg,zg,POLYBENCH_ARRAY(G), xh,yh,zh,POLYBENCH_ARRAY(H), xi,yi,zi,POLYBENCH_ARRAY(I), xj,yj,zj,vj,POLYBENCH_ARRAY(J), xk,POLYBENCH_ARRAY(K), INIT_SEED);
kernel_36143112161_00(xf,POLYBENCH_ARRAY(F), xb,yb,zb,POLYBENCH_ARRAY(B), xe,ye,ze,POLYBENCH_ARRAY(E), xd,yd,zd,POLYBENCH_ARRAY(D), xg,yg,zg,POLYBENCH_ARRAY(G), xh,yh,zh,POLYBENCH_ARRAY(H), xi,yi,zi,POLYBENCH_ARRAY(I), xj,yj,zj,vj,POLYBENCH_ARRAY(J), xk,POLYBENCH_ARRAY(K));
polybench_prevent_dce(print_array(xf,POLYBENCH_ARRAY(F), xb,yb,zb,POLYBENCH_ARRAY(B), xe,ye,ze,POLYBENCH_ARRAY(E), xd,yd,zd,POLYBENCH_ARRAY(D), xg,yg,zg,POLYBENCH_ARRAY(G), xh,yh,zh,POLYBENCH_ARRAY(H), xi,yi,zi,POLYBENCH_ARRAY(I), xj,yj,zj,vj,POLYBENCH_ARRAY(J), xk,POLYBENCH_ARRAY(K)));
POLYBENCH_FREE_ARRAY(F);
POLYBENCH_FREE_ARRAY(B);
POLYBENCH_FREE_ARRAY(E);
POLYBENCH_FREE_ARRAY(D);
POLYBENCH_FREE_ARRAY(G);
POLYBENCH_FREE_ARRAY(H);
POLYBENCH_FREE_ARRAY(I);
POLYBENCH_FREE_ARRAY(J);
POLYBENCH_FREE_ARRAY(K);
return 0;
}
