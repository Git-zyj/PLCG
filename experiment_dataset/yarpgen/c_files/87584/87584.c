/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 87584
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=87584 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/87584
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (max(var_18, var_12));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 8;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 12;i_2 += 1)
            {
                {
                    arr_7 [i_2] &= (arr_5 [i_2] [i_1] [i_0]);
                    var_19 = (max(((6 ? (arr_0 [i_0] [i_0]) : var_2)), (arr_0 [i_1 + 4] [i_2])));

                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        var_20 ^= (((min((arr_8 [i_1 - 1] [i_1 - 1] [i_1 - 1]), (arr_6 [i_0] [i_1 - 1] [i_2] [i_3])))) <= (min(var_16, (arr_4 [i_1 + 2]))));
                        var_21 = (max(var_21, (((68 ? ((var_2 - (min((arr_1 [i_2]), 18446744073709551615)))) : (arr_10 [i_0] [i_0] [i_0] [7]))))));
                    }
                    for (int i_4 = 0; i_4 < 12;i_4 += 1)
                    {
                        var_22 = (((max((arr_12 [i_1 + 3] [i_1 + 3] [i_1 + 3] [i_2]), ((((arr_9 [i_1 + 4] [i_1] [i_2] [i_4] [i_0] [i_4]) < (arr_12 [i_0] [i_1] [i_2] [i_2]))))))) ? ((min((arr_8 [i_1 + 2] [i_1] [i_1]), ((var_10 ? var_8 : (arr_5 [i_0] [i_1] [i_0])))))) : 18446744073709551611);
                        var_23 = (arr_12 [i_1 + 2] [i_1 + 3] [i_1 + 4] [i_1 + 3]);
                        var_24 ^= var_16;
                    }
                    for (int i_5 = 0; i_5 < 12;i_5 += 1)
                    {
                        var_25 = (max(var_25, (((~((max(-25681, (arr_15 [i_0] [i_1] [11] [i_1 + 3] [i_1] [i_0])))))))));
                        var_26 *= ((((-(arr_15 [i_1 + 1] [9] [i_1 + 1] [i_1 + 2] [7] [i_1 - 1]))) * (~var_12)));
                    }
                    var_27 = (min(var_27, ((max(((-(arr_4 [i_1 + 4]))), ((((arr_14 [i_1 + 4] [i_1] [i_1]) - var_3))))))));
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_6 = 1; i_6 < 19;i_6 += 1)
    {
        for (int i_7 = 4; i_7 < 20;i_7 += 1)
        {
            {
                var_28 = var_9;
                /* LoopNest 3 */
                for (int i_8 = 0; i_8 < 21;i_8 += 1)
                {
                    for (int i_9 = 1; i_9 < 19;i_9 += 1)
                    {
                        for (int i_10 = 0; i_10 < 21;i_10 += 1)
                        {
                            {
                                var_29 = (min(var_29, (((((((arr_27 [i_7 - 1] [2] [i_7 - 3] [i_7 - 4] [i_6 + 1]) ? ((((arr_22 [i_9] [i_9] [i_9 + 1]) < var_3))) : (((!(arr_27 [i_6] [i_6] [1] [i_6] [i_9]))))))) ? (((-(arr_19 [i_10] [i_9 + 2] [i_9 + 1])))) : (arr_17 [7]))))));
                                var_30 ^= var_7;
                                var_31 += (max(((((max((arr_22 [7] [7] [i_8]), (arr_18 [i_6] [19] [i_8]))) < (arr_16 [i_6 + 1])))), (max((arr_21 [i_6 - 1] [i_7] [i_7 - 1] [i_7 - 2]), ((var_9 ? (arr_20 [i_10] [i_9]) : var_2))))));
                            }
                        }
                    }
                }
                var_32 = (max(var_32, ((-30143 ? (arr_23 [i_7] [i_7 + 1] [8] [i_7]) : (((-var_2 ? (arr_20 [i_6] [i_7 - 1]) : 1)))))));

                /* vectorizable */
                for (int i_11 = 1; i_11 < 20;i_11 += 1)
                {
                    var_33 = (((arr_18 [i_11] [i_11 - 1] [i_11]) ? (arr_22 [i_6 + 1] [i_7] [i_11 + 1]) : (((~(arr_24 [i_6] [i_6] [i_7] [1]))))));
                    var_34 = (((arr_18 [i_7 - 2] [i_7 - 2] [i_7]) % (arr_29 [i_11] [i_7] [i_6 + 2] [9])));
                    arr_31 [i_11] = (arr_22 [7] [i_6] [i_6]);
                }
                arr_32 [i_7] = arr_24 [i_6] [i_7] [i_7] [i_7];
            }
        }
    }
    var_35 = (min(var_2, var_1));
    /* LoopNest 2 */
    for (int i_12 = 1; i_12 < 18;i_12 += 1)
    {
        for (int i_13 = 2; i_13 < 16;i_13 += 1)
        {
            {
                var_36 = (min(var_36, (((!(arr_34 [i_12]))))));
                var_37 = (min(var_37, (((~(arr_24 [i_13 + 1] [i_13 + 2] [i_13 + 2] [i_13]))))));
                var_38 = (max(var_38, ((min((1048575 * -25693), (((1 || (((var_14 ? var_17 : (arr_37 [i_13] [i_13 + 2]))))))))))));
            }
        }
    }
    #pragma endscop
}
