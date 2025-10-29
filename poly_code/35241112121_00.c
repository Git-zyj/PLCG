#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <math.h>
#include <polybench.h>
#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include "35241112121_00.h"
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
static void init_array(int xe,int ye,DATA_TYPE POLYBENCH_2D(E,xE,yE,xe,ye),int xf,int yf,DATA_TYPE POLYBENCH_2D(F,xF,yF,xf,yf),int seed)
{
srand(seed);
int i,j,k,l;
for (i = 0; i < xe; i++) {
    for (j = 0; j < ye; j++) {
        E[i][j] = 0.9 + (rand() / (DATA_TYPE)RAND_MAX) * (1.1 - 0.9);
    }
}
for (i = 0; i < xf; i++) {
    for (j = 0; j < yf; j++) {
        F[i][j] = 0.9 + (rand() / (DATA_TYPE)RAND_MAX) * (1.1 - 0.9);
    }
}
}
static void print_array(int xe,int ye,DATA_TYPE POLYBENCH_2D(E,xE,yE,xe,ye),int xf,int yf,DATA_TYPE POLYBENCH_2D(F,xF,yF,xf,yf))
{
int i,j,k,l;
POLYBENCH_DUMP_START;
if (DUMP) {
    POLYBENCH_DUMP_BEGIN("E");
    for (i = 0; i < xe; i++) {
        for (j = 0; j < ye; j++) {
            fprintf(POLYBENCH_DUMP_TARGET, "\n");
            fprintf (POLYBENCH_DUMP_TARGET, DATA_PRINTF_MODIFIER, E[i][j]);
        }
    }
    POLYBENCH_DUMP_END("E");
    POLYBENCH_DUMP_BEGIN("F");
    for (i = 0; i < xf; i++) {
        for (j = 0; j < yf; j++) {
            fprintf(POLYBENCH_DUMP_TARGET, "\n");
            fprintf (POLYBENCH_DUMP_TARGET, DATA_PRINTF_MODIFIER, F[i][j]);
        }
    }
    POLYBENCH_DUMP_END("F");
}
if (CHECKSUM) {
    POLYBENCH_DUMP_BEGIN("E");
    DATA_TYPE sum_E = 0;
    for (i = 0; i < xe; i++) {
        for (j = 0; j < ye; j++) {
            sum_E += E[i][j];
        }
    }
    fprintf(POLYBENCH_DUMP_TARGET, "\nsum: ");
    fprintf (POLYBENCH_DUMP_TARGET, DATA_PRINTF_MODIFIER, sum_E);
    POLYBENCH_DUMP_END("E");
    POLYBENCH_DUMP_BEGIN("F");
    DATA_TYPE sum_F = 0;
    for (i = 0; i < xf; i++) {
        for (j = 0; j < yf; j++) {
            sum_F += F[i][j];
        }
    }
    fprintf(POLYBENCH_DUMP_TARGET, "\nsum: ");
    fprintf (POLYBENCH_DUMP_TARGET, DATA_PRINTF_MODIFIER, sum_F);
    POLYBENCH_DUMP_END("F");
}
POLYBENCH_DUMP_FINISH;
}
void kernel_35241112121_00(int xe,int ye,DATA_TYPE POLYBENCH_2D(E,xE,yE,xe,ye),int xf,int yf,DATA_TYPE POLYBENCH_2D(F,xF,yF,xf,yf)){
polybench_start_instruments;
#pragma scop
    for (int i = 1; i < PB_L; i++)
        for (int j = 1; j < i; j++)
            E[j-1][i-1] = E[j-1][i-1] + E[j][i] - F[j][i] - F[i-1][j] * 4;
    for (int k = 1; k < PB_M+1; k++)
        for (int l = 1; l < k; l++)
            E[l-1][k-1] = 3;
    for (int m = 2; m < PB_L; m++)
        for (int n = 3; n < min(m,PB_L-1); n++)
            E[n-1][m-2] = E[1][n-2] - E[1][n-3] * E[1][n-1] * F[n-1][m] + F[m-1][n+1] - 5;
            for (int o = 1; o < PB_M+1; o++)
                E[o-1][n-2] = E[m-1][n-2] + E[o-1][n-2] + 3;
        for (int p = 1; p < min(m,PB_M-1); p++)
            E[p][m-1] = E[p][m-2] + E[p][m] - E[p+1][m-1] - F[p-1][m] + 2;
#pragma endscop
polybench_stop_instruments;
polybench_print_instruments;
}
int main(int argc, char** argv)
{
int xe = xE;
int ye = yE;
int xf = xF;
int yf = yF;
POLYBENCH_2D_ARRAY_DECL(E, DATA_TYPE, xE,yE,xe,ye);
POLYBENCH_2D_ARRAY_DECL(F, DATA_TYPE, xF,yF,xf,yf);
init_array(xe,ye,POLYBENCH_ARRAY(E), xf,yf,POLYBENCH_ARRAY(F), INIT_SEED);
kernel_35241112121_00(xe,ye,POLYBENCH_ARRAY(E), xf,yf,POLYBENCH_ARRAY(F));
polybench_prevent_dce(print_array(xe,ye,POLYBENCH_ARRAY(E), xf,yf,POLYBENCH_ARRAY(F)));
POLYBENCH_FREE_ARRAY(E);
POLYBENCH_FREE_ARRAY(F);
return 0;
}
