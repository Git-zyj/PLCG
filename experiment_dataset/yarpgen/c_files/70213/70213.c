/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 70213
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=70213 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/70213
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_5;
    var_15 = (var_1 > var_0);
    var_16 = (max(var_16, var_7));
    var_17 = (((((11034095983496819367 >> (((~var_5) + 1262847434))))) ? var_6 : var_5));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 19;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 3; i_3 < 19;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 18;i_4 += 1)
                        {
                            {
                                arr_14 [i_0] [i_1] [i_2 - 1] [1] [i_2] = var_8;
                                arr_15 [i_0] [i_1] [i_2 + 1] [i_2] [i_4 + 2] = var_7;
                                arr_16 [i_2] = ((((((min(var_13, (arr_5 [i_2] [i_2]))))) + 2147483647)) >> ((((((((arr_0 [i_0]) | var_4))) ? var_7 : var_3)) - 79)));
                            }
                        }
                    }
                    var_18 *= (((!(((arr_1 [i_0] [i_0]) || var_9)))));

                    /* vectorizable */
                    for (int i_5 = 0; i_5 < 21;i_5 += 1)
                    {

                        for (int i_6 = 0; i_6 < 21;i_6 += 1)
                        {
                            var_19 = ((~(arr_21 [i_0] [i_1] [i_0] [i_0] [i_6])));
                            var_20 = ((!(arr_8 [i_5] [i_1] [13] [13] [i_1])));
                            arr_22 [i_2] = ((((((arr_19 [i_6] [i_6] [i_5] [i_2 - 1] [i_1] [i_0]) ? var_12 : (arr_21 [i_0] [i_0] [i_2] [i_5] [i_6])))) ? (arr_5 [i_0] [i_2 - 1]) : (arr_9 [i_0] [i_1] [i_2 + 2] [i_1])));
                            var_21 = (((var_9 ? var_13 : (arr_3 [i_0] [i_0]))));
                        }
                        for (int i_7 = 0; i_7 < 1;i_7 += 1)
                        {
                            var_22 = var_6;
                            arr_27 [i_7] [i_2] [i_2] [i_2] [i_0] = var_6;
                        }
                        arr_28 [i_2] [i_1] [8] [i_1] = (((arr_5 [i_2 + 2] [i_2 - 1]) & var_6));
                    }
                    for (int i_8 = 0; i_8 < 1;i_8 += 1)
                    {
                        var_23 = (var_13 ? (((((max(-9, 2147483647))) ? 10 : var_1))) : ((var_1 ? (((max(var_6, (arr_18 [i_0] [i_0] [i_1] [i_2 - 1] [i_8]))))) : (min((arr_21 [i_0] [i_0] [i_2 - 1] [i_2] [i_0]), var_11)))));
                        var_24 = max(-15, (((arr_11 [i_8] [i_8] [i_2 - 1] [i_2 + 1] [i_2 - 1]) ? (arr_1 [i_2 + 2] [i_2 + 2]) : (arr_1 [i_2 + 2] [i_2 + 2]))));

                        for (int i_9 = 1; i_9 < 20;i_9 += 1)
                        {
                            var_25 = (max((((arr_24 [i_0] [i_2 + 2] [i_2 + 2]) + ((18486 ? var_10 : (arr_31 [15] [i_1] [1] [15] [i_9 + 1]))))), 1));
                            arr_34 [i_0] [i_1] [i_2] [i_2] [i_9] = ((((max(((var_4 ? (arr_30 [i_0] [i_0] [i_0] [i_0]) : var_10)), (((-10 ? var_2 : var_13)))))) ? (arr_5 [i_0] [i_8]) : (~var_3)));
                            var_26 = ((((-((-13 * (arr_30 [i_0] [i_0] [i_0] [i_9 + 1]))))) / var_4));
                        }
                        /* vectorizable */
                        for (int i_10 = 0; i_10 < 21;i_10 += 1)
                        {
                            var_27 = 11034095983496819380;
                            var_28 = var_2;
                            var_29 *= ((!(arr_2 [i_1] [i_2 + 2])));
                        }
                        for (int i_11 = 0; i_11 < 21;i_11 += 1)
                        {
                            arr_41 [i_0] [i_2] [i_0] [i_0] [i_0] [2] = ((+(((arr_13 [i_0] [i_1] [i_2] [i_8] [i_11] [i_2 - 1] [i_0]) >> var_3))));
                            arr_42 [i_0] [i_2] [i_2] [i_1] [i_1] [i_2] [i_2] = (((arr_19 [i_0] [i_1] [i_2 + 1] [i_8] [i_11] [i_0]) ? (1 && -1) : ((min(var_0, var_3)))));
                        }
                    }
                    for (int i_12 = 1; i_12 < 18;i_12 += 1)
                    {
                        arr_46 [i_2] = (((((((var_5 ? var_5 : (arr_9 [i_0] [i_1] [i_2] [i_0])))) & var_9)) | (arr_20 [i_12] [i_12 + 2] [i_1])));
                        var_30 *= (arr_12 [i_0] [i_0] [i_1] [i_2] [i_12]);
                        var_31 = ((~((((-(arr_45 [i_12] [i_12] [i_12 - 1] [i_12])))))));
                        var_32 = (((((var_10 ? var_2 : (((arr_5 [i_2 + 2] [i_12]) ? var_0 : var_3))))) ? ((-(((arr_4 [i_0]) ? (arr_1 [i_0] [i_0]) : var_13)))) : ((~(arr_40 [i_2 - 1] [i_12 + 1] [i_2])))));
                    }
                    /* vectorizable */
                    for (int i_13 = 0; i_13 < 21;i_13 += 1)
                    {

                        for (int i_14 = 0; i_14 < 21;i_14 += 1)
                        {
                            var_33 = (((var_5 % var_12) ? ((var_4 ? var_9 : var_7)) : var_13));
                            arr_52 [i_0] [i_0] [i_2] [i_0] = (((arr_3 [i_0] [i_14]) ? ((18280706668291630290 >> (var_9 - 1679805100))) : (((-(arr_0 [i_14]))))));
                        }
                        for (int i_15 = 0; i_15 < 21;i_15 += 1)
                        {
                            var_34 *= (((~var_4) > var_6));
                            arr_55 [8] [i_1] [i_1] [i_1] [i_1] [i_2] = ((var_6 ? ((((arr_43 [i_0] [i_0] [i_2 - 1] [i_13]) || var_1))) : var_2));
                            var_35 = (min(var_35, (arr_26 [i_1] [i_1])));
                            arr_56 [12] [12] [i_2] [i_13] [1] = (!14);
                        }
                        var_36 = (min(var_36, ((((arr_39 [i_0] [i_1] [i_2] [i_2] [i_13]) ? (((arr_1 [i_0] [i_0]) ? (arr_54 [i_0] [i_0] [i_1] [i_2] [i_2 + 2] [i_13]) : var_0)) : var_6)))));
                        arr_57 [i_13] [i_1] [i_2] [i_2] [i_1] [i_0] = -var_1;
                        var_37 = (min(var_37, (arr_17 [i_0] [i_1] [i_2] [i_1])));
                    }
                    var_38 = (((((var_8 ? var_4 : (!var_10)))) ^ -var_9));
                }
            }
        }
    }
    #pragma endscop
}
