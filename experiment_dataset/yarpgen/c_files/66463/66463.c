/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 66463
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=66463 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/66463
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 22;i_2 += 1)
            {
                {
                    arr_8 [18] [16] [i_1] [i_2] &= ((min((arr_2 [i_0 - 1]), (arr_2 [i_0 + 1]))));
                    arr_9 [i_0] [i_1] [i_0] = (max((arr_2 [i_1 - 1]), (((var_11 || (arr_6 [i_1 + 1] [i_0 + 1]))))));

                    for (int i_3 = 0; i_3 < 25;i_3 += 1)
                    {
                        arr_14 [i_3] [i_0] [i_2] [i_0] = (((-9223372036854775807 - 1) ^ (((min(var_11, (arr_7 [i_2] [i_0 + 1])))))));
                        var_14 = ((-((((!(arr_13 [i_1] [i_2] [i_1] [i_0]))) ? (arr_1 [i_0]) : ((-(arr_12 [i_0])))))));
                        arr_15 [i_0] [i_0] [i_1 - 1] = (arr_0 [i_0]);
                    }

                    for (int i_4 = 0; i_4 < 25;i_4 += 1)
                    {
                        arr_20 [6] [i_2] [i_1] [6] &= (((((~(arr_2 [i_0 - 1])))) ? ((-(arr_5 [i_0 + 1] [i_0 - 1]))) : (((!(arr_4 [14] [14]))))));
                        arr_21 [i_0] [i_0] [i_2] = var_9;
                    }
                    for (int i_5 = 0; i_5 < 25;i_5 += 1) /* same iter space */
                    {
                        var_15 *= (((((min(0, 62)))) ? (arr_10 [i_5] [i_2] [i_1] [10]) : (((-((-6509099625443209046 ? 57762 : var_9)))))));

                        for (int i_6 = 0; i_6 < 25;i_6 += 1)
                        {
                            var_16 = (min(var_16, var_12));
                            arr_30 [i_0] [i_1 - 1] = arr_23 [i_6] [i_1];
                            var_17 = max(((((arr_4 [i_0] [i_0]) % (arr_2 [i_2])))), (max((((~(arr_5 [i_0] [16])))), (min(var_4, (-9223372036854775807 - 1))))));
                            var_18 |= var_3;
                            arr_31 [i_6] [i_5] [i_0] [i_1] [i_0] = var_11;
                        }
                        for (int i_7 = 2; i_7 < 24;i_7 += 1)
                        {
                            arr_34 [i_7] [i_5] [i_0] [i_0] [1] [i_0] = ((min((arr_22 [i_7 - 2] [i_1 + 1] [i_0 - 1] [i_0]), (arr_22 [i_7 - 2] [i_1 + 1] [i_0 + 1] [i_0]))));
                            var_19 = ((((arr_33 [i_0 - 1] [i_0] [i_5]) ? (arr_33 [i_0 + 1] [i_0] [4]) : var_5)));
                            var_20 = (((~(arr_26 [i_2 + 3] [i_2 + 2] [i_2] [i_2]))));
                            arr_35 [i_0] [i_1] [i_2] [i_2] [i_5] [i_7 - 2] [i_0] = (((((arr_12 [i_0 - 1]) ? (arr_12 [i_1 + 1]) : (arr_12 [i_0 + 1]))) * (((arr_12 [i_0]) ? (arr_12 [i_0 - 1]) : 0))));
                        }
                        for (int i_8 = 1; i_8 < 24;i_8 += 1)
                        {
                            var_21 = (min(var_21, var_1));
                            var_22 = (((arr_19 [i_1] [i_1] [6] [i_5] [23] [i_5]) ^ (min((arr_26 [i_8 + 1] [7] [i_1] [i_0 + 1]), (arr_5 [i_0] [i_5])))));
                        }
                    }
                    /* vectorizable */
                    for (int i_9 = 0; i_9 < 25;i_9 += 1) /* same iter space */
                    {
                        arr_41 [i_0 + 1] [i_1] [i_0] [i_9] = (((arr_40 [i_0] [i_0]) | (arr_4 [i_0] [i_0])));
                        arr_42 [i_0] = (arr_28 [i_2 + 1] [i_2 + 2] [i_2] [i_2]);
                        var_23 = (((arr_7 [i_2 + 3] [i_0 + 1]) > (arr_7 [i_2 + 1] [i_0 + 1])));
                    }
                    /* vectorizable */
                    for (int i_10 = 0; i_10 < 25;i_10 += 1) /* same iter space */
                    {
                        arr_47 [i_0 - 1] [i_0] [i_0] [i_1] [i_2] [i_10] = arr_28 [i_10] [i_2] [i_1 - 1] [i_0];
                        var_24 = var_6;
                        var_25 &= (arr_39 [i_10] [i_2 + 2] [i_1] [i_0 + 1]);
                        arr_48 [15] [i_0] [i_0] [i_0] = (((((arr_28 [i_0 + 1] [i_0 - 1] [i_0 + 1] [i_0 - 1]) + 2147483647)) >> (((((-9223372036854775807 - 1) - -9223372036854775782)) + 43))));
                    }
                    /* LoopNest 2 */
                    for (int i_11 = 0; i_11 < 25;i_11 += 1)
                    {
                        for (int i_12 = 0; i_12 < 1;i_12 += 1)
                        {
                            {
                                var_26 ^= 255;
                                var_27 = (((min(9223372036854775807, 8184)) | (arr_4 [i_0] [i_1 + 1])));
                                var_28 ^= (max((((arr_36 [i_0 + 1] [i_0 - 1]) ? (arr_36 [i_0 + 1] [i_0 + 1]) : 8388607)), ((((arr_51 [i_0] [i_1 + 1] [i_12]) + (-9223372036854775807 - 1))))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_29 = -8388607;
    #pragma endscop
}
