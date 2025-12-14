/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 75866
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=75866 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/75866
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_20 -= 1;
        var_21 = (~1);
    }
    var_22 = ((~(min(18096810239861487352, 18096810239861487352))));
    var_23 = var_10;
    var_24 ^= var_13;
    var_25 += 35;
    #pragma endscop
}
