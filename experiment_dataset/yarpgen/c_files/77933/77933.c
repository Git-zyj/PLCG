/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 77933
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=77933 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/77933
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (((((var_5 ? (var_3 - var_2) : ((9 ? var_16 : var_4))))) ? var_2 : ((~((var_16 ? var_15 : var_2))))));
    var_18 = var_16;
    var_19 = ((var_9 ? var_2 : var_13));
    var_20 = var_8;

    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        var_21 = ((9 ? ((var_7 ? (((min(-22476, -9641)))) : (max(var_7, var_16)))) : (((-22476 ? -22482 : -22476)))));
        var_22 = var_11;
    }
    #pragma endscop
}
