/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 71309
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=71309 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/71309
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_0;
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 22;i_1 += 1)
        {
            {
                var_21 ^= min(27, var_11);
                var_22 = (min(var_22, -27));
            }
        }
    }
    var_23 = -1651234400;
    var_24 = 907338401437848365;
    #pragma endscop
}
