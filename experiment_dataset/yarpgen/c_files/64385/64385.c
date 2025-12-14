/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 64385
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=64385 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/64385
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 2; i_2 < 23;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 22;i_3 += 1)
                    {
                        {
                            var_20 = (min((((arr_4 [i_2 - 2] [i_2] [i_3 + 2]) & var_6)), (((!((max((arr_0 [i_0] [23]), var_17))))))));
                            arr_13 [i_1] [i_3] [24] = ((var_6 ? (min((max(var_16, (arr_8 [i_0] [13]))), (arr_4 [i_2 + 1] [i_2 + 2] [i_3 + 1]))) : (arr_11 [i_3 - 1] [i_3] [i_3] [i_3 + 1] [i_2 - 1])));
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_4 = 2; i_4 < 23;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 1;i_5 += 1)
                    {
                        {

                            /* vectorizable */
                            for (int i_6 = 0; i_6 < 25;i_6 += 1)
                            {
                                arr_24 [i_6] [24] = (((arr_20 [i_0] [i_1] [i_0] [i_5] [i_6] [i_4 + 2] [i_4 - 2]) ? (arr_4 [i_1] [i_4 + 2] [i_1]) : 1));
                                var_21 = ((((((arr_20 [i_5] [i_5] [i_4] [i_5] [i_4] [i_4 - 2] [i_4]) % -8196))) ? ((-(arr_21 [i_0] [i_0] [21] [9] [i_4 + 2] [21] [i_6]))) : (arr_3 [i_4 - 2] [i_4 - 2])));
                                arr_25 [i_6] [24] [i_1] [i_0] = ((!(((var_18 ? var_15 : var_17)))));
                                arr_26 [i_0] [i_1] [1] [i_4 + 2] [i_5] [i_6] = var_15;
                            }
                            /* vectorizable */
                            for (int i_7 = 1; i_7 < 24;i_7 += 1)
                            {
                                arr_31 [i_0] [i_1] [i_4 + 2] [i_0] [i_7 - 1] = (var_16 + 1);
                                arr_32 [i_0] [i_1] [i_4 + 1] = var_12;
                                arr_33 [i_0] [i_1] [i_0] [i_0] [i_0] [i_0] [i_1] = var_18;
                                arr_34 [i_4] [i_4] [i_4 - 2] [i_5] [i_7 + 1] = (((arr_5 [i_7 - 1]) ? (((!(arr_6 [i_4 - 1] [18])))) : (arr_2 [i_7 + 1])));
                            }
                            /* vectorizable */
                            for (int i_8 = 1; i_8 < 23;i_8 += 1)
                            {
                                var_22 = ((~((var_3 ? var_12 : var_1))));
                                var_23 = (arr_11 [i_0] [i_1] [i_8 + 1] [i_5] [i_4 - 1]);
                                var_24 = (((arr_15 [i_4 + 2] [i_4 + 2] [i_8 + 1]) ? ((var_13 ? (arr_22 [i_8 + 2] [i_5] [i_4] [i_4] [i_1] [i_1] [i_0]) : var_2)) : ((var_2 ? var_15 : var_1))));
                                arr_37 [i_0] [i_5] [i_5] [i_8] = ((((arr_36 [i_1] [i_8] [i_8 - 1]) | var_10)));
                            }
                            arr_38 [i_5] [i_5] [i_4 + 1] [i_1] [i_0] = ((((((arr_14 [i_4 - 1] [i_1] [i_4 - 2] [22]) ? (arr_30 [i_4 - 1] [i_1] [1] [i_5] [i_5] [i_1]) : (arr_14 [i_4 - 1] [6] [i_4] [i_4])))) ? (((!(arr_15 [i_4 - 1] [i_4 - 1] [i_4 - 1])))) : ((min((arr_15 [i_4 - 1] [i_4 - 1] [i_4]), (arr_30 [i_4 - 1] [i_4 - 1] [i_4] [10] [i_1] [i_5]))))));

                            /* vectorizable */
                            for (int i_9 = 0; i_9 < 25;i_9 += 1)
                            {
                                arr_41 [3] [i_5] [i_4] [i_5] [i_9] = var_11;
                                arr_42 [i_0] [11] [11] [i_5] [i_9] = (((1 <= 63536) ? (arr_39 [i_5] [i_5] [i_5] [i_5] [i_4 + 1] [i_4 - 1]) : 70368744177663));
                                arr_43 [i_9] [6] [i_5] [6] [6] [1] [1] = (((arr_27 [i_4] [i_4 + 2] [i_4 + 2] [i_4] [i_4 - 1]) ? (arr_27 [i_4 + 1] [i_4 + 2] [i_4 + 1] [i_4 + 2] [i_4 + 1]) : (((((arr_6 [i_9] [i_0]) > var_0))))));
                                arr_44 [i_0] [18] [i_4 + 2] [i_5] [i_9] = var_3;
                                var_25 = (((((var_1 - (arr_23 [22] [i_1] [22] [21] [i_9] [i_9])))) ? (arr_30 [i_0] [i_4 + 1] [11] [i_4 + 1] [i_4 - 2] [i_4 - 2]) : (arr_18 [i_0] [i_1] [i_4])));
                            }
                            var_26 = arr_36 [i_0] [i_0] [8];
                            var_27 = (arr_17 [18] [8] [i_4 - 1] [6]);
                        }
                    }
                }
                var_28 = var_14;
            }
        }
    }
    /* LoopNest 2 */
    for (int i_10 = 2; i_10 < 19;i_10 += 1)
    {
        for (int i_11 = 0; i_11 < 20;i_11 += 1)
        {
            {
                arr_49 [i_10] [i_11] = (!-var_2);
                var_29 = (min((((var_10 + 9223372036854775807) >> 1)), (((min((arr_35 [15] [i_11] [i_11] [14] [15]), (arr_39 [15] [i_11] [i_11] [i_10 - 1] [15] [i_10 - 1])))))));
            }
        }
    }
    var_30 = var_9;

    /* vectorizable */
    for (int i_12 = 0; i_12 < 18;i_12 += 1)
    {
        arr_52 [i_12] = (arr_48 [i_12] [i_12]);
        var_31 = arr_17 [i_12] [1] [i_12] [i_12];
        var_32 = (((~var_13) & (arr_51 [i_12])));
        arr_53 [i_12] = (arr_17 [i_12] [i_12] [i_12] [i_12]);
        arr_54 [i_12] = (arr_8 [i_12] [i_12]);
    }
    for (int i_13 = 2; i_13 < 24;i_13 += 1)
    {
        /* LoopNest 2 */
        for (int i_14 = 3; i_14 < 22;i_14 += 1)
        {
            for (int i_15 = 2; i_15 < 24;i_15 += 1)
            {
                {
                    var_33 = (((arr_29 [i_13] [i_14 - 2] [i_15 + 1] [1]) ? ((var_12 ? (((min(var_0, (arr_60 [i_13 - 1] [i_13 - 1] [i_13 - 1]))))) : (max((arr_36 [i_13 - 1] [i_13] [i_13]), (arr_9 [i_14]))))) : (arr_3 [i_15 + 1] [i_13 - 2])));
                    arr_64 [9] [i_13] [i_15 - 1] = (arr_60 [i_15 - 2] [i_14 + 3] [i_13 - 2]);
                }
            }
        }
        var_34 = 1;
        arr_65 [1] = (((arr_29 [i_13] [i_13] [i_13] [i_13]) == var_19));
        var_35 = ((+(((-19 + 2147483647) >> (var_10 + 8156692574386707025)))));
    }
    #pragma endscop
}
