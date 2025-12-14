/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 85482
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=85482 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/85482
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 1; i_2 < 23;i_2 += 1)
                {
                    for (int i_3 = 3; i_3 < 22;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 22;i_4 += 1)
                        {
                            {
                                var_16 = (arr_7 [i_0] [i_2] [i_0] [i_2]);
                                arr_13 [i_1] [i_1] [i_2] [18] [12] [i_4] [i_2] |= arr_9 [i_4] [0] [i_4 + 2] [i_4] [i_4] [i_4 + 2];
                            }
                        }
                    }
                }
                var_17 = (min(var_17, (arr_9 [i_0] [i_0] [20] [16] [16] [i_0])));

                for (int i_5 = 4; i_5 < 22;i_5 += 1) /* same iter space */
                {
                    var_18 = (min((arr_6 [i_1] [i_1] [i_5 - 3]), (arr_6 [i_0] [i_5] [i_5 - 2])));
                    var_19 -= (arr_10 [i_0] [i_0] [i_5 - 4] [i_0] [i_1]);
                }
                /* vectorizable */
                for (int i_6 = 4; i_6 < 22;i_6 += 1) /* same iter space */
                {

                    for (int i_7 = 3; i_7 < 20;i_7 += 1)
                    {
                        var_20 = ((~(arr_21 [i_6] [i_6] [i_7] [i_6 + 1] [i_6] [i_7])));

                        for (int i_8 = 0; i_8 < 24;i_8 += 1)
                        {
                            var_21 = (arr_7 [7] [i_7 + 4] [i_6 - 4] [i_7 - 1]);
                            var_22 = ((arr_18 [22] [i_6 - 4] [i_7 - 1]) ? (arr_14 [i_7 - 1] [i_7] [i_7 + 2] [i_7 - 2]) : -26622);
                            var_23 = ((var_11 ? var_5 : (arr_14 [i_0] [i_1] [i_6] [i_1])));
                        }
                        for (int i_9 = 3; i_9 < 21;i_9 += 1)
                        {
                            var_24 &= var_3;
                            arr_27 [i_0] [i_7] [i_0] [i_0] [i_0] = (arr_24 [i_6 - 2] [i_6] [i_9 + 1] [i_9]);
                        }
                        var_25 = (arr_3 [i_1]);
                    }
                    for (int i_10 = 1; i_10 < 21;i_10 += 1)
                    {
                        arr_31 [12] = (arr_21 [i_1] [i_1] [i_0] [i_6 - 2] [i_1] [i_10 + 2]);
                        arr_32 [i_0] [i_0] [i_1] [i_0] [9] [i_10] = ((3371 ? -3371 : -3371));
                    }
                    for (int i_11 = 1; i_11 < 23;i_11 += 1)
                    {
                        arr_36 [i_0] [20] [i_6] [i_11 - 1] [i_11 - 1] = ((!(arr_35 [i_11 - 1] [i_11] [i_11] [i_11] [9] [i_11])));

                        for (int i_12 = 0; i_12 < 24;i_12 += 1)
                        {
                            var_26 = ((66 ? (arr_24 [i_11] [i_11 - 1] [i_11] [i_11 + 1]) : (arr_24 [i_11] [i_11 + 1] [i_11 + 1] [i_11 - 1])));
                            var_27 ^= (((arr_10 [i_6] [i_6] [i_6 - 4] [i_6 - 1] [i_6]) && (arr_6 [i_0] [i_6 - 2] [i_6 - 3])));
                        }

                        for (int i_13 = 1; i_13 < 21;i_13 += 1)
                        {
                            arr_43 [i_0] [i_13] [i_13] = arr_7 [i_6 + 2] [i_6 - 2] [i_11 - 1] [i_11 + 1];
                            var_28 *= ((-(arr_33 [i_6 - 3] [i_6 - 2] [i_6 - 3] [i_6])));
                            var_29 = var_11;
                        }
                        var_30 = (arr_22 [i_6 - 3] [i_6 + 2] [11] [i_6 - 1] [i_6] [i_6 - 3]);
                    }
                    for (int i_14 = 0; i_14 < 24;i_14 += 1)
                    {
                        var_31 = (max(var_31, -95));
                        arr_46 [i_0] [i_0] [i_0] = var_5;
                    }
                    var_32 = (((arr_25 [i_0] [i_0] [i_6 - 3] [i_0] [0] [i_6 - 3] [i_6 + 1]) ? (arr_7 [i_0] [i_0] [i_0] [i_0]) : 58));
                }
                for (int i_15 = 0; i_15 < 24;i_15 += 1)
                {
                    var_33 = (max(((((((arr_37 [i_0] [i_0] [i_15] [i_1] [i_1]) ? (arr_40 [i_0] [i_0] [i_15] [i_0] [i_15] [i_0] [i_1]) : 40))) ? (arr_34 [i_1] [i_1] [i_1] [i_1] [i_1]) : (arr_17 [i_0] [i_0] [i_0]))), (arr_9 [i_1] [i_15] [i_15] [i_15] [18] [i_1])));
                    arr_49 [i_0] [7] [i_0] |= (min(var_0, (((((22727 ? (arr_23 [i_15] [i_1] [i_15] [i_15] [i_15]) : 94))) ? ((min(var_13, -40))) : 113))));
                    var_34 = (max(var_34, var_4));
                }
                var_35 = (!-51);
            }
        }
    }
    /* LoopNest 2 */
    for (int i_16 = 1; i_16 < 22;i_16 += 1)
    {
        for (int i_17 = 2; i_17 < 23;i_17 += 1)
        {
            {
                var_36 = ((max(-40, (((arr_50 [i_16]) / (arr_38 [i_16] [i_16] [i_16] [9] [i_16] [7] [i_16 - 1]))))));
                var_37 = (max(var_37, var_3));
            }
        }
    }
    var_38 = (min(var_38, var_7));
    #pragma endscop
}
