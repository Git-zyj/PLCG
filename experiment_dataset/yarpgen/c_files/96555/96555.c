/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 96555
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=96555 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/96555
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        var_17 = var_1;
        var_18 = 14;
    }
    var_19 = (max((((var_14 ? var_2 : var_2))), ((min(var_2, var_12)))));
    #pragma endscop
}
