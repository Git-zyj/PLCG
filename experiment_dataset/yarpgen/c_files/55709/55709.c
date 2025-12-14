/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 55709
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=55709 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/55709
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        arr_2 [i_0] = (!0);
        arr_3 [i_0] &= ((!(((var_4 * 723653489) > var_6))));
        arr_4 [i_0] = (((((arr_1 [i_0]) && (arr_1 [i_0]))) ? (arr_0 [i_0] [i_0]) : ((var_9 ? 2864443088 : 0))));
        arr_5 [i_0] |= (((min(var_2, 0))));
        var_11 *= (0 / 16459436749717156426);
    }
    var_12 = 1238596645;
    var_13 = ((var_7 ? (((((var_2 ? 1 : 127))) ? (27327 && var_4) : (var_9 || var_2))) : var_0));
    #pragma endscop
}
