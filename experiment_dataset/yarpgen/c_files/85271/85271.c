/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 85271
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=85271 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/85271
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 21;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 20;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 21;i_4 += 1)
                        {
                            {
                                arr_12 [i_0] [i_0] [i_2] [i_3] [i_0] = var_12;
                                arr_13 [i_0] [i_0] [i_2] [i_0] [i_1] [i_4] [i_1] = (((((~var_0) ^ (max(var_4, (arr_11 [13]))))) << (var_10 - 49)));
                            }
                        }
                    }
                }
                var_18 ^= var_14;
            }
        }
    }
    /* LoopNest 2 */
    for (int i_5 = 0; i_5 < 0;i_5 += 1)
    {
        for (int i_6 = 2; i_6 < 22;i_6 += 1)
        {
            {
                var_19 ^= ((((max((arr_14 [i_6 - 2]), (arr_18 [i_6 - 2])))) ? ((((arr_14 [i_6 - 2]) || var_13))) : var_15));
                /* LoopNest 3 */
                for (int i_7 = 2; i_7 < 22;i_7 += 1)
                {
                    for (int i_8 = 1; i_8 < 22;i_8 += 1)
                    {
                        for (int i_9 = 0; i_9 < 23;i_9 += 1)
                        {
                            {
                                arr_29 [i_7 - 2] [i_8 + 1] [i_9] = (min(19412, (max((arr_26 [i_8 + 1] [19] [i_8] [i_8 - 1] [i_8 + 1] [2] [i_8 + 1]), (arr_26 [i_8 - 1] [i_8 + 1] [4] [i_8 - 1] [i_8] [i_8 + 1] [i_8])))));
                                arr_30 [i_5 + 1] = ((~(~var_9)));
                            }
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_10 = 0; i_10 < 23;i_10 += 1)
                {
                    for (int i_11 = 0; i_11 < 1;i_11 += 1)
                    {
                        {
                            var_20 = (min((arr_21 [i_5] [i_6]), (((((var_17 ? var_9 : (arr_32 [i_6] [i_10] [21])))) ? 54545 : ((-(arr_25 [i_5] [i_5] [18])))))));
                            arr_35 [i_5] [i_5] [i_5] [11] [i_5] = (max(var_9, (((arr_26 [i_5 + 1] [i_5 + 1] [i_10] [i_11] [i_11] [i_10] [i_5 + 1]) ? (arr_33 [i_5 + 1] [i_5 + 1] [i_5 + 1] [i_5 + 1] [i_11] [i_11]) : -29))));
                            arr_36 [9] = (arr_22 [i_5 + 1] [i_5]);
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_12 = 0; i_12 < 17;i_12 += 1)
    {
        for (int i_13 = 1; i_13 < 16;i_13 += 1)
        {
            {
                var_21 = -1512712584998895965;
                var_22 = (max(var_22, (((~((var_16 ? 8792974742179319199 : 36143)))))));
                /* LoopNest 2 */
                for (int i_14 = 0; i_14 < 17;i_14 += 1)
                {
                    for (int i_15 = 0; i_15 < 17;i_15 += 1)
                    {
                        {
                            var_23 = (((max((min(var_15, 601303195)), var_7)) <= var_7));

                            for (int i_16 = 0; i_16 < 17;i_16 += 1) /* same iter space */
                            {
                                var_24 *= var_1;
                                var_25 = ((-((((arr_7 [i_13 - 1] [i_13 - 1] [i_13]) == -204349201)))));
                            }
                            for (int i_17 = 0; i_17 < 17;i_17 += 1) /* same iter space */
                            {
                                arr_52 [i_12] [i_12] [i_13] [i_12] [i_12] = ((44 ? (arr_44 [i_13 + 1] [15] [i_13]) : (((!(arr_20 [i_12] [7] [i_13 - 1]))))));
                                var_26 = (((((arr_49 [i_12] [i_13] [16] [i_13 + 1] [i_12]) ? 109 : (arr_49 [1] [i_13] [i_14] [i_13 - 1] [i_14]))) << (1 >> 0)));
                                arr_53 [i_12] [i_12] [i_14] [i_13] [i_17] = 28;
                                var_27 = -85;
                                arr_54 [i_12] [i_13] [i_13] [i_13] = (min(((((arr_5 [i_13 + 1] [i_13 + 1] [i_13 - 1]) ? (arr_44 [i_12] [i_17] [i_13]) : var_16))), (min(146, -2932613406873017925))));
                            }
                            var_28 = (max(((min((arr_31 [i_13 - 1] [i_13 - 1] [i_13 - 1] [i_13]), (arr_31 [i_13 - 1] [i_13 + 1] [i_13 + 1] [i_12])))), (((arr_10 [i_12] [i_13 - 1] [i_14] [12]) ^ (arr_10 [i_13] [i_13 - 1] [i_14] [i_15])))));
                            arr_55 [i_12] [i_13] [i_12] [2] [i_12] = var_6;
                            arr_56 [i_13] = (min(((((max(3534535240618094427, var_3))) ? var_0 : (arr_23 [i_13 + 1] [i_13 + 1] [i_14] [i_12] [i_14]))), (!97)));
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
