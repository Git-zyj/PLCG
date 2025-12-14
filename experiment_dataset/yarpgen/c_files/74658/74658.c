/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 74658
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=74658 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/74658
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = 22;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 2; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 4; i_2 < 19;i_2 += 1)
            {
                {
                    arr_8 [i_1] [15] = ((-(arr_5 [6] [i_2])));
                    var_21 = (((var_17 + (arr_7 [i_0] [i_0] [i_0] [i_0]))));
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            {
                                var_22 = ((var_8 ? (arr_10 [i_3 - 1] [i_3 - 1] [i_2 - 1] [i_1 - 2]) : (arr_10 [i_3 - 1] [i_3 - 1] [i_2 - 3] [i_1 - 2])));
                                var_23 = (((arr_11 [i_3 - 1] [i_2 - 2] [i_1 - 2] [i_1 - 2] [i_1]) ? (arr_11 [i_3 - 1] [i_2 - 4] [i_1 - 1] [i_1 - 1] [i_0]) : 116));
                            }
                        }
                    }

                    for (int i_5 = 0; i_5 < 22;i_5 += 1)
                    {
                        var_24 = ((3532199728 ? (arr_13 [i_0] [i_1] [i_2] [i_1 - 1] [i_0]) : (arr_13 [i_0] [15] [i_0] [i_1 + 1] [i_2 - 1])));
                        arr_16 [i_0] [i_5] [i_5] [i_5] [i_5] = ((var_9 ? (arr_6 [i_1 - 2] [i_1 - 1] [i_1 - 2]) : var_9));
                    }
                    for (int i_6 = 0; i_6 < 1;i_6 += 1)
                    {
                        var_25 = var_9;
                        arr_21 [i_6] = ((var_3 ? (arr_12 [i_0] [i_0]) : (arr_19 [i_0] [i_0] [i_1] [i_2 - 2] [i_0] [i_6])));
                    }
                    var_26 = ((((var_9 ? (arr_3 [i_0] [i_0] [18]) : -31563)) + 30181));
                }
            }
        }
        var_27 = (min(var_27, (((5 | ((var_2 ? var_19 : (arr_11 [i_0] [i_0] [i_0] [i_0] [i_0]))))))));
        /* LoopNest 2 */
        for (int i_7 = 3; i_7 < 18;i_7 += 1)
        {
            for (int i_8 = 0; i_8 < 22;i_8 += 1)
            {
                {
                    var_28 = (min(var_28, ((((arr_24 [i_7] [i_7 - 1] [1]) && var_15)))));
                    var_29 = ((1716293253296774820 | (2038361094 >= 44374)));
                }
            }
        }
        /* LoopNest 2 */
        for (int i_9 = 1; i_9 < 19;i_9 += 1)
        {
            for (int i_10 = 0; i_10 < 22;i_10 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_11 = 0; i_11 < 1;i_11 += 1)
                    {
                        for (int i_12 = 0; i_12 < 22;i_12 += 1)
                        {
                            {
                                var_30 &= var_2;
                                arr_37 [i_12] [i_10] [i_10] [i_9] [i_0] = ((-6501326813716548218 | (((((arr_12 [i_9 + 1] [i_9 - 1]) + 2147483647)) >> (((arr_31 [i_0] [i_9]) - 45))))));
                                var_31 = (((arr_31 [i_9 - 1] [i_9 + 1]) ? 3330890302 : (arr_31 [i_9 - 1] [i_9])));
                                arr_38 [2] [i_9] [i_10] [i_10] [i_12] = ((arr_12 [i_9 + 3] [i_0]) | (arr_12 [i_9 + 3] [i_0]));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_13 = 0; i_13 < 22;i_13 += 1)
                    {
                        for (int i_14 = 0; i_14 < 22;i_14 += 1)
                        {
                            {
                                arr_45 [i_13] = (((!(arr_15 [i_10] [i_14] [i_0] [i_14] [i_14] [i_14]))));
                                arr_46 [i_14] [i_13] [i_0] [i_9] [i_9] [i_0] = (((((~(arr_32 [i_9] [i_9] [4])))) ? (arr_5 [i_9 + 1] [i_9 + 1]) : var_5));
                                var_32 = (((arr_24 [i_9] [i_9 - 1] [i_9]) / var_5));
                                var_33 = (((((var_13 ? (arr_7 [i_13] [i_13] [i_0] [i_0]) : var_4))) ? (((arr_7 [i_0] [i_9] [i_9] [i_9]) ? 2587656410 : (arr_39 [i_0] [i_9 + 1] [i_10] [i_13] [i_14]))) : (arr_31 [i_13] [i_13])));
                            }
                        }
                    }
                    arr_47 [i_0] = (arr_26 [i_0] [i_9 - 1]);
                }
            }
        }
        arr_48 [i_0] [i_0] = (arr_27 [i_0]);
    }
    /* vectorizable */
    for (int i_15 = 0; i_15 < 15;i_15 += 1)
    {
        var_34 = (((arr_23 [i_15] [5] [i_15]) ? (arr_43 [i_15]) : 4));
        var_35 = (min(var_35, 908236362));
        var_36 = (((arr_13 [13] [i_15] [i_15] [i_15] [i_15]) + ((var_11 - (arr_3 [i_15] [i_15] [10])))));
        var_37 = ((arr_36 [i_15] [i_15] [i_15]) * (arr_49 [i_15]));
    }
    #pragma endscop
}
