/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 81146
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=81146 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/81146
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 15;i_0 += 1)
    {
        var_17 ^= (max(0, -1));
        var_18 ^= ((!(arr_2 [i_0])));
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 16;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 17;i_3 += 1)
                {
                    {
                        arr_10 [i_1] [i_1] [i_1] [i_1] = max((((arr_5 [i_0 + 2]) ? 32009 : (arr_5 [i_0 - 1]))), (((arr_5 [i_0 + 1]) & 0)));
                        arr_11 [i_1] [i_1] [i_1] [i_1] [i_1] = (var_7 / var_3);
                    }
                }
            }
        }
        var_19 = (max(((0 ? 0 : (arr_7 [i_0] [i_0] [i_0 - 1]))), ((~(arr_7 [i_0] [i_0] [i_0 + 1])))));
    }
    for (int i_4 = 3; i_4 < 18;i_4 += 1)
    {
        var_20 = -1;
        var_21 = (max(var_21, ((1769775522 ? 1769775532 : var_4))));
    }
    for (int i_5 = 2; i_5 < 11;i_5 += 1)
    {
        var_22 = (max(var_22, (((((((arr_7 [i_5 - 1] [i_5 - 2] [i_5 + 1]) ? var_8 : (arr_7 [i_5 + 2] [i_5 - 1] [i_5 - 2])))) ? (max((arr_4 [i_5 - 1] [i_5 - 1]), (-9223372036854775807 - 1))) : ((((arr_4 [i_5 - 1] [i_5 - 1]) ? (arr_4 [i_5 - 2] [i_5 + 1]) : (arr_7 [i_5 + 2] [i_5 + 1] [i_5 + 1])))))))));
        /* LoopNest 3 */
        for (int i_6 = 0; i_6 < 0;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 13;i_7 += 1)
            {
                for (int i_8 = 0; i_8 < 1;i_8 += 1)
                {
                    {
                        arr_23 [i_6] [i_6] [4] [i_6] = ((~(((1769775530 || (arr_5 [i_6]))))));
                        var_23 = (max(var_23, ((min((((!(arr_22 [i_5] [i_6 + 1] [i_5 + 1] [i_5])))), (((arr_20 [i_6 + 1] [i_6 + 1] [i_6 + 1] [i_5]) ? (arr_22 [i_7] [i_6 + 1] [i_5 - 1] [i_5]) : 240)))))));
                    }
                }
            }
        }
        var_24 = (((arr_5 [i_5]) && (9223372036854775807 && 2525191763)));

        for (int i_9 = 0; i_9 < 13;i_9 += 1)
        {
            arr_26 [i_9] [i_5 - 2] &= (((10 ? 1969644421 : 9223372036854775807)));
            arr_27 [i_5 - 2] [i_9] = (arr_18 [i_5]);
            arr_28 [i_5] [i_5] = ((((!(arr_12 [i_9])))));

            for (int i_10 = 0; i_10 < 13;i_10 += 1)
            {
                var_25 = (((((~(max(0, 2325322875))))) ? (~1769775517) : -13));
                var_26 = (max(var_26, var_6));
            }
            for (int i_11 = 0; i_11 < 13;i_11 += 1)
            {
                arr_34 [i_5] [i_5] [i_5] [i_11] = min(-2086566773, var_12);
                arr_35 [i_11] [i_11] [i_11] = (arr_9 [i_5] [i_5] [10] [i_9] [i_9] [9]);
                arr_36 [i_5] [i_9] [i_11] = (max(858660505, (((arr_21 [i_5 + 2] [i_5 + 2]) - (arr_21 [i_5 - 1] [i_5 + 1])))));
                arr_37 [i_5 + 1] [i_9] [i_5 + 1] = (arr_2 [i_5 + 2]);
            }
        }
        var_27 = ((~((~(arr_31 [i_5 - 1] [i_5 + 2] [i_5 - 2])))));
    }
    var_28 -= (((((~((-1 ? var_13 : var_10))))) ? var_0 : (~var_15)));
    #pragma endscop
}
