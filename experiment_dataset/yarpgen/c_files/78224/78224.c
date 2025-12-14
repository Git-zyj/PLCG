/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 78224
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=78224 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/78224
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = ((var_5 ? var_0 : ((var_6 ? ((min(-73, -89))) : ((max(-67, var_1)))))));
    var_12 = ((((min(var_7, var_9))) ? var_1 : ((min(var_0, -3)))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        var_13 = var_1;
        var_14 = ((!(arr_1 [7])));
    }
    var_15 = 38;
    #pragma endscop
}
