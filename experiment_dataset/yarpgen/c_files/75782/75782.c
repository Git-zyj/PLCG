/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 75782
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=75782 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/75782
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_2;
    var_15 = (max(var_8, ((min((var_12 != var_3), ((var_5 ? var_13 : var_10)))))));
    var_16 = (536870912 < 56);

    for (int i_0 = 3; i_0 < 14;i_0 += 1)
    {
        var_17 = (min((1644671478 ^ 0), var_9));
        var_18 = arr_1 [i_0 - 1];
        var_19 &= ((+(((226 * var_6) ? -94 : (arr_0 [i_0 - 2])))));
    }
    var_20 = var_8;
    #pragma endscop
}
