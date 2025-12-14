/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 95521
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=95521 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/95521
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 19;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 19;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 19;i_4 += 1)
                        {
                            {
                                var_13 = var_9;
                                arr_13 [i_0] [i_1] [8] [7] [i_4] = ((79 ? 133693440 : 65535));
                                arr_14 [i_1] [i_2] = max((arr_1 [i_1] [i_4]), (arr_6 [18] [i_3] [2] [i_3]));
                            }
                        }
                    }
                }
                arr_15 [i_0 - 2] [i_0] = arr_0 [i_0 - 3];
                arr_16 [i_1] [i_0] = (((arr_5 [i_0 - 2]) ? ((var_0 ? (arr_10 [i_0 - 1] [i_1] [i_1]) : ((var_9 >> (var_10 - 23))))) : (arr_2 [i_1])));
            }
        }
    }

    /* vectorizable */
    for (int i_5 = 0; i_5 < 20;i_5 += 1)
    {
        var_14 -= (((arr_19 [i_5]) ? (arr_19 [i_5]) : (arr_17 [i_5])));
        arr_21 [i_5] [i_5] = (~1);
        arr_22 [i_5] = (((arr_20 [i_5]) ? (arr_17 [i_5]) : (arr_20 [i_5])));
    }
    var_15 = ((((((1 + var_3) ? ((var_2 ? var_9 : var_12)) : -var_10))) ? var_12 : (max(7305946539010131781, 54))));
    var_16 = (((((var_11 ? var_5 : (~var_4)))) ? var_5 : var_7));
    var_17 = var_6;
    #pragma endscop
}
