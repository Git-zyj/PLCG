/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 60463
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=60463 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/60463
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 += var_9;

    for (int i_0 = 2; i_0 < 9;i_0 += 1)
    {
        var_16 = var_5;
        var_17 = (min(var_17, 65535));
        var_18 ^= (((arr_1 [i_0]) ? var_0 : ((var_13 ? 27957 : var_4))));
    }
    /* vectorizable */
    for (int i_1 = 4; i_1 < 12;i_1 += 1)
    {
        var_19 ^= (((((((-9223372036854775807 - 1) + 9223372036854775807)) + 9223372036854775807)) << (((arr_4 [i_1 + 3]) - 1))));
        var_20 = (max(var_20, var_8));
    }
    #pragma endscop
}
