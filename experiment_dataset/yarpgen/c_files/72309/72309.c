/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 72309
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=72309 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/72309
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        var_20 = (((arr_1 [i_0] [i_0]) ? (arr_0 [i_0]) : (arr_0 [i_0])));

        for (int i_1 = 2; i_1 < 16;i_1 += 1) /* same iter space */
        {
            arr_6 [13] [i_0] = (arr_4 [i_0] [i_0] [i_1]);
            arr_7 [i_0] [i_0] = (arr_1 [i_1] [i_0]);
        }
        /* vectorizable */
        for (int i_2 = 2; i_2 < 16;i_2 += 1) /* same iter space */
        {
            /* LoopNest 2 */
            for (int i_3 = 0; i_3 < 17;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 17;i_4 += 1)
                {
                    {
                        var_21 -= 1041967949;

                        for (int i_5 = 0; i_5 < 1;i_5 += 1)
                        {
                            arr_17 [i_0] [i_5] [i_3] [i_0] [i_5] = 1041967942;
                            var_22 -= (((arr_5 [i_2 - 1]) && (arr_5 [i_2 - 2])));
                            var_23 = 9223372036854775808;
                            var_24 = 63116;
                            var_25 = var_9;
                        }
                        arr_18 [i_0] [i_2] [13] [i_4] = (((496 ? (arr_0 [i_0]) : var_12)) < (arr_12 [i_3]));
                        var_26 = 1041967953;
                    }
                }
            }

            for (int i_6 = 0; i_6 < 17;i_6 += 1)
            {
                arr_22 [i_0] [i_2] [i_6] = (arr_12 [i_2]);
                arr_23 [i_6] [i_2] |= (arr_20 [i_0] [i_2] [9] [i_6]);
            }

            for (int i_7 = 0; i_7 < 17;i_7 += 1)
            {
                var_27 = (min(var_27, (arr_10 [4] [i_2] [1])));

                for (int i_8 = 0; i_8 < 1;i_8 += 1)
                {
                    var_28 *= 1041967967;

                    for (int i_9 = 1; i_9 < 16;i_9 += 1)
                    {
                        var_29 &= var_5;
                        arr_30 [i_0] [8] [i_0] [i_0] |= (arr_15 [i_0] [i_7] [i_7] [i_8] [i_9]);
                    }
                    for (int i_10 = 0; i_10 < 17;i_10 += 1)
                    {
                        arr_33 [i_0] [i_0] [i_0] [i_0] [i_8] [i_0] = (arr_20 [i_2 + 1] [i_2 - 1] [i_2] [i_2 - 1]);
                        var_30 = ((arr_0 [i_2 - 1]) ? (arr_13 [i_2 - 1] [i_2 - 2] [i_2 - 2] [i_10]) : (arr_3 [i_0] [i_0]));
                        var_31 = (arr_8 [i_2] [i_10]);
                        var_32 = (min(var_32, ((((arr_31 [i_7] [i_7]) ? (arr_14 [i_2 - 2] [i_2] [i_2 - 1] [i_2 - 1]) : (arr_10 [i_2 - 2] [i_2] [i_2 - 2]))))));
                        arr_34 [i_8] = (((((arr_9 [i_0] [i_7] [i_10]) ? 117 : (arr_31 [i_8] [i_10])))) ? (arr_32 [i_10] [i_8] [i_2] [i_8] [i_0]) : (arr_14 [i_2] [i_2] [i_8] [i_10]));
                    }
                    for (int i_11 = 0; i_11 < 17;i_11 += 1)
                    {
                        var_33 = (((2256157780 ? 244 : 115)));
                        arr_39 [i_0] [i_2 - 2] [i_2 - 2] [i_8] [i_11] = (arr_11 [i_2 - 2] [i_2 + 1] [i_2 - 1]);
                    }
                    for (int i_12 = 0; i_12 < 1;i_12 += 1)
                    {
                        var_34 = var_14;
                        var_35 = (((arr_8 [i_2 + 1] [i_2 - 2]) & var_8));
                        arr_44 [i_8] = -115;
                        var_36 ^= (1041967974 % 1532075630);
                    }
                }
                arr_45 [i_0] = var_2;
            }
            for (int i_13 = 0; i_13 < 17;i_13 += 1)
            {

                for (int i_14 = 0; i_14 < 1;i_14 += 1) /* same iter space */
                {
                    arr_51 [i_0] [i_2] [i_13] [i_14] = (arr_12 [i_0]);
                    arr_52 [i_0] [i_2 + 1] [i_14] [3] = (((arr_27 [i_2] [i_2] [i_2 - 2] [i_2 - 2]) - (((15013 ? 32746 : 2762891665)))));
                    var_37 |= 1041967953;
                    var_38 = ((!(arr_41 [i_2 - 1] [i_2 + 1] [i_2 - 1] [i_2 - 1] [i_14] [i_2 - 2])));
                }
                for (int i_15 = 0; i_15 < 1;i_15 += 1) /* same iter space */
                {
                    var_39 = (~var_10);
                    arr_57 [i_0] [i_2] [i_15] [i_13] = (((((var_8 ? (arr_4 [i_15] [i_13] [i_0]) : 9414))) ? ((((arr_38 [i_0] [i_2] [i_2] [i_15] [i_15]) ? 240 : (arr_43 [i_15] [i_2])))) : (((arr_21 [0] [i_2]) ? 138 : (arr_54 [i_0] [9] [i_0])))));
                    var_40 = (((arr_27 [i_0] [i_2] [i_13] [i_0]) / (arr_31 [i_0] [5])));
                }
                for (int i_16 = 0; i_16 < 1;i_16 += 1) /* same iter space */
                {

                    for (int i_17 = 1; i_17 < 15;i_17 += 1)
                    {
                        var_41 = (!-32312);
                        var_42 = (arr_56 [i_0] [i_2] [i_13] [i_16] [i_13]);
                        arr_65 [i_0] [i_2] [i_2] = (arr_9 [i_0] [i_17 + 1] [i_17]);
                        arr_66 [2] [i_2] [2] [10] [i_16] [i_17] = (1532075622 <= 2);
                    }
                    var_43 = (max(var_43, 562949953421311));
                    var_44 -= (arr_55 [2] [i_2 - 2] [6] [i_2 + 1]);
                }
                var_45 = (arr_62 [i_13] [i_13] [i_13] [i_13] [i_13] [i_13]);
            }
        }
    }
    for (int i_18 = 0; i_18 < 21;i_18 += 1)
    {
        arr_69 [i_18] = var_11;
        arr_70 [i_18] = (((arr_68 [1]) + ((((arr_67 [i_18]) ? (arr_67 [i_18]) : (((var_3 ? (arr_67 [i_18]) : (arr_67 [i_18])))))))));
    }

    for (int i_19 = 2; i_19 < 8;i_19 += 1)
    {
        /* LoopNest 2 */
        for (int i_20 = 0; i_20 < 12;i_20 += 1)
        {
            for (int i_21 = 0; i_21 < 12;i_21 += 1)
            {
                {
                    var_46 = (arr_3 [i_20] [i_20]);
                    var_47 = (arr_75 [7] [i_20] [i_21]);
                    var_48 -= (arr_4 [i_19] [i_20] [i_19]);
                    var_49 ^= arr_13 [i_21] [i_21] [10] [i_19];
                }
            }
        }
        var_50 = (arr_67 [i_19]);
    }

    /* vectorizable */
    for (int i_22 = 0; i_22 < 14;i_22 += 1)
    {
        arr_80 [i_22] |= var_17;
        var_51 += (((arr_60 [1] [i_22] [i_22] [1]) ? var_5 : (arr_60 [i_22] [i_22] [i_22] [i_22])));
        arr_81 [i_22] = arr_56 [15] [i_22] [i_22] [i_22] [i_22];
    }
    #pragma endscop
}
