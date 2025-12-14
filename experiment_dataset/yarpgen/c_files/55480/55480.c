/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 55480
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=55480 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/55480
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = ((var_9 ? (((var_15 ? var_4 : var_16))) : (83 % 94)));
    var_18 = ((((max(var_15, var_11))) ? ((max(var_12, 915))) : (((-1 || -2463) ? var_9 : 0))));

    /* vectorizable */
    for (int i_0 = 2; i_0 < 13;i_0 += 1)
    {
        arr_3 [i_0] = ((151 ? 127 : 2443));
        var_19 = var_13;
    }
    #pragma endscop
}
