/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 93652
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=93652 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/93652
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 24;i_2 += 1)
                {
                    for (int i_3 = 4; i_3 < 23;i_3 += 1)
                    {
                        {
                            arr_12 [i_0 - 1] [i_0 - 1] [i_1] [i_0 - 1] [i_1] = (((-(min(var_5, (arr_3 [i_0] [i_1]))))));
                            arr_13 [i_1] [i_1] [i_3 - 4] = (arr_9 [i_1]);
                            arr_14 [i_1] [i_1] [i_3] = (((max((((arr_8 [i_1] [i_2] [12]) ^ 1768491752071574279)), (min(var_14, (arr_1 [i_0] [i_1]))))) / ((((arr_1 [i_0] [i_0 - 2]) ? (arr_9 [i_1]) : (arr_9 [i_1]))))));
                            arr_15 [i_3] [i_1] [i_1] [i_0] = (max(((var_4 ? (arr_9 [i_1]) : (arr_2 [i_0 + 1]))), ((max((arr_10 [i_1] [i_1] [i_2] [i_3 - 2]), (arr_10 [i_1] [i_1] [i_2] [i_3 - 2]))))));
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_4 = 3; i_4 < 22;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 24;i_5 += 1)
                    {
                        {
                            var_15 = (max(var_15, var_9));
                            var_16 |= ((((arr_10 [1] [i_4] [1] [1]) ? var_7 : (arr_0 [i_4 + 2] [i_0 + 1]))) & (min((arr_16 [i_0] [i_1] [0]), (((((arr_18 [i_5] [i_1] [i_1] [i_0] [i_0]) + 9223372036854775807)) << (var_11 - 4))))));
                            var_17 = (max((((min(var_6, var_0)))), var_7));
                        }
                    }
                }
                /* LoopNest 3 */
                for (int i_6 = 2; i_6 < 23;i_6 += 1)
                {
                    for (int i_7 = 1; i_7 < 23;i_7 += 1)
                    {
                        for (int i_8 = 0; i_8 < 24;i_8 += 1)
                        {
                            {
                                var_18 ^= max(((max((max((arr_0 [i_0] [i_1]), (arr_3 [i_0 - 2] [i_0 - 2]))), var_14))), (max((arr_3 [i_0] [i_0]), ((0 - (arr_19 [i_0] [i_0] [i_0]))))));
                                var_19 = (arr_7 [i_0] [i_1] [i_7 + 1] [i_1]);
                                var_20 = -var_13;
                            }
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_9 = 0; i_9 < 24;i_9 += 1)
                {
                    for (int i_10 = 0; i_10 < 24;i_10 += 1)
                    {
                        {
                            arr_36 [i_0] [i_1] [i_9] [i_1] = (!(arr_2 [i_0 - 1]));
                            arr_37 [4] [i_1] [i_1] [i_0] = ((min((arr_20 [i_1] [i_0] [i_1]), var_2)));
                        }
                    }
                }
                /* LoopNest 3 */
                for (int i_11 = 1; i_11 < 22;i_11 += 1)
                {
                    for (int i_12 = 0; i_12 < 24;i_12 += 1)
                    {
                        for (int i_13 = 1; i_13 < 22;i_13 += 1)
                        {
                            {
                                var_21 = (((((arr_3 [i_0 + 1] [i_0]) ? (((~(arr_27 [i_0 + 1] [i_0 - 2] [i_1] [i_11] [i_11] [i_11])))) : var_14))) ? (arr_18 [2] [i_1] [20] [i_12] [20]) : (arr_22 [i_0] [i_1]));
                                var_22 = (max(var_22, ((max(((max((arr_34 [i_0] [i_0 - 2]), (arr_20 [i_12] [i_12] [i_12])))), ((min(var_0, var_4))))))));
                                var_23 -= ((var_13 >= ((1768491752071574279 ? (var_1 & 13797414415023409867) : 0))));
                            }
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_14 = 2; i_14 < 18;i_14 += 1)
    {
        for (int i_15 = 0; i_15 < 21;i_15 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_16 = 0; i_16 < 1;i_16 += 1)
                {
                    for (int i_17 = 0; i_17 < 21;i_17 += 1)
                    {
                        for (int i_18 = 2; i_18 < 20;i_18 += 1)
                        {
                            {
                                arr_58 [i_14] [i_15] [i_16] [i_14] [i_17] [i_14] [i_18 - 1] = (max((arr_35 [i_14 + 3] [i_14]), (arr_35 [i_14 + 2] [i_14])));
                                arr_59 [i_14] [i_15] [i_16] [i_17] [i_14] = (!var_3);
                                var_24 -= (((((var_4 ^ 1768491752071574293) ^ var_13))) ? (arr_54 [i_14 + 3] [i_18 + 1] [i_18] [i_18 - 1] [2]) : (((((var_10 ? var_5 : var_8))) ? (((arr_21 [i_17] [i_16]) | var_5)) : (min((arr_35 [i_16] [6]), var_8)))));
                            }
                        }
                    }
                }
                /* LoopNest 3 */
                for (int i_19 = 0; i_19 < 21;i_19 += 1)
                {
                    for (int i_20 = 0; i_20 < 21;i_20 += 1)
                    {
                        for (int i_21 = 0; i_21 < 21;i_21 += 1)
                        {
                            {
                                var_25 = (min(var_25, ((max((arr_34 [i_14 - 1] [i_14]), (((-(arr_4 [4])))))))));
                                var_26 = (max((((arr_55 [i_14] [i_15] [i_14 + 1] [i_20] [i_14]) ? (arr_10 [i_14] [i_15] [i_19] [i_20]) : var_7)), (((arr_5 [i_14 - 2] [i_14 + 2]) << (var_4 - 15382364068054007262)))));
                            }
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_22 = 2; i_22 < 21;i_22 += 1)
    {
        for (int i_23 = 0; i_23 < 1;i_23 += 1)
        {
            for (int i_24 = 1; i_24 < 22;i_24 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_25 = 2; i_25 < 20;i_25 += 1)
                    {
                        for (int i_26 = 0; i_26 < 23;i_26 += 1)
                        {
                            {
                                var_27 = (((arr_10 [i_22] [i_25 + 3] [i_25] [i_25]) ? ((((arr_10 [i_22] [i_25 + 3] [i_25 - 2] [i_25 - 1]) ? (arr_10 [i_22] [i_25 - 1] [i_25 - 2] [i_25 - 1]) : var_2))) : var_4));
                                var_28 = var_12;
                                var_29 = arr_38 [i_22];
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_27 = 0; i_27 < 23;i_27 += 1)
                    {
                        for (int i_28 = 1; i_28 < 22;i_28 += 1)
                        {
                            {
                                var_30 = (max(var_30, ((max(((min(var_13, -4234074397503036912))), (min((arr_42 [i_22] [i_22] [16] [8] [16] [i_22 - 1] [i_28 + 1]), (arr_21 [i_23] [i_27]))))))));
                                var_31 = ((-1768491752071574279 != (((((max(9409252339247091686, (arr_4 [i_22]))) == -3882571223763612231))))));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
