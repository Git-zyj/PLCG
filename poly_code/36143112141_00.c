#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <math.h>
#include <polybench.h>
#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include "36143112141_00.h"
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
static void init_array(int xd,DATA_TYPE POLYBENCH_1D(D,xD,xd),int xg,int yg,DATA_TYPE POLYBENCH_2D(G,xG,yG,xg,yg),int xh,DATA_TYPE POLYBENCH_1D(H,xH,xh),int xi,DATA_TYPE POLYBENCH_1D(I,xI,xi),int xj,DATA_TYPE POLYBENCH_1D(J,xJ,xj),int seed)
{
srand(seed);
int i,j,k,l;
for (i = 0; i < xd; i++) {
    D[i] = 0.9 + (rand() / (DATA_TYPE)RAND_MAX) * (1.1 - 0.9);
}
for (i = 0; i < xg; i++) {
    for (j = 0; j < yg; j++) {
        G[i][j] = 0.9 + (rand() / (DATA_TYPE)RAND_MAX) * (1.1 - 0.9);
    }
}
for (i = 0; i < xh; i++) {
    H[i] = 0.9 + (rand() / (DATA_TYPE)RAND_MAX) * (1.1 - 0.9);
}
for (i = 0; i < xi; i++) {
    I[i] = 0.9 + (rand() / (DATA_TYPE)RAND_MAX) * (1.1 - 0.9);
}
for (i = 0; i < xj; i++) {
    J[i] = 0.9 + (rand() / (DATA_TYPE)RAND_MAX) * (1.1 - 0.9);
}
}
static void print_array(int xd,DATA_TYPE POLYBENCH_1D(D,xD,xd),int xg,int yg,DATA_TYPE POLYBENCH_2D(G,xG,yG,xg,yg),int xh,DATA_TYPE POLYBENCH_1D(H,xH,xh),int xi,DATA_TYPE POLYBENCH_1D(I,xI,xi),int xj,DATA_TYPE POLYBENCH_1D(J,xJ,xj))
{
int i,j,k,l;
POLYBENCH_DUMP_START;
if (DUMP) {
    POLYBENCH_DUMP_BEGIN("D");
    for (i = 0; i < xd; i++) {
        fprintf(POLYBENCH_DUMP_TARGET, "\n");
        fprintf (POLYBENCH_DUMP_TARGET, DATA_PRINTF_MODIFIER, D[i]);
    }
    POLYBENCH_DUMP_END("D");
    POLYBENCH_DUMP_BEGIN("G");
    for (i = 0; i < xg; i++) {
        for (j = 0; j < yg; j++) {
            fprintf(POLYBENCH_DUMP_TARGET, "\n");
            fprintf (POLYBENCH_DUMP_TARGET, DATA_PRINTF_MODIFIER, G[i][j]);
        }
    }
    POLYBENCH_DUMP_END("G");
    POLYBENCH_DUMP_BEGIN("H");
    for (i = 0; i < xh; i++) {
        fprintf(POLYBENCH_DUMP_TARGET, "\n");
        fprintf (POLYBENCH_DUMP_TARGET, DATA_PRINTF_MODIFIER, H[i]);
    }
    POLYBENCH_DUMP_END("H");
    POLYBENCH_DUMP_BEGIN("I");
    for (i = 0; i < xi; i++) {
        fprintf(POLYBENCH_DUMP_TARGET, "\n");
        fprintf (POLYBENCH_DUMP_TARGET, DATA_PRINTF_MODIFIER, I[i]);
    }
    POLYBENCH_DUMP_END("I");
    POLYBENCH_DUMP_BEGIN("J");
    for (i = 0; i < xj; i++) {
        fprintf(POLYBENCH_DUMP_TARGET, "\n");
        fprintf (POLYBENCH_DUMP_TARGET, DATA_PRINTF_MODIFIER, J[i]);
    }
    POLYBENCH_DUMP_END("J");
}
if (CHECKSUM) {
    POLYBENCH_DUMP_BEGIN("D");
    DATA_TYPE sum_D = 0;
    for (i = 0; i < xd; i++) {
        sum_D += D[i];
    }
    fprintf(POLYBENCH_DUMP_TARGET, "\nsum: ");
    fprintf (POLYBENCH_DUMP_TARGET, DATA_PRINTF_MODIFIER, sum_D);
    POLYBENCH_DUMP_END("D");
    POLYBENCH_DUMP_BEGIN("G");
    DATA_TYPE sum_G = 0;
    for (i = 0; i < xg; i++) {
        for (j = 0; j < yg; j++) {
            sum_G += G[i][j];
        }
    }
    fprintf(POLYBENCH_DUMP_TARGET, "\nsum: ");
    fprintf (POLYBENCH_DUMP_TARGET, DATA_PRINTF_MODIFIER, sum_G);
    POLYBENCH_DUMP_END("G");
    POLYBENCH_DUMP_BEGIN("H");
    DATA_TYPE sum_H = 0;
    for (i = 0; i < xh; i++) {
        sum_H += H[i];
    }
    fprintf(POLYBENCH_DUMP_TARGET, "\nsum: ");
    fprintf (POLYBENCH_DUMP_TARGET, DATA_PRINTF_MODIFIER, sum_H);
    POLYBENCH_DUMP_END("H");
    POLYBENCH_DUMP_BEGIN("I");
    DATA_TYPE sum_I = 0;
    for (i = 0; i < xi; i++) {
        sum_I += I[i];
    }
    fprintf(POLYBENCH_DUMP_TARGET, "\nsum: ");
    fprintf (POLYBENCH_DUMP_TARGET, DATA_PRINTF_MODIFIER, sum_I);
    POLYBENCH_DUMP_END("I");
    POLYBENCH_DUMP_BEGIN("J");
    DATA_TYPE sum_J = 0;
    for (i = 0; i < xj; i++) {
        sum_J += J[i];
    }
    fprintf(POLYBENCH_DUMP_TARGET, "\nsum: ");
    fprintf (POLYBENCH_DUMP_TARGET, DATA_PRINTF_MODIFIER, sum_J);
    POLYBENCH_DUMP_END("J");
}
POLYBENCH_DUMP_FINISH;
}
void kernel_36143112141_00(int xd,DATA_TYPE POLYBENCH_1D(D,xD,xd),int xg,int yg,DATA_TYPE POLYBENCH_2D(G,xG,yG,xg,yg),int xh,DATA_TYPE POLYBENCH_1D(H,xH,xh),int xi,DATA_TYPE POLYBENCH_1D(I,xI,xi),int xj,DATA_TYPE POLYBENCH_1D(J,xJ,xj)){
polybench_start_instruments;
#pragma scop
    for (int i = 0; i < PB_L; i++)
        for (int j = 1; j < PB_L-1; j++)
            D[i] = D[j] - D[j+1] - D[j-1] - G[j-1][i] * 2;
        for (int k = 1; k < PB_L+1; k++)
            D[k-1] = D[1] * D[1] * 5;
    for (int l = 1; l < PB_N; l++)
        for (int m = 0; m < l; m++)
            D[m] = D[0] - D[0] * 4;
        D[l] = D[l-1] * D[l+1] * 2;
        D[1] = D[1] * H[l] + 3;
        D[l+1] = D[0] + D[l] + H[l+1] + I[l] - J[l+1] + I[l-1] - 5;
#pragma endscop
polybench_stop_instruments;
polybench_print_instruments;
}
int main(int argc, char** argv)
{
int xd = xD;
int xg = xG;
int yg = yG;
int xh = xH;
int xi = xI;
int xj = xJ;
POLYBENCH_1D_ARRAY_DECL(D, DATA_TYPE, xD,xd);
POLYBENCH_2D_ARRAY_DECL(G, DATA_TYPE, xG,yG,xg,yg);
POLYBENCH_1D_ARRAY_DECL(H, DATA_TYPE, xH,xh);
POLYBENCH_1D_ARRAY_DECL(I, DATA_TYPE, xI,xi);
POLYBENCH_1D_ARRAY_DECL(J, DATA_TYPE, xJ,xj);
init_array(xd,POLYBENCH_ARRAY(D), xg,yg,POLYBENCH_ARRAY(G), xh,POLYBENCH_ARRAY(H), xi,POLYBENCH_ARRAY(I), xj,POLYBENCH_ARRAY(J), INIT_SEED);
kernel_36143112141_00(xd,POLYBENCH_ARRAY(D), xg,yg,POLYBENCH_ARRAY(G), xh,POLYBENCH_ARRAY(H), xi,POLYBENCH_ARRAY(I), xj,POLYBENCH_ARRAY(J));
polybench_prevent_dce(print_array(xd,POLYBENCH_ARRAY(D), xg,yg,POLYBENCH_ARRAY(G), xh,POLYBENCH_ARRAY(H), xi,POLYBENCH_ARRAY(I), xj,POLYBENCH_ARRAY(J)));
POLYBENCH_FREE_ARRAY(D);
POLYBENCH_FREE_ARRAY(G);
POLYBENCH_FREE_ARRAY(H);
POLYBENCH_FREE_ARRAY(I);
POLYBENCH_FREE_ARRAY(J);
return 0;
}
