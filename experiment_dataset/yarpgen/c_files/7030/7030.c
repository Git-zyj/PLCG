/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 7030
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=7030 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/7030
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = ((var_14 ? ((((((var_11 ? var_18 : var_12)) <= ((min(var_15, var_19))))))) : var_16));
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 15;i_2 += 1)
            {
                {
                    var_21 = -16;
                    arr_10 [10] [10] [i_2] [14] &= var_9;
                }
            }
        }
    }
    var_22 = var_15;
    #pragma endscop
}
