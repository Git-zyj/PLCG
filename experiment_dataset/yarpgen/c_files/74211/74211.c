/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 74211
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=74211 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/74211
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (max(var_15, (~var_1)));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 20;i_1 += 1)
        {
            {
                arr_5 [i_0] = (min((min((arr_2 [i_0]), var_14)), -var_1));
                arr_6 [i_0] [4] = ((((((!2394414103596110729) % (1 * 1)))) & ((18446744073709551615 ? -2394414103596110730 : (3043486324 == 24)))));
            }
        }
    }

    for (int i_2 = 0; i_2 < 15;i_2 += 1)
    {
        arr_10 [i_2] = (arr_8 [i_2]);
        var_16 = ((1 ? (((-4294950912 ? 7680 : (arr_9 [0] [0])))) : ((~(arr_2 [6])))));
        arr_11 [8] |= (((((0 ? (-1811622409 > 17730) : ((var_6 ? var_6 : var_10))))) ? ((((var_11 ? 2197959905 : -10890)) << (1006632960 - 1006632948))) : (((117 ? 64 : 16823)))));
    }
    for (int i_3 = 4; i_3 < 14;i_3 += 1)
    {
        var_17 |= ((!((max((max((arr_13 [0] [0]), 2699540143829791628)), -var_13)))));
        arr_14 [i_3] = (~-917);
        var_18 = (min((min(255, 0)), var_11));
        var_19 = (max((((((min(1, var_7)))) & (max(var_14, var_8)))), var_7));
    }
    #pragma endscop
}
