/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 83216
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=83216 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/83216
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_8;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            {
                var_18 = ((1 ^ (max((~1), var_6))));
                var_19 = (max(var_19, var_1));
                var_20 = var_13;
            }
        }
    }
    var_21 = ((var_6 ? 1 : ((var_5 ? 1 : ((var_9 ? -17 : 56383))))));
    #pragma endscop
}
