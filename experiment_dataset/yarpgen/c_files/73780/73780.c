/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 73780
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=73780 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/73780
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 11;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 11;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 10;i_4 += 1)
                        {
                            {
                                var_13 -= (arr_4 [i_4 - 1]);
                                var_14 = (((((16267750175494049732 - (arr_3 [i_0] [9] [i_2])))) > ((min(2178993898215501883, var_5)))));
                                var_15 = (min(var_15, (arr_9 [10] [7])));
                                var_16 ^= ((max(8191, (arr_12 [i_4] [i_4] [i_4 + 1] [i_4 - 1] [i_2]))));
                            }
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_5 = 1; i_5 < 9;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 11;i_6 += 1)
                    {
                        {
                            var_17 = arr_16 [i_1] [i_1] [i_1] [i_6];
                            var_18 = (((arr_15 [i_0] [i_1] [i_5] [i_6]) == (max((((arr_11 [i_0] [i_0] [i_1] [i_5 - 1] [i_5] [i_6]) ? 2893753187265865659 : 13842189568605817271)), var_4))));
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_7 = 0; i_7 < 18;i_7 += 1)
    {
        for (int i_8 = 0; i_8 < 18;i_8 += 1)
        {
            for (int i_9 = 0; i_9 < 18;i_9 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_10 = 1; i_10 < 14;i_10 += 1)
                    {
                        for (int i_11 = 0; i_11 < 18;i_11 += 1)
                        {
                            {
                                var_19 = (max(0, ((((((-8192 ? var_12 : 201326592)) + 9223372036854775807)) >> (((((arr_33 [i_7] [i_8] [i_9] [i_10] [i_11]) ? var_1 : -6)) + 681781158219928307))))));
                                var_20 = (max(var_20, ((-11 * (((arr_32 [i_11] [i_9] [i_10 + 1] [i_9] [i_9] [i_10 - 1]) ? ((((arr_23 [i_7] [i_7]) - (arr_19 [14])))) : (arr_28 [i_10 + 1] [i_7] [i_7] [i_10 + 1])))))));
                                arr_36 [1] [i_8] [i_9] [i_10] [i_11] = var_12;
                                var_21 = arr_29 [i_7] [i_8] [3] [i_10];
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_12 = 1; i_12 < 16;i_12 += 1)
                    {
                        for (int i_13 = 2; i_13 < 15;i_13 += 1)
                        {
                            {
                                var_22 = (16267750175494049732 ? (~var_8) : (((arr_34 [i_7] [i_8] [i_9] [i_12] [i_13 - 2]) ? var_8 : var_8)));
                                var_23 = 9223372036854775807;
                                var_24 = (min((((arr_33 [i_13] [i_8] [i_12 + 2] [17] [i_13 + 1]) / (arr_23 [i_7] [i_7]))), 1332304237746560911));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_14 = 0; i_14 < 18;i_14 += 1)
                    {
                        for (int i_15 = 1; i_15 < 17;i_15 += 1)
                        {
                            {
                                var_25 = (arr_38 [i_7]);
                                var_26 *= (((((arr_23 [i_7] [i_15 - 1]) + (0 % 2147483647))) <= ((max((arr_42 [i_9] [i_15 - 1] [i_7] [i_15 + 1]), (arr_42 [i_7] [i_8] [i_9] [i_15 - 1]))))));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_16 = 1; i_16 < 17;i_16 += 1)
                    {
                        for (int i_17 = 2; i_17 < 17;i_17 += 1)
                        {
                            {
                                var_27 |= var_1;
                                arr_51 [i_8] [i_8] [i_9] [i_8] [i_9] = 2932199989849484031;
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_18 = 3; i_18 < 16;i_18 += 1)
                    {
                        for (int i_19 = 0; i_19 < 18;i_19 += 1)
                        {
                            {
                                var_28 = var_5;
                                var_29 = (min(var_29, var_11));
                                var_30 = (arr_25 [i_8]);
                                var_31 = var_11;
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
