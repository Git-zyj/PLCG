/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 72986
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=72986 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/72986
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        var_12 = 2130719092859067921;

        for (int i_1 = 2; i_1 < 12;i_1 += 1)
        {
            var_13 = ((((((~2130719092859067921) + 16316024980850483678))) ? (min((arr_2 [i_0] [i_1 - 1]), 17332607150270255911)) : var_10));
            var_14 = var_6;
        }
        /* vectorizable */
        for (int i_2 = 2; i_2 < 13;i_2 += 1) /* same iter space */
        {
            /* LoopNest 2 */
            for (int i_3 = 1; i_3 < 12;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 15;i_4 += 1)
                {
                    {
                        arr_12 [i_3] [i_3] [7] [i_4] [i_3] = ((var_11 >= (!1114136923439295733)));
                        var_15 *= ((var_5 + (arr_4 [i_2 - 1])));
                    }
                }
            }
            var_16 = (arr_6 [i_0] [i_2 - 2]);
        }
        /* vectorizable */
        for (int i_5 = 2; i_5 < 13;i_5 += 1) /* same iter space */
        {
            /* LoopNest 2 */
            for (int i_6 = 0; i_6 < 15;i_6 += 1)
            {
                for (int i_7 = 0; i_7 < 15;i_7 += 1)
                {
                    {
                        var_17 = ((var_1 ? (((var_3 ? var_11 : (arr_11 [i_7] [i_6] [i_0] [i_0])))) : var_8));
                        arr_23 [i_0] [i_7] [i_5] [i_0] [i_7] [i_0] = ((((var_10 ? var_1 : var_10))) ? (((var_9 ? var_6 : (arr_2 [i_0] [i_5])))) : 2130719092859067915);
                    }
                }
            }
            var_18 = ((var_4 ? (arr_17 [i_5 + 2] [i_5 + 2] [i_5 + 2]) : var_11));
            /* LoopNest 3 */
            for (int i_8 = 0; i_8 < 15;i_8 += 1)
            {
                for (int i_9 = 1; i_9 < 12;i_9 += 1)
                {
                    for (int i_10 = 0; i_10 < 15;i_10 += 1)
                    {
                        {
                            var_19 = ((+(((arr_6 [i_0] [i_5 + 1]) ? var_7 : -1042119286893070122))));
                            arr_31 [10] [i_9] [i_9] [i_0] = var_10;
                        }
                    }
                }
            }
        }
    }
    /* vectorizable */
    for (int i_11 = 0; i_11 < 17;i_11 += 1)
    {
        /* LoopNest 3 */
        for (int i_12 = 3; i_12 < 13;i_12 += 1)
        {
            for (int i_13 = 0; i_13 < 17;i_13 += 1)
            {
                for (int i_14 = 2; i_14 < 13;i_14 += 1)
                {
                    {
                        var_20 = (arr_33 [i_12 - 2] [i_12 + 3]);
                        arr_42 [i_14] [i_13] [i_12] [i_13] [i_11] = ((-(arr_39 [i_13] [i_13] [i_12] [i_11])));
                    }
                }
            }
        }
        var_21 = (var_2 - 3);
    }
    var_22 = ((~((var_10 ? (var_3 <= -3) : var_11))));
    /* LoopNest 3 */
    for (int i_15 = 0; i_15 < 10;i_15 += 1)
    {
        for (int i_16 = 0; i_16 < 10;i_16 += 1)
        {
            for (int i_17 = 2; i_17 < 9;i_17 += 1)
            {
                {
                    var_23 = (arr_11 [i_15] [i_15] [i_15] [i_17]);

                    for (int i_18 = 1; i_18 < 9;i_18 += 1)
                    {
                        var_24 = var_4;
                        var_25 *= ((-(min(25510, (arr_17 [i_18 + 1] [i_18] [i_17 - 2])))));

                        /* vectorizable */
                        for (int i_19 = 0; i_19 < 10;i_19 += 1)
                        {
                            var_26 = ((!(((var_10 ? var_3 : 65402)))));
                            var_27 += 16316024980850483700;
                            var_28 = (~var_11);
                            var_29 = -1924691897;
                        }
                        for (int i_20 = 0; i_20 < 10;i_20 += 1)
                        {
                            var_30 += ((((19 % (arr_38 [i_17 - 1] [i_16] [i_17 + 1]))) != ((~(arr_38 [2] [i_16] [i_17 + 1])))));
                            var_31 ^= ((((((!var_11) ? (var_3 <= 1924691896) : 1924691894))) <= (((var_10 + var_3) ? (arr_30 [i_18 + 1]) : (17332607150270255911 ^ 3)))));
                        }
                    }
                    for (int i_21 = 0; i_21 < 10;i_21 += 1) /* same iter space */
                    {
                        var_32 = (arr_55 [i_15] [i_15] [4] [i_21] [i_16] [3] [i_21]);

                        for (int i_22 = 0; i_22 < 10;i_22 += 1)
                        {
                            var_33 = (arr_47 [i_17 - 1] [i_22]);
                            var_34 = ((((var_5 & (arr_15 [i_16] [i_15]))) | -var_6));
                        }
                    }
                    /* vectorizable */
                    for (int i_23 = 0; i_23 < 10;i_23 += 1) /* same iter space */
                    {
                        var_35 -= var_7;
                        var_36 = ((10409 ? (var_9 * var_4) : (((((arr_17 [i_15] [i_15] [i_17]) <= 1924691897))))));
                        var_37 = ((!(arr_9 [i_23])));
                        arr_63 [i_23] [i_15] [i_16] [i_23] = 18085349003834501757;
                    }
                    arr_64 [i_15] [i_16] [i_17] [i_16] = var_4;
                }
            }
        }
    }
    var_38 = ((var_8 & (min((((1924691913 ? var_5 : var_11))), ((var_11 ? -907 : 3942670643152529529))))));

    /* vectorizable */
    for (int i_24 = 0; i_24 < 14;i_24 += 1)
    {
        arr_69 [i_24] = (((arr_0 [9]) ^ (~6)));
        var_39 = var_7;
        var_40 = (((arr_41 [i_24] [i_24] [i_24] [i_24] [i_24] [i_24]) - ((((arr_3 [8]) ? (arr_9 [i_24]) : var_10)))));
        /* LoopNest 2 */
        for (int i_25 = 1; i_25 < 11;i_25 += 1)
        {
            for (int i_26 = 0; i_26 < 14;i_26 += 1)
            {
                {
                    var_41 = (((arr_27 [i_25 + 2] [i_25 + 1] [i_25 + 2] [i_25] [i_25 + 2]) ? (arr_18 [i_25 + 3] [i_25] [i_25 + 2]) : 2130719092859067916));
                    var_42 = arr_37 [i_24] [i_24];
                }
            }
        }
        var_43 = (max(var_43, (((27 ? var_2 : (arr_72 [i_24]))))));
    }
    for (int i_27 = 0; i_27 < 17;i_27 += 1) /* same iter space */
    {
        var_44 = ((var_11 ? ((max((var_7 & var_10), (~var_1)))) : 17332607150270255895));
        var_45 = (((((((1924691901 ? var_3 : 1924691898))) ? -16316024980850483699 : ((-(arr_76 [i_27] [i_27]))))) / (((arr_38 [2] [i_27] [i_27]) / (min(-1924691901, (arr_38 [i_27] [i_27] [i_27])))))));
        var_46 *= (1707176079 ? (~var_0) : 1114136923439295705);
    }
    for (int i_28 = 0; i_28 < 17;i_28 += 1) /* same iter space */
    {
        var_47 *= 92;
        var_48 &= (arr_38 [i_28] [i_28] [i_28]);
    }
    /* vectorizable */
    for (int i_29 = 0; i_29 < 17;i_29 += 1) /* same iter space */
    {
        var_49 ^= 6195164927741768011;

        for (int i_30 = 0; i_30 < 17;i_30 += 1)
        {
            var_50 = ((142 ? 78 : (!var_6)));
            var_51 = var_10;
            arr_87 [i_29] = ((var_9 && (arr_37 [i_29] [i_29])));
        }
    }
    #pragma endscop
}
