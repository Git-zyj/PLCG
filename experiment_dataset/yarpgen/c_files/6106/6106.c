/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 6106
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=6106 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/6106
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 ^= var_8;
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            {
                var_17 = (((((var_10 ? var_10 : var_9))) ? var_8 : ((var_14 ? var_14 : var_3))));
                var_18 = var_12;
            }
        }
    }
    var_19 = var_13;
    #pragma endscop
}
