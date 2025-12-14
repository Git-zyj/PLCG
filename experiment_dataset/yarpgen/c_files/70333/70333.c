/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 70333
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=70333 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/70333
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_15;
    var_20 = (min(var_20, var_7));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        var_21 = arr_1 [i_0] [i_0];
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 22;i_3 += 1)
                {
                    {
                        var_22 = ((var_4 ? ((var_2 ? 39349 : var_15)) : (127 / 119)));
                        var_23 = var_14;
                    }
                }
            }
        }
        var_24 = arr_3 [9] [i_0] [i_0];
        var_25 -= (((arr_3 [7] [i_0] [7]) << (127 - 124)));
    }
    #pragma endscop
}
