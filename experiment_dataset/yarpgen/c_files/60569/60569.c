/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 60569
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=60569 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/60569
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 += ((!((((var_6 ? 121454796 : var_7)) != (min(var_10, var_0))))));
    var_16 = (~-var_0);

    /* vectorizable */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        arr_4 [i_0] [20] &= 64;
        var_17 = var_4;
    }
    var_18 = (max(var_18, var_14));
    #pragma endscop
}
