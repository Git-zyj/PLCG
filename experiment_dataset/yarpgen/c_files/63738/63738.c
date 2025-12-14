/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 63738
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=63738 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/63738
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (min(var_19, var_2));

    for (int i_0 = 1; i_0 < 9;i_0 += 1)
    {
        var_20 *= (arr_1 [i_0 - 1]);
        var_21 = (((-9223372036854775807 - 1) ? (((((((arr_0 [i_0] [4]) + -81))) ? ((min(var_6, 1))) : 1))) : ((var_4 ? 1 : (arr_0 [i_0] [i_0 + 1])))));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 17;i_1 += 1)
    {
        var_22 = (min(var_22, 375618697));
        var_23 = (!2309132955267712777);
    }
    for (int i_2 = 2; i_2 < 14;i_2 += 1)
    {
        var_24 &= (((((2309132955267712803 ? (arr_5 [i_2 + 1]) : var_18))) || (((var_1 ? var_18 : var_12)))));
        var_25 = (min(var_25, (max((((min(var_2, 894479870)))), var_15))));
    }
    var_26 = 127;
    var_27 = var_1;
    #pragma endscop
}
