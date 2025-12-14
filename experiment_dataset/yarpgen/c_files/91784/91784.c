/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 91784
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=91784 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/91784
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 9;i_0 += 1)
    {
        var_10 = ((var_4 ^ ((107 ? (arr_1 [i_0]) : (arr_0 [i_0] [i_0])))));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 11;i_2 += 1)
            {
                {
                    var_11 = var_2;
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 11;i_4 += 1)
                        {
                            {
                                var_12 = (max((arr_1 [i_0]), (((((arr_8 [i_3] [i_0] [i_0] [i_3] [i_3]) ? 12568457100659554223 : 23942)) | (arr_7 [i_4] [i_3] [i_2])))));
                                var_13 &= ((((max((arr_8 [i_0] [i_1] [i_2] [i_0] [i_3]), -var_1))) ? ((1787016560 ? -1787016560 : 1787016560)) : (max((arr_3 [i_2] [i_2] [i_3]), (var_9 * var_9)))));
                                arr_10 [10] [i_2] [i_0] = max(15, (arr_3 [i_0] [i_1] [i_2]));
                                var_14 += ((((-1787016550 ? var_8 : var_8))) ? (((((max((arr_0 [i_2] [i_4]), var_5))) ? (((arr_0 [i_0 + 1] [i_0 + 1]) ? var_8 : var_7)) : var_5))) : ((var_8 ? (arr_9 [i_1] [i_0 + 2]) : (arr_9 [i_2] [i_0 - 1]))));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 11;i_5 += 1)
                    {
                        for (int i_6 = 2; i_6 < 10;i_6 += 1)
                        {
                            {
                                var_15 = (((arr_2 [i_0 - 1] [i_6 + 1] [i_6]) ? ((max((max((arr_0 [i_0] [i_2]), var_5)), (max((arr_11 [i_0] [i_1] [i_2] [i_2] [0]), var_9))))) : (arr_9 [i_0] [i_0])));
                                var_16 = (((arr_12 [3] [2] [i_0] [i_5]) ? (((arr_5 [i_6 + 1] [i_0 + 1] [i_0 - 1]) ? (arr_5 [i_6 + 1] [i_0 + 1] [i_0 + 1]) : (arr_5 [i_6 - 2] [i_0 + 2] [i_0 + 1]))) : ((~(~var_9)))));
                            }
                        }
                    }
                }
            }
        }
        /* LoopNest 2 */
        for (int i_7 = 0; i_7 < 11;i_7 += 1)
        {
            for (int i_8 = 0; i_8 < 11;i_8 += 1)
            {
                {
                    var_17 = (((max((((var_2 ^ (arr_18 [i_7] [i_7])))), (max((arr_9 [i_0] [4]), 28)))) ^ var_7));

                    for (int i_9 = 0; i_9 < 11;i_9 += 1)
                    {
                        var_18 = max((arr_23 [i_0] [i_7] [i_0] [i_9]), var_4);
                        var_19 = ((+((-(((arr_9 [i_0] [i_8]) ? (arr_20 [i_0 + 1]) : (arr_15 [i_0] [i_0] [i_0] [i_0] [i_7] [i_9])))))));
                        var_20 = ((-var_4 ? (max((arr_3 [i_0] [i_0] [i_9]), var_8)) : (((-(arr_12 [i_0 - 1] [i_0 - 1] [i_0] [i_0 - 1]))))));
                    }
                    for (int i_10 = 0; i_10 < 11;i_10 += 1)
                    {
                        arr_27 [i_0] = (((~(((arr_24 [i_10] [i_0] [i_0]) + (arr_12 [5] [i_8] [i_0] [i_8]))))));
                        var_21 = (min(var_21, (arr_2 [2] [i_8] [i_0])));
                    }
                    for (int i_11 = 0; i_11 < 11;i_11 += 1)
                    {
                        var_22 *= ((((((!(arr_13 [i_0] [i_0]))) ? (arr_13 [i_0] [i_0 - 1]) : (arr_18 [i_7] [i_8]))) | (arr_14 [i_0] [i_7] [i_8] [i_11] [i_7])));
                        var_23 &= var_0;
                        var_24 = 20332;
                    }
                    for (int i_12 = 0; i_12 < 1;i_12 += 1)
                    {
                        arr_33 [i_0] [7] [7] [7] [i_0] = (((((-(((-1787016560 + 2147483647) << (((arr_2 [i_12] [i_7] [i_0]) - 7893767428369589242))))))) ? ((((!1787016551) ? -10020 : (((!(arr_11 [i_7] [5] [i_0] [i_7] [i_7]))))))) : ((1787016534 ? (arr_32 [i_0] [i_0] [6] [i_0] [6]) : ((-1787016551 ? (arr_21 [i_0] [i_7] [i_8] [i_12] [i_0 - 1]) : var_7))))));
                        arr_34 [i_0] [i_7] [i_8] [5] [i_7] = var_9;

                        for (int i_13 = 2; i_13 < 7;i_13 += 1)
                        {
                            var_25 = ((var_8 ? -1787016552 : (((~-1787016552) ? ((24338 ? 361496970 : (arr_23 [i_0] [i_0] [i_7] [i_0]))) : (arr_13 [i_0 + 2] [i_13 + 2])))));
                            var_26 = ((((arr_32 [i_0] [i_0] [1] [i_13] [i_13 + 3]) ? (arr_14 [4] [4] [i_12] [i_12] [i_13 + 3]) : (arr_32 [i_0] [i_12] [i_0] [i_12] [i_13 + 3]))));
                        }
                        /* vectorizable */
                        for (int i_14 = 0; i_14 < 1;i_14 += 1)
                        {
                            var_27 = ((-(((-1787016551 + 2147483647) >> (var_4 + 2283220658232821217)))));
                            var_28 = (arr_13 [i_7] [i_14]);
                            var_29 = (max(var_29, (((arr_5 [i_14] [i_7] [i_7]) ? var_7 : var_0))));
                        }
                        for (int i_15 = 3; i_15 < 10;i_15 += 1)
                        {
                            arr_43 [i_0] [i_7] [i_0] [i_12] = (arr_21 [i_0] [i_0] [i_8] [i_12] [i_15]);
                            var_30 *= (max((((arr_20 [i_0 + 1]) ? var_5 : (arr_20 [i_0 + 1]))), ((((arr_14 [i_7] [i_15 - 3] [i_7] [i_12] [i_12]) ? (arr_18 [7] [i_0 - 1]) : (arr_0 [i_15 - 2] [i_15]))))));
                        }
                    }
                }
            }
        }
        var_31 *= 4721622584958274224;
        arr_44 [i_0] = (((arr_25 [i_0] [i_0] [i_0] [i_0] [i_0]) ? (max((arr_2 [i_0 - 1] [i_0] [i_0]), var_8)) : (arr_9 [i_0] [i_0])));
    }
    var_32 = (max(var_32, (((((~(max(var_9, var_4))))) ? -var_6 : (max(var_9, -var_1))))));
    var_33 = var_0;
    var_34 = (!var_0);
    #pragma endscop
}
