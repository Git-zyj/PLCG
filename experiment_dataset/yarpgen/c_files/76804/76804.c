/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 76804
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=76804 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/76804
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 15;i_2 += 1)
            {
                {
                    var_11 = ((var_0 != (192 ^ 123)));

                    for (int i_3 = 1; i_3 < 17;i_3 += 1)
                    {
                        var_12 = (-var_7 ? (~1396552420) : (((-(((arr_8 [i_0] [i_0] [i_0]) ? var_6 : var_8))))));

                        for (int i_4 = 2; i_4 < 14;i_4 += 1) /* same iter space */
                        {
                            arr_13 [i_0] [i_1 - 2] [8] [i_3] [i_3] [i_4] [i_4] = ((((max(-var_4, (arr_12 [i_1 - 4] [i_2 + 2] [i_2] [i_4 - 1] [i_4])))) ? (max((((1 ? var_10 : (arr_10 [i_0] [5] [13] [i_3] [i_4 + 1])))), ((var_10 ? var_5 : (arr_11 [i_0] [i_0] [i_0] [i_0] [i_0]))))) : (((-2057343084 ? (arr_12 [i_3 - 1] [i_1] [i_1 + 1] [i_3] [i_2 - 1]) : var_4)))));
                            arr_14 [i_0] [i_1] [i_2] [i_3] [i_0] = ((var_1 ? (((!var_8) ? ((-4621956078912968 ? (arr_11 [i_0] [i_1] [i_2] [i_3] [i_4]) : var_1)) : (((2057343080 << (1 - 1)))))) : ((((((73 ? 73 : (arr_1 [i_1]))) != var_1))))));
                        }
                        for (int i_5 = 2; i_5 < 14;i_5 += 1) /* same iter space */
                        {
                            var_13 = ((((var_8 ? (arr_8 [i_0] [i_2 - 2] [i_2 + 1]) : (arr_8 [i_0] [i_2 + 2] [i_2 - 1]))) != (min(var_6, (arr_8 [i_0] [i_2 + 2] [i_2 - 2])))));
                            var_14 = ((~(((arr_8 [i_0] [i_2 + 2] [i_0 - 1]) ? (arr_8 [i_0] [i_2 + 2] [i_0 - 1]) : (arr_8 [i_0] [i_2 + 3] [i_0 - 1])))));
                            arr_19 [i_0] [i_3] [i_5] = (((((~(arr_10 [i_0 - 1] [i_2 - 2] [i_3] [i_3 - 1] [i_3])))) ? (((var_8 ? (arr_10 [i_0 - 1] [i_2 - 2] [i_3] [i_3 - 1] [i_5 + 4]) : var_6))) : (((arr_10 [i_0 - 2] [i_2 - 2] [i_2] [i_3 - 1] [i_5]) ? 2240238664 : -2057343078))));
                        }
                        var_15 = (max(var_15, -118));
                        var_16 = ((~((max((max(var_3, var_9)), ((((arr_4 [i_1] [i_1 - 4]) > 16384))))))));
                        arr_20 [i_0] [i_0] [i_2] [i_3] [i_3] = (((((var_4 ? 16386 : 25416))) ? (arr_15 [1] [i_0 - 1] [i_2 + 1] [i_3 + 1]) : ((max((arr_15 [i_0] [i_0 - 1] [i_2 - 2] [i_3 - 1]), var_4)))));
                    }
                    for (int i_6 = 3; i_6 < 16;i_6 += 1)
                    {
                        var_17 = ((16777216 || ((min((min(var_6, 0)), var_8)))));

                        for (int i_7 = 0; i_7 < 18;i_7 += 1) /* same iter space */
                        {
                            var_18 = (min(var_18, (((var_9 <= ((((max(var_3, (arr_21 [11] [i_1] [i_2] [i_6] [i_6] [i_7])))) ? var_3 : 2054728652)))))));
                            arr_25 [i_0] [i_7] [i_1] [10] [i_7] [i_0] [i_0] |= (max((max((arr_8 [i_7] [i_1 + 1] [i_1 + 1]), (arr_4 [i_1 + 1] [i_1 - 4]))), (min((arr_8 [i_7] [i_1 - 1] [i_1 + 1]), var_8))));
                            arr_26 [i_6] [i_6] [i_0] [i_6] [i_6] [i_6] = var_9;
                            var_19 ^= ((((max(((2147483647 ? var_9 : (arr_10 [7] [i_1] [i_1 - 3] [i_1] [i_1]))), (arr_11 [i_6 - 2] [i_6 - 2] [i_6 - 3] [i_6] [i_6])))) ? (((arr_18 [i_6 + 1] [i_7] [i_2 - 2] [i_7] [i_0]) ? (arr_18 [i_6 - 1] [i_7] [i_1] [i_7] [i_1 + 1]) : -2057343084)) : ((var_6 ? ((~(arr_17 [i_7]))) : (((arr_17 [i_7]) ? var_8 : (arr_23 [i_6 - 3] [i_6] [i_7] [i_6] [i_6])))))));
                            var_20 = ((min(225, 14005454509738619115)));
                        }
                        for (int i_8 = 0; i_8 < 18;i_8 += 1) /* same iter space */
                        {
                            arr_29 [i_0] [i_6] = (min(3724454361719765618, (-9223372036854775807 - 1)));
                            var_21 = (((((var_7 > var_0) ? var_2 : (arr_24 [i_0])))) ? (min(-2057343087, (arr_24 [i_0]))) : (!1));
                            var_22 = 62;
                        }
                        arr_30 [i_0] [16] [i_0] = -14;
                        arr_31 [i_0] [i_0] [i_0] [3] = (((arr_28 [i_6 + 1] [15] [i_6 - 1] [i_6] [i_6] [i_6 + 1]) / ((((arr_8 [i_0] [i_2 + 1] [i_6 + 2]) / var_10)))));
                    }
                    /* LoopNest 2 */
                    for (int i_9 = 3; i_9 < 15;i_9 += 1)
                    {
                        for (int i_10 = 1; i_10 < 17;i_10 += 1)
                        {
                            {
                                var_23 ^= (((((((max((arr_17 [8]), var_10))) * ((16394 ? var_6 : 116))))) ? (max(var_4, (var_9 * var_2))) : ((((max((arr_23 [i_0] [14] [0] [12] [i_10]), var_8))) & 1))));
                                arr_38 [i_0] [i_9] = var_10;
                            }
                        }
                    }
                }
            }
        }
    }
    var_24 = (min(var_9, (0 / var_2)));
    #pragma endscop
}
