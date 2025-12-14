/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 67460
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=67460 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/67460
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 += (((!32614) || ((max(var_10, var_3)))));
    var_15 = 65529;

    for (int i_0 = 2; i_0 < 10;i_0 += 1)
    {
        var_16 = (min(var_16, ((max(32763, 65510)))));

        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            var_17 = max((((((-(arr_0 [i_0])))) ? (((arr_2 [i_0]) / (arr_1 [i_0]))) : ((65529 ? 511 : 2047)))), (((((-22950 / (arr_2 [i_0])))) ? var_4 : var_5)));
            var_18 = (-246011336 != -1);
        }
        var_19 = (max(var_10, ((-(arr_0 [i_0])))));
    }
    /* vectorizable */
    for (int i_2 = 1; i_2 < 15;i_2 += 1)
    {

        for (int i_3 = 0; i_3 < 16;i_3 += 1)
        {
            var_20 += var_2;
            var_21 = 16882;
        }
        for (int i_4 = 0; i_4 < 16;i_4 += 1) /* same iter space */
        {
            /* LoopNest 3 */
            for (int i_5 = 0; i_5 < 16;i_5 += 1)
            {
                for (int i_6 = 0; i_6 < 16;i_6 += 1)
                {
                    for (int i_7 = 0; i_7 < 16;i_7 += 1)
                    {
                        {
                            arr_20 [i_7] [i_6] [i_6] [i_2 + 1] [i_6] [6] [i_2 + 1] = (arr_12 [i_2 - 1] [i_2]);
                            var_22 *= ((32767 ? (arr_18 [i_2] [i_2] [i_2] [i_5] [i_2] [i_2 + 1]) : (arr_15 [i_2 - 1] [i_2 - 1] [i_2 + 1] [i_5])));
                            var_23 = (min(var_23, var_9));
                        }
                    }
                }
            }

            for (int i_8 = 0; i_8 < 16;i_8 += 1)
            {
                var_24 = arr_11 [i_2] [i_2];
                var_25 = (max(var_25, (((63 ? -880815940 : -17893)))));

                for (int i_9 = 1; i_9 < 15;i_9 += 1)
                {

                    for (int i_10 = 0; i_10 < 16;i_10 += 1)
                    {
                        var_26 = (max(var_26, (arr_10 [i_2] [i_4] [i_8])));
                        var_27 = ((-1 ? (arr_10 [i_9 + 1] [i_9 - 1] [i_9 - 1]) : var_8));
                    }

                    for (int i_11 = 2; i_11 < 15;i_11 += 1)
                    {
                        arr_30 [i_9] [i_4] [i_4] = (((arr_27 [i_2 - 1] [i_2] [i_2 + 1] [i_9]) ? (arr_27 [i_2 - 1] [i_2 - 1] [i_2 - 1] [i_9]) : (arr_23 [i_2 - 1] [i_9] [i_4] [i_11 - 1] [i_11])));
                        var_28 = (((((8191 % (arr_15 [i_2] [i_2] [i_2] [i_9])))) ? (~var_9) : 61756));
                        var_29 = ((~(arr_21 [i_2] [i_9])));
                        var_30 = (min(var_30, (((!(arr_27 [i_2] [i_2] [i_2 - 1] [i_11]))))));
                    }
                    for (int i_12 = 3; i_12 < 15;i_12 += 1)
                    {
                        arr_35 [11] [i_9] = ((-(((arr_32 [i_2 - 1] [12] [i_9] [7]) ? var_5 : (arr_28 [i_2 - 1] [i_2 - 1] [i_2 - 1] [i_2 - 1] [i_2 - 1] [1] [i_2])))));
                        var_31 = (!var_4);
                        var_32 = (max(var_32, ((((arr_13 [i_2] [i_2] [i_2] [i_2 - 1]) <= (3 % var_6))))));
                        var_33 += ((15252 >> (-1531159706 + 1531159707)));
                    }
                    for (int i_13 = 0; i_13 < 16;i_13 += 1)
                    {
                        var_34 = 614017558;
                        var_35 = (min(var_35, (var_7 / var_2)));
                        var_36 = (min(var_36, (~-2047)));
                    }
                }
                for (int i_14 = 3; i_14 < 14;i_14 += 1)
                {

                    for (int i_15 = 0; i_15 < 16;i_15 += 1)
                    {
                        var_37 = (max(var_37, ((((((arr_10 [11] [10] [i_8]) != var_7)) ? var_9 : var_9)))));
                        var_38 ^= ((!(var_2 || var_13)));
                    }
                    arr_44 [2] [i_8] [i_4] [i_2] = ((65535 - (arr_40 [i_2] [i_14 + 2])));
                    var_39 = (min(var_39, (((-(29076 || 29073))))));
                    var_40 = (58998 || 32768);
                    var_41 += 46182;
                }
                for (int i_16 = 0; i_16 < 16;i_16 += 1)
                {
                    var_42 = -26;
                    var_43 = ((6 << (1250350669 - 1250350664)));
                    var_44 = (max(var_44, (arr_26 [i_2] [i_2 - 1] [i_2 + 1] [i_2 - 1] [i_2 - 1] [i_8] [i_16])));
                    arr_49 [i_4] [i_4] [i_8] [i_4] [i_4] [i_4] = (arr_17 [i_2] [i_4] [i_4] [i_4]);
                    var_45 |= (~(~var_12));
                }
            }
        }
        for (int i_17 = 0; i_17 < 16;i_17 += 1) /* same iter space */
        {

            for (int i_18 = 2; i_18 < 14;i_18 += 1)
            {
                arr_54 [i_2] [i_18] [i_2 + 1] = ((-348226163 <= (arr_25 [i_2 - 1] [i_2 + 1] [9] [i_2] [i_2] [i_2 - 1] [i_2])));
                var_46 = (min(var_46, (((((((arr_10 [i_2] [i_17] [1]) << (var_9 - 20093)))) ? 19 : (var_4 / 32767))))));
                arr_55 [i_18] = 793383194;
            }
            /* LoopNest 2 */
            for (int i_19 = 0; i_19 < 16;i_19 += 1)
            {
                for (int i_20 = 2; i_20 < 12;i_20 += 1)
                {
                    {
                        arr_60 [i_19] [i_19] [i_20] [i_20] = (8900 >= 18757);
                        arr_61 [i_20] [i_17] [i_17] [i_20] [i_17] = (((!var_7) ? ((var_9 ? var_8 : (arr_7 [i_19]))) : (!50068)));
                        var_47 += (arr_23 [i_20] [i_19] [i_19] [i_19] [i_20 + 3]);
                    }
                }
            }
        }
        var_48 = ((+(((arr_25 [i_2 + 1] [i_2] [i_2] [i_2] [i_2] [i_2] [i_2]) ? (arr_34 [i_2] [i_2] [i_2 - 1] [4] [2] [i_2] [i_2]) : var_10))));
    }
    for (int i_21 = 0; i_21 < 20;i_21 += 1)
    {
        arr_64 [i_21] = (((max((max((arr_62 [i_21]), (arr_63 [i_21]))), -7)) + ((32769 - (~1)))));
        var_49 -= ((-(!var_12)));
    }
    #pragma endscop
}
