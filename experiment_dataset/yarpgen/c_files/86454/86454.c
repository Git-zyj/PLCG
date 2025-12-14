/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 86454
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=86454 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/86454
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_7;
    var_18 = var_13;

    for (int i_0 = 1; i_0 < 18;i_0 += 1)
    {
        var_19 = (max(var_19, var_16));
        var_20 = (var_7 | var_9);
    }
    #pragma endscop
}
