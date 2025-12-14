/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 91222
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=91222 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/91222
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            {

                /* vectorizable */
                for (int i_2 = 1; i_2 < 10;i_2 += 1)
                {
                    arr_7 [i_0] [i_1] [i_2 + 1] = (arr_4 [i_1]);
                    var_18 = (((arr_2 [i_0] [i_2]) >> (arr_0 [3])));
                }
                arr_8 [6] [6] = var_14;
                arr_9 [i_0] [i_0] [i_1] = ((~(((!(arr_4 [i_0]))))));
            }
        }
    }
    /* LoopNest 3 */
    for (int i_3 = 1; i_3 < 23;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 24;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 24;i_5 += 1)
            {
                {
                    var_19 = (arr_13 [i_3]);
                    var_20 = (arr_13 [i_3]);
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_6 = 0; i_6 < 12;i_6 += 1)
    {
        for (int i_7 = 3; i_7 < 10;i_7 += 1)
        {
            for (int i_8 = 2; i_8 < 11;i_8 += 1)
            {
                {
                    var_21 = (max(var_21, ((((max(326440592, 1477228266))) ? var_17 : (((arr_27 [i_7 + 2] [i_8 + 1]) ? var_10 : (max(18324404792695385597, (arr_11 [i_8 + 1])))))))));
                    arr_28 [i_8 - 1] = (arr_24 [6] [i_7] [i_8 + 1]);
                    arr_29 [i_6] = arr_22 [i_6];

                    for (int i_9 = 0; i_9 < 12;i_9 += 1)
                    {
                        var_22 = (max(var_22, (arr_14 [i_6])));
                        var_23 = ((((((arr_17 [i_6] [i_9] [i_6]) ? (arr_27 [i_7 + 2] [i_8 + 1]) : (arr_24 [i_6] [i_8 - 1] [i_8 - 2])))) ? (!var_11) : (((148683464 >= 524287) ? (arr_17 [i_6] [i_9] [i_9]) : (arr_26 [i_6] [4] [i_8 + 1])))));
                    }
                    /* vectorizable */
                    for (int i_10 = 0; i_10 < 12;i_10 += 1) /* same iter space */
                    {
                        var_24 = 61577;
                        arr_34 [i_6] [i_6] [i_6] [i_6] [i_6] &= ((var_15 ? (arr_22 [i_8 - 2]) : (arr_12 [i_7 + 2])));

                        for (int i_11 = 1; i_11 < 8;i_11 += 1)
                        {
                            var_25 += (arr_19 [i_6] [i_6] [i_6] [i_6]);
                            var_26 = (max(var_26, (((!(arr_22 [i_8 + 1]))))));
                            arr_38 [i_6] [i_7 - 3] [i_7] [i_6] [i_11 + 3] [i_7 - 3] [i_8] = arr_33 [i_6] [i_6] [i_6] [i_10] [i_10] [i_11 + 4];
                            var_27 = (max(var_27, ((((arr_32 [i_7 - 2] [i_7 - 3] [i_7 + 1] [i_8 - 2] [i_8 - 1] [i_11 + 3]) || (((63989 ? 17961732511990276092 : 14549586548439213973))))))));
                        }
                        for (int i_12 = 0; i_12 < 12;i_12 += 1)
                        {
                            arr_41 [i_6] [i_7] [i_12] [i_10] [i_12] [i_12] = (arr_35 [i_7] [i_7 - 1] [i_7 - 3] [i_8 - 2] [i_10] [i_12] [i_12]);
                            arr_42 [i_6] [i_6] [2] [i_10] [10] |= (var_7 % -18341);
                            var_28 = (min(var_28, ((((((-(arr_23 [i_6] [i_6])))) ? (arr_35 [i_8 + 1] [i_8 - 1] [i_8 - 1] [i_8 - 2] [i_8 + 1] [i_8 - 1] [i_8 - 2]) : (arr_30 [i_6] [i_7 + 1]))))));
                            var_29 = (min(var_29, (514940754 | 31)));
                        }
                        var_30 ^= (((~(arr_21 [i_6] [i_7 - 1]))));
                    }
                    for (int i_13 = 0; i_13 < 12;i_13 += 1) /* same iter space */
                    {
                        var_31 = 4;
                        arr_45 [i_6] [i_6] [i_8 + 1] [i_7 - 2] [i_8 - 2] [i_6] &= (((((((18446744073709551593 == (arr_27 [i_6] [i_7]))) ? (arr_37 [i_7 + 2]) : ((var_8 ? var_1 : (arr_14 [i_6])))))) ? (max(var_13, (min(9007199254216704, 1947552752)))) : var_1));
                        var_32 = (max(var_32, ((((((~(arr_35 [i_6] [i_7 - 3] [i_7 - 2] [i_7 + 2] [i_7 + 1] [i_7 + 2] [i_8 - 2])))) ? (arr_35 [i_7] [i_7] [i_7 - 2] [i_7 - 1] [i_8 + 1] [i_8 - 1] [i_8]) : (arr_35 [i_6] [i_7 - 3] [i_7 - 3] [i_7 + 2] [i_7 - 3] [i_8 - 2] [i_8 - 2]))))));
                    }
                    for (int i_14 = 0; i_14 < 12;i_14 += 1) /* same iter space */
                    {
                        arr_49 [i_6] [i_7] [i_7 - 2] [i_14] = ((!(arr_18 [i_6] [i_7 + 1] [i_8] [i_14])));
                        arr_50 [i_6] [i_6] = ((~(((arr_47 [i_7] [i_7 + 1] [i_7 + 1] [i_7] [i_7 - 2] [i_7 - 3]) | var_15))));
                    }
                    /* LoopNest 2 */
                    for (int i_15 = 0; i_15 < 12;i_15 += 1)
                    {
                        for (int i_16 = 0; i_16 < 12;i_16 += 1)
                        {
                            {
                                arr_55 [i_6] [i_7] [i_8 + 1] [i_15] [i_16] = max((arr_20 [i_6]), (((((((arr_11 [i_15]) ? 1 : (arr_23 [i_6] [i_8])))) && ((((arr_33 [i_6] [i_6] [i_7] [i_8 - 1] [i_15] [i_16]) ? (arr_13 [i_6]) : (arr_24 [i_6] [i_7 - 3] [i_15]))))))));
                                var_33 = (arr_39 [i_6] [i_7 - 2] [i_8 - 2] [i_15] [5]);
                            }
                        }
                    }
                }
            }
        }
    }
    var_34 = (max((((var_0 < (var_12 <= var_9)))), (max(((var_12 ? var_17 : var_10)), -148683462))));
    #pragma endscop
}
