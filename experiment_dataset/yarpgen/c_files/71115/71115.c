/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 71115
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=71115 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/71115
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        var_16 *= (((7523 & 15360) << (15346 - 15339)));
        var_17 = (max(var_17, (((((min((((arr_0 [7]) ? var_8 : 50182)), 65535))) ? (((var_12 && ((min(65535, 52840)))))) : (((arr_1 [i_0] [i_0]) ? ((23405 ? (arr_0 [i_0]) : (arr_0 [i_0]))) : 65533)))))));
        arr_2 [i_0] = max(58861, (arr_0 [i_0]));
    }
    var_18 = -var_11;
    #pragma endscop
}
