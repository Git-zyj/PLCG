/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 96820
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=96820 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/96820
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        var_15 = var_9;
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    arr_8 [i_0] [i_0] [i_0] = var_8;
                    var_16 = var_5;
                    var_17 = ((var_14 ? var_2 : var_5));
                }
            }
        }
        var_18 -= (~var_0);
        var_19 = var_0;
    }
    for (int i_3 = 1; i_3 < 19;i_3 += 1)
    {
        var_20 = (var_13 ? var_12 : var_6);
        arr_12 [i_3 + 2] [i_3 + 2] &= 8369724881794527320;
        var_21 ^= var_11;
    }
    var_22 = var_13;
    var_23 = (max(var_23, var_4));
    #pragma endscop
}
