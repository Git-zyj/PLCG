/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 95224
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=95224 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/95224
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_0;

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        arr_3 [i_0] [i_0] = (var_13 ? ((-var_10 ? var_14 : var_12)) : ((((var_12 ? var_9 : var_12)) & (66 - var_15))));
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 19;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 19;i_3 += 1)
                {
                    {

                        for (int i_4 = 0; i_4 < 19;i_4 += 1)
                        {
                            var_18 -= (min((((var_14 + 231) - (arr_12 [10] [i_1]))), (((var_14 + 2147483647) << (var_12 - 482793139)))));
                            arr_14 [15] [i_0] [0] [14] [i_0] [i_0] [i_0] = ((((var_5 / (var_15 * var_10))) & 10));
                            arr_15 [i_4] [i_4] [i_0] [i_0] [i_1] [i_0] = -827285036;
                        }
                        arr_16 [i_0] [i_1] = (arr_1 [11]);
                        var_19 = (max(var_19, var_9));
                    }
                }
            }
        }
        var_20 = -66;
        var_21 -= ((!((!(arr_9 [i_0] [i_0])))));
    }
    var_22 = ((536870910 ? ((~(var_7 | 14746016829432585229))) : (((((((14746016829432585222 ? 118 : var_9))) && var_4))))));
    #pragma endscop
}
