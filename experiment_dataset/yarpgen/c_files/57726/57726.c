/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 57726
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=57726 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/57726
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 21;i_2 += 1)
            {
                {
                    var_15 = (arr_4 [i_0] [i_2]);

                    for (int i_3 = 2; i_3 < 20;i_3 += 1)
                    {

                        for (int i_4 = 0; i_4 < 21;i_4 += 1) /* same iter space */
                        {
                            var_16 = (min(var_16, 536870904));
                            var_17 *= (((((var_14 ? var_7 : var_4))) || (((129 ? var_9 : (arr_11 [i_4] [i_1]))))));
                            var_18 *= var_10;
                            arr_15 [i_0] [i_3 + 1] [i_4] = ((28520 ? var_6 : (arr_2 [i_3 + 1])));
                            arr_16 [i_0] [i_1] [i_1] [6] [i_4] [i_0] = (arr_3 [i_0] [11]);
                        }
                        for (int i_5 = 0; i_5 < 21;i_5 += 1) /* same iter space */
                        {
                            var_19 -= 28520;
                            var_20 *= 28520;
                        }
                        for (int i_6 = 0; i_6 < 1;i_6 += 1)
                        {
                            var_21 = (min(var_21, ((((arr_7 [i_1] [i_3] [i_3] [i_3 - 2]) * (!1587795442))))));
                            var_22 = (max(var_22, (var_1 < var_12)));
                        }
                        var_23 |= ((var_4 ? (var_11 - var_0) : var_14));
                        var_24 = (min(var_24, var_8));
                        var_25 += (arr_1 [i_1]);
                        var_26 = (max(var_26, (((~(-2147483647 - 1))))));
                    }
                }
            }
        }

        for (int i_7 = 0; i_7 < 21;i_7 += 1)
        {

            for (int i_8 = 0; i_8 < 21;i_8 += 1) /* same iter space */
            {
                var_27 = (max(var_27, ((((6772410918773469125 + (arr_27 [i_7] [i_7] [i_8] [i_7]))) + (((var_5 ? var_13 : var_4)))))));
                var_28 = (min(var_28, 63));
            }
            for (int i_9 = 0; i_9 < 21;i_9 += 1) /* same iter space */
            {
                var_29 -= ((65472 - (arr_21 [i_0] [i_0] [i_7] [i_7] [i_9] [i_9] [i_9])));

                for (int i_10 = 0; i_10 < 21;i_10 += 1)
                {
                    var_30 = (max(var_30, ((((arr_28 [1] [i_10] [i_9]) ? var_3 : (arr_28 [i_0] [i_0] [i_7]))))));
                    var_31 = (max(var_31, ((((1410729010 | 45007) << (((arr_6 [i_7]) - 14231038192769015611)))))));

                    for (int i_11 = 0; i_11 < 21;i_11 += 1)
                    {
                        var_32 = (max(var_32, ((((arr_25 [10] [0] [i_11]) <= var_7)))));
                        var_33 = (min(var_33, (~37024)));
                    }
                    var_34 |= ((((arr_24 [i_0]) ? (arr_9 [i_10]) : (arr_34 [i_0] [i_7] [i_7] [i_0] [i_7]))));
                    var_35 ^= (arr_4 [i_0] [i_0]);
                }
                for (int i_12 = 0; i_12 < 21;i_12 += 1)
                {
                    var_36 = var_1;
                    var_37 = (max(var_37, (arr_30 [18] [18] [18] [i_12] [i_12] [i_7])));

                    for (int i_13 = 0; i_13 < 21;i_13 += 1)
                    {
                        var_38 = (max(var_38, var_0));
                        arr_41 [i_0] [i_13] [i_12] [i_9] [i_7] [0] [i_0] = (arr_9 [i_7]);
                        var_39 = (min(var_39, var_14));
                    }
                    for (int i_14 = 0; i_14 < 21;i_14 += 1)
                    {
                        var_40 &= var_13;
                        arr_44 [i_0] [i_7] [i_9] [i_12] [14] = (~(arr_13 [i_0]));
                        var_41 = (-(arr_25 [2] [i_12] [i_12]));
                        arr_45 [i_0] [14] [5] [i_0] [i_0] = (arr_7 [i_0] [i_0] [1] [i_0]);
                        var_42 = (max(var_42, ((((arr_4 [i_14] [i_14]) ? (arr_4 [i_12] [i_7]) : (arr_4 [i_0] [i_9]))))));
                    }
                    arr_46 [i_0] [i_9] [i_7] [i_0] = (((arr_33 [i_9] [i_0]) ? (arr_23 [i_0] [i_7] [i_0]) : (arr_8 [i_12] [i_7] [i_9] [i_12])));
                    var_43 -= (((arr_2 [i_9]) ? -1111970405 : (arr_19 [i_9] [10] [i_9] [i_7] [i_9] [i_9] [4])));
                }
                for (int i_15 = 0; i_15 < 21;i_15 += 1)
                {
                    var_44 |= var_13;
                    var_45 += (arr_10 [1] [i_9] [i_0] [i_0]);
                }
            }
            for (int i_16 = 0; i_16 < 21;i_16 += 1) /* same iter space */
            {
                var_46 = (arr_50 [i_0] [2] [i_0] [i_0]);
                var_47 = (((((var_8 - (arr_17 [i_0] [i_7] [i_16] [6])))) ? 28524 : (arr_3 [i_0] [i_7])));
                var_48 &= ((var_3 > (arr_14 [i_0] [i_7] [i_16] [i_16] [i_0] [i_0] [i_7])));
            }
            var_49 = (max(var_49, (((65501 <= (arr_35 [i_0] [16] [i_7] [i_7] [i_7]))))));

            for (int i_17 = 0; i_17 < 21;i_17 += 1)
            {
                var_50 -= ((1736594699 ? (arr_7 [i_0] [i_7] [i_7] [i_17]) : (arr_30 [i_0] [i_0] [i_7] [i_17] [i_17] [i_17])));
                var_51 += (((arr_13 [i_17]) ? var_1 : (!var_12)));
            }
        }
        arr_56 [3] [i_0] = ((28498 ? 54220 : 800554380));

        for (int i_18 = 0; i_18 < 1;i_18 += 1)
        {
            arr_60 [i_18] [i_18] [i_0] = -var_10;
            var_52 = (min(var_52, (-462403583 || var_6)));
        }
    }
    for (int i_19 = 0; i_19 < 17;i_19 += 1)
    {
        var_53 ^= var_3;
        /* LoopNest 2 */
        for (int i_20 = 0; i_20 < 17;i_20 += 1)
        {
            for (int i_21 = 0; i_21 < 17;i_21 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_22 = 0; i_22 < 17;i_22 += 1)
                    {
                        for (int i_23 = 2; i_23 < 14;i_23 += 1)
                        {
                            {
                                var_54 ^= min((min((arr_68 [i_23 + 3] [i_23] [i_23] [i_20] [14] [i_23]), (arr_68 [i_23 + 3] [i_23 + 3] [12] [i_23] [i_23] [i_23 - 2]))), (max((arr_68 [i_23 + 3] [16] [16] [i_21] [i_23] [i_23 + 3]), var_13)));
                                var_55 -= (var_9 <= var_5);
                                var_56 = (min(var_56, (arr_36 [i_19] [i_21] [i_22] [1])));
                            }
                        }
                    }
                    arr_72 [i_19] [i_20] [7] = (i_19 % 2 == zero) ? (((((var_6 >> (((arr_50 [i_19] [i_19] [19] [i_19]) - 1110798360)))) + (var_6 - -var_0)))) : (((((var_6 >> (((((arr_50 [i_19] [i_19] [19] [i_19]) - 1110798360)) - 3064423264)))) + (var_6 - -var_0))));
                }
            }
        }
    }
    /* vectorizable */
    for (int i_24 = 0; i_24 < 23;i_24 += 1) /* same iter space */
    {
        var_57 |= var_13;
        var_58 = (min(var_58, (var_2 ^ var_7)));
    }
    for (int i_25 = 0; i_25 < 23;i_25 += 1) /* same iter space */
    {
        arr_78 [i_25] &= ((37012 + (max((arr_75 [i_25] [i_25]), (arr_74 [6])))));
        arr_79 [i_25] = ((-(arr_74 [14])));
    }
    var_59 = (((min((-1470041735 <= var_7), -var_8)) <= (((((247 ? var_5 : var_6))) ? ((min(var_4, var_4))) : var_0))));
    /* LoopNest 2 */
    for (int i_26 = 0; i_26 < 17;i_26 += 1)
    {
        for (int i_27 = 2; i_27 < 16;i_27 += 1)
        {
            {
                var_60 += (0 >> (52698 - 52696));
                var_61 = ((((!(arr_64 [i_26]))) ? (((255 && (arr_64 [i_27])))) : ((((arr_64 [i_26]) && (arr_64 [i_27 + 1]))))));
                /* LoopNest 2 */
                for (int i_28 = 0; i_28 < 17;i_28 += 1)
                {
                    for (int i_29 = 0; i_29 < 17;i_29 += 1)
                    {
                        {
                            arr_93 [i_26] [i_26] [i_27 + 1] [5] [7] [i_29] |= (~65535);
                            var_62 = (min(var_62, ((((var_2 + 1142631838) && ((((-1087205975 - 96) - 11))))))));
                            arr_94 [i_26] &= (-var_7 && 196);
                            var_63 += (((((arr_68 [i_27 - 2] [i_27] [i_27] [i_27] [i_27 - 1] [i_27]) << (((arr_6 [i_27]) - 59)))) + (min((((arr_49 [10] [1]) ? (arr_11 [i_28] [i_28]) : 1)), (!13)))));
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
