/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 86192
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=86192 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/86192
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 15;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 17;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 17;i_3 += 1)
                    {
                        {
                            arr_12 [i_0] [i_0] [i_2] [i_0] [i_0] = (((((-(arr_5 [i_0] [i_0] [i_0])))) ? ((min(((var_3 ? (arr_5 [i_0] [i_0] [i_2]) : 3213378828)), var_8))) : var_7));
                            var_17 = (1 != 2784173243);
                            var_18 = var_0;
                        }
                    }
                }

                /* vectorizable */
                for (int i_4 = 0; i_4 < 17;i_4 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_5 = 2; i_5 < 16;i_5 += 1)
                    {
                        for (int i_6 = 2; i_6 < 16;i_6 += 1)
                        {
                            {
                                var_19 |= ((3 / ((var_1 ? (arr_10 [i_5]) : (arr_9 [i_0])))));
                                var_20 += (arr_15 [i_6 - 1] [i_4] [15] [i_1 - 1] [i_4]);
                                arr_20 [14] [i_1] [i_5] [i_6] &= (((arr_6 [i_4] [i_0] [i_1] [i_4]) ? (var_13 < 3) : (arr_1 [i_0])));
                                var_21 = 9223372036854775807;
                            }
                        }
                    }

                    for (int i_7 = 0; i_7 < 1;i_7 += 1)
                    {
                        var_22 = ((var_10 ? (((arr_5 [i_0] [i_4] [i_7]) ? var_13 : 0)) : ((var_5 ? (arr_11 [i_7] [i_7] [i_7] [i_4]) : (arr_0 [i_0])))));
                        var_23 = (-127 - 1);
                    }
                    for (int i_8 = 0; i_8 < 17;i_8 += 1)
                    {
                        var_24 = (arr_26 [i_0] [i_1 - 1] [i_4] [i_8]);

                        for (int i_9 = 0; i_9 < 17;i_9 += 1)
                        {
                            var_25 = ((~(arr_8 [i_0] [i_9] [i_9])));
                            arr_30 [i_9] [i_9] [i_4] [i_9] [i_0] = (arr_19 [i_0] [i_1 + 2] [i_4] [i_8] [i_9]);
                        }
                    }
                    var_26 = (max(var_26, (((254 ? 31 : 1263051798)))));
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_10 = 0; i_10 < 17;i_10 += 1)
    {
        for (int i_11 = 1; i_11 < 13;i_11 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_12 = 0; i_12 < 17;i_12 += 1)
                {
                    for (int i_13 = 2; i_13 < 15;i_13 += 1)
                    {
                        {
                            var_27 = var_3;
                            arr_40 [i_13 + 2] [i_10] [i_13] = (var_2 - -24165);
                        }
                    }
                }

                for (int i_14 = 0; i_14 < 17;i_14 += 1)
                {
                    var_28 = (min(var_28, var_5));
                    arr_44 [i_10] = (min(((((var_9 ? (arr_15 [i_10] [i_10] [5] [i_11] [i_14]) : 23785)) == 255)), ((((min(1, 248))) < ((((arr_8 [i_10] [i_10] [i_14]) == (arr_36 [i_10]))))))));
                    var_29 = ((0 ? 3413156831 : 580755216));
                }

                for (int i_15 = 0; i_15 < 17;i_15 += 1)
                {
                    var_30 = var_5;
                    var_31 &= (max(var_8, (min((arr_8 [i_11 + 2] [10] [i_11 - 1]), (min(262144, var_3))))));
                    var_32 -= (min((max(0, 4294967292)), ((((arr_16 [i_10] [1] [i_10] [i_10]) / (!0))))));
                }
                var_33 = ((((min((min(7, 12872017105533062729)), (arr_33 [i_11])))) ? (((((min(192, 1348413402296185052))) ? (arr_32 [i_10]) : (arr_23 [i_10] [i_10] [i_10] [i_11 + 2])))) : (((((1 >> (8384512 - 8384510)))) & 0))));
            }
        }
    }
    /* LoopNest 3 */
    for (int i_16 = 0; i_16 < 12;i_16 += 1)
    {
        for (int i_17 = 0; i_17 < 1;i_17 += 1)
        {
            for (int i_18 = 0; i_18 < 1;i_18 += 1)
            {
                {
                    var_34 = (max(var_34, (((((((((~58972) + 2147483647)) >> ((((-1304562554 ? -66 : var_6)) + 78))))) > ((~(arr_23 [i_16] [i_17] [i_17] [i_18]))))))));

                    for (int i_19 = 0; i_19 < 12;i_19 += 1)
                    {
                        var_35 = (((((arr_32 [i_19]) ? var_7 : var_1)) * (((-(arr_2 [i_18] [i_19]))))));
                        arr_59 [7] [i_18] [i_18] [i_18] = (((((var_9 ? (((arr_11 [1] [i_19] [i_18] [i_16]) ? (arr_52 [i_16] [i_16] [i_16]) : (arr_57 [i_19]))) : (((2147483647 != (arr_27 [i_19] [i_18] [i_17] [i_16]))))))) <= ((((var_4 ? (arr_38 [i_16] [i_18] [i_19]) : var_11)) | var_6))));
                    }
                    /* LoopNest 2 */
                    for (int i_20 = 0; i_20 < 12;i_20 += 1)
                    {
                        for (int i_21 = 0; i_21 < 12;i_21 += 1)
                        {
                            {
                                var_36 = (min(var_36, ((min(21, ((((((arr_46 [i_17]) ? 16256 : 65535))) ? 4186112 : (((1 ? 0 : 248))))))))));
                                arr_66 [i_20] [i_20] [i_20] [i_20] [i_20] = ((-(((!(arr_10 [i_16]))))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_37 = (!-75);
    var_38 += 53237;
    #pragma endscop
}
