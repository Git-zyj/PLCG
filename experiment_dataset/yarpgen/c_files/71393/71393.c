/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 71393
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=71393 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/71393
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = var_11;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            {
                var_19 ^= 4294967295;
                var_20 = (max(var_20, (((((max(1, -10596))))))));
            }
        }
    }
    var_21 = max(((2047 ? ((235 ? var_15 : var_4)) : ((max(var_0, var_9))))), ((var_3 ? (~-10596) : -var_0)));
    #pragma endscop
}
