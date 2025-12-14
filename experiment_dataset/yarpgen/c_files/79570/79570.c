/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 79570
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=79570 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/79570
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 20;i_1 += 1)
        {
            {
                var_14 = var_1;
                var_15 = (((((var_1 - var_1) * var_5)) & (((var_3 <= var_1) * (var_2 - var_4)))));
            }
        }
    }
    var_16 = var_1;
    var_17 = ((var_13 & (var_1 | var_5)));
    /* LoopNest 2 */
    for (int i_2 = 1; i_2 < 11;i_2 += 1)
    {
        for (int i_3 = 2; i_3 < 11;i_3 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_4 = 4; i_4 < 11;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 12;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 12;i_6 += 1)
                        {
                            {
                                arr_18 [i_2] [i_5] [i_4] [i_2 - 1] [i_2] = ((((var_2 << (((var_9 / var_3) - 1849329792938004)))) | var_6));
                                arr_19 [i_2] [i_5] [i_4] [i_3] [i_2] = var_3;
                                var_18 = (var_3 == var_11);
                            }
                        }
                    }
                }

                for (int i_7 = 0; i_7 < 1;i_7 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_8 = 0; i_8 < 12;i_8 += 1)
                    {
                        for (int i_9 = 2; i_9 < 10;i_9 += 1)
                        {
                            {
                                var_19 = var_5;
                                var_20 = (max(var_20, (((var_9 >> (((((var_3 << (var_4 - 32777))) == (var_7 < var_3)))))))));
                                var_21 ^= var_5;
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_10 = 0; i_10 < 12;i_10 += 1)
                    {
                        for (int i_11 = 0; i_11 < 12;i_11 += 1)
                        {
                            {
                                var_22 = (((((var_9 ^ var_4) | (32767 | 18501))) ^ var_1));
                                var_23 = (var_13 && var_5);
                            }
                        }
                    }
                }
                for (int i_12 = 0; i_12 < 12;i_12 += 1)
                {
                    var_24 *= var_11;

                    /* vectorizable */
                    for (int i_13 = 2; i_13 < 9;i_13 += 1)
                    {
                        var_25 = (max(var_25, var_3));

                        for (int i_14 = 1; i_14 < 9;i_14 += 1)
                        {
                            arr_39 [i_2] = var_6;
                            arr_40 [i_13] [i_2] [i_13] [i_14] [i_2] = (((((var_7 + 9223372036854775807) >> (var_5 - 45))) << (var_3 - 1604)));
                        }
                        var_26 = var_12;
                    }
                    /* vectorizable */
                    for (int i_15 = 0; i_15 < 12;i_15 += 1)
                    {
                        arr_44 [i_2] [i_2] [8] [3] [i_2 - 1] [i_2] = var_2;
                        var_27 = (((var_10 && var_1) > (var_3 % var_8)));
                    }
                }
                arr_45 [i_3] [i_2] [i_3] = var_5;
            }
        }
    }
    #pragma endscop
}
