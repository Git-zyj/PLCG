/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 87078
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=87078 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/87078
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            {
                arr_7 [i_0] [i_0] [i_1] = ((~(((!(arr_0 [i_1]))))));
                var_14 = -1859390297255519592;

                for (int i_2 = 1; i_2 < 13;i_2 += 1) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 12;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 14;i_4 += 1)
                        {
                            {
                                var_15 -= ((((((((215 ? 93 : 7))) ? var_12 : (((max(var_5, (arr_9 [i_4 - 2] [4] [i_2] [i_0 - 1])))))))) ? ((+(((arr_11 [i_4] [i_3 - 1] [i_2 + 2] [i_1]) ^ (arr_9 [i_2 + 2] [i_2 - 1] [i_2] [i_2 + 2]))))) : (max(109, (arr_4 [i_0 + 1] [i_0 - 2])))));
                                var_16 = 31214;
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 1;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 15;i_6 += 1)
                        {
                            {
                                arr_19 [i_0] [i_1] [i_2 + 2] [i_5] [i_6] = (var_3 <= -40831);
                                var_17 -= var_11;
                            }
                        }
                    }
                }
                /* vectorizable */
                for (int i_7 = 1; i_7 < 13;i_7 += 1) /* same iter space */
                {
                    var_18 = (((arr_12 [i_7] [11] [i_7] [i_7] [i_0 - 1] [i_0 - 1]) ? var_10 : (arr_9 [i_7 + 2] [i_1] [i_1] [i_0 - 1])));

                    for (int i_8 = 1; i_8 < 13;i_8 += 1)
                    {
                        var_19 ^= (arr_21 [i_8] [i_0] [i_0] [i_0]);

                        for (int i_9 = 1; i_9 < 13;i_9 += 1)
                        {
                            var_20 = ((var_13 + (arr_22 [i_0 - 1] [i_1] [i_8] [i_9 + 2])));
                            arr_28 [i_0 - 1] [i_7] = (~1);
                        }
                        for (int i_10 = 0; i_10 < 15;i_10 += 1)
                        {
                            arr_31 [i_0 - 2] [3] [i_0] [i_7] [i_0] [i_0 - 2] [13] = arr_4 [i_10] [i_7 + 1];
                            var_21 = ((!(arr_26 [i_0] [i_0 - 2] [i_7 + 1])));
                            arr_32 [i_7] = (((!(arr_27 [i_0] [i_7] [i_8] [i_10]))));
                        }
                        for (int i_11 = 3; i_11 < 14;i_11 += 1)
                        {
                            var_22 = ((106 ^ (arr_8 [i_0] [i_1] [i_1] [i_0])));
                            arr_35 [i_7] [i_7] [i_7] [i_7 + 1] [i_7] = (!(arr_23 [i_7 - 1] [i_11] [i_11 - 1]));
                            var_23 = (min(var_23, 10412));
                        }
                        arr_36 [i_0] [i_7] [i_0] [i_0 - 1] = var_2;
                        arr_37 [i_0] [i_1] [i_7] [i_7] = (((((arr_3 [i_0]) ? (arr_10 [i_0] [i_1] [i_7]) : -48)) <= (~98)));
                    }
                    for (int i_12 = 0; i_12 < 15;i_12 += 1)
                    {
                        arr_42 [i_0] [i_1] [i_0 - 1] [i_1] [i_1] [i_12] &= ((((arr_27 [i_0 - 2] [i_0] [i_7 + 2] [i_12]) ? (arr_40 [i_0] [i_0] [i_0] [i_0]) : var_7)));
                        var_24 = (((arr_6 [i_7 + 2] [i_0 - 1]) ? var_4 : (arr_6 [i_7 + 1] [i_0 + 1])));
                        var_25 = (max(var_25, (arr_30 [i_7 - 1])));
                    }
                }
                var_26 = 4503599627370495;
                var_27 = ((((-(arr_16 [1] [i_1] [i_1] [i_1] [i_0])))));
            }
        }
    }

    for (int i_13 = 0; i_13 < 17;i_13 += 1)
    {
        arr_46 [i_13] = ((-(max(-2096128, ((((arr_45 [i_13]) < (arr_45 [i_13]))))))));
        var_28 = var_13;
        arr_47 [13] [i_13] = (arr_45 [6]);
    }
    var_29 = var_8;
    #pragma endscop
}
