/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 59241
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=59241 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/59241
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = ((((var_1 - ((var_6 ? 3855289265138703153 : -1)))) + (((((min(var_11, var_7))) ? var_6 : var_2)))));

    for (int i_0 = 1; i_0 < 6;i_0 += 1)
    {
        var_15 = (arr_1 [2] [5]);
        var_16 = -17494;
        var_17 = 210240987;
    }
    var_18 = ((((5078 + var_9) ? (var_12 * var_6) : (max(var_9, var_13)))));
    var_19 = (max(var_19, ((((((min(var_11, var_7)) - var_12)) - (min(var_2, ((min(-210240991, var_3))))))))));
    #pragma endscop
}
