/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 74748
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=74748 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/74748
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 &= (((((var_5 / var_4) ? (min(27, var_5)) : var_8)) + (!27)));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_15 = (arr_0 [i_0]);
        var_16 = var_8;
        var_17 = var_13;
        var_18 = ((var_7 ? (arr_0 [i_0]) : var_11));
    }
    #pragma endscop
}
