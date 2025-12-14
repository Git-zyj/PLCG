/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 96787
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=96787 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/96787
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (~(max(var_3, 1151194204)));
    var_18 *= ((var_5 << ((((min(var_11, 16745))) - 16744))));
    var_19 += max((max(((min(30, var_10))), (max(17767126150383260976, 1)))), (15111 - var_11));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        var_20 -= (arr_0 [i_0]);
        arr_2 [i_0] &= ((var_4 ? 1 : (arr_1 [i_0])));
    }
    #pragma endscop
}
