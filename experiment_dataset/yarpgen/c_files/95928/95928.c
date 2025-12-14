/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 95928
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=95928 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/95928
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 15;i_1 += 1)
        {
            {
                var_15 -= min(-var_1, var_4);
                var_16 *= (min((min(var_10, var_1)), (((((var_14 ? 284801001675851746 : var_1)) < (1 || var_5))))));
            }
        }
    }
    var_17 = var_9;
    #pragma endscop
}
