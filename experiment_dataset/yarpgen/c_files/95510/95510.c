/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 95510
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=95510 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/95510
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = ((var_8 || ((((((var_1 ? var_9 : var_7))) ? var_7 : (var_2 && var_5))))));

    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        var_11 = (((max((!24309), ((var_1 ? 177 : -24310)))) | (arr_1 [i_0])));
        var_12 = ((((((arr_1 [i_0]) ? (arr_0 [i_0] [i_0]) : -5379638188771753982))) ? (~0) : (arr_0 [i_0] [i_0])));
        var_13 = (max(24310, var_6));
    }
    /* vectorizable */
    for (int i_1 = 2; i_1 < 8;i_1 += 1)
    {
        var_14 = (((arr_3 [i_1]) + var_6));
        var_15 = (min(var_15, var_4));
        var_16 = ((!(arr_1 [i_1 + 1])));
    }
    #pragma endscop
}
