/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 6532
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=6532 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/6532
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        arr_2 [10] = (var_6 + -95);
        arr_3 [i_0] = (!var_9);
        var_15 += 98;
        var_16 = var_5;
    }
    var_17 &= var_11;
    #pragma endscop
}
