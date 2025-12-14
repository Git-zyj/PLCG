/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 60734
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=60734 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/60734
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 21;i_0 += 1)
    {
        arr_4 [i_0] &= var_13;
        arr_5 [i_0 - 1] [i_0 - 1] = (((((min(-36954152361852287, (arr_3 [i_0 + 3]))) != (arr_1 [i_0 - 2]))) ? ((min(-1808, (arr_1 [i_0 + 1])))) : ((((((((arr_2 [i_0] [i_0 + 3]) ? var_15 : 1))) || ((((arr_0 [i_0 + 3]) * var_13)))))))));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 18;i_1 += 1)
    {
        var_18 = (min(var_18, (var_9 - 11)));
        var_19 = (arr_0 [i_1]);
        var_20 = (var_7 + (((((arr_2 [i_1] [i_1]) + 2147483647)) << (((((arr_2 [i_1] [i_1]) + 15351)) - 3)))));
    }
    for (int i_2 = 0; i_2 < 14;i_2 += 1)
    {
        var_21 = (max(var_17, ((((((250 ? var_0 : var_9))) ? (arr_7 [i_2]) : ((min(var_2, var_4))))))));
        var_22 = (((arr_6 [i_2] [i_2]) || var_3));
        var_23 = ((((!var_15) ? (arr_8 [i_2] [i_2]) : (((var_9 >= (arr_10 [i_2])))))));
        var_24 = (((((((((arr_9 [i_2]) ? 8716353499080768211 : var_14))) < (arr_2 [i_2] [i_2])))) % (((((245 ? (arr_1 [i_2]) : var_1))) ? (((arr_7 [i_2]) + (arr_6 [i_2] [i_2]))) : ((91 ? 34162 : var_3))))));

        for (int i_3 = 0; i_3 < 14;i_3 += 1)
        {
            var_25 = var_1;
            arr_13 [i_2] [i_2] = (((arr_7 [i_2]) ? ((max(((17938 ? (arr_11 [i_2] [i_2]) : (arr_12 [i_2] [i_2] [i_3]))), (arr_9 [i_3])))) : (max(var_17, -107))));
            /* LoopNest 2 */
            for (int i_4 = 2; i_4 < 11;i_4 += 1)
            {
                for (int i_5 = 1; i_5 < 12;i_5 += 1)
                {
                    {
                        var_26 = var_14;
                        arr_18 [i_2] [i_4] [i_4 + 1] [i_5 + 1] = (max(225, (arr_0 [i_5 + 1])));

                        for (int i_6 = 2; i_6 < 12;i_6 += 1) /* same iter space */
                        {
                            arr_23 [i_2] [i_2] [i_4] [i_2] [i_2] = (arr_19 [i_4 + 3] [i_3] [i_3] [i_4 + 3] [i_6]);
                            arr_24 [i_4] [i_4] [i_2] = (min((((arr_15 [i_2]) - 32756)), (((arr_21 [i_4] [i_5 - 1] [i_4 + 2] [i_5 - 1] [i_6 - 1] [i_4 + 1] [i_4]) ? ((1907322907 + (arr_15 [i_6]))) : 31374))));
                            var_27 = ((var_12 ? (arr_12 [i_2] [i_5] [i_2]) : 119));
                            var_28 = -5788430184290262273;
                        }
                        for (int i_7 = 2; i_7 < 12;i_7 += 1) /* same iter space */
                        {
                            var_29 = 0;
                            var_30 -= var_5;
                        }
                        for (int i_8 = 0; i_8 < 1;i_8 += 1)
                        {
                            arr_29 [i_2] [i_4] = min(-1216851871, (((arr_26 [i_2] [i_5 + 2] [i_4] [i_4] [i_5 - 1]) ? (((arr_10 [i_3]) - -4776656739391766333)) : ((min((arr_0 [i_5 - 1]), (arr_21 [i_4] [i_8] [i_5 + 1] [i_4] [i_4 + 2] [i_4] [i_4])))))));
                            var_31 = var_8;
                            var_32 *= (((((~((var_9 ? var_12 : var_13))))) ? ((var_6 ? var_15 : -126)) : ((((max(var_5, (arr_8 [i_3] [i_3])))) ? ((var_4 ^ (arr_3 [i_5]))) : var_2))));
                            var_33 = ((!(arr_20 [i_4 - 1] [i_4 - 1] [i_4 - 2] [i_4 - 1] [i_5 + 1])));
                        }
                    }
                }
            }
        }
        /* vectorizable */
        for (int i_9 = 0; i_9 < 14;i_9 += 1)
        {
            arr_32 [i_2] [i_9] = ((arr_30 [i_2] [i_9] [i_2]) ? var_7 : (arr_19 [i_2] [i_9] [i_2] [i_2] [i_9]));

            for (int i_10 = 0; i_10 < 14;i_10 += 1) /* same iter space */
            {
                arr_35 [i_10] &= ((397681941 + (arr_22 [i_2] [i_2] [i_9] [i_9] [i_10])));

                for (int i_11 = 0; i_11 < 14;i_11 += 1) /* same iter space */
                {

                    for (int i_12 = 0; i_12 < 1;i_12 += 1)
                    {
                        var_34 = (arr_15 [i_2]);
                        var_35 = ((!(((var_5 ? 24576 : var_2)))));
                        var_36 = (max(var_36, -5452226168206161228));
                    }
                    arr_41 [i_9] [i_9] [i_11] [i_9] [i_9] [i_9] = (((arr_19 [i_2] [i_2] [i_2] [i_2] [i_2]) ? (arr_0 [i_11]) : (var_16 || var_4)));
                }
                for (int i_13 = 0; i_13 < 14;i_13 += 1) /* same iter space */
                {
                    var_37 = (arr_0 [i_10]);
                    var_38 += (arr_19 [i_13] [i_2] [i_10] [i_9] [i_2]);
                }
                for (int i_14 = 0; i_14 < 14;i_14 += 1)
                {
                    var_39 = var_17;

                    for (int i_15 = 1; i_15 < 13;i_15 += 1)
                    {
                        var_40 = var_1;
                        var_41 = (max(var_41, (arr_2 [i_15 + 1] [i_10])));
                        arr_49 [i_2] [i_2] [i_9] [i_2] [i_2] [i_15] = ((var_5 ? (var_5 ^ var_12) : ((((arr_2 [i_2] [i_2]) ? var_2 : var_3)))));
                        var_42 -= var_9;
                    }
                    for (int i_16 = 0; i_16 < 14;i_16 += 1)
                    {
                        var_43 = ((var_0 > (((arr_34 [i_2] [i_9] [i_14]) ? var_8 : (arr_15 [i_2])))));
                        arr_52 [i_2] [i_9] [i_9] [i_16] [i_2] = (var_10 && var_13);
                        var_44 ^= 293994337729899803;
                    }
                    for (int i_17 = 0; i_17 < 14;i_17 += 1)
                    {
                        var_45 = (var_1 > 498641765);
                        var_46 -= (((((arr_1 [i_2]) - var_8)) * ((((arr_10 [i_14]) / var_3)))));
                    }
                    for (int i_18 = 0; i_18 < 14;i_18 += 1)
                    {
                        var_47 = 118;
                        var_48 = var_10;
                    }
                }
            }
            for (int i_19 = 0; i_19 < 14;i_19 += 1) /* same iter space */
            {
                var_49 = ((var_16 ? (arr_59 [i_2] [i_2] [i_2] [i_19]) : var_6));
                /* LoopNest 2 */
                for (int i_20 = 3; i_20 < 10;i_20 += 1)
                {
                    for (int i_21 = 0; i_21 < 14;i_21 += 1)
                    {
                        {
                            var_50 = (~var_11);
                            var_51 = ((((((arr_40 [i_20 - 1] [i_9] [i_19] [i_20 - 1] [i_9]) ? 1 : var_6))) ? (arr_26 [i_2] [i_2] [i_20] [i_20 + 4] [i_21]) : (~var_9)));
                            var_52 *= ((arr_58 [i_20 + 4] [i_21] [i_19] [i_20 + 4] [i_20 + 4] [i_20 + 3] [i_19]) & (arr_58 [i_2] [i_9] [i_2] [i_20 + 1] [i_21] [i_19] [i_9]));
                        }
                    }
                }
                var_53 = (max(var_53, (((!(arr_2 [i_9] [i_19]))))));
            }
            var_54 = (min(var_54, (((-31962 && (arr_67 [i_2] [i_2]))))));
            var_55 = var_15;
        }
        for (int i_22 = 1; i_22 < 13;i_22 += 1)
        {
            var_56 += (min((((arr_42 [i_2] [i_22]) ? (arr_42 [i_2] [i_2]) : var_16)), (((((var_5 ? var_12 : var_8)) == ((max((arr_2 [i_22] [i_22 + 1]), 34162))))))));
            var_57 = 167;
            var_58 = (((343264303 <= var_6) ? ((((min((arr_11 [i_2] [i_22 + 1]), var_1))) ? 40960 : -var_11)) : (arr_47 [i_2] [i_22] [i_2] [i_22 + 1] [i_2] [i_22 + 1])));
            var_59 ^= (((arr_26 [i_22 - 1] [i_22] [i_2] [i_22 - 1] [i_2]) - (((var_6 + var_8) ? (arr_47 [i_2] [i_22 + 1] [i_2] [i_22] [i_2] [i_22]) : -2135191617117017692))));
        }
    }
    var_60 = min(var_13, (max(((min(0, var_7))), var_1)));
    #pragma endscop
}
