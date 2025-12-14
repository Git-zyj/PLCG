/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 91850
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=91850 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/91850
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (((var_10 ? var_14 : (1 > 1))) - (var_13 != -1744633573));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 21;i_2 += 1)
            {
                {
                    var_17 += ((((((arr_0 [i_1]) ? (arr_0 [i_0]) : (arr_0 [i_2])))) ? 1763698821 : 90));
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 18;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 21;i_4 += 1)
                        {
                            {
                                var_18 = (arr_0 [i_1]);
                                var_19 = (~15);
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 3; i_5 < 18;i_5 += 1)
                    {
                        for (int i_6 = 1; i_6 < 20;i_6 += 1)
                        {
                            {
                                arr_17 [i_0] [12] [i_2] [i_5] [i_5] = var_5;
                                arr_18 [19] [i_5] [i_6] = (165 && 72);
                            }
                        }
                    }
                    arr_19 [i_1] [i_2] [i_2] = (((arr_9 [i_0] [i_1] [i_2] [i_2]) ? var_4 : 15960));
                    /* LoopNest 2 */
                    for (int i_7 = 1; i_7 < 19;i_7 += 1)
                    {
                        for (int i_8 = 3; i_8 < 19;i_8 += 1)
                        {
                            {
                                arr_25 [i_0] [i_1] [i_8] [14] [14] = var_1;
                                var_20 |= (min(((var_12 / (arr_14 [i_0] [i_7 + 2] [i_1]))), (arr_2 [i_8 + 1] [i_8 - 3])));
                            }
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_9 = 2; i_9 < 15;i_9 += 1)
    {
        for (int i_10 = 2; i_10 < 13;i_10 += 1)
        {
            {
                arr_32 [i_10] &= ((var_0 | (((!0) ? var_3 : var_13))));

                for (int i_11 = 0; i_11 < 16;i_11 += 1)
                {
                    var_21 = (max(var_7, (min((-2147483647 - 1), 402064720))));
                    var_22 = (((((var_11 ? ((var_8 ? -6152 : 16388654362878673867)) : (((min(var_1, -15985))))))) ? var_13 : (((var_7 ? ((((-2147483647 - 1) > 91))) : (arr_26 [i_9] [8]))))));
                    var_23 = ((var_14 + ((((arr_14 [i_10 - 1] [i_10 - 1] [i_9]) <= var_3)))));
                }
                for (int i_12 = 0; i_12 < 16;i_12 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_13 = 4; i_13 < 14;i_13 += 1)
                    {
                        for (int i_14 = 0; i_14 < 16;i_14 += 1)
                        {
                            {
                                arr_42 [i_9] [i_10] [i_10] [i_12] [i_9] [i_10] = (!1617653442);
                                var_24 = (var_11 != 23214);
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_15 = 0; i_15 < 16;i_15 += 1)
                    {
                        for (int i_16 = 0; i_16 < 16;i_16 += 1)
                        {
                            {
                                var_25 = (max(var_25, (arr_45 [i_9] [i_10] [i_12] [i_16] [i_15])));
                                arr_48 [i_9] [i_10] [i_12] [i_15] [i_12] &= ((!(arr_4 [i_12])));
                            }
                        }
                    }
                    arr_49 [i_9] [i_10] [10] [i_9] = -18;
                    arr_50 [i_9] [i_10] = (~-var_7);
                    var_26 ^= (arr_12 [i_12] [i_12] [4] [i_9] [i_9]);
                }
                arr_51 [i_9] [i_9] = ((-var_13 ? 5626 : (((!(3 && 35515))))));
            }
        }
    }
    #pragma endscop
}
