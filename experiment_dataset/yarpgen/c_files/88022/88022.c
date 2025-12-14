/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 88022
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=88022 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/88022
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (max(var_20, ((min(var_5, -112)))));
    var_21 = (min(var_21, ((((((var_0 ? 112 : var_11))) ? var_6 : (max(var_19, var_15)))))));

    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        arr_2 [i_0] = var_19;
        var_22 = var_18;
        var_23 = 32764;
        var_24 += var_4;
    }
    #pragma endscop
}
