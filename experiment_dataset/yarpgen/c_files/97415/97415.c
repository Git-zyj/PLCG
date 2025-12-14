/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 97415
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=97415 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/97415
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 23;i_2 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 23;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 23;i_4 += 1)
                        {
                            {
                                arr_15 [10] [5] [i_0] [i_3] [i_3] [5] [i_3] = 1;
                                var_19 = (!(((var_4 ? var_8 : var_11))));
                                var_20 = ((-var_18 ? (((arr_11 [12] [i_2] [1] [i_4] [2] [i_4]) << (var_1 - 9690255365190052384))) : (((((var_10 ? var_14 : var_2)) <= ((min((arr_1 [i_0]), var_9))))))));
                                arr_16 [i_0] [i_0] [i_2] [15] [i_2] = var_5;
                                var_21 = (max(var_21, var_6));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 23;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 23;i_6 += 1)
                        {
                            {
                                var_22 |= (arr_20 [21] [i_5] [3] [i_2] [16] [i_0] [i_0]);
                                arr_21 [i_0] [0] [i_2] [2] [i_6] = (min((((arr_12 [i_0] [i_6] [i_2] [i_5]) ? (arr_13 [i_0] [0] [i_6]) : var_14)), var_0));
                                arr_22 [i_0] [i_6] [3] [3] [i_0] [i_0] = ((!(arr_3 [i_0])));
                                var_23 *= ((1 ? (((~(arr_3 [i_0])))) : ((~(arr_1 [i_5])))));
                            }
                        }
                    }
                    var_24 = var_16;
                    var_25 = var_10;
                }
                var_26 &= 9223372036854775807;
                /* LoopNest 2 */
                for (int i_7 = 0; i_7 < 1;i_7 += 1)
                {
                    for (int i_8 = 3; i_8 < 22;i_8 += 1)
                    {
                        {
                            var_27 ^= ((-var_9 ? ((((!(arr_6 [i_0] [i_0]))))) : (((~var_7) ? (max(var_9, (arr_8 [i_8] [i_7] [1]))) : var_12))));
                            var_28 *= (arr_19 [i_8 - 2] [i_7] [i_1] [i_1] [i_0] [i_0]);
                            arr_28 [i_0] [i_0] [5] [5] = var_18;
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_9 = 0; i_9 < 1;i_9 += 1)
                {
                    for (int i_10 = 1; i_10 < 22;i_10 += 1)
                    {
                        {

                            for (int i_11 = 0; i_11 < 23;i_11 += 1) /* same iter space */
                            {
                                var_29 |= var_11;
                                var_30 = ((arr_32 [i_9] [i_0] [i_0] [i_0]) > 59542);
                            }
                            for (int i_12 = 0; i_12 < 23;i_12 += 1) /* same iter space */
                            {
                                var_31 += (arr_4 [12] [i_1] [i_9]);
                                var_32 = (min(59548, 59542));
                                arr_38 [i_0] [19] [i_12] = 12403;
                                var_33 = (arr_23 [i_1] [i_1] [i_0]);
                                var_34 = (max(var_34, ((max((max(6016, (arr_27 [i_0] [i_0] [16] [16] [i_12]))), 59561)))));
                            }
                            var_35 = (min((arr_11 [i_0] [i_1] [i_9] [i_9] [i_9] [i_1]), (arr_29 [i_0] [i_0] [i_10 + 1] [i_0])));
                        }
                    }
                }
            }
        }
    }

    for (int i_13 = 1; i_13 < 18;i_13 += 1) /* same iter space */
    {
        /* LoopNest 3 */
        for (int i_14 = 0; i_14 < 21;i_14 += 1)
        {
            for (int i_15 = 2; i_15 < 18;i_15 += 1)
            {
                for (int i_16 = 0; i_16 < 21;i_16 += 1)
                {
                    {
                        var_36 = (min(((max((arr_5 [1] [1]), (arr_5 [i_13] [15])))), (max(2207686556113499185, (arr_3 [i_13 - 1])))));
                        arr_51 [16] [i_14] [i_13] = ((((!(var_1 != var_8))) ? var_17 : var_4));
                    }
                }
            }
        }
        arr_52 [i_13] = (((((arr_9 [i_13] [i_13 - 1] [i_13 + 1] [i_13 + 1]) ? (arr_29 [i_13 - 1] [i_13] [i_13 + 3] [i_13 + 2]) : var_9)) ^ var_5));
    }
    for (int i_17 = 1; i_17 < 18;i_17 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_18 = 0; i_18 < 21;i_18 += 1)
        {
            for (int i_19 = 2; i_19 < 20;i_19 += 1)
            {
                {

                    for (int i_20 = 1; i_20 < 18;i_20 += 1)
                    {
                        var_37 = var_8;
                        arr_63 [i_17] [i_20] [1] [i_20] = (arr_55 [i_17]);
                    }
                    arr_64 [i_19] = arr_3 [i_19 + 1];
                }
            }
        }
        /* LoopNest 3 */
        for (int i_21 = 0; i_21 < 21;i_21 += 1)
        {
            for (int i_22 = 1; i_22 < 17;i_22 += 1)
            {
                for (int i_23 = 0; i_23 < 1;i_23 += 1)
                {
                    {
                        arr_71 [i_17] [i_21] [15] [i_23] [i_23] [i_21] = (arr_59 [i_17] [i_21] [i_22 + 2] [i_23]);
                        var_38 = var_11;
                    }
                }
            }
        }
        var_39 = var_11;
        var_40 = ((((!((max(var_15, var_3))))) || (!var_1)));
        var_41 = (max((arr_67 [3] [3] [8] [14]), (min((arr_56 [i_17 + 3] [i_17 + 2] [i_17 - 1]), (arr_56 [i_17 + 3] [i_17 + 3] [i_17 + 2])))));
    }

    for (int i_24 = 0; i_24 < 23;i_24 += 1)
    {
        arr_75 [18] = var_5;

        /* vectorizable */
        for (int i_25 = 0; i_25 < 23;i_25 += 1)
        {
            /* LoopNest 2 */
            for (int i_26 = 0; i_26 < 23;i_26 += 1)
            {
                for (int i_27 = 0; i_27 < 23;i_27 += 1)
                {
                    {
                        var_42 = (max(var_42, (6004 ^ -2147483631)));

                        for (int i_28 = 0; i_28 < 23;i_28 += 1)
                        {
                            arr_86 [i_25] [13] = (!var_1);
                            arr_87 [i_24] [i_25] [i_25] [3] [16] [i_28] [2] = var_13;
                        }
                        arr_88 [i_25] [i_26] [i_25] = ((var_5 ? (arr_6 [18] [i_27]) : var_0));
                    }
                }
            }
            var_43 = (((arr_83 [i_24] [i_24] [i_24] [i_25] [i_25]) ? var_3 : (arr_0 [i_25])));
            var_44 = ((((((arr_78 [i_24] [i_24] [i_24] [6]) ? (arr_37 [i_24] [1] [i_24]) : var_0))) ? var_3 : (var_6 % var_8)));
        }
        var_45 = var_3;
        var_46 = ((+((max((arr_77 [i_24] [i_24] [i_24]), (arr_77 [i_24] [1] [i_24]))))));
    }
    /* LoopNest 2 */
    for (int i_29 = 1; i_29 < 9;i_29 += 1)
    {
        for (int i_30 = 0; i_30 < 12;i_30 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_31 = 0; i_31 < 1;i_31 += 1)
                {
                    for (int i_32 = 1; i_32 < 11;i_32 += 1)
                    {
                        for (int i_33 = 0; i_33 < 12;i_33 += 1)
                        {
                            {
                                var_47 = (min(((((max((arr_62 [i_29] [i_30]), var_7))) ? (max(var_3, var_1)) : (arr_89 [i_29 + 2]))), ((((var_6 ^ var_10) != (min(9223372036854775807, (arr_36 [i_33] [16] [i_31] [i_29] [i_29]))))))));
                                var_48 += ((-(((((var_11 ? var_12 : var_17))) ? (arr_94 [i_29 + 3]) : ((var_18 ? (arr_91 [i_29 + 1]) : var_17))))));
                                arr_103 [i_29] [i_30] [i_30] [i_32] [1] = ((59546 ? 4 : -21953));
                            }
                        }
                    }
                }

                for (int i_34 = 0; i_34 < 12;i_34 += 1) /* same iter space */
                {
                    arr_106 [i_29] [i_29] [i_34] [i_34] = var_9;
                    var_49 = (((((arr_39 [i_29]) ? var_1 : (arr_39 [i_29])))) ? (arr_74 [i_29]) : (((arr_29 [i_29] [i_29] [i_29 + 1] [i_29 - 1]) ? (arr_74 [i_29]) : var_1)));
                }
                for (int i_35 = 0; i_35 < 12;i_35 += 1) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (int i_36 = 0; i_36 < 1;i_36 += 1)
                    {
                        for (int i_37 = 3; i_37 < 9;i_37 += 1)
                        {
                            {
                                arr_114 [11] [i_29] = (arr_32 [21] [i_29] [i_35] [i_30]);
                                var_50 += ((~(min((arr_14 [i_29] [i_37 - 2] [i_35] [i_30] [i_29 + 3] [2]), (arr_14 [17] [i_37 - 3] [i_37 - 3] [i_36] [i_29 + 3] [i_37])))));
                                var_51 = (((((var_7 ? ((var_6 ? var_14 : var_13)) : (arr_99 [i_29] [i_29] [i_35] [i_29] [1])))) ? (arr_89 [i_37 + 3]) : (arr_49 [i_35] [i_36] [i_37])));
                            }
                        }
                    }
                    var_52 = (~(((arr_92 [i_30]) ? var_12 : (arr_96 [i_30] [i_30] [i_35] [i_35]))));
                    /* LoopNest 2 */
                    for (int i_38 = 4; i_38 < 11;i_38 += 1)
                    {
                        for (int i_39 = 0; i_39 < 12;i_39 += 1)
                        {
                            {
                                var_53 = arr_3 [i_29 + 2];
                                var_54 &= var_11;
                            }
                        }
                    }
                }
                for (int i_40 = 0; i_40 < 0;i_40 += 1)
                {
                    var_55 = var_9;

                    for (int i_41 = 1; i_41 < 11;i_41 += 1) /* same iter space */
                    {
                        arr_126 [i_29 + 2] [i_29] [i_29] [i_29] [i_29] [i_29] = (max(var_1, var_3));
                        var_56 = (var_8 * var_17);
                    }
                    for (int i_42 = 1; i_42 < 11;i_42 += 1) /* same iter space */
                    {
                        var_57 = ((2013265920 ? (arr_49 [i_40 + 1] [9] [i_40 + 1]) : (max((arr_49 [i_40] [i_40 + 1] [i_40 + 1]), (arr_49 [i_40] [i_40] [i_40 + 1])))));
                        var_58 = min(var_2, (arr_122 [i_29 - 1] [i_29 - 1] [i_40] [i_40] [0] [5]));
                    }
                }
            }
        }
    }
    var_59 *= min(((max((!var_17), (min(var_14, var_17))))), ((var_5 ? var_18 : (min(var_11, var_1)))));
    #pragma endscop
}
