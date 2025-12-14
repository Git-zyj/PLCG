/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 87667
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=87667 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/87667
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (((((var_5 & 1) ? ((var_6 ? 1546308045851517144 : var_0)) : 111))) ? (((var_9 ? (!181) : var_3))) : ((-var_3 ? 1546308045851517144 : 88)));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 23;i_1 += 1)
        {
            {
                arr_4 [i_0] [i_1] = ((((((arr_0 [i_1 - 1] [i_1 + 1]) ? (arr_0 [i_1 + 1] [i_1 + 1]) : (arr_0 [i_1 + 1] [i_1 - 1])))) ? ((max(1, (arr_0 [i_1 + 1] [i_1 + 1])))) : ((max((arr_0 [i_1 - 1] [i_1]), (arr_0 [i_1 + 1] [i_0]))))));

                for (int i_2 = 2; i_2 < 21;i_2 += 1) /* same iter space */
                {

                    for (int i_3 = 0; i_3 < 1;i_3 += 1) /* same iter space */
                    {
                        var_15 = (arr_2 [i_0] [i_1 - 1] [1]);
                        var_16 = (max(63815, (arr_6 [i_0])));
                        var_17 = (max(var_17, 74));
                    }
                    /* vectorizable */
                    for (int i_4 = 0; i_4 < 1;i_4 += 1) /* same iter space */
                    {
                        arr_12 [i_1] = var_8;
                        arr_13 [i_1] [22] [5] [22] [i_2] [i_0] = arr_2 [i_0] [7] [16];
                        var_18 = (((181 | var_8) ? (~-75) : ((1948198607 ? 1 : 1546308045851517144))));
                    }
                    for (int i_5 = 1; i_5 < 23;i_5 += 1)
                    {
                        arr_18 [i_0] [i_1] [i_1] [i_5] = (max((((88 & 1) ? ((74 ? (arr_5 [i_0 + 1] [i_1] [i_5]) : (arr_3 [i_1]))) : 3438991703)), (arr_2 [i_0] [i_2 - 1] [i_0])));

                        for (int i_6 = 0; i_6 < 24;i_6 += 1)
                        {
                            var_19 = (var_0 ^ var_7);
                            arr_23 [i_1] [i_2] [i_1] = ((((arr_17 [i_1] [i_1 + 1] [i_1] [i_1 - 1]) & (arr_17 [i_1] [i_1 + 1] [i_1 - 1] [i_1 - 1]))) | (arr_17 [i_1] [i_1 + 1] [i_1] [i_1 - 1]));
                        }
                        for (int i_7 = 0; i_7 < 24;i_7 += 1) /* same iter space */
                        {
                            arr_27 [i_7] [i_1] [i_0] [i_2 + 3] [i_1] [i_0] = (max((((((var_7 / (arr_15 [i_7] [18])))) | (max((arr_3 [i_1]), 74)))), (var_10 || 16384)));
                            arr_28 [i_2] [i_1] = (((((max(var_7, var_8))) ? (max((arr_5 [22] [i_1] [12]), (arr_1 [i_2] [i_2]))) : var_10)));
                            var_20 = (max(var_20, 120));
                            var_21 = var_6;
                        }
                        /* vectorizable */
                        for (int i_8 = 0; i_8 < 24;i_8 += 1) /* same iter space */
                        {
                            var_22 = (min(var_22, (((-(arr_9 [i_0] [i_0] [i_2 - 1]))))));
                            var_23 = (min(var_23, ((((arr_25 [i_2] [i_2]) << (((arr_25 [i_0] [i_1]) - 132)))))));
                            var_24 = (((arr_21 [i_2 + 1] [i_2] [i_2 + 2]) ? (arr_21 [i_2 + 3] [i_2 + 3] [i_2 + 1]) : -14895307));
                        }
                    }
                    for (int i_9 = 0; i_9 < 1;i_9 += 1)
                    {
                        arr_34 [i_1] [9] [i_2] = (+-1806946255);
                        arr_35 [i_0 + 1] [i_1] [i_1] [2] [i_9] = ((((arr_8 [i_0] [i_0] [i_0] [i_0] [i_1]) ? 14895312 : 33030144)) << (((((arr_26 [1]) ? (~1) : (arr_9 [i_2] [i_1] [i_2]))) + 2)));
                        arr_36 [i_0] [i_1] [22] [i_1] = (var_9 / 11829);
                    }
                    var_25 *= var_10;
                    arr_37 [i_1] [i_2] [i_2] |= (((arr_26 [i_0 + 2]) | ((((((-2147483647 - 1) / 88))) ? var_11 : 65520))));
                    arr_38 [i_1] [i_1] = (((max((arr_8 [i_0] [i_1 + 1] [i_2 - 2] [i_0] [i_1]), var_2))) ? (((var_1 ? (arr_31 [i_0 + 2] [i_0 + 1] [i_1] [i_0 + 1] [i_0] [i_2 + 1] [0]) : (arr_31 [i_0 - 2] [i_0 - 1] [i_1] [i_1] [11] [i_2] [i_2])))) : (arr_32 [i_2 - 1] [i_1] [i_2 + 1]));
                    var_26 ^= -2147483643;
                }
                for (int i_10 = 2; i_10 < 21;i_10 += 1) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (int i_11 = 0; i_11 < 24;i_11 += 1)
                    {
                        for (int i_12 = 3; i_12 < 21;i_12 += 1)
                        {
                            {
                                arr_48 [i_0] [i_1] [i_0 + 2] [i_0] [i_0 + 2] = ((((min(14895320, -14895307))) ? (((max((arr_14 [i_10] [11]), var_5)))) : -16412));
                                var_27 = (max((((max(5141019254818060960, 108)))), (arr_30 [i_0 - 1] [i_1] [i_1 - 1] [i_10 - 1] [i_10 - 2])));
                                arr_49 [i_1] [i_1] = var_6;
                                var_28 += (!168);
                            }
                        }
                    }

                    for (int i_13 = 0; i_13 < 24;i_13 += 1) /* same iter space */
                    {
                        arr_52 [i_0] [i_0] [i_1] [i_13] = ((((((max((arr_29 [4] [4] [i_10 - 2] [i_13] [i_1]), var_2))) ? (arr_40 [i_1 + 1] [i_1 + 1]) : (((arr_32 [16] [16] [16]) | (arr_26 [i_0]))))) >= ((((((max(1, 25055))) || ((min(40478, 0)))))))));
                        var_29 = var_2;
                        var_30 = (min(var_30, (((((max(((((arr_2 [i_0] [10] [i_13]) ? (arr_20 [0] [i_1 + 1] [i_10 - 2] [i_13] [i_13] [i_1] [i_10]) : (arr_22 [i_0 - 1] [i_10])))), (arr_44 [i_0] [i_0] [i_13] [i_13] [i_1 + 1] [i_0])))) ? ((((max(var_2, 45443))) ? (max(1546308045851517129, var_2)) : ((((!(arr_7 [1] [i_1 + 1] [i_1] [i_0]))))))) : var_9)))));
                    }
                    for (int i_14 = 0; i_14 < 24;i_14 += 1) /* same iter space */
                    {
                        var_31 ^= ((~(arr_15 [i_0] [i_0])));
                        var_32 = (min(var_32, ((max(-1546521627, (arr_41 [i_0 - 1] [i_10] [0]))))));
                        var_33 &= 40480;
                    }
                    for (int i_15 = 0; i_15 < 24;i_15 += 1) /* same iter space */
                    {
                        var_34 = (max(var_34, 168));
                        var_35 = (min(((((arr_47 [i_1] [i_1] [i_10 - 2] [i_15] [i_10 - 2] [i_10 - 2] [9]) ? ((max(var_1, var_3))) : (max((arr_15 [i_0] [i_1]), var_2))))), -5141019254818060961));
                        arr_58 [i_0 - 1] [i_15] [2] [i_15] |= ((5656264633381640788 ^ ((((!var_11) ? ((((-2147483647 - 1) || var_6))) : 6441)))));
                    }
                }
            }
        }
    }
    var_36 = -var_3;
    #pragma endscop
}
