/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 87277
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=87277 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/87277
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 4; i_0 < 9;i_0 += 1)
    {
        var_20 = (min(var_20, (-2019108703143814804 >= 52923)));
        var_21 = -2019108703143814794;
    }
    var_22 = var_15;
    var_23 = (min(-97, 17));
    #pragma endscop
}
