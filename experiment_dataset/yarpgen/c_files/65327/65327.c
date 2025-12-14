/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 65327
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=65327 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/65327
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = var_16;

    for (int i_0 = 3; i_0 < 19;i_0 += 1)
    {
        arr_2 [i_0] = max((arr_0 [i_0]), (48 && var_10));
        arr_3 [i_0] = ((((((max(15469, var_4))))) | 7438533548126273371));

        /* vectorizable */
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            arr_6 [i_0] [i_0 - 3] [i_0 - 3] = 23483;
            var_19 = (min(var_19, ((var_17 ? (arr_5 [i_0 - 3]) : (arr_0 [i_0])))));
            /* LoopNest 3 */
            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                for (int i_3 = 2; i_3 < 20;i_3 += 1)
                {
                    for (int i_4 = 0; i_4 < 22;i_4 += 1)
                    {
                        {
                            var_20 = (max(var_20, (((var_17 ? ((var_1 ? 1 : 48)) : (((arr_10 [i_0 + 1]) + 65527)))))));
                            arr_15 [i_0] = 50;
                            var_21 = (-51 >= var_14);
                        }
                    }
                }
            }
        }
    }
    for (int i_5 = 1; i_5 < 16;i_5 += 1)
    {
        arr_18 [i_5] [i_5] = ((-3840122439976169127 ? (!var_1) : ((1 ? 58 : var_11))));
        arr_19 [i_5] = (4993449996366709637 ? -57 : 1524416577058536398);
        arr_20 [i_5] [i_5] = (arr_9 [i_5] [i_5] [i_5 + 2]);
        var_22 = 58;
    }
    /* vectorizable */
    for (int i_6 = 1; i_6 < 1;i_6 += 1)
    {
        arr_23 [i_6] [i_6] = (((arr_10 [i_6 - 1]) & (arr_10 [i_6 - 1])));
        var_23 = 534773760;
    }
    var_24 = var_11;
    var_25 = var_0;
    #pragma endscop
}
