/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 71045
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=71045 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/71045
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = ((var_1 * (!var_6)));

    for (int i_0 = 2; i_0 < 12;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 9;i_2 += 1)
            {
                for (int i_3 = 2; i_3 < 12;i_3 += 1)
                {
                    {
                        var_18 = (max(var_18, -3448912285175930552));
                        arr_12 [i_0] [i_1] |= -8519;
                    }
                }
            }
        }
        var_19 ^= (min((var_1 % var_0), -1));
    }
    for (int i_4 = 0; i_4 < 15;i_4 += 1)
    {
        var_20 = (arr_13 [i_4]);
        arr_15 [i_4] [i_4] = ((-(arr_13 [i_4])));
        var_21 = (((~(arr_13 [i_4]))));
        arr_16 [9] = var_9;

        for (int i_5 = 0; i_5 < 15;i_5 += 1) /* same iter space */
        {
            var_22 = (min(var_22, ((((-(~var_10)))))));

            /* vectorizable */
            for (int i_6 = 1; i_6 < 14;i_6 += 1)
            {
                var_23 = ((-9223372036854775796 ? (arr_21 [i_6 - 1] [i_6 + 1] [i_6 - 1]) : (arr_21 [i_6 + 1] [i_6 + 1] [i_6 + 1])));
                var_24 = var_3;
                var_25 = ((~(((arr_18 [i_4] [i_4] [i_4]) ? var_13 : var_5))));
                var_26 = (((arr_18 [i_6 - 1] [i_6 + 1] [4]) << (((arr_18 [i_5] [i_6 - 1] [i_6]) - 1454688638))));
            }
            arr_22 [i_4] = (239 + 8506);
        }
        for (int i_7 = 0; i_7 < 15;i_7 += 1) /* same iter space */
        {
            var_27 &= (!var_5);
            var_28 -= (((max((arr_13 [i_4]), (arr_17 [i_7] [i_4]))) % (max((arr_13 [i_4]), var_8))));

            /* vectorizable */
            for (int i_8 = 0; i_8 < 15;i_8 += 1)
            {
                var_29 = ((var_7 + 2147483647) >> (var_3 - 56));
                var_30 = (max(var_30, ((((((arr_27 [4] [i_7] [2] [i_4]) - (arr_21 [i_8] [i_7] [i_4]))) - (arr_24 [i_4]))))));
            }
            for (int i_9 = 1; i_9 < 13;i_9 += 1)
            {
                var_31 = var_10;

                /* vectorizable */
                for (int i_10 = 0; i_10 < 1;i_10 += 1)
                {

                    for (int i_11 = 0; i_11 < 15;i_11 += 1)
                    {
                        var_32 = (max(var_32, (((!(arr_32 [i_4] [i_4] [i_9] [i_10]))))));
                        var_33 = (min(var_33, ((((arr_27 [i_4] [i_4] [i_4] [i_4]) * (arr_28 [i_9 + 2] [i_9] [i_9 - 1] [3]))))));
                        var_34 = (arr_27 [i_9] [i_9] [i_9] [i_9 - 1]);
                    }
                    for (int i_12 = 0; i_12 < 15;i_12 += 1)
                    {
                        var_35 &= (((((arr_24 [i_9 + 1]) + 8506)) ^ (8527 != var_13)));
                        var_36 = (arr_28 [i_12] [i_10] [i_9] [1]);
                        arr_43 [i_9] [i_12] = ((57029 ? (arr_17 [i_4] [i_4]) : var_5));
                        arr_44 [i_4] [i_4] [i_9] [i_10] [i_9] [i_12] = (arr_14 [i_9 + 2]);
                        arr_45 [i_4] [i_9] [i_4] = (((arr_35 [i_9]) && (arr_23 [i_4] [i_9 + 1] [i_4])));
                    }
                    for (int i_13 = 0; i_13 < 1;i_13 += 1)
                    {
                        arr_49 [i_9] [i_7] [i_9] [i_10] [i_13] = (var_16 == 8519);
                        var_37 = (((((arr_46 [i_4] [i_7] [i_9] [i_10] [i_4]) ? (arr_28 [i_13] [i_10] [i_9] [i_7]) : var_2)) ^ 57007));
                        arr_50 [i_9] [i_7] [i_9] = (((arr_34 [i_4] [i_7] [i_9] [i_9 + 1] [i_9]) ? 24486 : ((0 ? 14052397531461026974 : 56988))));
                        arr_51 [i_4] [i_7] [i_7] [i_10] [0] [i_9] = ((~(((arr_47 [5]) ? var_14 : var_7))));
                        arr_52 [i_9] [i_9] [i_9 + 2] [i_9] [i_9] = ((((((arr_27 [i_7] [i_9 + 1] [i_10] [i_13]) | 29624))) ? (arr_42 [i_4] [i_9] [i_4] [i_4]) : var_0));
                    }
                    for (int i_14 = 0; i_14 < 15;i_14 += 1)
                    {
                        var_38 = (((arr_40 [i_7] [i_9 + 1] [8] [i_10] [i_10] [i_14]) ? (arr_34 [i_9] [i_10] [i_9 + 1] [10] [i_9]) : ((((arr_54 [i_4] [i_9] [i_9] [i_14]) >= var_15)))));
                        var_39 -= var_11;
                        arr_56 [i_4] [i_7] [6] [i_10] [i_9] = var_2;
                        var_40 = (((((-24472 ? var_5 : var_6))) ? var_6 : (arr_14 [i_9 - 1])));
                    }
                    arr_57 [i_10] [i_9] [i_10] [i_9 + 1] [i_9] [i_4] = ((-var_11 < (arr_48 [i_4] [i_7] [i_7] [i_7] [i_9 - 1])));
                }
                var_41 = (((arr_42 [i_7] [i_9] [i_4] [i_4]) & (min((((arr_48 [i_4] [i_4] [i_7] [i_7] [i_9]) | (arr_17 [i_4] [i_4]))), 2880846829))));
            }
        }
        for (int i_15 = 4; i_15 < 13;i_15 += 1)
        {
            var_42 = ((((((arr_54 [i_15 - 1] [0] [0] [i_15 - 1]) ? (arr_21 [i_4] [1] [1]) : 55))) - (((arr_46 [i_15] [i_15 - 4] [i_15 + 1] [i_15 - 1] [i_4]) ? (arr_23 [i_4] [i_4] [i_15 - 1]) : ((((arr_27 [i_15 - 2] [i_4] [i_4] [i_4]) & 3)))))));
            var_43 = ((var_3 ? ((((-(arr_37 [12] [i_4] [i_15] [i_15] [i_4]))) / 61929)) : 745485511));
        }
    }
    #pragma endscop
}
