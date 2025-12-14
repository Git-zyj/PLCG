/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 88190
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=88190 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/88190
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 14;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 13;i_2 += 1)
                {
                    for (int i_3 = 3; i_3 < 15;i_3 += 1)
                    {
                        {
                            arr_9 [i_0] [i_1] [i_2 + 3] [i_2] [i_0] [i_3] = ((((arr_3 [i_1 - 1] [i_1 - 2] [i_1 + 2]) + (arr_3 [i_1 - 1] [i_1 - 2] [i_1 + 2]))));

                            /* vectorizable */
                            for (int i_4 = 0; i_4 < 1;i_4 += 1)
                            {
                                arr_13 [i_0] [i_1 - 2] [i_2] [i_3 - 2] [i_0] = var_0;
                                var_13 = (max(var_13, var_1));
                                var_14 = (max(var_14, ((((!var_11) >> (17562388949881952026 - 17562388949881952000))))));
                            }
                            /* vectorizable */
                            for (int i_5 = 0; i_5 < 16;i_5 += 1)
                            {
                                arr_17 [i_0] [i_5] &= (arr_0 [i_5]);
                                arr_18 [i_0] [i_0] [i_0] [i_0] [i_5] = (arr_4 [i_0] [i_1]);
                                var_15 = (min(var_15, var_12));
                                var_16 += (~var_11);
                                var_17 += -var_3;
                            }
                            /* vectorizable */
                            for (int i_6 = 0; i_6 < 16;i_6 += 1)
                            {
                                arr_23 [i_0] [i_0] [4] [4] [i_0] [i_0] &= var_9;
                                var_18 *= (((arr_11 [i_0] [i_0] [i_0] [1] [2] [i_0]) ? var_11 : 281474976710655));
                            }
                            var_19 = ((((arr_4 [i_1 - 1] [i_2 - 1]) & (arr_4 [i_1 - 1] [i_2 - 1]))));
                            var_20 = ((-((61 ? (arr_21 [i_3] [i_2] [i_1 + 2] [i_1] [i_1] [i_0] [i_0]) : var_5))));
                        }
                    }
                }
                var_21 = ((-((-(arr_2 [i_0] [i_1] [i_1])))));
                var_22 *= ((-(((arr_1 [1]) % -281474976710647))));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_7 = 1; i_7 < 1;i_7 += 1)
    {
        for (int i_8 = 0; i_8 < 15;i_8 += 1)
        {
            {
                var_23 *= ((((arr_24 [6]) ? (max(var_11, var_12)) : (((max(var_1, (arr_3 [i_8] [i_7] [i_7]))))))));
                var_24 -= var_5;
            }
        }
    }
    /* LoopNest 2 */
    for (int i_9 = 0; i_9 < 14;i_9 += 1)
    {
        for (int i_10 = 0; i_10 < 14;i_10 += 1)
        {
            {

                for (int i_11 = 1; i_11 < 12;i_11 += 1)
                {

                    /* vectorizable */
                    for (int i_12 = 0; i_12 < 14;i_12 += 1)
                    {
                        var_25 -= (((arr_10 [i_11 + 2] [i_11 + 2] [i_11] [i_11 + 2] [i_11] [i_9]) == 1));
                        var_26 += (~(arr_39 [i_11 + 1] [i_11 + 1] [i_11 + 1] [i_11 + 1]));
                    }
                    for (int i_13 = 0; i_13 < 14;i_13 += 1)
                    {
                        arr_45 [i_9] [i_10] = ((-125 + 9223372036854743040) ? (max(var_5, (arr_37 [i_10] [i_11 + 2] [i_11 - 1]))) : (-92 || var_11));
                        var_27 = (min(var_27, ((((max(-9223372036854775807, var_7)) == ((min(-var_9, 3))))))));
                        var_28 += (-(((arr_1 [i_9]) * var_11)));
                        arr_46 [i_10] [i_11] [i_9] [i_10] = ((((max((((var_11 ? var_4 : 1))), (max(var_1, -3392706914356704638))))) ? -24 : var_2));
                    }
                    /* vectorizable */
                    for (int i_14 = 0; i_14 < 14;i_14 += 1)
                    {
                        var_29 = ((var_11 ? (arr_0 [i_10]) : (arr_0 [i_10])));
                        var_30 = (min(var_30, 5415256476081169887));
                        var_31 = (min(var_31, (arr_10 [i_9] [i_10] [i_11 + 1] [i_9] [i_11 + 1] [i_9])));
                        var_32 &= (((arr_7 [i_9] [i_9]) ? (arr_7 [i_10] [i_9]) : (arr_7 [i_9] [i_9])));
                        var_33 = (var_7 & var_8);
                    }
                    arr_49 [i_10] = ((-(max(7519688932907747895, (((-6599224707076585657 == (arr_6 [i_9] [i_10] [i_10] [i_10]))))))));
                    arr_50 [i_9] [i_10] [i_10] = 8127464829158601451;
                    arr_51 [4] [i_10] [i_10] [i_11 - 1] = var_3;
                }
                var_34 = var_9;
                var_35 -= (max(18446744073709551605, (((arr_4 [i_9] [i_10]) ? var_8 : 35184372088832))));
            }
        }
    }
    var_36 = var_11;
    var_37 |= (var_5 >= 1);
    #pragma endscop
}
