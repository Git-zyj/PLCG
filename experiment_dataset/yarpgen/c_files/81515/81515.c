/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 81515
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=81515 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/81515
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 &= (~0);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            {
                var_20 = (arr_1 [9]);
                arr_6 [i_1] = (max((((arr_2 [i_0]) * (arr_2 [i_0]))), (max((arr_2 [i_0]), (arr_2 [i_1])))));

                for (int i_2 = 1; i_2 < 1;i_2 += 1)
                {
                    arr_10 [i_0] [7] [i_0] [i_2 - 1] = (min(var_15, ((((arr_8 [7] [i_2] [i_2 - 1]) && var_5)))));

                    for (int i_3 = 0; i_3 < 12;i_3 += 1)
                    {
                        var_21 = (max(var_21, (arr_3 [i_1] [i_1])));
                        var_22 = ((((!(65529 && 1))) ? ((7877 ? (!var_5) : (arr_9 [i_3] [i_2 - 1] [i_2] [i_2]))) : (((!((var_4 || (arr_3 [8] [i_1]))))))));
                        arr_13 [10] = (arr_2 [i_2]);
                    }
                    /* vectorizable */
                    for (int i_4 = 0; i_4 < 12;i_4 += 1)
                    {
                        var_23 = (arr_7 [i_2] [i_1]);
                        var_24 = arr_12 [i_4] [i_1] [i_1] [i_0];
                    }
                    for (int i_5 = 2; i_5 < 10;i_5 += 1)
                    {
                        arr_18 [i_0] [i_0] [i_0] [i_0] = (((var_10 + var_11) ? var_11 : (arr_4 [i_1])));
                        var_25 = 39069;
                        var_26 = var_6;

                        for (int i_6 = 4; i_6 < 10;i_6 += 1)
                        {
                            var_27 = (min((((arr_14 [1] [i_2 - 1] [i_5 - 1] [5] [i_6 - 2]) * (arr_14 [i_1] [i_2 - 1] [i_5 - 2] [i_5] [i_6 - 1]))), (((var_3 * (arr_14 [i_0] [i_0] [i_0] [i_0] [i_0]))))));
                            arr_21 [i_0] = (min((arr_1 [i_0]), (max((arr_9 [i_2 - 1] [i_2 - 1] [i_5 - 2] [i_6 + 2]), (min(var_16, 1))))));
                            arr_22 [11] [11] [i_2] = max(((min(var_15, (arr_20 [i_1] [i_1] [i_1] [i_5] [5] [i_2])))), var_3);
                        }
                        arr_23 [i_0] [i_0] [11] [i_0] [i_5] = ((((-((~(arr_2 [i_5]))))) * (((((((var_0 ? var_2 : var_14))) < var_14))))));
                    }
                }
                for (int i_7 = 0; i_7 < 12;i_7 += 1)
                {
                    arr_28 [1] = (min(var_6, (arr_20 [i_0] [i_0] [i_0] [10] [i_7] [i_7])));

                    for (int i_8 = 1; i_8 < 1;i_8 += 1)
                    {
                        var_28 = var_15;
                        var_29 = (((max((((arr_8 [i_0] [i_0] [i_0]) / var_11)), ((var_5 ? 6068410803716079572 : (arr_3 [i_1] [i_0]))))) != (arr_4 [1])));
                        var_30 = (((((min(((min((arr_20 [i_0] [i_0] [i_0] [i_1] [i_7] [i_8]), var_13))), var_9)) + 9223372036854775807)) >> (((((((arr_29 [i_0] [i_1] [i_7] [i_7] [8] [i_0]) != 26490)) ? var_1 : (arr_8 [i_0] [i_8] [i_0]))) - 4579))));
                    }
                    /* vectorizable */
                    for (int i_9 = 0; i_9 < 12;i_9 += 1)
                    {
                        var_31 += var_4;
                        arr_35 [i_9] [i_9] [i_7] [i_0] [i_1] [i_0] = var_16;
                        arr_36 [i_0] [i_1] [i_1] [i_7] [i_1] = var_14;
                        arr_37 [i_0] [i_0] = ((var_11 ? (arr_32 [i_0]) : (arr_32 [i_7])));
                    }
                    for (int i_10 = 0; i_10 < 1;i_10 += 1)
                    {
                        var_32 = (min(var_32, (((-((-(min(var_18, (arr_1 [i_1]))))))))));
                        var_33 = ((max((arr_31 [i_0] [i_0] [i_7] [6] [i_10] [4]), -var_6)));
                    }
                    arr_40 [i_0] [i_0] [i_7] = (((((arr_12 [i_0] [i_0] [i_7] [2]) + 2147483647)) << (39069 - 39069)));
                }
                var_34 = (max(var_34, -var_3));
            }
        }
    }
    var_35 = (min(var_35, (((~(min(var_16, var_2)))))));

    for (int i_11 = 0; i_11 < 11;i_11 += 1)
    {
        var_36 = (min(var_36, ((+((min((arr_38 [i_11] [i_11] [i_11] [1] [i_11]), (arr_38 [i_11] [i_11] [i_11] [1] [1]))))))));
        arr_43 [i_11] = (arr_39 [1]);
        /* LoopNest 2 */
        for (int i_12 = 1; i_12 < 1;i_12 += 1)
        {
            for (int i_13 = 0; i_13 < 11;i_13 += 1)
            {
                {
                    var_37 = (max((arr_47 [i_11] [i_12] [i_13] [i_13]), 1));
                    arr_49 [i_11] [i_11] [i_13] = (((var_11 - var_7) - ((((min(var_10, var_15)))))));
                }
            }
        }
    }
    /* vectorizable */
    for (int i_14 = 0; i_14 < 12;i_14 += 1)
    {
        var_38 = (arr_5 [4] [4]);
        arr_54 [i_14] = (((((arr_31 [i_14] [6] [4] [0] [i_14] [i_14]) ? var_14 : var_4)) >> (((arr_24 [i_14]) - 1870192819))));
        /* LoopNest 2 */
        for (int i_15 = 0; i_15 < 12;i_15 += 1)
        {
            for (int i_16 = 0; i_16 < 1;i_16 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_17 = 0; i_17 < 1;i_17 += 1)
                    {
                        for (int i_18 = 0; i_18 < 12;i_18 += 1)
                        {
                            {
                                arr_63 [i_15] [i_17] [i_16] [1] [i_15] [i_15] = (((arr_57 [i_14] [i_15]) ? var_7 : var_0));
                                var_39 = (min(var_39, (((-var_16 << (26473 - 26466))))));
                                var_40 = var_9;
                                arr_64 [i_14] [i_15] [i_17] [5] = ((!(arr_39 [i_14])));
                            }
                        }
                    }
                    var_41 = var_13;
                    arr_65 [i_15] [10] [i_14] [10] = (((arr_1 [i_16]) < (((!(arr_58 [1]))))));
                }
            }
        }
        arr_66 [i_14] = ((-(arr_29 [i_14] [i_14] [8] [i_14] [5] [i_14])));
    }
    #pragma endscop
}
