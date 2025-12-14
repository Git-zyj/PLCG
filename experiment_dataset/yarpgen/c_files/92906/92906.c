/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 92906
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=92906 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/92906
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = var_10;
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 9;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 8;i_2 += 1)
            {
                {
                    var_19 = ((~(arr_3 [i_0 + 1] [i_0 + 1])));
                    arr_6 [i_0] [i_0] = 8412;
                }
            }
        }
    }
    var_20 = (max((((var_3 > var_15) ? (min(0, var_8)) : var_17)), (min((((var_8 ? var_14 : var_6))), (var_8 % var_11)))));

    /* vectorizable */
    for (int i_3 = 0; i_3 < 11;i_3 += 1) /* same iter space */
    {
        var_21 = var_3;
        var_22 &= var_1;
    }
    /* vectorizable */
    for (int i_4 = 0; i_4 < 11;i_4 += 1) /* same iter space */
    {
        arr_14 [i_4] [i_4] = (((arr_7 [0]) ? (arr_7 [7]) : (arr_7 [i_4])));
        var_23 = ((var_8 ? var_15 : 5811272374911013371));

        for (int i_5 = 0; i_5 < 11;i_5 += 1)
        {
            var_24 = (((arr_0 [i_4]) ? 1 : (arr_3 [i_4] [i_4])));
            arr_19 [i_4] [i_4] = (((arr_10 [i_4]) ? var_2 : (arr_3 [i_4] [i_5])));
            arr_20 [i_4] [i_4] [4] = (!var_12);
        }
    }
    /* vectorizable */
    for (int i_6 = 1; i_6 < 24;i_6 += 1)
    {
        var_25 = (i_6 % 2 == zero) ? (((((((var_6 ? (arr_22 [i_6]) : var_16)) + 2147483647)) << (((arr_21 [i_6 - 1]) - 13554088141145165572))))) : (((((((((var_6 ? (arr_22 [i_6]) : var_16)) - 2147483647)) + 2147483647)) << (((arr_21 [i_6 - 1]) - 13554088141145165572)))));
        arr_24 [4] [i_6] = ((1 & (!0)));
    }
    #pragma endscop
}
