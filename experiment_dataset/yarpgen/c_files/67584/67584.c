/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 67584
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=67584 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/67584
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_9;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 22;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 23;i_3 += 1)
                    {
                        for (int i_4 = 4; i_4 < 22;i_4 += 1)
                        {
                            {
                                var_15 = var_5;
                                var_16 = ((-var_5 << ((((var_10 ? (~var_4) : var_9)) - 239965239))));
                                var_17 -= var_9;
                                var_18 = var_10;
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 2; i_5 < 22;i_5 += 1)
                    {
                        for (int i_6 = 3; i_6 < 22;i_6 += 1)
                        {
                            {
                                var_19 = ((var_1 ? (var_8 < var_2) : var_5));
                                var_20 = (arr_10 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]);
                                var_21 = var_2;
                                var_22 = var_2;
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_7 = 0; i_7 < 23;i_7 += 1)
                    {
                        for (int i_8 = 1; i_8 < 21;i_8 += 1)
                        {
                            {
                                arr_23 [i_0] [i_0] [i_0] [i_2] [i_0] = (var_4 & var_6);
                                var_23 = (!var_4);
                                arr_24 [i_0] [i_0] [i_1] [i_2] [i_7] = var_8;
                            }
                        }
                    }
                    var_24 = (min(var_24, (!0)));
                    /* LoopNest 2 */
                    for (int i_9 = 1; i_9 < 20;i_9 += 1)
                    {
                        for (int i_10 = 0; i_10 < 23;i_10 += 1)
                        {
                            {
                                var_25 = (min(var_25, var_12));
                                var_26 -= ((~(((var_6 < 48093) ? (((62427 >> (9284 - 9259)))) : var_6))));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
