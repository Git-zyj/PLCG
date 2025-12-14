/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 84348
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=84348 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/84348
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 1; i_0 < 22;i_0 += 1)
    {
        var_12 = ((991106820 ? 3010408114 : (arr_0 [i_0 + 1])));
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 19;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 23;i_3 += 1)
                {
                    {
                        var_13 = (((((arr_2 [i_0]) || (-2147483647 - 1))) ? (((arr_6 [i_0 - 1] [i_1] [i_3]) ? var_1 : (arr_3 [i_0]))) : (arr_10 [i_2 + 3] [i_2 + 3] [i_2 + 4])));

                        for (int i_4 = 4; i_4 < 22;i_4 += 1)
                        {
                            arr_14 [i_4 - 1] [i_1] [17] [i_1] [i_0 + 1] = (~62868);
                            var_14 ^= (((((991106813 ? 0 : 12035523607131933130))) ? 3202566990 : (arr_10 [7] [7] [i_2])));
                        }
                    }
                }
            }
        }
    }
    /* vectorizable */
    for (int i_5 = 0; i_5 < 20;i_5 += 1)
    {
        /* LoopNest 2 */
        for (int i_6 = 1; i_6 < 17;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 20;i_7 += 1)
            {
                {
                    arr_26 [i_7] = (arr_4 [i_6 + 3] [i_6 + 2] [i_6 - 1]);
                    /* LoopNest 2 */
                    for (int i_8 = 0; i_8 < 20;i_8 += 1)
                    {
                        for (int i_9 = 0; i_9 < 20;i_9 += 1)
                        {
                            {
                                arr_33 [i_5] [i_6] [i_6] [i_8] &= (((arr_10 [i_6 - 1] [i_6] [i_6 + 3]) ? (arr_29 [i_6] [i_6] [i_6 + 3] [i_6]) : (arr_10 [i_5] [i_5] [i_6 + 3])));
                                var_15 = (max(var_15, -10732));
                                var_16 |= (((arr_16 [i_6] [i_8]) ? (((arr_1 [15]) ? var_3 : (arr_29 [i_5] [i_5] [i_5] [i_5]))) : ((((arr_31 [i_5] [i_6] [i_7] [i_7] [i_5]) ? -467087504 : (arr_13 [i_5] [i_6] [i_5] [i_6] [i_6] [i_6 + 3] [i_6 + 1]))))));
                                arr_34 [i_5] [i_6 + 1] [9] [i_5] [i_9] [i_5] = ((~(arr_5 [i_6 + 1] [14] [i_7])));
                            }
                        }
                    }
                }
            }
        }
        arr_35 [i_5] = 35;

        for (int i_10 = 1; i_10 < 19;i_10 += 1)
        {
            var_17 = (((arr_29 [i_5] [i_5] [i_5] [i_10 + 1]) ? -467087494 : ((26811 ? (arr_27 [1] [1]) : (arr_23 [i_5])))));
            arr_38 [i_5] [i_5] [16] = (((arr_3 [i_10 + 1]) ? (arr_3 [i_5]) : 9223372036854775807));
            arr_39 [i_5] [i_5] [i_5] = (arr_29 [i_5] [i_10] [i_5] [i_5]);
        }
        for (int i_11 = 0; i_11 < 20;i_11 += 1)
        {
            arr_43 [i_5] [i_5] [i_11] = 9223372036854775807;
            var_18 = (min(var_18, (((-22538 ? (arr_6 [13] [i_5] [i_5]) : (arr_6 [i_5] [i_11] [i_5]))))));
        }
        /* LoopNest 2 */
        for (int i_12 = 0; i_12 < 20;i_12 += 1)
        {
            for (int i_13 = 0; i_13 < 1;i_13 += 1)
            {
                {
                    var_19 = (min(var_19, 8556));
                    var_20 = (max(var_20, 23821));
                    arr_49 [i_5] [i_13] [i_13] [i_12] = (((arr_46 [i_5] [0] [15]) ? (arr_31 [i_5] [i_12] [i_12] [i_12] [i_13]) : (arr_18 [i_12])));
                }
            }
        }
        var_21 *= 62866;
    }
    var_22 = var_7;
    #pragma endscop
}
