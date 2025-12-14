/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 79336
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=79336 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/79336
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
                arr_4 [i_0] [i_0] = 66;
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 14;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 14;i_3 += 1)
                    {
                        {
                            arr_10 [i_0] [i_1] [i_2] [i_3] = (max((((arr_8 [i_0] [i_1]) - var_8)), var_3));
                            var_13 = (max(var_13, -1));
                            var_14 = (min(var_14, ((max((max(((~(arr_0 [i_3]))), ((var_5 ? 0 : var_2)))), ((~(15 + 255))))))));
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_4 = 2; i_4 < 8;i_4 += 1)
    {
        for (int i_5 = 0; i_5 < 10;i_5 += 1)
        {
            {
                var_15 = (min(var_15, ((max((max(var_9, (var_5 & var_3))), 1)))));
                /* LoopNest 3 */
                for (int i_6 = 0; i_6 < 10;i_6 += 1)
                {
                    for (int i_7 = 0; i_7 < 10;i_7 += 1)
                    {
                        for (int i_8 = 0; i_8 < 10;i_8 += 1)
                        {
                            {
                                arr_23 [i_6] [i_8] [i_6] [i_6] [i_6] [i_8] [i_4] = (max((((((-10220 ? 127 : var_5))) ? -73 : ((var_5 & (arr_13 [i_4] [i_5]))))), (arr_5 [i_4])));
                                var_16 -= (((~var_3) + (((!(arr_8 [i_4] [i_5]))))));
                                arr_24 [i_4] [i_8] [i_6] [i_7] [i_7] = (min((-9223372036854775807 - 1), 250));
                                var_17 -= max(1, 10);
                                arr_25 [i_4] [i_8] [i_8] = (~6);
                            }
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_9 = 0; i_9 < 1;i_9 += 1)
                {
                    for (int i_10 = 0; i_10 < 10;i_10 += 1)
                    {
                        {
                            var_18 -= 541;
                            var_19 += (arr_22 [i_4 + 1] [4] [i_10]);
                        }
                    }
                }
                var_20 = ((43 << (((((~22385) | 40852)) + 16499))));
            }
        }
    }
    var_21 = (((!-22020) ? ((min(var_12, var_10))) : (min(var_8, var_3))));
    /* LoopNest 2 */
    for (int i_11 = 0; i_11 < 24;i_11 += 1)
    {
        for (int i_12 = 0; i_12 < 1;i_12 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_13 = 0; i_13 < 24;i_13 += 1)
                {
                    for (int i_14 = 0; i_14 < 24;i_14 += 1)
                    {
                        for (int i_15 = 0; i_15 < 24;i_15 += 1)
                        {
                            {
                                arr_45 [i_11] [i_14] [i_13] [13] [i_11] [i_11] = var_12;
                                var_22 = (max(var_22, ((max(((-46 ? (min((arr_40 [i_12] [i_13] [11] [i_15]), 7900882179207381142)) : (55797 && 1))), (min(6191383784627969584, var_4)))))));
                                var_23 += (((((9223372036854775807 ? (arr_38 [6] [6] [6] [i_11]) : var_11))) ? (23513 == var_2) : ((max(var_8, (arr_39 [12]))))));
                            }
                        }
                    }
                }
                var_24 = var_3;
            }
        }
    }
    /* LoopNest 2 */
    for (int i_16 = 0; i_16 < 22;i_16 += 1)
    {
        for (int i_17 = 3; i_17 < 20;i_17 += 1)
        {
            {
                var_25 = (min(var_25, ((min((((var_6 ? (arr_38 [20] [i_16] [1] [i_17]) : -0))), (min(-9223372036854775802, (-9223372036854775807 - 1))))))));
                var_26 = ((-(arr_47 [i_16] [i_16])));
                var_27 = (max(var_27, ((min(18358, 0)))));
                arr_52 [i_16] = (arr_42 [i_17] [i_17] [i_16] [i_16]);
            }
        }
    }
    #pragma endscop
}
