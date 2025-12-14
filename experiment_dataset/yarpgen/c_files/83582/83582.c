/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 83582
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=83582 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/83582
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = var_7;

    /* vectorizable */
    for (int i_0 = 1; i_0 < 21;i_0 += 1)
    {
        var_12 = ((~(~var_2)));

        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            var_13 = (((~var_10) || (!var_6)));
            var_14 = (min(var_14, (((var_9 ? var_5 : (((((arr_1 [i_0 - 1]) && var_8)))))))));
        }
        var_15 = (var_6 > var_8);
    }
    for (int i_2 = 0; i_2 < 11;i_2 += 1)
    {
        arr_7 [i_2] = (4109457171 << 0);
        arr_8 [i_2] = ((~((~(max(0, 2208442325))))));
        var_16 -= (arr_0 [18]);
    }
    var_17 = (~var_10);

    for (int i_3 = 1; i_3 < 9;i_3 += 1)
    {
        var_18 = ((((var_3 ? ((((arr_6 [i_3]) != var_6))) : var_6)) >> (12 / 2208442334)));
        arr_11 [10] &= ((32743 + 2147483647) << ((((var_2 | (((arr_10 [6]) + var_10)))) - 2147089564)));
    }
    for (int i_4 = 0; i_4 < 19;i_4 += 1)
    {
        var_19 = (((var_5 * var_10) ? var_6 : (((arr_4 [i_4] [i_4] [i_4]) - var_4))));
        var_20 = (((((arr_12 [i_4]) && (var_7 + var_1))) ? (arr_4 [20] [i_4] [i_4]) : var_8));
    }
    for (int i_5 = 3; i_5 < 14;i_5 += 1)
    {
        var_21 = ((+(max((arr_15 [i_5 - 2] [i_5]), var_1))));
        var_22 = (((var_6 ? (arr_15 [i_5 + 1] [5]) : (arr_15 [i_5 + 1] [i_5 - 3]))));
        arr_17 [i_5] = ((~(arr_0 [i_5 + 2])));
        var_23 = (((max(var_6, var_0)) & ((((arr_4 [14] [i_5 + 2] [14]) || (arr_4 [i_5 + 1] [i_5 + 2] [i_5 + 2]))))));

        for (int i_6 = 0; i_6 < 1;i_6 += 1)
        {
            var_24 = ((((-(var_5 / var_10))) >> ((((max(var_7, (arr_13 [i_5 - 2]))) >= var_1)))));
            var_25 = (min(var_25, (((((((((arr_3 [i_5 - 1] [i_6] [i_6]) + 2147483647)) << (var_9 - 31174)))) || (((var_0 | (arr_3 [i_5 - 1] [i_5] [i_6])))))))));
        }
    }
    for (int i_7 = 0; i_7 < 23;i_7 += 1)
    {
        var_26 = var_8;
        var_27 = ((1 ? 65523 : 0));
    }
    var_28 = ((!((min((~var_9), ((var_5 >> (var_2 - 2094626937))))))));
    #pragma endscop
}
