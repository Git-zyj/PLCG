/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 62654
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=62654 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/62654
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 22;i_4 += 1)
                        {
                            {
                                var_16 = min((((((var_1 ? var_13 : var_14))) ? (max((arr_9 [i_4] [i_3] [i_2] [i_1] [i_0] [i_0]), var_1)) : ((var_9 ? var_14 : var_11)))), (min(((((arr_8 [i_0] [i_1] [i_2] [i_3]) < (arr_7 [i_0] [i_0] [i_0 - 1])))), (max(var_15, var_12)))));
                                var_17 += (((arr_10 [i_2] [i_2] [i_0]) ? (1 | var_8) : ((-(arr_11 [i_0] [i_1] [i_3] [i_3])))));
                                var_18 = (min(var_18, (arr_10 [i_4] [i_3] [i_1])));
                            }
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_5 = 3; i_5 < 23;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 1;i_6 += 1)
                    {
                        {
                            var_19 = ((((max(-var_5, (arr_15 [i_0] [i_1] [i_0] [i_6] [i_6])))) ? (((arr_16 [i_5] [i_0 - 1]) ? ((var_2 ? var_6 : var_9)) : (!-202867082))) : (max(var_6, (arr_14 [i_1] [i_0] [i_0] [i_5] [i_0])))));
                            var_20 = ((var_9 ? (((((-(arr_12 [i_1] [i_5] [i_0] [i_1] [i_0])))) ? (min((arr_16 [i_5] [i_6]), var_8)) : var_14)) : (((!((min(var_11, var_13))))))));
                        }
                    }
                }
                var_21 ^= ((((var_3 ? ((0 ? 1 : 1)) : (arr_11 [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_0 - 1])))) ? var_13 : (max(var_7, ((0 ? -1 : 1)))));
            }
        }
    }
    /* LoopNest 3 */
    for (int i_7 = 0; i_7 < 1;i_7 += 1)
    {
        for (int i_8 = 0; i_8 < 1;i_8 += 1)
        {
            for (int i_9 = 0; i_9 < 1;i_9 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_10 = 0; i_10 < 10;i_10 += 1)
                    {
                        for (int i_11 = 0; i_11 < 1;i_11 += 1)
                        {
                            {
                                var_22 = (~(((1 != (var_13 < var_12)))));
                                var_23 |= (min((((var_8 * 0) ? (((arr_22 [i_9] [i_11]) ? var_5 : var_7)) : (max(var_14, 120)))), 1));
                                var_24 *= ((1 ? (((!124) ? (((arr_17 [i_8]) ? var_12 : 1)) : -1568831717)) : ((~(max(var_15, 1))))));
                            }
                        }
                    }

                    for (int i_12 = 0; i_12 < 0;i_12 += 1) /* same iter space */
                    {
                        var_25 = var_11;
                        var_26 = var_4;
                        var_27 = ((((~(arr_21 [1] [5]))) > ((~(max((arr_9 [i_7] [i_7] [i_7] [i_12] [i_12] [i_7]), (arr_12 [i_7] [i_8] [i_8] [i_9] [i_12])))))));
                        arr_34 [i_8] [i_12] = (((arr_29 [i_9] [i_12 + 1] [i_9] [i_12]) ? ((((max(var_15, 120))) ? ((1 ? var_4 : 1400993273)) : (max((arr_2 [i_7]), var_11)))) : ((var_7 ? 1 : 15872))));
                    }
                    /* vectorizable */
                    for (int i_13 = 0; i_13 < 0;i_13 += 1) /* same iter space */
                    {
                        var_28 = ((var_13 ? var_3 : (var_7 * 1)));
                        var_29 = var_2;
                        var_30 &= (~var_6);
                    }
                    var_31 = (((((var_12 ? var_2 : (arr_7 [i_7] [i_8] [i_9])))) ? (((arr_7 [i_7] [i_8] [i_9]) ? var_9 : (arr_7 [i_7] [i_7] [i_9]))) : ((max((arr_7 [i_7] [i_8] [i_9]), var_10)))));
                }
            }
        }
    }
    #pragma endscop
}
