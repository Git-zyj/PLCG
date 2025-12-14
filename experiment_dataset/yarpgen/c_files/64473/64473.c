/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 64473
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=64473 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/64473
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 17;i_0 += 1)
    {
        var_17 ^= arr_2 [i_0] [i_0];
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 17;i_2 += 1)
            {
                {
                    arr_7 [i_1] [i_1] [i_1] &= ((((((min(var_12, 18446744073709551614)) ^ var_15))) ? var_14 : (arr_5 [i_2] [i_2 - 2] [i_2 - 1])));
                    var_18 = 1792;
                    var_19 = (((((arr_2 [i_2 + 1] [i_2]) & (arr_2 [i_0] [i_0]))) & ((min((arr_0 [i_0 - 1]), var_0)))));
                    arr_8 [i_0] [i_0] [i_0] = ((((max(1761, (arr_1 [i_0 + 1])))) << (((min(46924, 18446744073709551596)) - 46922))));
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_3 = 1; i_3 < 21;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 22;i_4 += 1)
        {
            {
                var_20 = ((((min((arr_11 [i_3]), var_8))) < ((min((arr_13 [i_3] [i_3 - 1]), var_7)))));
                /* LoopNest 2 */
                for (int i_5 = 0; i_5 < 22;i_5 += 1)
                {
                    for (int i_6 = 4; i_6 < 19;i_6 += 1)
                    {
                        {

                            for (int i_7 = 0; i_7 < 22;i_7 += 1)
                            {
                                arr_21 [i_3] [i_3] [i_3] [i_3] [12] = (min((arr_18 [i_3 - 1] [i_3]), (arr_18 [i_3 + 1] [i_3])));
                                var_21 = (min((min((arr_15 [i_3] [i_7]), (((arr_20 [i_3] [i_4]) & var_7)))), (arr_10 [i_3])));
                                arr_22 [i_4] [i_3] [i_6] = var_2;
                            }
                            /* vectorizable */
                            for (int i_8 = 0; i_8 < 22;i_8 += 1)
                            {
                                arr_26 [i_6] [i_3] [i_5] [i_4] = -56499;
                                var_22 *= ((53421 ? 53429 : 63744));
                                var_23 = -var_11;
                                var_24 = (((arr_20 [i_3 - 1] [i_6 - 2]) ? 22 : (arr_20 [i_3 - 1] [i_6 - 3])));
                                var_25 = 8863;
                            }
                            for (int i_9 = 0; i_9 < 1;i_9 += 1)
                            {
                                var_26 = ((-((min(var_3, (arr_17 [i_3] [i_3] [i_5] [i_6 + 2]))))));
                                var_27 = (min(var_27, var_14));
                                var_28 = max(0, (min(53421, (!31380))));
                                arr_29 [i_3] [i_3] [i_3] = (min((~var_16), (min((((arr_12 [i_6]) >> (12115 - 12098))), (arr_19 [i_3 + 1])))));
                                var_29 = (arr_23 [i_6 - 3] [i_6 + 1] [i_6 - 2] [i_6] [i_6] [i_6]);
                            }
                            var_30 = (min(var_30, ((min(((63745 ? (28589 / 32) : ((max(var_12, 32767))))), (((((65153 << (var_5 - 4258))) < (arr_24 [i_3] [i_3] [i_4])))))))));
                            var_31 = (((((var_11 ? (arr_17 [i_4] [i_3] [i_6] [i_6 - 3]) : (arr_27 [20] [i_5] [i_5] [i_6 + 3] [i_3])))) * (min(5711060179722329564, 18446744073709551610))));
                        }
                    }
                }

                for (int i_10 = 0; i_10 < 22;i_10 += 1)
                {

                    for (int i_11 = 0; i_11 < 22;i_11 += 1) /* same iter space */
                    {
                        arr_34 [i_3] [i_3] [i_3] = (max((((arr_14 [i_3] [i_4] [i_3] [i_4]) ? (arr_14 [i_3] [i_3] [i_10] [i_10]) : (arr_14 [i_3] [i_3] [i_3 - 1] [i_3]))), (arr_14 [i_3] [8] [i_10] [i_10])));
                        var_32 = (63736 >= 1785);
                    }
                    /* vectorizable */
                    for (int i_12 = 0; i_12 < 22;i_12 += 1) /* same iter space */
                    {
                        arr_38 [i_3] = var_3;
                        var_33 = 5395;
                        var_34 = ((!(arr_20 [i_3] [i_3 - 1])));
                        var_35 = (((arr_25 [i_3] [i_3 - 1] [i_3 + 1] [i_3 - 1] [i_3]) ? var_11 : (arr_25 [i_3] [i_3 + 1] [i_3 + 1] [i_3 - 1] [5])));
                    }
                    for (int i_13 = 0; i_13 < 22;i_13 += 1) /* same iter space */
                    {
                        var_36 = ((-7 ? (arr_36 [i_3 - 1]) : (((!(arr_36 [i_3 - 1]))))));
                        var_37 *= ((!(~24599)));
                    }
                    arr_42 [i_3] = (min((arr_24 [i_3] [i_4] [i_4]), ((min(var_16, (arr_33 [i_3] [i_4] [i_3 + 1] [i_4]))))));

                    for (int i_14 = 0; i_14 < 22;i_14 += 1)
                    {
                        var_38 = (min(65535, 1298));
                        var_39 = arr_41 [i_3];
                    }
                    for (int i_15 = 1; i_15 < 21;i_15 += 1)
                    {
                        var_40 = (((arr_11 [i_3]) ? (((arr_30 [i_3 - 1] [i_3 - 1] [i_3 - 1]) ? (arr_30 [i_3 - 1] [i_3 - 1] [i_3 - 1]) : var_11)) : (((-((min((arr_37 [i_3] [i_4] [i_15] [i_15]), var_7))))))));
                        var_41 = (1418 * -var_10);
                        arr_48 [i_3 + 1] [i_3] [i_3] [i_3] = var_8;
                    }
                }
                /* vectorizable */
                for (int i_16 = 0; i_16 < 22;i_16 += 1)
                {

                    for (int i_17 = 2; i_17 < 19;i_17 += 1)
                    {
                        arr_55 [i_3] [i_3] [i_3] [10] = ((~(!var_14)));
                        arr_56 [i_3] = (arr_41 [i_17]);
                    }
                    for (int i_18 = 3; i_18 < 20;i_18 += 1) /* same iter space */
                    {
                        var_42 ^= (((arr_15 [i_3 - 1] [i_18 + 2]) ? 12 : 59781));
                        var_43 = arr_14 [i_3] [i_3 + 1] [i_3 - 1] [i_3 - 1];
                        var_44 = var_2;
                        arr_59 [i_3] = (((arr_40 [i_3 - 1] [i_18 + 1] [i_18 - 2] [i_18 + 2]) != (arr_40 [i_3 - 1] [i_18 + 1] [i_18 - 2] [i_18 + 2])));
                    }
                    for (int i_19 = 3; i_19 < 20;i_19 += 1) /* same iter space */
                    {
                        var_45 *= (arr_40 [i_19] [i_4] [i_16] [i_4]);
                        var_46 = ((var_13 & (arr_49 [i_3 - 1] [i_3 - 1] [i_19 - 3] [i_19])));

                        for (int i_20 = 0; i_20 < 22;i_20 += 1)
                        {
                            var_47 = (max(var_47, (arr_31 [i_4] [i_4] [i_16])));
                            arr_67 [i_4] [i_16] [i_16] &= (arr_40 [13] [i_4] [i_16] [i_19]);
                            var_48 *= (((arr_13 [i_3 + 1] [i_3]) ? 10045 : 0));
                            var_49 = (((((arr_18 [i_19] [i_3]) != (arr_51 [i_20] [i_3] [i_20]))) ? (arr_15 [i_3 - 1] [i_3 - 1]) : (arr_37 [i_3] [i_19 - 2] [i_19] [i_3 - 1])));
                        }
                        for (int i_21 = 1; i_21 < 20;i_21 += 1)
                        {
                            arr_72 [i_3] [i_3 + 1] [i_3 + 1] [i_3 + 1] [i_3] = ((var_11 ? (arr_64 [8] [8] [i_3] [8] [i_21 - 1] [i_3 + 1] [i_16]) : 65137));
                            arr_73 [i_19] [i_4] [i_3] = ((!(63743 && var_12)));
                            var_50 = var_6;
                            var_51 = (((arr_12 [i_3]) ? 46924 : 59104));
                        }
                    }
                    var_52 = (min(var_52, 0));
                    var_53 = (arr_35 [i_16] [i_16]);

                    for (int i_22 = 2; i_22 < 18;i_22 += 1)
                    {
                        arr_76 [i_3] = (((63239 - 81) + (var_1 + 1785)));
                        var_54 = ((!(arr_10 [i_3 - 1])));
                    }
                }
                for (int i_23 = 3; i_23 < 21;i_23 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_24 = 1; i_24 < 1;i_24 += 1)
                    {
                        for (int i_25 = 3; i_25 < 19;i_25 += 1)
                        {
                            {
                                var_55 = (min(var_55, ((min((((arr_11 [i_4]) * (arr_11 [i_4]))), (((arr_11 [i_4]) / var_4)))))));
                                var_56 = 0;
                            }
                        }
                    }
                    var_57 = ((-((-(arr_47 [i_3] [i_3] [i_3] [i_3] [i_3 - 1])))));
                }
                arr_85 [i_4] [i_4] |= (min(((min((arr_39 [i_3] [i_3 + 1] [i_3 + 1] [i_4]), (arr_39 [i_4] [i_3 + 1] [i_4] [i_4])))), var_11));
            }
        }
    }
    #pragma endscop
}
