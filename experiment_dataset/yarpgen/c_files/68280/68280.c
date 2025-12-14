/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 68280
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=68280 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/68280
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (min(var_12, 2147483647));
    var_13 = (max(var_13, var_4));
    var_14 = var_5;

    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        var_15 *= 2147483621;
        var_16 *= (max(1893693596, (max((arr_0 [i_0]), 0))));
    }
    #pragma endscop
}
