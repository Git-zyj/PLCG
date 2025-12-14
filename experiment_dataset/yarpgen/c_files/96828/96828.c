/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 96828
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=96828 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/96828
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        var_17 = (0 * 324193050);
        var_18 = (max(var_18, 18196359379241386223));
    }
    var_19 = (((((var_8 ? var_3 : var_11)) / (var_13 + var_16))) / (((1 ? (((var_12 ? 103 : 1))) : var_5))));
    var_20 = (max(var_20, ((((((max(1, var_3))) | 643516179)) >> (((((min(var_12, var_12)) ? ((var_12 ? var_16 : var_4)) : var_6)) - 4823542836189872660))))));
    var_21 = (!1);
    #pragma endscop
}
