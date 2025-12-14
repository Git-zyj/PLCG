/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 71488
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=71488 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/71488
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = var_12;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        var_19 = -1873401230;
        arr_4 [i_0] [i_0] = 236;
    }
    var_20 = (max(((min((min(var_9, 64498)), var_14))), (max(var_6, var_3))));
    var_21 -= (max(var_11, var_14));
    #pragma endscop
}
