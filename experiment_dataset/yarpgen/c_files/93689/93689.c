/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 93689
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=93689 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/93689
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (max(var_15, var_4));

    for (int i_0 = 0; i_0 < 23;i_0 += 1) /* same iter space */
    {
        var_16 = (max(var_1, ((max((!var_1), var_3)))));
        var_17 = ((~(max(524288, var_7))));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 23;i_1 += 1) /* same iter space */
    {
        var_18 = var_13;
        arr_6 [15] = (~var_9);
        var_19 = (min(var_19, 3764084104));
    }
    var_20 = var_10;
    #pragma endscop
}
