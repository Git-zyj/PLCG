/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 63098
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=63098 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/63098
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 1; i_0 < 15;i_0 += 1)
    {
        var_13 |= (arr_1 [14]);
        arr_2 [i_0] [i_0] = arr_0 [i_0];

        for (int i_1 = 1; i_1 < 14;i_1 += 1)
        {
            var_14 = (min(var_14, (((+(((arr_5 [i_0]) + var_9)))))));
            var_15 = (arr_3 [i_0]);
            var_16 = ((var_5 / (arr_5 [i_1 + 1])));
            var_17 -= (((arr_4 [i_0 + 1]) ? (arr_4 [i_0 + 1]) : var_12));
        }
        arr_7 [i_0] = (arr_5 [i_0 + 1]);
    }
    /* vectorizable */
    for (int i_2 = 0; i_2 < 22;i_2 += 1)
    {
        arr_10 [i_2] = ((~(var_12 << 0)));
        var_18 = ((arr_9 [i_2]) << (((~1073741824) - 3221225458)));
    }
    /* vectorizable */
    for (int i_3 = 1; i_3 < 13;i_3 += 1)
    {
        var_19 = 58;
        /* LoopNest 2 */
        for (int i_4 = 0; i_4 < 15;i_4 += 1)
        {
            for (int i_5 = 4; i_5 < 13;i_5 += 1)
            {
                {
                    arr_20 [i_3] = (var_9 | (var_5 & 3264235406));
                    var_20 = 31;

                    for (int i_6 = 2; i_6 < 11;i_6 += 1)
                    {
                        var_21 = (((arr_16 [i_3] [i_6] [i_4]) % (arr_11 [i_5 - 1])));
                        var_22 = 0;
                    }
                    for (int i_7 = 0; i_7 < 15;i_7 += 1)
                    {
                        var_23 -= var_3;
                        var_24 = ((!((((arr_8 [i_7]) ? (arr_18 [i_7] [i_7] [i_7]) : -1)))));
                        var_25 = (((arr_0 [i_4]) ? (arr_0 [i_7]) : (arr_0 [i_7])));
                        arr_25 [i_5] [i_7] = (!24576);
                        var_26 = (var_8 && var_2);
                    }
                    for (int i_8 = 1; i_8 < 13;i_8 += 1)
                    {
                        arr_29 [i_3] [i_4] [i_3] [i_3] [i_3] [i_3] |= ((arr_11 [i_5 - 1]) ? var_2 : (arr_19 [i_5] [i_5] [i_5] [i_5]));

                        for (int i_9 = 0; i_9 < 15;i_9 += 1)
                        {
                            var_27 = (min(var_27, var_3));
                            arr_32 [i_4] [i_4] [i_5] [i_8] [i_5] [i_9] [i_9] = ((arr_24 [i_3] [i_3] [i_3] [i_3] [i_3] [i_3]) ? -var_2 : (((((arr_12 [i_8] [i_9]) <= 130048)))));
                        }
                        for (int i_10 = 1; i_10 < 14;i_10 += 1)
                        {
                            arr_36 [i_3] [i_4] [i_4] [i_5] [i_8] [i_8] [i_10] = (((arr_8 [i_3 + 2]) ? (arr_8 [i_10 + 1]) : 127));
                            var_28 = arr_30 [i_10 + 1] [i_8] [i_8] [i_3 - 1];
                        }
                        for (int i_11 = 1; i_11 < 11;i_11 += 1)
                        {
                            var_29 = (((arr_22 [i_5] [i_8] [i_11]) ? 48 : 0));
                            var_30 &= ((3 > (arr_31 [i_3 + 1] [i_3 + 1] [i_4] [i_8] [i_8 + 1])));
                        }
                        for (int i_12 = 1; i_12 < 11;i_12 += 1)
                        {
                            arr_42 [i_8] [i_8] [i_8] [i_8] [i_12] = arr_31 [i_8] [i_8] [i_8] [i_4] [i_3];
                            arr_43 [i_8] = (var_5 ? ((0 ? (arr_22 [i_5] [i_4] [i_5]) : 217340541)) : var_5);
                        }
                        var_31 = (max(var_31, var_9));
                        var_32 = (arr_16 [i_4] [i_4] [i_5 - 3]);
                    }
                }
            }
        }

        for (int i_13 = 0; i_13 < 15;i_13 += 1)
        {
            var_33 = (min(var_33, ((((((!(arr_44 [i_3])))) % (arr_0 [i_13]))))));
            var_34 = ((!(arr_33 [i_3 + 2] [i_13] [i_13] [i_3] [i_3 + 1] [i_13] [i_3])));
            /* LoopNest 3 */
            for (int i_14 = 1; i_14 < 12;i_14 += 1)
            {
                for (int i_15 = 0; i_15 < 15;i_15 += 1)
                {
                    for (int i_16 = 0; i_16 < 15;i_16 += 1)
                    {
                        {
                            var_35 = ((var_9 ? (arr_33 [i_3] [i_16] [i_14] [i_15] [i_14 + 2] [i_14] [i_13]) : ((var_4 ? var_9 : var_0))));
                            arr_55 [i_3] [i_3] [i_13] [i_14] [i_15] [i_16] = (((arr_41 [i_14] [i_14] [i_14] [i_14] [i_14 - 1]) ? var_10 : (arr_41 [i_14] [i_14] [i_14] [i_14] [i_14 + 3])));
                        }
                    }
                }
            }
            var_36 ^= ((56605 * 1273834112) ? ((var_0 ? var_11 : var_7)) : (arr_15 [i_13] [i_13]));
        }
        for (int i_17 = 2; i_17 < 14;i_17 += 1)
        {
            arr_58 [i_3] [i_17] [i_17] = ((!(arr_22 [i_17 + 1] [i_17 - 1] [i_17 - 2])));
            arr_59 [i_3] [i_17] [i_3] = (((arr_0 [i_17]) ? (arr_49 [i_3] [i_3] [i_3] [i_3 + 1]) : var_7));
            var_37 = (arr_53 [i_3] [i_17]);
            arr_60 [i_3] [i_3] [i_3] = (!5);
            var_38 = (max(var_38, (0 != 110)));
        }
        for (int i_18 = 1; i_18 < 13;i_18 += 1)
        {
            var_39 = ((-65532 ? (((arr_63 [i_18]) ? var_12 : (arr_15 [i_3] [i_3]))) : (((63 ? var_11 : -16)))));
            var_40 = ((((arr_57 [i_3] [i_18] [i_18]) ? var_7 : 291443655)));
            var_41 -= (((var_2 ^ (arr_0 [4]))) % (arr_28 [i_3] [i_18] [i_18] [i_3]));
        }
        arr_64 [i_3] = var_12;
    }
    var_42 = (max(var_42, ((min((max(((3 ? var_1 : 0)), (var_2 - 1048575))), (max(var_0, (min(var_8, 0)))))))));
    /* LoopNest 2 */
    for (int i_19 = 2; i_19 < 8;i_19 += 1)
    {
        for (int i_20 = 0; i_20 < 12;i_20 += 1)
        {
            {
                var_43 = min((arr_19 [i_19] [i_19] [i_19] [i_19]), (arr_39 [i_19] [i_19] [i_19] [i_19] [i_19 + 2] [i_19] [i_19 + 4]));
                var_44 = ((var_2 ? (((((arr_18 [i_19] [i_19] [i_20]) - 0)) + -118)) : 12033));
            }
        }
    }
    #pragma endscop
}
