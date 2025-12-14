/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 86278
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=86278 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/86278
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (max(var_6, var_6));
    var_15 = var_9;

    for (int i_0 = 3; i_0 < 20;i_0 += 1)
    {
        arr_2 [i_0] [i_0] |= ((((max((min((-9223372036854775807 - 1), 9223372036854775807)), 0))) ? (((((arr_0 [i_0] [i_0 + 3]) & 9223372036854775807)) / (~-9223372036854775807))) : -0));
        var_16 = 9223372036854775807;
    }
    var_17 = var_13;
    #pragma endscop
}
