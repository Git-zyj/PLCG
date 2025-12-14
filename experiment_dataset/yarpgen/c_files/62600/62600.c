/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 62600
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=62600 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/62600
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 23;i_2 += 1)
                {
                    for (int i_3 = 3; i_3 < 20;i_3 += 1)
                    {
                        {
                            var_10 = (((arr_6 [i_1] [i_3]) & (arr_1 [i_0 + 2] [i_0 + 3])));
                            arr_12 [i_0] [i_1] [8] [i_3] = (min(var_1, (var_6 >= var_7)));
                            arr_13 [i_0] [i_1] [i_2] [6] [i_1] |= var_4;
                            arr_14 [i_1] = var_2;
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 1;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 23;i_5 += 1)
                    {
                        {
                            arr_19 [i_1] [i_1] [i_4] = 33554430;
                            var_11 *= ((((max((arr_4 [i_0] [i_0 + 1]), (arr_4 [i_0] [i_0 - 2])))) ? (arr_4 [15] [i_0 + 1]) : (!3844603363)));
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_6 = 2; i_6 < 22;i_6 += 1)
                {
                    for (int i_7 = 0; i_7 < 23;i_7 += 1)
                    {
                        {
                            arr_26 [i_0] [i_1] [i_1] [i_7] = (((max(28, var_0))));
                            arr_27 [i_0] [i_1] [i_1] = ((var_9 & (arr_23 [i_0 - 2] [i_0 - 2] [i_0 - 2] [i_0 - 2] [7] [7])));
                            arr_28 [i_0] [i_0] [i_1] [i_0] = (~450363933);
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_8 = 0; i_8 < 23;i_8 += 1)
                {
                    for (int i_9 = 1; i_9 < 21;i_9 += 1)
                    {
                        {
                            arr_34 [i_0] [i_1] [i_0] [8] = max(((6 ? (arr_1 [i_0 - 2] [i_9 - 1]) : (arr_1 [i_0 - 2] [i_9 + 2]))), ((((arr_1 [i_0 + 2] [i_9 + 1]) <= (arr_1 [i_0 + 1] [i_9 + 1])))));
                            arr_35 [i_1] [i_1] = 11721252922592144072;
                            arr_36 [i_1] = ((!(((var_6 ? var_7 : var_2)))));
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_10 = 2; i_10 < 10;i_10 += 1)
    {
        for (int i_11 = 0; i_11 < 1;i_11 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_12 = 0; i_12 < 13;i_12 += 1)
                {
                    for (int i_13 = 0; i_13 < 13;i_13 += 1)
                    {
                        {
                            var_12 &= (((arr_11 [i_12] [i_10 - 2] [i_10] [i_10]) ? (max(var_8, (!143))) : (arr_33 [i_12] [i_12] [i_13])));
                            var_13 = 1073725440;
                            arr_47 [i_10] [i_10 + 2] [i_10] [i_10] = 231;
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_14 = 0; i_14 < 13;i_14 += 1)
                {
                    for (int i_15 = 0; i_15 < 13;i_15 += 1)
                    {
                        {
                            var_14 = (max(var_14, ((max(3061902929, 229)))));
                            arr_53 [i_10 + 2] [i_11] [i_14] [i_10] = (arr_21 [i_10 + 3] [i_11] [i_11] [i_15]);
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_16 = 0; i_16 < 13;i_16 += 1)
    {
        for (int i_17 = 1; i_17 < 9;i_17 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_18 = 0; i_18 < 1;i_18 += 1)
                {
                    for (int i_19 = 1; i_19 < 12;i_19 += 1)
                    {
                        for (int i_20 = 0; i_20 < 13;i_20 += 1)
                        {
                            {
                                arr_66 [i_19] [i_19] [i_20] [i_19 - 1] [i_19] &= ((min(-1073725440, (arr_48 [i_17 + 2] [i_19 - 1]))) <= (((var_6 < (~84)))));
                                var_15 = (max(var_3, ((var_8 ? (arr_8 [i_19 - 1] [i_17] [21] [i_19] [i_16]) : (arr_8 [i_19 - 1] [i_19 - 1] [i_18] [i_19 - 1] [i_16])))));
                            }
                        }
                    }
                }
                /* LoopNest 3 */
                for (int i_21 = 0; i_21 < 13;i_21 += 1)
                {
                    for (int i_22 = 4; i_22 < 12;i_22 += 1)
                    {
                        for (int i_23 = 2; i_23 < 10;i_23 += 1)
                        {
                            {
                                arr_77 [i_16] = (((arr_22 [i_22 - 1] [1] [20] [1] [i_21] [i_23]) <= 450363933));
                                var_16 = (min(var_16, (((((!((((arr_45 [i_16] [i_23] [i_16] [2]) ? var_6 : var_5))))) ? (((-44 && ((min((arr_39 [i_23] [i_23]), var_7)))))) : ((min((arr_11 [i_23] [i_22] [i_22 - 2] [i_22 - 3]), (var_0 == -911513642)))))))));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
