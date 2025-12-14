/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 76442
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=76442 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/76442
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 16;i_0 += 1) /* same iter space */
    {
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 0;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 15;i_2 += 1)
            {
                for (int i_3 = 1; i_3 < 1;i_3 += 1)
                {
                    {
                        arr_11 [i_0] [i_1] [i_2] [i_2 + 1] = (((max(((612 ? 5743 : 4772)), -1)) >> (var_4 - 51116)));
                        var_18 = (min((((var_7 ^ var_4) & var_3)), ((((((arr_0 [i_0]) ? (arr_1 [2] [i_2]) : var_17)) ^ (min((arr_2 [i_1] [i_2 - 2]), var_15)))))));
                    }
                }
            }
        }
        arr_12 [i_0] = var_14;
        arr_13 [i_0] [i_0] = (arr_9 [i_0] [i_0] [i_0] [i_0] [i_0]);
        var_19 = (max(var_19, (((var_12 ? ((var_3 ? var_14 : var_12)) : ((((arr_8 [i_0] [i_0] [i_0] [i_0]) - var_13))))))));
    }
    for (int i_4 = 0; i_4 < 16;i_4 += 1) /* same iter space */
    {
        var_20 += (arr_2 [13] [i_4]);
        var_21 = ((var_8 || (((var_10 * (((var_3 <= (arr_16 [i_4])))))))));
    }
    for (int i_5 = 2; i_5 < 17;i_5 += 1) /* same iter space */
    {
        arr_20 [i_5] = var_14;
        arr_21 [i_5] = (arr_18 [i_5] [4]);
        var_22 = (max((arr_18 [i_5] [i_5]), ((min((arr_19 [i_5 + 2]), (arr_19 [i_5 + 2]))))));
    }
    for (int i_6 = 2; i_6 < 17;i_6 += 1) /* same iter space */
    {
        /* LoopNest 3 */
        for (int i_7 = 1; i_7 < 16;i_7 += 1)
        {
            for (int i_8 = 1; i_8 < 17;i_8 += 1)
            {
                for (int i_9 = 0; i_9 < 20;i_9 += 1)
                {
                    {
                        var_23 = var_1;
                        var_24 = (arr_18 [i_7] [i_9]);
                    }
                }
            }
        }
        /* LoopNest 3 */
        for (int i_10 = 2; i_10 < 18;i_10 += 1)
        {
            for (int i_11 = 0; i_11 < 20;i_11 += 1)
            {
                for (int i_12 = 0; i_12 < 1;i_12 += 1)
                {
                    {
                        var_25 = (max(var_25, (-18 | 1023)));

                        /* vectorizable */
                        for (int i_13 = 4; i_13 < 18;i_13 += 1)
                        {
                            arr_43 [i_6] [i_10 - 1] [i_12] [i_13] = (((arr_19 [i_6 + 1]) + (arr_27 [i_13 + 1] [i_10 + 2] [i_10])));
                            var_26 *= ((var_1 % (arr_31 [i_6 + 1] [i_6 - 2] [i_6 + 1])));
                        }
                        var_27 = ((((((arr_23 [i_6 - 2] [i_6 - 1]) | (arr_23 [i_6 - 2] [i_6 - 1])))) ? (((arr_23 [i_6 - 2] [i_6]) - (arr_23 [i_6 - 2] [i_6]))) : ((((arr_23 [i_6 - 2] [i_6 + 1]) < (arr_23 [i_6 - 2] [i_6]))))));
                        arr_44 [i_6] = (arr_37 [i_10 + 2] [i_10 + 1] [i_6 + 1] [i_6 + 2]);
                        arr_45 [i_6 + 1] [i_6] [i_6] = (min((((!(var_17 + var_14)))), (arr_36 [i_6 + 3] [i_6 + 1] [i_6 + 1])));
                    }
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_14 = 1; i_14 < 24;i_14 += 1)
    {
        for (int i_15 = 2; i_15 < 23;i_15 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_16 = 0; i_16 < 25;i_16 += 1)
                {
                    for (int i_17 = 4; i_17 < 24;i_17 += 1)
                    {
                        {
                            var_28 = (arr_53 [i_14] [i_14] [i_14 - 1]);
                            arr_59 [i_14] [i_15] [i_15 - 1] [i_15 + 2] = ((~(!-616)));
                            arr_60 [i_17] [2] |= (((((((((arr_55 [i_16] [i_14 - 1] [i_16]) * (arr_56 [i_14 + 1])))) == (min((arr_52 [i_17] [10] [10]), (arr_56 [i_14 - 1])))))) ^ (((var_14 > (max(var_3, var_3)))))));
                        }
                    }
                }
                arr_61 [i_14] [i_14] [i_15] = (((arr_58 [i_14] [i_15 + 1] [i_15 - 2] [i_15 - 2]) ? ((-(((arr_51 [i_14]) ? var_7 : (arr_46 [i_14] [i_14]))))) : ((((arr_50 [i_14] [i_15 - 2]) == (arr_47 [i_14 + 1]))))));
                var_29 = var_17;

                for (int i_18 = 3; i_18 < 23;i_18 += 1)
                {
                    var_30 -= (((arr_58 [i_14] [i_14] [i_14] [i_14 - 1]) ? 1469158617 : (((arr_58 [i_18 + 1] [i_15 + 1] [i_14 - 1] [i_14]) / var_1))));
                    arr_64 [i_14] [i_15 - 1] [i_15 + 2] [i_14] = (~var_14);
                    arr_65 [i_14] [i_15] = var_9;
                    arr_66 [i_14] [i_14 + 1] [i_14] = var_8;
                }
                /* vectorizable */
                for (int i_19 = 0; i_19 < 25;i_19 += 1)
                {
                    var_31 *= (((arr_54 [i_14 + 1]) && var_10));
                    /* LoopNest 2 */
                    for (int i_20 = 2; i_20 < 24;i_20 += 1)
                    {
                        for (int i_21 = 0; i_21 < 25;i_21 += 1)
                        {
                            {
                                var_32 = (var_10 * -707693044);
                                var_33 = (arr_52 [i_14] [i_15 + 1] [i_20 - 1]);
                                var_34 = ((!(((var_0 >> (((arr_69 [4] [i_15] [i_15] [i_15 - 2]) - 95)))))));
                            }
                        }
                    }
                    var_35 = (((arr_73 [4] [18] [i_14 + 1] [4] [i_19] [i_14 + 1] [i_19]) ? ((var_5 ? (arr_68 [i_14] [i_15 - 1] [i_15 + 2]) : (arr_50 [i_14] [i_15]))) : (arr_68 [i_14 + 1] [i_14 + 1] [i_14 - 1])));
                }
                /* vectorizable */
                for (int i_22 = 0; i_22 < 0;i_22 += 1)
                {
                    var_36 *= var_8;
                    var_37 = (((arr_55 [i_14] [i_15 - 1] [i_15 + 1]) >= var_12));
                    /* LoopNest 2 */
                    for (int i_23 = 0; i_23 < 25;i_23 += 1)
                    {
                        for (int i_24 = 1; i_24 < 23;i_24 += 1)
                        {
                            {
                                var_38 ^= (((arr_80 [i_22 + 1] [i_24 + 1] [i_22] [6] [i_14 - 1]) * (arr_74 [i_22 + 1] [i_22 + 1] [i_22 + 1] [i_23] [i_24] [i_14 - 1])));
                                var_39 = (min(var_39, -var_15));
                            }
                        }
                    }
                }
                for (int i_25 = 0; i_25 < 25;i_25 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_26 = 0; i_26 < 25;i_26 += 1)
                    {
                        for (int i_27 = 0; i_27 < 25;i_27 += 1)
                        {
                            {
                                var_40 = ((((arr_78 [i_15 - 1] [i_14 + 1] [16] [i_14 + 1]) < (arr_86 [i_14] [i_14 + 1]))));
                                arr_91 [i_14] [i_15] [i_14] [i_26] [i_15] = (arr_74 [i_14] [i_14 - 1] [i_15 + 2] [i_14 + 1] [i_27] [i_14 + 1]);
                                arr_92 [i_14] = var_6;
                                var_41 += (arr_69 [i_14 + 1] [i_14 - 1] [i_15 + 1] [i_15 - 1]);
                            }
                        }
                    }
                    var_42 ^= ((min((var_13 | var_12), (arr_77 [i_14 - 1] [i_15 - 1] [i_15] [i_25]))));
                    var_43 = var_5;
                }
                /* LoopNest 2 */
                for (int i_28 = 0; i_28 < 25;i_28 += 1)
                {
                    for (int i_29 = 2; i_29 < 23;i_29 += 1)
                    {
                        {
                            arr_99 [i_14] = var_13;
                            var_44 = (min(var_44, (((((arr_76 [i_14 - 1] [i_15] [i_15] [i_15]) ? (arr_76 [i_14 - 1] [i_29] [i_14 - 1] [i_28]) : (arr_76 [i_14 + 1] [i_15] [i_28] [i_14])))))));
                        }
                    }
                }
            }
        }
    }
    var_45 = var_15;
    #pragma endscop
}
