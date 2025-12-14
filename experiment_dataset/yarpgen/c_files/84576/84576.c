/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 84576
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=84576 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/84576
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 21;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 3; i_3 < 18;i_3 += 1)
                    {
                        for (int i_4 = 3; i_4 < 17;i_4 += 1)
                        {
                            {
                                var_15 = (max(var_15, (((~(arr_4 [i_2]))))));
                                var_16 = (((((18435 ? (arr_8 [i_4 + 4] [i_1] [i_1 + 1] [i_1 + 1] [i_0]) : 18460))) ? (var_14 ^ var_5) : ((((((min(var_5, 8236))) || var_10))))));
                                var_17 = (max((((arr_1 [i_2]) ^ (((arr_0 [i_0]) | 6089266504432091717)))), -1784801041));
                                var_18 = (min((arr_6 [i_0] [i_3] [i_1] [i_3] [i_1] [i_0]), (arr_0 [i_1])));
                                var_19 = ((((max((arr_3 [i_0]), (arr_3 [i_0])))) ? -1784801025 : var_7));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 21;i_5 += 1)
                    {
                        for (int i_6 = 1; i_6 < 20;i_6 += 1)
                        {
                            {
                                var_20 = (((((((arr_0 [i_0]) | var_11)))) ? (((((max(var_4, (arr_10 [i_0])))) ^ (((arr_4 [i_0]) ? (arr_9 [i_1]) : var_12))))) : ((9223372036854775807 ? (arr_8 [i_6] [i_6 + 1] [i_6 - 1] [i_6] [i_6 - 1]) : (~18424)))));
                                var_21 = (max((max((~var_10), 18432)), (arr_6 [i_0] [i_1 + 1] [i_1] [i_5] [i_6] [i_6])));
                            }
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_7 = 2; i_7 < 23;i_7 += 1)
    {
        for (int i_8 = 2; i_8 < 23;i_8 += 1)
        {
            for (int i_9 = 0; i_9 < 24;i_9 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_10 = 0; i_10 < 24;i_10 += 1)
                    {
                        for (int i_11 = 0; i_11 < 24;i_11 += 1)
                        {
                            {
                                var_22 = (min((min((arr_25 [i_7] [i_8] [i_8] [i_7] [i_11]), (arr_18 [i_8 - 1] [i_8 - 1]))), ((((arr_22 [i_7] [i_7] [i_7] [i_10]) && 228)))));
                                var_23 = (~var_4);
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_12 = 0; i_12 < 24;i_12 += 1)
                    {
                        for (int i_13 = 0; i_13 < 24;i_13 += 1)
                        {
                            {
                                arr_33 [i_7] [i_8] [i_9] [i_12] [i_13] = 8237;
                                var_24 = var_13;
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_14 = 0; i_14 < 24;i_14 += 1)
                    {
                        for (int i_15 = 4; i_15 < 21;i_15 += 1)
                        {
                            {
                                var_25 = (((((max(var_8, 17438)) ? ((min(var_5, var_13))) : var_8))));
                                arr_39 [i_15 - 2] [i_9] [4] [i_9] [i_7 + 1] = -4383861400173574943;
                                arr_40 [i_8 - 2] [i_8] [i_8] [i_8] [i_9] [i_8] [i_8 - 1] = (((((~var_5) ? (min(94, (arr_24 [i_9] [i_8] [i_8] [1] [i_8] [1]))) : 169)) >> (((arr_37 [i_15] [i_14] [i_8 - 1] [i_8 - 1]) + 2007410738))));
                            }
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_16 = 0; i_16 < 22;i_16 += 1)
    {
        for (int i_17 = 0; i_17 < 22;i_17 += 1)
        {
            for (int i_18 = 2; i_18 < 20;i_18 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_19 = 0; i_19 < 22;i_19 += 1)
                    {
                        for (int i_20 = 0; i_20 < 22;i_20 += 1)
                        {
                            {
                                arr_51 [i_19] [i_19] [i_19] [i_16] [i_16] [i_16] = (arr_22 [i_17] [i_18 + 1] [i_19] [i_18 + 1]);
                                arr_52 [i_16] [i_17] [i_16] [i_19] [i_20] [i_18] = (arr_29 [i_16] [i_16] [i_16] [i_16] [i_16]);
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_21 = 1; i_21 < 21;i_21 += 1)
                    {
                        for (int i_22 = 0; i_22 < 22;i_22 += 1)
                        {
                            {
                                arr_57 [i_17] [i_18] [i_21] [i_22] = (arr_49 [i_16] [i_16] [i_16] [i_21] [i_16] [i_17]);
                                var_26 = (((((17610593737467305251 ? (arr_20 [i_17] [i_17] [i_17] [i_17]) : 8261))) + (((((min((arr_22 [i_16] [i_17] [i_18] [i_22]), (arr_15 [i_22])))) ? (arr_25 [i_16] [i_17] [i_17] [i_21] [i_22]) : ((-(arr_42 [3]))))))));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_23 = 0; i_23 < 22;i_23 += 1)
                    {
                        for (int i_24 = 0; i_24 < 22;i_24 += 1)
                        {
                            {
                                var_27 = -8466593589578845123;
                                var_28 = (((arr_32 [i_24] [i_24] [i_18 + 2] [i_23] [i_24]) | var_9));
                                var_29 = (~1642413579);
                                arr_63 [i_16] [i_17] [i_24] [i_23] [i_24] = (+((var_10 ? ((((arr_37 [9] [i_17] [i_17] [19]) / var_7))) : (arr_21 [i_18] [i_16]))));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
