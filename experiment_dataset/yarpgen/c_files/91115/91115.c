/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 91115
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=91115 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/91115
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = ((var_9 ? (min(var_12, (min(var_11, var_7)))) : var_2));

    for (int i_0 = 2; i_0 < 9;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = ((-(((((min(33, (arr_1 [i_0 - 2]))))) + ((var_0 ? var_12 : 31640))))));
        var_14 = var_12;
        var_15 = (min(var_15, (((min(var_9, var_12))))));
        arr_3 [i_0 + 1] |= (!105);
    }
    var_16 = (min(var_16, ((var_6 || ((((6001594389331601260 && var_2) ? (var_12 || var_12) : var_1)))))));
    #pragma endscop
}
