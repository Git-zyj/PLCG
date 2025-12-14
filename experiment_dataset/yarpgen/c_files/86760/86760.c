/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 86760
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=86760 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/86760
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 += ((((1160164088 ? (0 ^ 0) : 61459)) == var_14));
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 14;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 14;i_4 += 1)
                        {
                            {
                                var_20 = (min(var_20, -1719681485));
                                var_21 = (((((min(12862, 36973)))) / (max((arr_0 [i_0 + 2]), ((min(var_14, var_4)))))));
                                arr_11 [i_3] [i_3] [i_3] [i_0] &= (arr_9 [i_3]);
                                arr_12 [i_0] [i_1] [i_2] [i_2] [i_4] |= (((min((((var_14 ? var_15 : (arr_3 [i_1] [i_4])))), ((603109476 ? (arr_4 [i_0] [i_0]) : var_18)))) == (14489892934580751492 / 7)));
                            }
                        }
                    }
                    arr_13 [i_0] [i_1] [i_0] [i_2] = (arr_9 [i_1]);
                    /* LoopNest 2 */
                    for (int i_5 = 1; i_5 < 13;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 14;i_6 += 1)
                        {
                            {
                                var_22 ^= (((((~(arr_16 [i_5 + 1] [i_5] [i_5] [i_0 - 2])))) ? ((~(arr_16 [i_5 - 1] [i_5 - 1] [i_2] [i_0 - 2]))) : ((-760088501 ? (arr_16 [i_5 + 1] [i_5] [i_2] [i_0 + 3]) : (arr_16 [i_5 - 1] [i_5 - 1] [i_2] [i_0 - 1])))));
                                var_23 ^= (14451 < var_1);
                            }
                        }
                    }
                    arr_19 [i_1] = 60712;
                }
            }
        }
    }
    var_24 = (min(var_24, ((min(14462, var_6)))));
    var_25 = ((-(((max(779930872, 1))))));
    /* LoopNest 3 */
    for (int i_7 = 3; i_7 < 9;i_7 += 1)
    {
        for (int i_8 = 0; i_8 < 10;i_8 += 1)
        {
            for (int i_9 = 1; i_9 < 7;i_9 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_10 = 0; i_10 < 1;i_10 += 1)
                    {
                        for (int i_11 = 0; i_11 < 1;i_11 += 1)
                        {
                            {
                                var_26 ^= 17374923818641294212;
                                var_27 = (max(var_27, var_17));
                                arr_35 [i_9] [i_8] [i_9] [i_10] [i_8] [8] = ((((-222692398 ? 50228 : 48368))) ? 32440 : (!1));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_12 = 3; i_12 < 9;i_12 += 1)
                    {
                        for (int i_13 = 0; i_13 < 1;i_13 += 1)
                        {
                            {
                                arr_41 [i_8] [i_9] [i_9] [i_9] [i_8] [i_8] = (((49152 - 63913) ? ((((arr_22 [i_7] [i_8]) & (arr_3 [i_12 - 1] [i_13])))) : (((~57399) ? (~1071820255068257392) : var_1))));
                                arr_42 [i_8] [i_8] [i_7 - 3] = arr_24 [i_7] [i_7];
                                var_28 *= min(12940660659545749326, 1);
                                var_29 = (min(var_29, ((((15 ^ 20196) & (0 & var_4))))));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_14 = 0; i_14 < 1;i_14 += 1)
                    {
                        for (int i_15 = 2; i_15 < 6;i_15 += 1)
                        {
                            {
                                var_30 = (max(var_30, ((((((max(1, var_18))) ? -779930850 : ((var_9 << (30942 - 30942)))))))));
                                arr_48 [i_7] [i_7] [6] [i_8] [i_7] = (~(((9863816497904819945 <= (arr_8 [i_8] [i_9] [i_9] [i_9 + 3] [i_9] [i_15 + 3] [i_15])))));
                                arr_49 [i_7] [i_14] [6] &= var_8;
                                var_31 = (arr_15 [13] [i_8] [i_9 - 1]);
                                arr_50 [i_7] [i_8] = (min((((arr_7 [i_7] [i_8] [i_9] [i_14] [i_15 + 4] [i_15 + 4]) ? (arr_7 [i_15 + 1] [i_14] [i_14] [i_7] [i_7] [i_7]) : (arr_0 [i_8]))), (arr_38 [i_8] [i_8] [i_9] [i_8] [i_8] [i_9] [i_9])));
                            }
                        }
                    }
                    arr_51 [i_7] [i_8] [i_8] = (((((arr_5 [i_8] [i_9]) ? var_9 : (arr_10 [i_7 + 1] [i_7 - 1] [i_7 + 1] [11] [i_8] [i_9])))) ? (min(var_18, (arr_9 [i_9 + 2]))) : ((53412 - (arr_15 [i_9] [i_8] [i_9 + 2]))));
                }
            }
        }
    }
    #pragma endscop
}
