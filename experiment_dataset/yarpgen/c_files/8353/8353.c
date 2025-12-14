/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 8353
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=8353 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/8353
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (min(var_1, ((((max(var_4, var_13))) ? var_2 : (var_14 & var_17)))));

    for (int i_0 = 4; i_0 < 11;i_0 += 1)
    {
        var_19 += (min((max((max(3481959211, (arr_1 [i_0 + 1] [i_0 + 1]))), 9223372036854775807)), (((15488 || (arr_1 [i_0 - 1] [i_0 - 4]))))));
        var_20 = 9223372036854775807;
        arr_2 [i_0 - 2] [i_0 - 1] = (((((~(arr_0 [i_0 - 2])))) ? ((-(arr_0 [i_0 - 2]))) : ((-(arr_0 [i_0 - 2])))));
    }
    for (int i_1 = 3; i_1 < 9;i_1 += 1)
    {

        /* vectorizable */
        for (int i_2 = 0; i_2 < 11;i_2 += 1)
        {
            var_21 = (min(var_21, (((!(5400618698076441180 > 1))))));
            var_22 += (~107);
            var_23 += ((!(arr_8 [i_1] [i_1 + 2] [6])));
            var_24 = 1;

            for (int i_3 = 2; i_3 < 8;i_3 += 1)
            {
                var_25 = 1;

                for (int i_4 = 1; i_4 < 10;i_4 += 1) /* same iter space */
                {
                    var_26 ^= (arr_11 [i_3] [i_3 + 1] [i_3]);
                    arr_15 [9] [i_2] [7] [i_1] = (arr_8 [i_4 + 1] [i_4 + 1] [i_1]);
                    var_27 += (1 - 504403158265495552);
                    var_28 = (~(arr_11 [i_1] [i_3 - 1] [i_1]));
                }
                for (int i_5 = 1; i_5 < 10;i_5 += 1) /* same iter space */
                {
                    var_29 = ((~(arr_14 [i_3 + 1] [i_1 + 1])));
                    var_30 ^= (~var_8);
                    var_31 = (min(var_31, 0));
                    var_32 = (min(var_32, (1 >> 0)));
                    var_33 = (max(var_33, (((165 ? (arr_16 [i_3 - 1] [i_3 - 1] [i_5]) : (arr_9 [i_3 - 1] [i_3 - 2] [i_3] [i_3 - 1]))))));
                }
                for (int i_6 = 1; i_6 < 10;i_6 += 1) /* same iter space */
                {
                    var_34 = 9223372036854775807;
                    var_35 = (min(var_35, (((9223372036854775807 ? 1 : (arr_18 [i_2] [i_2]))))));
                    var_36 = (min(var_36, (((1 * (arr_10 [i_1 - 3]))))));
                }
                var_37 = 0;
                var_38 = (max(var_38, ((~(arr_11 [i_3] [i_3 - 2] [i_3])))));
            }
            for (int i_7 = 0; i_7 < 1;i_7 += 1) /* same iter space */
            {

                for (int i_8 = 0; i_8 < 11;i_8 += 1)
                {
                    arr_27 [i_1] [i_1] [i_1] [i_1 + 2] = 1915540338;
                    var_39 = ((8191 ? 8679062628566155412 : var_1));
                }
                for (int i_9 = 0; i_9 < 11;i_9 += 1)
                {
                    var_40 *= ((((arr_16 [i_2] [i_2] [i_1]) | 22573)));

                    for (int i_10 = 2; i_10 < 7;i_10 += 1)
                    {
                        arr_33 [i_1] [i_9] [i_7] [i_7] [i_1] [i_1] [i_1] = (((~var_4) ? -15788324592111648599 : (arr_8 [i_1] [i_2] [i_1])));
                        var_41 = 142989288169013248;
                        var_42 = (min(var_42, (~9223372036854775807)));
                        var_43 = ((~(((arr_26 [i_1] [i_1] [i_10 + 3]) ? (arr_26 [i_9] [i_7] [i_1]) : (arr_30 [i_10] [i_9] [i_9] [i_7] [i_2] [i_1])))));
                        var_44 = ((!((!(arr_26 [i_2] [i_2] [i_2])))));
                    }
                    var_45 &= ((1078428141 >= (arr_19 [8])));
                }
                arr_34 [i_1] [i_2] [2] = (((arr_18 [i_1 - 1] [i_2]) ? 1 : 0));
                var_46 -= (~4180662828336777434);
            }
            for (int i_11 = 0; i_11 < 1;i_11 += 1) /* same iter space */
            {
                var_47 = ((!(!2013265920)));

                for (int i_12 = 2; i_12 < 9;i_12 += 1)
                {
                    var_48 = (min(var_48, 140));

                    for (int i_13 = 0; i_13 < 11;i_13 += 1)
                    {
                        arr_44 [i_1] [i_11] [i_2] [i_1] = (((arr_18 [i_11] [i_13]) + ((120 ? 120 : (arr_19 [i_1])))));
                        var_49 = (!9223372036854775807);
                        var_50 = ((!(((-1212644824 ? 1920 : 28077)))));
                    }
                    arr_45 [i_1] [i_1] = 4;
                }

                for (int i_14 = 2; i_14 < 9;i_14 += 1)
                {
                    var_51 = (min(var_51, (!0)));
                    var_52 = 1;
                    var_53 = ((786432 & (arr_23 [i_14 + 2] [i_14 + 2] [i_1 - 1] [i_1 - 3])));
                    var_54 -= 1060684429;
                }

                for (int i_15 = 1; i_15 < 1;i_15 += 1)
                {
                    var_55 = ((~(arr_18 [i_1 - 2] [i_15 - 1])));
                    var_56 = ((-(arr_42 [i_1] [i_15 - 1] [i_11] [i_15] [i_1 + 1] [i_11] [i_2])));
                }
                for (int i_16 = 2; i_16 < 10;i_16 += 1)
                {

                    for (int i_17 = 1; i_17 < 10;i_17 += 1)
                    {
                        arr_58 [i_17] [i_1] [i_11] [i_1] [i_1 - 3] = (~var_8);
                        arr_59 [i_1] [i_1] [i_1] [i_1 - 1] = arr_40 [i_11];
                    }

                    for (int i_18 = 1; i_18 < 7;i_18 += 1) /* same iter space */
                    {
                        var_57 = var_5;
                        var_58 = (~0);
                    }
                    for (int i_19 = 1; i_19 < 7;i_19 += 1) /* same iter space */
                    {
                        arr_64 [i_2] [i_2] [i_2] [i_1] [3] = 0;
                        var_59 ^= (arr_37 [10]);
                        var_60 = (arr_36 [i_1] [i_1] [i_1]);
                        arr_65 [i_1] [i_1] [i_1] = (!-672712181);
                    }
                    for (int i_20 = 2; i_20 < 9;i_20 += 1)
                    {
                        var_61 = (min(var_61, (arr_40 [i_16 + 1])));
                        var_62 = (min(var_62, (~228)));
                    }
                }
            }
            for (int i_21 = 0; i_21 < 11;i_21 += 1)
            {
                arr_71 [i_1] [i_1] = 123;
                arr_72 [i_1] [i_1] [i_21] &= (arr_20 [i_21] [i_2]);
            }
        }
        var_63 = ((((4095329263 >= (arr_6 [i_1])))));
    }
    var_64 = 48;
    #pragma endscop
}
