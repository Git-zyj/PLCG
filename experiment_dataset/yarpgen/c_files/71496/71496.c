/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 71496
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=71496 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/71496
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 ^= var_1;
    var_16 = (~5803506084647815408);

    /* vectorizable */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        var_17 = (max(var_17, (((var_13 ? var_2 : (var_6 | var_11))))));
        var_18 = ((var_6 ? (arr_1 [i_0]) : var_14));
    }
    #pragma endscop
}
