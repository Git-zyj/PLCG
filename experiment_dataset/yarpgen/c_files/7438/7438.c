/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 7438
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=7438 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/7438
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = ((((1534789103 ? 15 : var_1))) ? (((((var_2 ? var_10 : var_1))) ? var_9 : var_10)) : var_8);
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 12;i_2 += 1)
            {
                {
                    var_13 -= (min(var_11, var_4));
                    arr_9 [i_1] [i_1] [i_2] = (((arr_2 [i_0]) ? var_2 : var_1));
                    arr_10 [i_1] [i_1] [i_1] = (arr_2 [i_0]);
                    var_14 ^= (((var_10 ? var_3 : (arr_4 [i_1] [i_1] [i_0]))));
                }
            }
        }
    }

    for (int i_3 = 2; i_3 < 10;i_3 += 1)
    {
        /* LoopNest 2 */
        for (int i_4 = 0; i_4 < 12;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 12;i_5 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 1;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 0;i_7 += 1)
                        {
                            {
                                arr_21 [i_6] [i_5] [i_5] [i_4] [i_4] [i_6] = ((+(((arr_15 [i_5] [i_5]) ? var_1 : (arr_18 [i_7] [i_6] [i_5] [i_6] [i_3])))));
                                var_15 = ((var_1 ? var_6 : (((arr_1 [i_6] [i_4]) << ((((var_0 ? var_6 : var_6)) - 54))))));
                                arr_22 [i_6] [i_5] [i_5] [i_5] [i_4] [i_5] [i_4] = var_0;
                            }
                        }
                    }
                    var_16 ^= ((!(((-65535 ? ((var_6 ? var_8 : (arr_13 [i_4] [i_4]))) : var_0)))));

                    for (int i_8 = 2; i_8 < 10;i_8 += 1)
                    {
                        var_17 = var_10;
                        var_18 = ((~((50 ? ((8 ? var_5 : (arr_5 [i_5]))) : (((~(arr_8 [i_5] [i_4]))))))));
                        var_19 = var_5;
                        arr_25 [5] [i_4] [5] [10] [5] = (arr_17 [i_8 + 2] [i_3] [i_8 - 1] [i_8 - 1]);
                    }
                    /* vectorizable */
                    for (int i_9 = 0; i_9 < 12;i_9 += 1)
                    {
                        arr_28 [i_4] [i_3] [i_3] &= var_2;
                        var_20 *= ((((((arr_11 [0]) ? (arr_2 [i_3]) : 939524096))) ? ((var_8 ? (arr_0 [i_5] [i_9]) : (arr_20 [i_3] [i_4] [9] [i_5] [i_9] [8]))) : 0));
                        arr_29 [i_3] [i_4] [i_9] = var_11;

                        for (int i_10 = 0; i_10 < 12;i_10 += 1)
                        {
                            var_21 = (min(var_21, (var_8 ^ var_9)));
                            var_22 = (((arr_5 [i_10]) ? (arr_5 [i_10]) : (arr_5 [i_10])));
                            var_23 = (max(var_23, ((((arr_17 [i_3] [i_5] [i_3] [i_3 - 2]) << (((arr_20 [i_3 + 1] [i_3 + 2] [i_3] [i_3 + 2] [i_3 + 2] [i_3]) - 29938)))))));
                            var_24 = (max(var_24, var_8));
                            arr_34 [i_10] [i_10] [i_10] [i_5] [i_10] [i_4] [i_3] = var_9;
                        }
                        var_25 = (((arr_5 [i_9]) ? var_4 : (arr_31 [i_3 + 1])));
                    }
                    for (int i_11 = 1; i_11 < 1;i_11 += 1)
                    {
                        arr_38 [i_11] [i_3] [1] [i_3] = (((((var_6 ? -1583422946 : (arr_24 [i_3 - 1] [i_11] [i_11 - 1] [i_3 - 1] [i_11])))) ? (arr_18 [i_11] [i_5] [0] [i_5] [6]) : (arr_24 [i_3 - 1] [i_3 - 1] [i_11 - 1] [i_11 - 1] [i_11])));
                        arr_39 [i_4] [i_4] [i_4] [7] = (((arr_23 [i_4] [i_5]) ? ((((arr_3 [i_4]) ? (arr_3 [i_4]) : (arr_3 [i_5])))) : ((var_0 ? (arr_37 [i_3 - 1] [i_4] [i_11 - 1] [i_11] [i_4]) : (arr_37 [i_3 - 1] [i_4] [i_11 - 1] [i_11 - 1] [i_11 - 1])))));
                        var_26 += ((min((((var_9 && (arr_8 [i_3] [i_3])))), 137)));
                        arr_40 [i_3 + 1] [i_3] [i_3 + 1] [i_3 + 1] = (max((((((((arr_6 [i_3 - 1] [i_4]) ? var_3 : var_1))) ? (arr_0 [i_11 - 1] [i_3 - 1]) : 0))), ((((((arr_14 [i_5] [i_11]) ? var_2 : var_1))) ? ((var_8 ? var_10 : 2744609839)) : ((min(var_3, (arr_8 [i_5] [i_5]))))))));
                    }
                    for (int i_12 = 0; i_12 < 1;i_12 += 1)
                    {
                        var_27 = (min(var_27, (((-(var_1 == var_1))))));
                        var_28 = (max(var_28, ((((arr_42 [i_3] [i_4] [i_3] [i_3] [i_3 + 2] [i_3]) ? (!var_11) : (arr_41 [i_12] [i_3 - 1] [i_3 - 2]))))));
                    }
                }
            }
        }

        for (int i_13 = 0; i_13 < 12;i_13 += 1)
        {
            /* LoopNest 2 */
            for (int i_14 = 0; i_14 < 12;i_14 += 1)
            {
                for (int i_15 = 1; i_15 < 10;i_15 += 1)
                {
                    {
                        var_29 -= var_1;
                        var_30 = (max(var_30, ((((arr_16 [i_3 + 2]) > var_10)))));

                        for (int i_16 = 0; i_16 < 12;i_16 += 1)
                        {
                            var_31 = (((((var_8 ? ((var_11 ? var_0 : var_11)) : (arr_27 [i_15] [i_13] [i_14] [i_15] [i_13] [i_15])))) || ((min(15, (arr_8 [i_13] [i_13]))))));
                            var_32 += (((arr_13 [i_3] [4]) - (arr_23 [i_3 - 1] [i_3 + 2])));
                        }
                    }
                }
            }
            arr_56 [i_13] [i_13] = ((((((arr_32 [i_13] [i_3 + 1] [i_3 + 2] [i_13]) >> (((arr_32 [i_13] [i_3 - 2] [i_3 + 1] [i_3]) - 176))))) ? var_5 : ((((-var_3 <= (arr_46 [i_3])))))));
            /* LoopNest 2 */
            for (int i_17 = 0; i_17 < 12;i_17 += 1)
            {
                for (int i_18 = 0; i_18 < 0;i_18 += 1)
                {
                    {
                        var_33 = ((!(((-((((arr_59 [3] [i_13]) == var_3))))))));
                        var_34 = (((var_5 | (arr_45 [i_3 - 2]))) - ((((arr_45 [i_3 + 1]) ? (arr_61 [i_3 + 1]) : var_11))));
                        var_35 = (!var_6);
                        var_36 = var_3;
                    }
                }
            }
            var_37 = var_10;
        }
        for (int i_19 = 0; i_19 < 12;i_19 += 1)
        {
            arr_67 [i_3] = max(((var_4 << (((!0) - 1)))), (((-(((arr_27 [i_3] [i_19] [i_19] [i_3] [i_3] [i_3]) ? var_9 : var_5))))));
            var_38 = (max(var_38, (((-100 ? 146 : 1)))));
            arr_68 [i_3] = (arr_50 [i_3] [i_3 + 2] [i_3]);
        }
        var_39 = ((((max(((var_7 ? var_4 : var_0)), var_6))) ? (((((((arr_8 [i_3] [i_3]) ? (arr_63 [i_3] [i_3] [i_3 + 2] [i_3 - 2]) : (arr_49 [i_3 - 2] [1] [1])))) && (arr_48 [i_3] [i_3 - 1] [i_3])))) : ((((max(var_11, var_5)) < (arr_55 [i_3 - 1] [i_3 - 1] [i_3] [i_3] [i_3 + 1]))))));

        /* vectorizable */
        for (int i_20 = 0; i_20 < 12;i_20 += 1)
        {
            /* LoopNest 2 */
            for (int i_21 = 1; i_21 < 11;i_21 += 1)
            {
                for (int i_22 = 1; i_22 < 11;i_22 += 1)
                {
                    {
                        var_40 = var_0;
                        var_41 = (!var_0);
                    }
                }
            }
            arr_76 [i_20] [i_20] = (arr_6 [i_3] [i_20]);
        }
        /* vectorizable */
        for (int i_23 = 0; i_23 < 12;i_23 += 1) /* same iter space */
        {
            arr_80 [i_23] = ((((arr_14 [i_3 - 1] [i_3]) ? (-9223372036854775807 - 1) : -939524097)));
            var_42 = (min(var_42, ((((((arr_26 [9] [i_23] [i_23] [i_23] [i_23]) ? var_1 : var_0)) >> ((((0 ? var_5 : var_6)) - 56)))))));
        }
        /* vectorizable */
        for (int i_24 = 0; i_24 < 12;i_24 += 1) /* same iter space */
        {
            var_43 = (arr_41 [i_3] [i_24] [i_24]);
            var_44 = (min(var_44, (((-(arr_54 [9] [i_24] [i_24] [i_3 - 1] [i_3 + 1]))))));
            var_45 = (max(var_45, ((((((-(arr_65 [i_3])))) ? var_0 : (arr_50 [i_24] [i_24] [i_3]))))));
            var_46 &= ((var_3 ? (arr_31 [i_3 - 1]) : var_11));
        }
    }
    var_47 = ((79205356403648414 ? ((min(var_1, var_5))) : (((1534789102 * (!var_1))))));
    #pragma endscop
}
