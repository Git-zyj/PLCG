/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 89352
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=89352 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/89352
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 2; i_0 < 20;i_0 += 1)
    {
        var_11 ^= ((!(((var_10 / (arr_3 [i_0] [i_0]))))));
        var_12 = var_8;
        var_13 = ((arr_1 [7] [i_0 + 2]) ? 357415532855535994 : (!var_5));
        arr_4 [i_0] = 29698;
    }
    for (int i_1 = 0; i_1 < 10;i_1 += 1)
    {
        var_14 -= ((((var_0 | var_1) ? (arr_3 [i_1] [i_1]) : (((arr_0 [i_1]) ? var_9 : 3442775860)))) >> (((arr_6 [7] [i_1]) - 10510)));
        var_15 = ((((var_6 + (arr_2 [i_1])))) ? var_0 : (((var_9 != (arr_2 [i_1])))));
        arr_7 [i_1] = (max((arr_3 [i_1] [i_1]), (max(24585, (arr_2 [i_1])))));
        var_16 = ((-(~41358)));
        var_17 = (((-(arr_0 [i_1]))));
    }
    for (int i_2 = 1; i_2 < 20;i_2 += 1)
    {
        var_18 = ((((((((-24585 ? -217775487 : 24584))) ? (((arr_0 [i_2]) & (arr_9 [i_2 - 1]))) : var_4))) || (((((max((arr_0 [i_2]), (arr_1 [i_2] [i_2 - 1])))) ? ((-(arr_8 [i_2] [i_2]))) : (arr_0 [i_2]))))));
        arr_10 [i_2] |= ((var_5 ? ((var_7 ? (((-(arr_0 [i_2])))) : (max(var_9, var_8)))) : ((((arr_0 [i_2 + 2]) ? (arr_0 [i_2 - 1]) : (arr_0 [i_2 - 1]))))));
    }
    var_19 = var_7;
    var_20 = (((((var_2 + var_8) ? ((var_3 ? var_1 : var_4)) : var_2)) - 76));
    #pragma endscop
}
