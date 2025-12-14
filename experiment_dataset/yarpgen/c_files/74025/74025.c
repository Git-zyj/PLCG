/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 74025
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=74025 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/74025
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 14;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 14;i_3 += 1)
                    {
                        for (int i_4 = 3; i_4 < 11;i_4 += 1)
                        {
                            {
                                arr_14 [i_1] [i_1] |= (((arr_13 [i_0 - 1] [i_1] [i_4 + 1]) && ((min(((((arr_5 [i_0]) && var_10))), (min(-5809230919469920315, 9050067542017107337)))))));
                                var_15 -= (min(((((var_8 ? var_10 : var_1)))), ((((708433961010197527 * (arr_0 [i_1] [i_3]))) - ((max(var_11, (arr_9 [i_0] [i_1]))))))));
                            }
                        }
                    }
                    var_16 = (min(1, 1));

                    for (int i_5 = 0; i_5 < 14;i_5 += 1)
                    {
                        arr_17 [i_5] [i_5] [i_5] [i_2] [i_5] [i_5] = (((var_13 - var_10) - (arr_5 [i_0 - 1])));
                        arr_18 [i_2] [i_2] [i_2] [i_1] [i_2] = var_9;
                        var_17 |= ((-(max(var_7, var_10))));
                        arr_19 [i_1] &= 1;
                    }
                    /* vectorizable */
                    for (int i_6 = 1; i_6 < 13;i_6 += 1)
                    {
                        var_18 = (arr_0 [i_0 + 2] [i_1]);
                        var_19 = (max(var_19, ((((var_8 + (arr_11 [i_0 + 2] [i_1] [i_1])))))));
                        arr_22 [i_0] [i_2] [i_2] [i_6] = ((var_12 ? ((((arr_3 [i_6] [i_2]) ? var_5 : 31658))) : 708433961010197531));
                        arr_23 [i_2] = (9223372036854775807 || -10295);
                    }
                    var_20 = ((!(((!1) || (arr_15 [i_0 - 2] [i_0 - 2] [i_0 - 2] [i_0 - 1])))));
                }
            }
        }
    }
    var_21 = (min(var_21, var_14));
    #pragma endscop
}
