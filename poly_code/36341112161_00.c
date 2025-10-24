#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <math.h>
#include <polybench.h>
#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include "36341112161_00.h"
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
static void init_array(int xf,DATA_TYPE POLYBENCH_1D(F,xF,xf),int xb,DATA_TYPE POLYBENCH_1D(B,xB,xb),int xg,DATA_TYPE POLYBENCH_1D(G,xG,xg),int xh,int yh,DATA_TYPE POLYBENCH_2D(H,xH,yH,xh,yh),int seed)
{
srand(seed);
int i,j,k,l;
for (i = 0; i < xf; i++) {
    F[i] = 0.9 + (rand() / (DATA_TYPE)RAND_MAX) * (1.1 - 0.9);
}
for (i = 0; i < xb; i++) {
    B[i] = 0.9 + (rand() / (DATA_TYPE)RAND_MAX) * (1.1 - 0.9);
}
for (i = 0; i < xg; i++) {
    G[i] = 0.9 + (rand() / (DATA_TYPE)RAND_MAX) * (1.1 - 0.9);
}
for (i = 0; i < xh; i++) {
    for (j = 0; j < yh; j++) {
        H[i][j] = 0.9 + (rand() / (DATA_TYPE)RAND_MAX) * (1.1 - 0.9);
    }
}
}
static void print_array(int xf,DATA_TYPE POLYBENCH_1D(F,xF,xf),int xb,DATA_TYPE POLYBENCH_1D(B,xB,xb),int xg,DATA_TYPE POLYBENCH_1D(G,xG,xg),int xh,int yh,DATA_TYPE POLYBENCH_2D(H,xH,yH,xh,yh))
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
        fprintf(POLYBENCH_DUMP_TARGET, "\n");
        fprintf (POLYBENCH_DUMP_TARGET, DATA_PRINTF_MODIFIER, B[i]);
    }
    POLYBENCH_DUMP_END("B");
    POLYBENCH_DUMP_BEGIN("G");
    for (i = 0; i < xg; i++) {
        fprintf(POLYBENCH_DUMP_TARGET, "\n");
        fprintf (POLYBENCH_DUMP_TARGET, DATA_PRINTF_MODIFIER, G[i]);
    }
    POLYBENCH_DUMP_END("G");
    POLYBENCH_DUMP_BEGIN("H");
    for (i = 0; i < xh; i++) {
        for (j = 0; j < yh; j++) {
            fprintf(POLYBENCH_DUMP_TARGET, "\n");
            fprintf (POLYBENCH_DUMP_TARGET, DATA_PRINTF_MODIFIER, H[i][j]);
        }
    }
    POLYBENCH_DUMP_END("H");
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
        sum_B += B[i];
    }
    fprintf(POLYBENCH_DUMP_TARGET, "\nsum: ");
    fprintf (POLYBENCH_DUMP_TARGET, DATA_PRINTF_MODIFIER, sum_B);
    POLYBENCH_DUMP_END("B");
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
            sum_H += H[i][j];
        }
    }
    fprintf(POLYBENCH_DUMP_TARGET, "\nsum: ");
    fprintf (POLYBENCH_DUMP_TARGET, DATA_PRINTF_MODIFIER, sum_H);
    POLYBENCH_DUMP_END("H");
}
POLYBENCH_DUMP_FINISH;
}
void kernel_36341112161_00(int xf,DATA_TYPE POLYBENCH_1D(F,xF,xf),int xb,DATA_TYPE POLYBENCH_1D(B,xB,xb),int xg,DATA_TYPE POLYBENCH_1D(G,xG,xg),int xh,int yh,DATA_TYPE POLYBENCH_2D(H,xH,yH,xh,yh)){
polybench_start_instruments;
#pragma scop
    for (int i = 1; i < PB_N; i++) {
        F[i-1] = F[i] - F[i-1] * 4;
    }
    for (int j = 0; j < PB_M-1; j++) {
        B[j+1] = B[j+2] + B[j] + B[j] + 1;
        for (int k = 0; k < PB_M; k++) {
            B[k+1] = B[k+1] - B[j+1] - B[k+1] - G[1] * H[j+1][k+1] - G[k] * 6;
        }
    }
    for (int l = 0; l < PB_L; l++) {
        for (int m = 0; m < l; m++) {
            for (int n = 0; n < PB_N-1; n++) {
                F[n+1] = 1;
            }
        }
    }
    for (int o = 1; o < PB_N-1; o++) {
        for (int p = 0; p < PB_M-1; p++) {
            F[o+1] = F[p+1] + F[p+1] - H[p+1][o-1] * 6;
        }
        F[o] = F[o-1] + F[o+1] * G[o] * G[o] * 1;
    }
#pragma endscop
polybench_stop_instruments;
polybench_print_instruments;
}
int main(int argc, char** argv)
{
int xf = xF;
int xb = xB;
int xg = xG;
int xh = xH;
int yh = yH;
POLYBENCH_1D_ARRAY_DECL(F, DATA_TYPE, xF,xf);
POLYBENCH_1D_ARRAY_DECL(B, DATA_TYPE, xB,xb);
POLYBENCH_1D_ARRAY_DECL(G, DATA_TYPE, xG,xg);
POLYBENCH_2D_ARRAY_DECL(H, DATA_TYPE, xH,yH,xh,yh);
init_array(xf,POLYBENCH_ARRAY(F), xb,POLYBENCH_ARRAY(B), xg,POLYBENCH_ARRAY(G), xh,yh,POLYBENCH_ARRAY(H), INIT_SEED);
kernel_36341112161_00(xf,POLYBENCH_ARRAY(F), xb,POLYBENCH_ARRAY(B), xg,POLYBENCH_ARRAY(G), xh,yh,POLYBENCH_ARRAY(H));
polybench_prevent_dce(print_array(xf,POLYBENCH_ARRAY(F), xb,POLYBENCH_ARRAY(B), xg,POLYBENCH_ARRAY(G), xh,yh,POLYBENCH_ARRAY(H)));
POLYBENCH_FREE_ARRAY(F);
POLYBENCH_FREE_ARRAY(B);
POLYBENCH_FREE_ARRAY(G);
POLYBENCH_FREE_ARRAY(H);
return 0;
}
