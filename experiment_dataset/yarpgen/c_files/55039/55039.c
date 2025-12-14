/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 55039
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=55039 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/55039
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_18;

    /* vectorizable */
    for (int i_0 = 3; i_0 < 12;i_0 += 1)
    {
        var_21 = (((-88 & 69) ? -102 : 0));
        arr_2 [i_0] = (arr_0 [i_0 - 1]);
        arr_3 [i_0 + 1] = (var_15 ? 18446744073709551615 : (var_16 | var_16));
    }
    for (int i_1 = 0; i_1 < 11;i_1 += 1)
    {
        arr_7 [i_1] &= ((+(((arr_1 [i_1]) ? (arr_1 [i_1]) : 96))));
        arr_8 [i_1] = ((~((var_13 ? (arr_0 [i_1]) : var_13))));
    }
    for (int i_2 = 0; i_2 < 14;i_2 += 1)
    {
        var_22 = ((83 ? -99 : (94 & 149)));
        var_23 = (min(var_23, ((max((arr_9 [i_2] [i_2]), -95)))));
        arr_12 [i_2] = (max(-2070385362, ((max(139, 125)))));
    }
    var_24 = (min(var_24, (((((((((var_17 ? 95 : var_7))) ? -6313324507645818713 : (var_10 / var_11)))) || var_18)))));
    #pragma endscop
}
