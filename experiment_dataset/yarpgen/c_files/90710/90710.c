/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 90710
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=90710 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/90710
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    arr_8 [i_0] [i_0] [i_2] [i_2] = var_11;
                    arr_9 [i_0] [i_2] [i_2] [i_0] = ((16 + ((max(-2, 29)))));
                    var_15 += ((~(var_8 | 2)));
                }
            }
        }
    }

    /* vectorizable */
    for (int i_3 = 0; i_3 < 22;i_3 += 1)
    {
        arr_12 [i_3] = var_6;
        var_16 |= (var_13 >= var_3);
        arr_13 [i_3] [i_3] = var_2;
        /* LoopNest 2 */
        for (int i_4 = 1; i_4 < 21;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 22;i_5 += 1)
            {
                {
                    arr_19 [i_3] = var_13;
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 22;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 22;i_7 += 1)
                        {
                            {
                                var_17 = var_0;
                                arr_24 [i_3] [i_6] [i_5] [i_3] = var_2;
                                arr_25 [i_3] = var_12;
                                var_18 = ((var_10 ? var_1 : var_4));
                            }
                        }
                    }
                    arr_26 [i_3] [i_3] = var_1;
                    var_19 = var_8;
                    /* LoopNest 2 */
                    for (int i_8 = 0; i_8 < 22;i_8 += 1)
                    {
                        for (int i_9 = 0; i_9 < 22;i_9 += 1)
                        {
                            {
                                var_20 *= -1;
                                var_21 -= var_12;
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
