/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 73208
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=73208 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/73208
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = max(((min(((var_13 ? var_8 : var_0)), ((var_5 ? var_0 : -1728167485))))), var_2);

    /* vectorizable */
    for (int i_0 = 2; i_0 < 11;i_0 += 1)
    {
        var_15 = ((((var_9 ? var_7 : var_2)) < -1728167490));
        var_16 = ((~2080768) ? -817170816 : (var_13 % var_9));
        var_17 += (235 ? var_7 : var_0);
    }
    /* vectorizable */
    for (int i_1 = 1; i_1 < 18;i_1 += 1)
    {
        var_18 = (~var_11);
        var_19 &= (((var_9 < 1728167470) ? 8406422528552121208 : (((4294967269 ? var_2 : 817170816)))));
    }
    #pragma endscop
}
