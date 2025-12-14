/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 68383
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=68383 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/68383
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        var_14 = (!var_5);
        var_15 = var_0;
        arr_4 [i_0] = (((max((arr_1 [i_0] [i_0]), (arr_1 [i_0] [i_0])))) - (((min(var_1, (arr_3 [i_0]))) + (max((arr_3 [i_0]), var_11)))));
    }
    for (int i_1 = 2; i_1 < 7;i_1 += 1) /* same iter space */
    {
        arr_9 [i_1] [i_1] = 1;
        var_16 = (min(var_16, (min((((!var_0) | (arr_5 [i_1] [3]))), (max((arr_5 [i_1 + 2] [i_1 + 1]), (3315 & 4213)))))));
    }
    for (int i_2 = 2; i_2 < 7;i_2 += 1) /* same iter space */
    {
        var_17 = (min(((-(max((arr_5 [i_2 + 1] [i_2 + 1]), (arr_10 [i_2]))))), ((((arr_2 [i_2 + 1]) <= ((((var_5 <= (arr_7 [10]))))))))));

        for (int i_3 = 1; i_3 < 10;i_3 += 1)
        {
            /* LoopNest 2 */
            for (int i_4 = 0; i_4 < 11;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 11;i_5 += 1)
                {
                    {
                        var_18 = (max((max((arr_12 [i_2] [i_2 + 3]), (arr_16 [i_3 + 1] [i_3 - 1] [i_2 + 3] [i_2]))), 61324));
                        arr_18 [i_5] [i_4] [i_4] [i_3 + 1] [i_2] [i_2] = (arr_14 [i_2] [i_3]);
                    }
                }
            }
            var_19 = (max(var_19, (((((602258935 >= (arr_12 [i_3 + 1] [i_2]))) ? (max(var_11, 1995277568)) : (-602258927 ^ 10648))))));
        }
    }
    for (int i_6 = 2; i_6 < 10;i_6 += 1)
    {
        var_20 *= (((max(4206, (arr_16 [i_6 - 1] [i_6 - 2] [i_6 - 1] [i_6]))) + var_6));
        /* LoopNest 2 */
        for (int i_7 = 0; i_7 < 11;i_7 += 1)
        {
            for (int i_8 = 0; i_8 < 11;i_8 += 1)
            {
                {
                    var_21 |= ((-(max((4205 | 0), (((602258957 ? 1 : var_6)))))));
                    arr_26 [i_8] [i_6] [i_6] [i_6] = ((~((((((arr_16 [7] [i_6] [i_7] [i_7]) & var_1))) ? (max(-1, var_2)) : 9328))));
                }
            }
        }
        var_22 ^= 61329;
        var_23 -= 4213;
    }
    var_24 = ((var_4 ? var_2 : -15));
    #pragma endscop
}
