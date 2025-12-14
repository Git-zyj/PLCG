/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 61106
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=61106 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/61106
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (max(0, 0));

    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        var_15 = (max(var_15, ((max((min(-2147483645, (max(262142, 0)))), ((min(70, (min(2147483645, -2147483645))))))))));
        var_16 = 109;
    }
    #pragma endscop
}
