/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 64067
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=64067 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/64067
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        arr_2 [i_0] = (((146 ? (((arr_0 [i_0] [i_0]) ? 7246929000212325305 : 121)) : 146)));
        var_19 = (min(var_19, ((((((7246929000212325310 ? (arr_0 [i_0] [11]) : ((110 << (arr_1 [3])))))) ? -var_6 : ((max(110, 154))))))));
        var_20 = (var_14 || (((((min(353386723683361468, 1))) ? ((1 ? 154 : var_14)) : ((max(135, var_17)))))));
        var_21 = (min(var_21, (((((((134 ? 101 : 3652149012)))) ? (((arr_0 [i_0] [i_0]) >> var_8)) : (((((135 ? 37035 : -7246929000212325306)) <= 11646))))))));
    }
    var_22 -= ((var_5 ? ((((~-1343833061) != var_2))) : ((var_18 ? 0 : (var_7 || var_11)))));
    var_23 = (max(var_17, var_13));
    var_24 = ((126 ? (((((var_0 ? var_14 : var_12)) & var_12))) : (min(((var_12 ? var_5 : var_3)), var_12))));
    #pragma endscop
}
