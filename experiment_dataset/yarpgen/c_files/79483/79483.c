/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 79483
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=79483 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/79483
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 12;i_2 += 1)
            {
                {
                    var_16 = (((((var_2 || (arr_1 [i_1] [i_0])))) == (arr_4 [i_0] [i_1])));
                    arr_7 [i_0] [i_0] [7] [i_0] = ((-(70 * 84)));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 12;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 10;i_4 += 1)
                        {
                            {
                                var_17 += (min(70, 77));
                                arr_14 [i_0] = max((!var_12), (max((arr_13 [i_0] [i_1] [i_2] [i_3] [i_4] [i_4 - 1]), (arr_13 [i_0] [i_1] [i_2] [8] [i_4 + 2] [i_4 - 1]))));
                            }
                        }
                    }
                    arr_15 [i_0] [i_1] [i_0] [i_2] = (~70);
                }
            }
        }
    }
    var_18 = (max((!var_7), var_14));
    /* LoopNest 2 */
    for (int i_5 = 0; i_5 < 19;i_5 += 1)
    {
        for (int i_6 = 4; i_6 < 16;i_6 += 1)
        {
            {
                var_19 = (arr_16 [i_6 + 3] [i_5]);
                arr_21 [i_6 - 1] [i_6] = var_14;
                var_20 = (max((arr_19 [i_6 + 3] [i_6]), ((~(arr_19 [i_6 + 3] [i_6])))));
            }
        }
    }

    for (int i_7 = 0; i_7 < 17;i_7 += 1) /* same iter space */
    {
        var_21 = (arr_18 [3] [i_7]);
        var_22 = 77;

        for (int i_8 = 0; i_8 < 17;i_8 += 1)
        {
            var_23 = 114;
            /* LoopNest 2 */
            for (int i_9 = 0; i_9 < 17;i_9 += 1)
            {
                for (int i_10 = 1; i_10 < 14;i_10 += 1)
                {
                    {
                        var_24 &= var_3;
                        arr_31 [14] [i_8] [i_8] [i_9] = 116;
                        var_25 = (((arr_19 [i_9] [i_9]) <= 34));
                    }
                }
            }
        }
        var_26 = (min(var_26, ((max(-58, -115)))));
    }
    /* vectorizable */
    for (int i_11 = 0; i_11 < 17;i_11 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_12 = 0; i_12 < 17;i_12 += 1)
        {
            for (int i_13 = 0; i_13 < 17;i_13 += 1)
            {
                {
                    var_27 = ((~(arr_37 [i_12])));
                    var_28 ^= var_11;
                }
            }
        }
        var_29 &= ((var_12 + ((-22 - (arr_26 [i_11] [i_11] [i_11])))));
    }
    for (int i_14 = 1; i_14 < 14;i_14 += 1)
    {
        /* LoopNest 2 */
        for (int i_15 = 0; i_15 < 17;i_15 += 1)
        {
            for (int i_16 = 2; i_16 < 15;i_16 += 1)
            {
                {
                    arr_47 [i_14] [i_15] [i_15] [i_15] = (max(((~(arr_33 [i_14 + 2]))), -8));
                    var_30 = arr_44 [i_15];
                    /* LoopNest 2 */
                    for (int i_17 = 1; i_17 < 16;i_17 += 1)
                    {
                        for (int i_18 = 0; i_18 < 17;i_18 += 1)
                        {
                            {
                                var_31 = var_6;
                                var_32 -= (min(((min(var_3, (arr_32 [i_14 + 2])))), ((-127 * ((~(arr_51 [i_18] [i_18] [i_18] [i_18] [i_18])))))));
                                var_33 = 77;
                            }
                        }
                    }
                    arr_55 [i_14] [i_14] [i_16] = ((~((((((arr_28 [i_15] [i_15] [i_16 + 1] [i_14]) ^ -114)) <= ((max(var_0, (arr_33 [i_16 - 1])))))))));
                    arr_56 [i_14 + 1] [i_14] [i_15] [i_15] = var_10;
                }
            }
        }
        /* LoopNest 3 */
        for (int i_19 = 1; i_19 < 15;i_19 += 1)
        {
            for (int i_20 = 0; i_20 < 17;i_20 += 1)
            {
                for (int i_21 = 1; i_21 < 15;i_21 += 1)
                {
                    {
                        arr_64 [i_14] [i_14] [i_14] [i_14 + 1] [i_14] [i_14] = arr_22 [i_20] [i_21 - 1];
                        arr_65 [i_14] = (min((((arr_17 [i_19]) ^ (!127))), (108 ^ 67)));
                    }
                }
            }
        }
        arr_66 [4] |= (min(-20903, -118));
        arr_67 [i_14] = ((!(arr_44 [i_14 - 1])));
    }
    /* LoopNest 2 */
    for (int i_22 = 2; i_22 < 6;i_22 += 1)
    {
        for (int i_23 = 1; i_23 < 8;i_23 += 1)
        {
            {
                arr_74 [i_22 - 2] [i_22] = (!var_14);

                /* vectorizable */
                for (int i_24 = 1; i_24 < 9;i_24 += 1)
                {

                    for (int i_25 = 0; i_25 < 10;i_25 += 1) /* same iter space */
                    {
                        var_34 = var_2;
                        var_35 = (max(var_35, -70));
                    }
                    for (int i_26 = 0; i_26 < 10;i_26 += 1) /* same iter space */
                    {
                        var_36 = (arr_32 [i_23 + 1]);
                        arr_85 [i_26] [2] [i_24] [i_24] |= (((arr_17 [i_22 + 1]) <= var_3));
                        var_37 = (arr_75 [i_22 + 3] [i_23]);
                    }
                    for (int i_27 = 0; i_27 < 10;i_27 += 1)
                    {
                        var_38 += (~127);
                        var_39 = (((arr_22 [i_24 - 1] [i_24 + 1]) << (((var_0 + 17211) - 25))));
                    }
                    for (int i_28 = 0; i_28 < 10;i_28 += 1)
                    {
                        arr_93 [i_22] [i_23] [i_23] [i_22] = var_14;
                        var_40 = 44;
                    }
                    var_41 = ((((~(arr_38 [i_23 - 1]))) >= (arr_28 [i_24] [i_23] [i_22] [i_22])));
                    /* LoopNest 2 */
                    for (int i_29 = 0; i_29 < 10;i_29 += 1)
                    {
                        for (int i_30 = 0; i_30 < 10;i_30 += 1)
                        {
                            {
                                arr_99 [i_22] [9] [7] [9] [i_30] [i_23 - 1] [i_22] = (((~var_7) < (arr_22 [i_22] [i_22])));
                                var_42 += (((arr_88 [i_30] [4] [i_30] [i_24 - 1] [i_30]) & (arr_88 [i_30] [i_30] [i_30] [i_24 - 1] [i_30])));
                                var_43 += (((arr_17 [i_22 - 1]) - (arr_22 [i_22 + 1] [i_22 - 1])));
                                var_44 = var_8;
                                var_45 = ((!(arr_48 [i_24 + 1] [i_24 - 1] [i_24 - 1])));
                            }
                        }
                    }
                    var_46 = (min(var_46, (arr_57 [i_24])));
                }
                var_47 = ((~((max(var_13, (arr_39 [i_22]))))));

                for (int i_31 = 0; i_31 < 10;i_31 += 1)
                {
                    arr_103 [9] [i_22] [i_31] = ((((var_2 + (arr_53 [i_22 - 1] [i_23 + 2] [i_22]))) & (max(-116, 93))));
                    var_48 += (min((((arr_28 [i_23 - 1] [i_23 + 2] [i_31] [i_31]) / var_7)), -34));
                    var_49 = var_12;
                }
                for (int i_32 = 0; i_32 < 10;i_32 += 1) /* same iter space */
                {
                    var_50 = (min(var_50, ((((-112 + 2147483647) << (-var_1 - 9))))));

                    for (int i_33 = 0; i_33 < 10;i_33 += 1)
                    {

                        /* vectorizable */
                        for (int i_34 = 0; i_34 < 10;i_34 += 1)
                        {
                            arr_111 [i_22] [i_22] [i_32] [i_33] [i_23] = ((~(arr_28 [i_23 + 2] [14] [i_32] [i_33])));
                            var_51 &= var_14;
                        }
                        /* vectorizable */
                        for (int i_35 = 3; i_35 < 8;i_35 += 1)
                        {
                            var_52 = (min(var_52, (arr_108 [i_33] [i_32] [8] [i_32] [i_33] [i_33] [i_33])));
                            var_53 += -70;
                        }
                        for (int i_36 = 0; i_36 < 10;i_36 += 1) /* same iter space */
                        {
                            var_54 |= max((max(-78, (max(116, 14820)))), ((max((!18242), (var_9 == var_3)))));
                            var_55 = max(var_9, (max((arr_49 [9] [i_33] [i_23 + 2] [i_22]), (((!(arr_25 [2])))))));
                            arr_117 [i_22] [i_33] [i_33] [i_33] [i_32] [i_23] [i_22] = (arr_101 [i_22] [i_32] [i_36]);
                            var_56 += (arr_30 [i_36] [i_33] [i_23] [i_23] [i_22]);
                            var_57 *= ((~((~(arr_81 [i_33] [i_33])))));
                        }
                        for (int i_37 = 0; i_37 < 10;i_37 += 1) /* same iter space */
                        {
                            var_58 += ((!((max(125, (min((arr_68 [4]), -3077)))))));
                            arr_120 [i_23 - 1] [i_32] [i_33] [i_22] = min((max((arr_45 [i_23 + 2] [i_22]), (arr_45 [i_23 + 1] [i_22]))), (max((arr_52 [i_23 + 1] [i_23] [i_23 + 2] [i_23 + 2] [i_22]), (arr_58 [i_23] [i_22] [i_22 - 2]))));
                            var_59 = (max(var_59, (((~(arr_81 [i_33] [i_33]))))));
                            arr_121 [i_23] [i_23] [i_32] [i_22] [i_32] [i_32] [i_22 - 2] = (min((arr_28 [i_23 - 1] [i_23] [i_32] [i_22 + 2]), (~110)));
                            arr_122 [i_37] [i_33] [i_32] [i_33] [i_22] &= (arr_52 [i_22] [i_23] [2] [i_33] [i_37]);
                        }
                        var_60 = (max((~3), ((~(arr_17 [i_22 + 2])))));
                    }
                }
                for (int i_38 = 0; i_38 < 10;i_38 += 1) /* same iter space */
                {

                    for (int i_39 = 1; i_39 < 6;i_39 += 1) /* same iter space */
                    {
                        var_61 = (max(var_61, ((min(((max((arr_84 [4] [i_23] [i_38] [i_39 + 4] [i_39 + 1]), (arr_100 [i_22] [6] [i_39 + 3])))), (~var_2))))));
                        var_62 = (min((var_13 > var_8), (max((arr_123 [i_22] [i_22] [i_38] [i_22]), (((-109 + 2147483647) >> (4282 - 4271)))))));
                    }
                    for (int i_40 = 1; i_40 < 6;i_40 += 1) /* same iter space */
                    {
                        var_63 = (min(var_63, var_5));
                        var_64 = ((((~((min((arr_98 [1] [i_23] [i_23] [i_23] [i_23] [6] [i_23]), var_14))))) % (((max(var_13, var_4))))));
                        var_65 = var_10;
                        arr_133 [4] [i_23] [i_22] [i_40] &= ((~((min(-19, 16530)))));
                    }
                    var_66 ^= ((((~((var_4 % (arr_29 [i_22] [i_23 + 1] [i_38] [12]))))) / ((min((-127 - 1), 32755)))));
                }
                arr_134 [i_23] [i_22] [i_22] = min(108, -121);
            }
        }
    }
    #pragma endscop
}
