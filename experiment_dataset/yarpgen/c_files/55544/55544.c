/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 55544
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=55544 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/55544
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        var_17 = -25;
        arr_3 [10] = (((((-(((arr_2 [13]) * var_15))))) ? (((var_9 % var_1) >> ((var_1 ? (arr_2 [i_0]) : var_10)))) : (var_1 | var_8)));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 4; i_2 < 12;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 15;i_3 += 1)
                    {
                        for (int i_4 = 4; i_4 < 14;i_4 += 1)
                        {
                            {
                                arr_17 [i_0] [i_1] [i_4] [5] = (arr_16 [i_0] [i_1] [i_0]);
                                var_18 = (min(var_18, 37601));
                            }
                        }
                    }

                    for (int i_5 = 2; i_5 < 14;i_5 += 1)
                    {
                        arr_21 [i_0] [i_1] [i_2] [i_5] [i_2] [8] = (((((-((var_8 ? 1 : 3257080359))))) ? var_12 : (arr_19 [i_1] [i_2 - 3] [i_2] [i_1] [i_5])));

                        for (int i_6 = 4; i_6 < 11;i_6 += 1)
                        {
                            var_19 += (((((1 ? 44 : (arr_8 [12] [12] [13])))) ? 2919265263748027937 : (!var_6)));
                            var_20 = ((((min(var_11, (arr_15 [i_0] [i_1] [i_0] [i_5] [i_6] [i_0] [5])))) ? (((var_11 ? var_9 : var_16))) : ((0 ? 9598804154375900679 : (8847939919333650936 ^ 8847939919333650936)))));
                        }
                        for (int i_7 = 0; i_7 < 15;i_7 += 1)
                        {
                            var_21 ^= var_2;
                            var_22 ^= (((((~(arr_0 [i_5 + 1] [i_5])))) % (min((var_6 - var_10), (((var_9 ? 64512 : (arr_12 [i_0] [12] [i_2] [i_0] [i_5] [i_7]))))))));
                            var_23 = (max(var_23, ((max((((min(var_3, 56)))), (((arr_19 [i_1] [i_1] [i_2] [1] [i_7]) ? ((79 - (arr_1 [i_2] [i_5]))) : ((-(arr_2 [i_0]))))))))));
                        }

                        /* vectorizable */
                        for (int i_8 = 0; i_8 < 15;i_8 += 1)
                        {
                            var_24 = ((!(arr_12 [i_0] [i_2] [i_2 - 2] [i_5 + 1] [13] [i_5])));
                            var_25 *= (231 == -30938);
                        }
                        for (int i_9 = 3; i_9 < 12;i_9 += 1)
                        {
                            arr_31 [10] [10] = (arr_20 [i_0] [i_0] [i_0] [i_0] [i_9]);
                            var_26 = ((~(arr_27 [i_5] [i_5] [i_2] [i_5])));
                        }
                        /* vectorizable */
                        for (int i_10 = 0; i_10 < 15;i_10 += 1)
                        {
                            arr_34 [i_10] [10] [i_2] [i_1] [i_0] = (-2147483647 - 1);
                            var_27 |= ((!(arr_30 [i_1] [i_2 + 2] [i_5 - 2] [i_5] [i_5])));
                            var_28 = 568549689;
                            var_29 += (((arr_19 [11] [i_2 + 1] [i_5 - 2] [i_5] [9]) % var_12));
                        }
                    }
                    for (int i_11 = 0; i_11 < 15;i_11 += 1)
                    {
                        arr_37 [i_11] [i_0] [i_0] [i_0] = (min(var_4, (max((arr_32 [i_0] [i_1] [i_2 - 3] [12]), ((((arr_24 [i_0] [4] [i_0] [i_1] [i_11]) <= 1152921504606846976)))))));
                        arr_38 [i_0] [i_11] = (arr_23 [i_1]);
                    }
                }
            }
        }

        for (int i_12 = 3; i_12 < 14;i_12 += 1)
        {
            var_30 = var_0;

            for (int i_13 = 1; i_13 < 14;i_13 += 1)
            {
                var_31 = ((((~(min(var_10, (arr_23 [i_0]))))) >> (((arr_10 [i_0] [i_12] [i_13] [i_13 + 1]) - 16038))));

                for (int i_14 = 0; i_14 < 15;i_14 += 1) /* same iter space */
                {
                    var_32 = (min(var_32, (arr_44 [i_12] [3] [i_12 + 1] [i_13 + 1])));
                    var_33 = 8847939919333650946;
                    arr_45 [i_0] [i_0] [i_14] [11] [2] = arr_9 [i_0] [0] [i_12] [i_13] [i_14];
                }
                for (int i_15 = 0; i_15 < 15;i_15 += 1) /* same iter space */
                {
                    var_34 = var_0;
                    var_35 = (max(18446744073709551615, 29872));
                    arr_48 [i_0] [1] [i_13] [i_0] [i_12] = (((((~var_5) + 2147483647)) << ((((-var_9 ? var_13 : var_0)) - 8292151056257047660))));
                    var_36 *= (((((!-1631943116) && ((((arr_43 [10] [i_13] [i_12] [i_0]) ? var_15 : var_1))))) || ((((min(var_9, var_13))) && ((min(17689, 65535)))))));
                }
                /* vectorizable */
                for (int i_16 = 0; i_16 < 15;i_16 += 1) /* same iter space */
                {
                    var_37 = (arr_13 [i_0] [i_0] [13] [i_0] [i_16]);

                    for (int i_17 = 0; i_17 < 15;i_17 += 1)
                    {
                        var_38 = (arr_16 [14] [i_12 - 2] [i_0]);
                        arr_55 [i_17] [i_17] [i_13] = -var_1;
                        arr_56 [i_17] = 9598804154375900695;
                    }
                    var_39 = (-(arr_41 [i_12 + 1] [10] [i_12]));
                }
                arr_57 [i_0] [i_0] [i_13] [i_12] = var_9;
            }
        }
    }
    var_40 = var_11;
    var_41 = (((var_5 ? (max(var_9, var_10) : var_8))));
    var_42 = (4611686017890516992 >> 4);
    #pragma endscop
}
