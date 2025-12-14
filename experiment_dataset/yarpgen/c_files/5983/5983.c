/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 5983
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=5983 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/5983
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_0] [i_1] = 1692458514;
                var_19 = (max((~var_15), var_17));
                var_20 = -var_9;
                var_21 = (max(var_21, (((-((max((arr_2 [i_1]), (arr_2 [i_1])))))))));
            }
        }
    }
    /* LoopNest 3 */
    for (int i_2 = 0; i_2 < 1;i_2 += 1)
    {
        for (int i_3 = 3; i_3 < 9;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 11;i_4 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 1;i_5 += 1)
                    {
                        for (int i_6 = 4; i_6 < 9;i_6 += 1)
                        {
                            {
                                var_22 = var_9;
                                var_23 = (0 + 1);
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_7 = 0; i_7 < 11;i_7 += 1)
                    {
                        for (int i_8 = 1; i_8 < 10;i_8 += 1)
                        {
                            {
                                var_24 ^= ((((!(arr_2 [i_4])))));
                                var_25 |= (((arr_13 [i_2] [i_4] [i_4] [i_8 - 1]) + (((!(((arr_2 [i_2]) < var_16)))))));
                                var_26 = (min(((-(min(var_11, (arr_15 [i_3 - 2] [i_4] [i_7] [i_8 - 1]))))), (0 >= 0)));
                                var_27 -= var_2;
                                arr_23 [i_2] [i_4] [i_3] [i_2] = ((((((arr_19 [i_2] [i_8 - 1] [i_7] [i_7] [i_2]) ? ((var_12 ? var_12 : 11460325337570786922)) : 94))) && ((max((((var_0 ? var_17 : var_0))), (min(18446744073709551615, 18014398509481984)))))));
                            }
                        }
                    }
                    var_28 ^= 1954532681122108198;
                    var_29 = ((((arr_7 [i_2] [i_3]) ? ((((arr_7 [i_2] [3]) ? 0 : var_15))) : -5878)));
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_9 = 3; i_9 < 18;i_9 += 1)
    {
        for (int i_10 = 0; i_10 < 1;i_10 += 1)
        {
            for (int i_11 = 1; i_11 < 17;i_11 += 1)
            {
                {
                    arr_31 [i_11] [i_10] [i_10] [i_11] = (((((96 | (arr_0 [i_9 - 1] [i_9 - 1])))) ^ (((arr_29 [i_9 + 1] [i_10] [i_10] [i_11 + 1]) ? (arr_29 [i_9 - 3] [i_11 + 1] [i_11] [i_11 + 2]) : (-9223372036854775807 - 1)))));
                    var_30 = (arr_30 [i_9] [i_11] [i_11] [i_10]);

                    /* vectorizable */
                    for (int i_12 = 0; i_12 < 1;i_12 += 1) /* same iter space */
                    {
                        var_31 -= -var_5;
                        var_32 += ((~(arr_25 [i_9 - 3])));
                    }
                    /* vectorizable */
                    for (int i_13 = 0; i_13 < 1;i_13 += 1) /* same iter space */
                    {

                        for (int i_14 = 0; i_14 < 19;i_14 += 1)
                        {
                            var_33 -= (arr_26 [i_9 - 3]);
                            var_34 = (((~1954532681122108198) < -94));
                            var_35 = (min(var_35, (((!(var_2 < var_1))))));
                        }
                        for (int i_15 = 2; i_15 < 15;i_15 += 1)
                        {
                            arr_43 [7] [i_11] [i_13] [i_13] [i_13] = ((-(((arr_37 [i_10]) / -112))));
                            var_36 -= (((arr_41 [i_9] [i_15 + 3] [i_15 + 4] [i_13] [0] [i_15] [i_9]) ? (arr_41 [i_9 - 3] [i_13] [i_15 - 1] [i_13] [i_15] [i_15] [i_10]) : (arr_41 [18] [i_13] [i_15 - 2] [i_13] [10] [i_15] [i_11 - 1])));
                        }
                        for (int i_16 = 3; i_16 < 17;i_16 += 1)
                        {
                            var_37 = -16;
                            var_38 = -var_14;
                        }
                        arr_48 [i_9] [i_9] [i_9] [i_11] = ((var_0 ? (arr_42 [i_11] [i_11 + 2] [i_11 + 2] [i_11] [i_11]) : (arr_42 [i_11 + 2] [i_11 + 1] [i_11 + 2] [i_11] [i_11])));
                    }
                    for (int i_17 = 0; i_17 < 1;i_17 += 1) /* same iter space */
                    {
                        var_39 -= (((((arr_46 [i_9] [i_9 + 1] [i_9 - 1] [i_9] [i_9 - 2] [i_9 + 1] [i_9]) / var_16)) / (((-(arr_46 [i_11] [i_11] [i_11] [i_11] [15] [i_11] [i_11]))))));
                        var_40 = (min(var_40, (((32767 ? 32767 : 1)))));

                        for (int i_18 = 2; i_18 < 18;i_18 += 1)
                        {
                            arr_55 [i_9] [i_9] [i_11] [i_17] [i_9] = ((~((~((max((arr_49 [i_11]), (arr_46 [i_18] [i_9 + 1] [i_18 + 1] [18] [i_11] [i_10] [i_9 + 1]))))))));
                            var_41 = (((!(arr_52 [i_18 - 1] [i_18] [6] [i_18] [i_18 + 1]))));
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_19 = 0; i_19 < 0;i_19 += 1)
                    {
                        for (int i_20 = 3; i_20 < 18;i_20 += 1)
                        {
                            {
                                var_42 ^= (((((18010106860310726857 ? (min(1283196367, -10103)) : 4))) ? var_7 : ((-(max((arr_41 [i_9 - 1] [i_10] [i_10] [i_11] [i_11] [14] [i_20 - 2]), 9223372036854775783))))));
                                arr_61 [i_11] = max((max((arr_42 [1] [i_19 + 1] [i_19] [i_19] [i_11 + 1]), (max(1916706616, 10729)))), (var_12 & -32767));
                                var_43 = ((((arr_39 [i_9 - 3] [14] [i_9 - 3] [i_19] [14]) ? (arr_39 [i_9 - 1] [i_9 - 1] [i_20 + 1] [i_19] [i_20]) : (arr_39 [i_9 - 2] [i_11 + 1] [i_20 - 3] [i_19 + 1] [i_11]))));
                                var_44 -= (arr_32 [i_9 - 2] [i_10] [i_10] [i_11] [i_19] [i_20 - 2]);
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
