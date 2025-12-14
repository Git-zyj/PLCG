/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 66974
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=66974 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/66974
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 |= (max(var_15, (max(var_14, (min(var_3, var_10))))));
    var_17 = var_0;
    var_18 = var_14;
    var_19 |= (var_15 >= 599734931);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 21;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 20;i_3 += 1)
                    {
                        {
                            arr_12 [i_0] [i_0] [i_2] [i_3] = var_13;
                            var_20 *= ((var_5 ? var_2 : var_8));
                        }
                    }
                }
                var_21 = (min(var_21, (arr_6 [i_0] [i_0])));
                arr_13 [i_0] [15] [i_0] = ((var_3 ? -7111092911400359072 : (((var_15 ? (min(63194, var_15)) : var_15)))));
                /* LoopNest 3 */
                for (int i_4 = 0; i_4 < 21;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 21;i_5 += 1)
                    {
                        for (int i_6 = 3; i_6 < 19;i_6 += 1)
                        {
                            {
                                var_22 = (max(var_22, var_2));
                                arr_25 [0] [0] [i_4] [i_4] [i_6 - 2] [i_6] = ((-(170 == 2944797817)));
                                var_23 *= (((arr_7 [i_6 - 1] [i_6 - 3]) | 1));
                                var_24 = (min(((max((((arr_21 [i_5]) ? (arr_2 [i_0]) : 0)), -var_8))), (((arr_20 [i_6 - 3]) - (arr_20 [i_6 + 1])))));
                            }
                        }
                    }
                }
                arr_26 [10] [i_0] = var_7;
            }
        }
    }
    #pragma endscop
}
