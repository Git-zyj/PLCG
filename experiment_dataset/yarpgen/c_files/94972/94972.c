/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 94972
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=94972 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/94972
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        var_12 = (min(var_12, ((1 ? 1 : 1849931068))));
        var_13 = (max(var_13, (1 | -1849931051)));
        var_14 += (((~184) ? 567387877 : -2669274176783364613));
    }
    var_15 = 3909244905289635009;
    var_16 ^= var_6;
    #pragma endscop
}
