/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 80021
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=80021 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/80021
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (min((((-((var_16 ? 10 : var_13))))), ((((min(var_11, var_15))) ? var_17 : var_19))));

    for (int i_0 = 1; i_0 < 12;i_0 += 1)
    {
        var_21 -= (--19);
        var_22 = min((arr_0 [i_0 - 1]), 107);
    }
    #pragma endscop
}
