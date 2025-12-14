/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 96350
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=96350 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/96350
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 |= ((var_12 ^ (max(var_13, (~18)))));
    var_21 = var_7;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        var_22 |= var_8;
        arr_4 [i_0] = (arr_2 [i_0] [i_0]);
    }
    #pragma endscop
}
