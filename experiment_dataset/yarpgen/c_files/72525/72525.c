/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 72525
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=72525 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/72525
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 14;i_1 += 1)
        {
            {
                var_15 = 508;
                var_16 = ((+(((var_3 + var_4) - 8350637627902133564))));
                var_17 = ((var_5 ? (arr_2 [i_1] [i_1 + 1]) : (~-57)));
            }
        }
    }

    for (int i_2 = 1; i_2 < 16;i_2 += 1) /* same iter space */
    {
        /* LoopNest 3 */
        for (int i_3 = 0; i_3 < 17;i_3 += 1)
        {
            for (int i_4 = 1; i_4 < 1;i_4 += 1)
            {
                for (int i_5 = 1; i_5 < 16;i_5 += 1)
                {
                    {
                        var_18 = min(var_2, (+-3207539475));
                        var_19 = ((((+(((arr_7 [i_2] [i_2]) ? var_12 : (arr_9 [i_2 + 1] [i_2] [i_2 - 1] [i_2 + 1]))))) * (((arr_12 [4] [i_5 + 1] [i_2 - 1]) + (arr_12 [i_2 - 1] [i_5 - 1] [i_2 - 1])))));
                        var_20 &= (var_0 - 4268514894);

                        for (int i_6 = 1; i_6 < 14;i_6 += 1)
                        {
                            var_21 = 2828708248;
                            var_22 = (arr_9 [i_2] [i_2] [i_2] [12]);
                        }
                        for (int i_7 = 0; i_7 < 17;i_7 += 1) /* same iter space */
                        {
                            var_23 ^= (arr_9 [i_4] [i_7] [i_7] [i_4 - 1]);
                            var_24 &= (((var_4 ? 32074 : (arr_6 [i_2 - 1]))));
                            var_25 = (~var_13);
                            var_26 = (((((-(1 | 65533)))) ? -12 : ((((arr_9 [i_7] [i_2] [i_2] [i_2 + 1]) ? (arr_19 [6] [6] [6] [i_5] [i_7]) : (arr_9 [i_7] [i_2] [i_2] [i_2]))))));
                            var_27 = ((((((max(var_1, var_14)) ^ var_14))) ? (var_8 <= 16) : (!-8)));
                        }
                        for (int i_8 = 0; i_8 < 17;i_8 += 1) /* same iter space */
                        {
                            arr_24 [i_2 + 1] [i_8] [i_3] [1] [0] [i_5] [i_8] &= ((min(69, -209)));
                            var_28 -= (((~var_8) ? (min((arr_22 [i_2 - 1] [i_2 - 1] [i_2 - 1] [i_2] [i_2 - 1]), (arr_6 [i_2]))) : (arr_13 [i_2] [i_2 - 1] [i_2 - 1] [i_2 - 1])));
                            arr_25 [i_2] [i_3] [i_4 - 1] [i_5] [i_2] [i_4] [9] = (((max(var_9, ((((arr_15 [i_8] [i_5 - 1] [i_2] [i_3] [i_2]) ? 15266 : (arr_21 [4] [i_2]))))))) ? var_8 : (((~31515) ? (max(var_0, (arr_22 [i_2] [i_3] [i_4] [i_5 + 1] [5]))) : (arr_9 [i_8] [i_2] [i_4 - 1] [i_4 - 1]))));
                        }

                        /* vectorizable */
                        for (int i_9 = 3; i_9 < 15;i_9 += 1)
                        {
                            var_29 = ((var_14 ? var_3 : var_1));
                            var_30 = ((4268514894 ? (arr_16 [i_2 - 1]) : (arr_12 [i_2] [i_3] [i_4 - 1])));
                        }
                        for (int i_10 = 0; i_10 < 17;i_10 += 1)
                        {
                            var_31 = (((47 * var_8) / (arr_30 [i_2])));
                            var_32 = var_1;
                            var_33 = min((arr_11 [i_2] [i_10] [i_4 - 1]), (min((arr_11 [i_2] [i_3] [i_4 - 1]), (arr_11 [i_2] [i_2] [i_4 - 1]))));
                            var_34 = (max(((((min((arr_22 [i_10] [i_5] [i_2 + 1] [i_2 + 1] [i_2 + 1]), 4070016133))) ? var_1 : 4268514894)), ((((arr_6 [i_4]) ? (arr_12 [i_5 + 1] [i_3] [i_2 - 1]) : (arr_6 [i_5 - 1]))))));
                            var_35 ^= 8584706412670158850;
                        }
                    }
                }
            }
        }
        arr_33 [i_2] [i_2] = arr_7 [i_2] [i_2];
    }
    for (int i_11 = 1; i_11 < 16;i_11 += 1) /* same iter space */
    {
        arr_36 [i_11] = ((((((~((min((arr_23 [i_11] [1] [i_11] [i_11] [i_11]), var_11))))) + 2147483647)) << (((arr_5 [i_11 - 1]) - 3482940881))));
        /* LoopNest 2 */
        for (int i_12 = 3; i_12 < 16;i_12 += 1)
        {
            for (int i_13 = 0; i_13 < 17;i_13 += 1)
            {
                {
                    var_36 = ((-15 ? ((63 ? (arr_22 [i_11] [i_12] [i_13] [i_11 + 1] [i_12 + 1]) : 16665533769441652662)) : (arr_28 [i_12])));
                    var_37 = var_0;
                }
            }
        }
        var_38 = (max(var_38, (((min(1589732973, (!44010)))))));
    }
    var_39 = var_9;
    var_40 = (~var_7);
    #pragma endscop
}
