/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 85210
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=85210 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/85210
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = var_11;
    var_13 = var_3;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 19;i_1 += 1)
        {
            {
                var_14 ^= ((var_0 ? var_11 : ((var_6 ? var_7 : var_8))));
                var_15 = ((var_9 ? ((var_5 ? ((var_7 ? var_6 : var_3)) : var_6)) : var_11));
            }
        }
    }
    #pragma endscop
}
