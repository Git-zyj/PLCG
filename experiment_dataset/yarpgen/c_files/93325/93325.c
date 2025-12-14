/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 93325
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=93325 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/93325
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 3; i_0 < 19;i_0 += 1)
    {
        var_17 *= 6257525954168274833;
        var_18 = (arr_0 [i_0]);
        var_19 = (arr_0 [i_0]);
    }
    var_20 = var_6;
    #pragma endscop
}
