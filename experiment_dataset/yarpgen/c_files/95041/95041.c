/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 95041
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=95041 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/95041
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        var_17 = ((var_15 ? 3589153685 : 1));
        var_18 = var_13;
    }
    var_19 = var_5;
    #pragma endscop
}
