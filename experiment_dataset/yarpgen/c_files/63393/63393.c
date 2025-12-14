/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 63393
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=63393 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/63393
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 9;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    arr_7 [i_2] [i_1 + 1] [i_1 + 3] [i_2] = ((!(((arr_5 [i_2] [i_1 - 2] [i_1 - 1] [i_2]) && (arr_5 [i_2] [i_1 - 2] [i_1 + 4] [i_2])))));
                    arr_8 [i_1] [8] |= (arr_1 [i_1]);

                    /* vectorizable */
                    for (int i_3 = 2; i_3 < 11;i_3 += 1)
                    {
                        var_12 ^= (arr_5 [i_0] [i_1] [i_3] [i_1]);
                        var_13 = (arr_9 [i_3 - 1] [i_2] [i_2] [i_1 + 1] [i_2] [i_0]);
                    }
                    for (int i_4 = 3; i_4 < 12;i_4 += 1)
                    {
                        arr_14 [i_2] = ((((max(174, 65535))) ? (((max(65522, 174)))) : (((arr_5 [i_0] [i_4 + 1] [i_2] [i_2]) ^ ((~(arr_3 [2] [i_4 - 1])))))));
                        var_14 = (max(var_14, (((var_5 << ((((((12796 ? (arr_4 [i_0] [i_1]) : var_6)) ^ (arr_2 [i_4 + 1]))) - 17270490142684862104)))))));
                    }
                }
            }
        }
    }

    /* vectorizable */
    for (int i_5 = 2; i_5 < 16;i_5 += 1)
    {
        var_15 = (((arr_17 [i_5 - 1] [i_5 + 1]) ? 174 : var_11));
        var_16 = ((82 || (arr_15 [i_5 - 1])));
        arr_18 [i_5] = ((-(arr_17 [i_5 + 1] [i_5 - 1])));
    }
    for (int i_6 = 4; i_6 < 15;i_6 += 1)
    {
        /* LoopNest 2 */
        for (int i_7 = 2; i_7 < 13;i_7 += 1)
        {
            for (int i_8 = 0; i_8 < 17;i_8 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_9 = 0; i_9 < 17;i_9 += 1)
                    {
                        for (int i_10 = 0; i_10 < 17;i_10 += 1)
                        {
                            {
                                var_17 = (min(var_17, (((((((arr_33 [i_6 + 2] [i_6] [i_6] [i_6 - 1] [i_6 + 2] [i_6] [i_6 + 2]) ? (arr_33 [i_6 - 3] [i_6 - 1] [i_6] [12] [i_6 - 4] [i_6 + 2] [i_6 + 1]) : (arr_33 [i_6 - 4] [i_6] [i_6] [1] [i_6 - 1] [i_6 + 2] [1])))) ? ((min(var_8, (arr_33 [i_6 - 2] [i_6 - 1] [i_6] [i_6] [i_6 - 1] [i_6] [i_6])))) : (arr_33 [i_6 - 3] [0] [i_6 - 2] [8] [i_6 - 2] [i_6 - 2] [i_6 - 4]))))));
                                var_18 = (max(var_18, (max(var_1, ((((~12784) && ((((arr_23 [i_7]) + var_6))))))))));
                            }
                        }
                    }

                    for (int i_11 = 0; i_11 < 17;i_11 += 1)
                    {
                        var_19 = (max(var_19, ((((max(524287, (174 | 1893660326))) != (((-((((arr_29 [i_11]) != 12787)))))))))));
                        var_20 = (var_5 ? ((((arr_33 [11] [12] [12] [i_6 - 4] [i_6 - 2] [i_6 - 1] [i_6]) ? (arr_33 [i_6 - 4] [i_7 - 1] [i_8] [i_11] [i_8] [i_6 - 4] [i_7 + 1]) : (arr_33 [i_6 + 2] [i_6 - 1] [i_6 - 1] [i_6 + 2] [5] [i_6 - 2] [i_6 + 1])))) : (min(8849145185183990401, var_11)));
                        var_21 = ((+(((arr_35 [i_7 - 1] [i_11] [10] [9]) ? var_10 : var_3))));
                        var_22 = (min(var_22, 1));
                    }
                    for (int i_12 = 0; i_12 < 17;i_12 += 1)
                    {
                        arr_41 [i_6] [i_7 - 2] [i_8] [i_8] = (arr_27 [i_6 + 2] [i_6 + 2] [i_6 + 2]);
                        var_23 = (max(var_23, ((((arr_20 [i_6 + 2]) || (((~(arr_39 [i_6] [i_6] [i_6] [i_6] [i_6 - 2] [i_6])))))))));
                    }
                    for (int i_13 = 0; i_13 < 17;i_13 += 1) /* same iter space */
                    {
                        var_24 = (min(((max((arr_26 [i_6 - 2]), (arr_26 [i_6 - 1])))), ((var_7 - (!1428224672)))));

                        /* vectorizable */
                        for (int i_14 = 1; i_14 < 14;i_14 += 1)
                        {
                            var_25 *= (((12778 ? 113 : 12782)));
                            var_26 = (((((((arr_44 [i_8] [i_8] [i_8] [i_8] [i_8] [i_8] [i_8]) > (arr_34 [i_6] [i_7 + 1] [i_8] [i_13] [i_14 - 1]))))) < var_3));
                        }
                        var_27 = (min(var_27, (((0 ? (arr_27 [i_7 + 4] [11] [i_7 + 4]) : ((min((arr_27 [i_7 + 2] [i_8] [i_8]), (arr_27 [i_7 + 3] [i_7 + 3] [i_7 + 3])))))))));
                    }
                    for (int i_15 = 0; i_15 < 17;i_15 += 1) /* same iter space */
                    {
                        var_28 = (arr_16 [i_6] [i_7]);
                        arr_51 [i_6 - 2] [i_8] [i_8] [i_15] [i_6 - 2] = (~3479720952);
                        var_29 = (((((max(204, 68))) >> (((arr_45 [i_6 + 2]) - 1888952978)))));
                        var_30 = (max(var_30, ((((+-120) > (((max((arr_26 [i_8]), (arr_32 [i_6] [13] [13] [13]))))))))));
                        var_31 = ((~(arr_47 [i_15] [i_15] [i_8] [12] [i_6])));
                    }
                }
            }
        }
        arr_52 [i_6] = (max((arr_45 [i_6 - 4]), 7303208330586752902));
        arr_53 [i_6] = (((((!(((221 ? 1 : 16556)))))) + ((127 + ((108 - (arr_42 [i_6 - 3] [i_6] [i_6] [i_6])))))));
    }
    var_32 -= var_7;
    var_33 = (!var_3);
    #pragma endscop
}
