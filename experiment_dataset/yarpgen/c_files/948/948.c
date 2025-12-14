/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 948
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=948 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/948
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (max(1, 68));
    var_19 *= 81;

    /* vectorizable */
    for (int i_0 = 2; i_0 < 15;i_0 += 1)
    {
        var_20 = -var_6;
        var_21 = var_4;
        var_22 = ((-(((arr_1 [i_0]) - var_6))));
        var_23 *= var_17;
    }
    #pragma endscop
}
