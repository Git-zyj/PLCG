/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 93917
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=93917 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/93917
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        var_16 = 7559;
        var_17 = (max(var_17, (!-8418249313755321876)));
    }
    var_18 = ((max((!var_10), ((0 ? var_8 : var_8)))));
    #pragma endscop
}
