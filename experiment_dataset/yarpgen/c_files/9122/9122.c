/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 9122
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=9122 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/9122
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_10 = -63464216;
        var_11 = 3968704599;
    }
    var_12 = max(831954675, (((var_7 ? var_0 : 63464216))));
    #pragma endscop
}
