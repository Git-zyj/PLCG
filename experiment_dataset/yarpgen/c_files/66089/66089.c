/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 66089
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=66089 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/66089
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        var_13 = (min(var_13, 45));
        var_14 = (arr_1 [i_0]);
        var_15 = (((arr_1 [i_0]) ^ (arr_2 [i_0])));
        var_16 = ((((0 ? var_6 : var_6)) < 211));
    }
    var_17 = var_3;
    #pragma endscop
}
