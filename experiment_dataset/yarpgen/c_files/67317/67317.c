/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 67317
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=67317 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/67317
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            {
                var_14 = ((((min((arr_2 [i_0]), (((!(arr_5 [i_0] [i_0]))))))) ^ (((arr_3 [i_0] [i_1]) >> (((arr_1 [i_0] [i_1]) - 41834))))));
                var_15 = (arr_5 [i_1] [i_1]);
                arr_6 [i_0] = ((((max((arr_2 [i_0]), (arr_2 [i_0])))) ? (arr_2 [i_0]) : (arr_2 [i_1])));

                for (int i_2 = 0; i_2 < 14;i_2 += 1) /* same iter space */
                {
                    var_16 = 32002;
                    arr_9 [5] [5] [i_2] [5] = (arr_3 [i_0] [i_1]);
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 3; i_4 < 13;i_4 += 1)
                        {
                            {
                                var_17 = (((((arr_15 [i_3] [i_4 - 3] [i_1] [12] [i_4]) ^ (arr_15 [i_0] [i_4 - 2] [i_4 - 2] [i_1] [11]))) % (arr_15 [i_0] [i_4 - 1] [1] [i_3] [0])));
                                var_18 = ((1008 ? (((arr_11 [7] [i_2] [7]) ^ (((arr_3 [i_0] [i_4 - 1]) >> (((arr_10 [i_0] [0] [0] [1]) - 63013)))))) : (((!(arr_12 [i_4] [i_4] [i_4 - 3] [12] [i_4]))))));
                            }
                        }
                    }
                    arr_16 [i_0] [i_0] = 4294966293;
                }
                for (int i_5 = 0; i_5 < 14;i_5 += 1) /* same iter space */
                {
                    var_19 = ((((max((((arr_1 [i_1] [1]) * (arr_13 [5] [i_1] [i_1] [i_5] [i_5] [i_5]))), (arr_4 [i_0])))) ? (((((arr_14 [i_0]) > (((arr_12 [i_0] [i_0] [i_0] [i_1] [i_0]) ? 1 : (arr_12 [i_0] [i_0] [i_1] [i_5] [i_5]))))))) : (arr_3 [i_0] [i_1])));
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 14;i_6 += 1)
                    {
                        for (int i_7 = 1; i_7 < 13;i_7 += 1)
                        {
                            {
                                var_20 ^= ((-(((((arr_15 [i_7 + 1] [i_7 + 1] [i_7 + 1] [i_0] [0]) + 2147483647)) >> (((((arr_15 [i_0] [i_1] [i_1] [i_6] [i_1]) + 4294966300)) - 4294966215))))));
                                var_21 = (arr_1 [i_0] [i_0]);
                            }
                        }
                    }
                    arr_24 [i_0] [i_1] &= ((((min((arr_5 [i_1] [i_5]), (arr_5 [i_1] [i_5])))) ? (((76564801 <= (arr_5 [i_0] [i_5])))) : (arr_5 [i_0] [i_5])));
                    arr_25 [i_0] [i_1] [i_5] &= ((((((max(var_13, (arr_19 [i_0] [i_1] [i_0] [i_1]))) * 51566))) ? (((((arr_14 [i_0]) >= (arr_15 [i_0] [i_0] [1] [i_5] [i_1]))))) : ((~(arr_20 [i_1])))));
                    /* LoopNest 2 */
                    for (int i_8 = 3; i_8 < 12;i_8 += 1)
                    {
                        for (int i_9 = 0; i_9 < 1;i_9 += 1)
                        {
                            {
                                var_22 = (-37 * 1);
                                arr_32 [i_9] = (max(979, ((((33511 ? 8589933568 : 26154))))));
                                var_23 = ((~(((max((arr_23 [i_5] [i_9]), (arr_19 [i_0] [i_1] [i_8] [i_1]))) & (arr_1 [i_8 - 1] [i_9])))));
                                var_24 = ((((max(114, (max(1, (arr_27 [i_9])))))) ^ ((~(arr_7 [4])))));
                            }
                        }
                    }
                }
                for (int i_10 = 0; i_10 < 14;i_10 += 1) /* same iter space */
                {
                    arr_35 [i_0] [i_1] [1] [i_10] = (max((arr_23 [i_0] [i_1]), var_7));
                    /* LoopNest 2 */
                    for (int i_11 = 1; i_11 < 1;i_11 += 1)
                    {
                        for (int i_12 = 1; i_12 < 1;i_12 += 1)
                        {
                            {
                                var_25 = (max(1530896453, 1));
                                arr_42 [i_12] = (var_10 <= (arr_40 [i_11] [i_11] [i_11] [i_11] [i_12 - 1] [i_12 - 1] [i_12]));
                                var_26 = (arr_34 [i_0] [i_0] [i_10]);
                            }
                        }
                    }
                }
                /* vectorizable */
                for (int i_13 = 0; i_13 < 14;i_13 += 1)
                {
                    arr_46 [i_0] [i_0] [1] &= (arr_18 [i_13] [i_13]);

                    for (int i_14 = 3; i_14 < 12;i_14 += 1)
                    {
                        arr_50 [i_14] [11] [5] = (arr_33 [i_0] [i_13]);
                        var_27 = (((var_10 + var_10) / (arr_44 [i_14 + 1] [i_1] [i_13])));
                    }
                    for (int i_15 = 0; i_15 < 14;i_15 += 1)
                    {
                        var_28 = (((arr_40 [i_0] [i_0] [i_1] [i_0] [i_0] [i_13] [i_15]) ^ (arr_40 [i_0] [i_1] [i_1] [i_13] [i_13] [1] [i_15])));

                        for (int i_16 = 0; i_16 < 14;i_16 += 1)
                        {
                            arr_58 [i_16] [i_15] [i_13] [10] [10] = (arr_3 [i_13] [i_15]);
                            arr_59 [i_0] [i_0] [i_13] = ((1530896453 ? (arr_11 [i_0] [i_13] [i_13]) : (arr_11 [i_0] [i_1] [i_15])));
                            arr_60 [i_13] [i_13] = var_3;
                            arr_61 [i_0] [7] [i_13] [i_15] [i_16] [7] [i_16] = 9172327670623548778;
                        }
                        for (int i_17 = 0; i_17 < 14;i_17 += 1)
                        {
                            var_29 &= (arr_63 [i_0] [i_1] [i_13] [11]);
                            var_30 = ((~(var_2 - var_1)));
                            arr_64 [i_0] [13] = var_6;
                            var_31 = (min(var_31, (arr_53 [i_13] [1] [i_1])));
                            var_32 = 127;
                        }
                        var_33 = (min(var_33, ((((arr_4 [i_1]) ? (arr_39 [i_0] [i_1] [i_13] [i_1] [i_15] [i_1] [i_15]) : (((arr_20 [i_1]) ? (arr_36 [3] [i_1] [i_13] [i_15]) : (arr_49 [i_0]))))))));
                    }
                    for (int i_18 = 0; i_18 < 14;i_18 += 1)
                    {
                        var_34 |= ((~(arr_3 [i_1] [i_18])));
                        arr_67 [i_0] [i_0] [i_13] [i_18] = (((arr_13 [i_0] [i_0] [i_0] [i_13] [i_13] [i_0]) % (arr_3 [i_0] [i_0])));
                    }
                }
            }
        }
    }
    var_35 = (((min(524032, 197)) / 26154));
    #pragma endscop
}
