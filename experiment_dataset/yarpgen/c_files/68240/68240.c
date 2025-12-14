/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 68240
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=68240 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/68240
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 15;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 17;i_3 += 1)
                    {
                        {
                            var_16 = ((11178937801741652096 ? (arr_1 [i_1]) : (((arr_1 [i_3 + 1]) ? (arr_1 [i_3 + 2]) : (arr_1 [i_2 + 3])))));
                            var_17 = (min(var_17, var_3));
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_4 = 1; i_4 < 18;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 19;i_5 += 1)
                    {
                        {
                            var_18 ^= (((((~4) & ((((arr_8 [i_0] [6] [i_4] [i_5]) ? 161 : 1920))))) / (((~((-114 ? (arr_7 [i_5] [i_4] [i_4] [i_1] [i_0] [i_0]) : 32766)))))));
                            arr_13 [i_0] [i_0] [i_1] [i_1] [i_4 + 1] [i_0] = ((var_12 ? var_5 : var_4));
                            var_19 = var_6;
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_6 = 0; i_6 < 1;i_6 += 1)
                {
                    for (int i_7 = 0; i_7 < 19;i_7 += 1)
                    {
                        {
                            arr_20 [i_0] [i_1] [i_6] = ((161 ? (((arr_14 [i_7]) ? (arr_14 [i_0]) : 1464849083)) : 1769412083));
                            var_20 = ((0 % (((-((min(161, -2755))))))));
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_8 = 2; i_8 < 18;i_8 += 1)
                {
                    for (int i_9 = 0; i_9 < 19;i_9 += 1)
                    {
                        {
                            arr_26 [i_0] [i_8 + 1] [i_0] = ((~(((arr_6 [i_0] [i_8 - 2] [i_1] [i_0]) ^ var_6))));
                            arr_27 [i_0] [15] [i_8] [9] [9] = ((~((var_8 * (((max(150, 41005))))))));
                        }
                    }
                }
                /* LoopNest 3 */
                for (int i_10 = 0; i_10 < 19;i_10 += 1)
                {
                    for (int i_11 = 4; i_11 < 16;i_11 += 1)
                    {
                        for (int i_12 = 1; i_12 < 18;i_12 += 1)
                        {
                            {
                                var_21 -= var_11;
                                var_22 = (arr_35 [i_11] [i_12] [1] [i_11]);
                                var_23 = (min(var_23, (arr_14 [i_12 + 1])));
                            }
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_13 = 3; i_13 < 12;i_13 += 1)
    {
        for (int i_14 = 0; i_14 < 13;i_14 += 1)
        {
            for (int i_15 = 3; i_15 < 12;i_15 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_16 = 4; i_16 < 12;i_16 += 1)
                    {
                        for (int i_17 = 3; i_17 < 12;i_17 += 1)
                        {
                            {
                                var_24 = var_6;
                                var_25 = (min(var_25, ((max((arr_49 [i_13] [i_13] [7] [7] [i_13 - 2] [7]), var_12)))));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_18 = 0; i_18 < 13;i_18 += 1)
                    {
                        for (int i_19 = 0; i_19 < 13;i_19 += 1)
                        {
                            {
                                arr_54 [i_13] [i_13] [i_15] [i_15] [i_19] = ((var_2 | (((var_12 ? 7 : (!var_7))))));
                                arr_55 [i_14] [i_15 - 3] [i_18] [0] = (((((0 ? 16 : 107))) <= (((arr_36 [i_13 - 1]) ? (arr_36 [i_19]) : (arr_33 [i_18] [i_13 + 1] [i_15 + 1] [8] [i_18] [i_13])))));
                                var_26 &= ((!(arr_52 [i_13] [i_13 - 2] [i_13 - 1] [i_13 - 1] [i_13])));
                                var_27 = (max(var_27, (((var_9 ? var_9 : (((28 ^ 2312336532) ? ((var_0 ? (arr_10 [i_19] [i_18] [i_15 - 3] [16]) : var_0)) : (arr_45 [i_15 - 3] [i_18] [i_15 - 1] [i_18]))))))));
                                var_28 = var_11;
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_20 = 0; i_20 < 13;i_20 += 1)
                    {
                        for (int i_21 = 0; i_21 < 13;i_21 += 1)
                        {
                            {
                                var_29 |= 94;
                                arr_61 [i_13 + 1] [i_13] [i_13] [i_13] [i_13] = max(((-(((arr_44 [i_14]) * var_8)))), var_0);
                                var_30 = (min(var_30, ((((var_6 & var_11) == ((~((var_0 ? var_11 : var_11)))))))));
                                arr_62 [i_13 - 2] [i_14] [i_15] [i_20] [i_21] = (-1 > 1);
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_22 = 0; i_22 < 13;i_22 += 1)
                    {
                        for (int i_23 = 0; i_23 < 13;i_23 += 1)
                        {
                            {
                                var_31 |= ((4154348418 ? 240 : 4086805812));
                                arr_68 [i_14] [8] [i_14] [i_14] [i_14] &= (max(32766, var_5));
                                arr_69 [i_23] [12] [i_23] [i_22] [i_23] = ((((var_5 ? (arr_25 [i_23] [i_22] [i_15 - 1]) : (arr_10 [i_23] [0] [i_14] [i_13]))) << (((~240) ? ((243 >> (((arr_1 [1]) - 76)))) : var_7))));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
