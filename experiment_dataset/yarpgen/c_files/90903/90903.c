/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 90903
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=90903 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/90903
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 1; i_0 < 15;i_0 += 1)
    {
        var_19 = var_7;
        var_20 &= var_8;
    }

    for (int i_1 = 3; i_1 < 16;i_1 += 1)
    {
        var_21 = (((!((((arr_1 [2] [i_1]) ? (arr_0 [i_1]) : 214408223))))));
        var_22 ^= ((!((((arr_0 [i_1 - 3]) ? (arr_0 [i_1 - 2]) : 0)))));
        var_23 *= 0;
    }
    var_24 = (var_9 - var_3);
    var_25 ^= 0;
    #pragma endscop
}
