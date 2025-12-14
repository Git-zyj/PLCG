/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 85435
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=85435 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/85435
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_15;
    var_18 = var_4;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        var_19 = (~2182750190791635151);
        var_20 = var_16;
    }
    #pragma endscop
}
