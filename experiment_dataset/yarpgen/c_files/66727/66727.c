/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 66727
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=66727 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/66727
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 ^= (var_8 / var_12);
    var_17 = (max(var_17, (max(59100, ((((((var_1 ? 0 : var_6))) ? -7691 : var_2)))))));

    for (int i_0 = 1; i_0 < 10;i_0 += 1)
    {
        var_18 = var_8;
        arr_4 [i_0] &= (min(18446744073708503040, ((~(arr_3 [i_0 + 1] [i_0 + 1])))));
    }
    #pragma endscop
}
