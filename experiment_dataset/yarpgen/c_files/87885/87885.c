/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 87885
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=87885 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/87885
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        var_12 = (arr_0 [i_0] [4]);
        arr_2 [i_0] = ((var_9 ^ (arr_1 [i_0] [i_0])));
        var_13 = ((1623240183 ? 122 : 19));
        var_14 = var_2;
    }
    var_15 -= ((var_11 ? (((min(var_11, var_3)))) : (((((var_5 ? var_1 : var_9))) ? (min(var_8, -119)) : ((min(-51173020, var_5)))))));
    #pragma endscop
}
