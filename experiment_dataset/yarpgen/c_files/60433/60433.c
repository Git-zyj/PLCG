/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 60433
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=60433 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/60433
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (max(var_13, var_7));
    var_14 = (((((81 ? 41525 : -675321944))) ? 227 : 2715605891));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        var_15 = 98;
        arr_2 [i_0] = -5;
    }
    #pragma endscop
}
