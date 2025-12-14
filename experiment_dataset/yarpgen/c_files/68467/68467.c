/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 68467
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=68467 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/68467
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 23;i_2 += 1)
            {
                {
                    var_19 = ((var_6 ? ((((arr_3 [i_1]) ? var_15 : var_18))) : (-9223372036854775807 - 1)));
                    var_20 = (((arr_3 [i_2]) != (arr_6 [i_1])));
                    var_21 = (9223372036854775807 >= 447990218);
                }
            }
        }
        arr_8 [i_0] [22] = var_13;
        /* LoopNest 3 */
        for (int i_3 = 1; i_3 < 22;i_3 += 1)
        {
            for (int i_4 = 2; i_4 < 19;i_4 += 1)
            {
                for (int i_5 = 2; i_5 < 22;i_5 += 1)
                {
                    {
                        arr_15 [15] [15] [i_4] [19] [i_4] [i_5] = (arr_6 [i_3]);
                        var_22 = var_10;
                    }
                }
            }
        }
        var_23 = 58203;

        /* vectorizable */
        for (int i_6 = 2; i_6 < 20;i_6 += 1)
        {
            var_24 = var_16;
            arr_18 [1] [i_6] = (((arr_9 [i_0]) / (arr_9 [i_0])));
            arr_19 [1] = var_17;
            /* LoopNest 2 */
            for (int i_7 = 0; i_7 < 23;i_7 += 1)
            {
                for (int i_8 = 0; i_8 < 23;i_8 += 1)
                {
                    {
                        var_25 = (max(var_25, 4023160945598536174));
                        arr_24 [i_0] = (arr_17 [i_0] [i_0]);
                        arr_25 [1] [i_6] = (var_2 ? var_18 : (arr_6 [i_6 + 3]));
                        var_26 = -9223372036854775792;
                    }
                }
            }
            var_27 = (((arr_10 [4] [i_6 + 3]) ^ (arr_2 [i_6 + 1] [i_6] [2])));
        }
    }
    var_28 = (var_12 ^ (((var_13 + var_13) >> (43 - 25))));

    for (int i_9 = 0; i_9 < 22;i_9 += 1)
    {
        var_29 = ((((((arr_9 [i_9]) ? (arr_0 [i_9]) : (arr_16 [i_9] [i_9] [i_9])))) ? (arr_16 [i_9] [i_9] [i_9]) : (((arr_16 [i_9] [i_9] [i_9]) ? 1 : (arr_16 [i_9] [0] [i_9])))));
        arr_28 [i_9] [i_9] = var_7;
        /* LoopNest 2 */
        for (int i_10 = 1; i_10 < 21;i_10 += 1)
        {
            for (int i_11 = 0; i_11 < 22;i_11 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_12 = 0; i_12 < 1;i_12 += 1)
                    {
                        for (int i_13 = 3; i_13 < 19;i_13 += 1)
                        {
                            {
                                var_30 = (1 || 2053994235);
                                var_31 = (((~(arr_33 [i_10 - 1] [i_13 + 3] [i_13] [i_13] [18] [i_13]))) == (max((((var_0 ? var_6 : var_1))), (arr_0 [i_10]))));
                            }
                        }
                    }

                    for (int i_14 = 1; i_14 < 21;i_14 += 1)
                    {
                        arr_41 [19] [i_10] [i_11] [i_14 - 1] = (var_10 & var_5);
                        arr_42 [i_10] = 9223372036854775807;
                        var_32 = (65535 || 1);
                        var_33 = (max(var_33, -1184094498));
                    }
                    arr_43 [i_10] = (max(((var_9 ? (arr_40 [i_10] [i_10 - 1] [i_11] [i_10 - 1] [i_10] [4]) : (arr_35 [i_9] [i_10 - 1] [i_9] [i_10] [7] [i_11] [i_10 - 1]))), (max(var_15, (arr_40 [i_9] [i_10 + 1] [i_11] [i_10] [i_10] [i_9])))));
                }
            }
        }
    }
    #pragma endscop
}
