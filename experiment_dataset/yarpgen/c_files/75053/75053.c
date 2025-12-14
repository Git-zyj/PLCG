/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 75053
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=75053 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/75053
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (max(var_16, var_11));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_17 = (arr_0 [i_0] [i_0]);
        var_18 = (min(var_18, (arr_0 [i_0] [i_0])));
    }
    var_19 = var_10;
    #pragma endscop
}
