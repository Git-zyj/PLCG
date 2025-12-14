/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 59487
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=59487 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/59487
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = ((~((49152 ? 3747400913520546828 : 384))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        var_12 = ((var_8 | ((1 ? 0 : 262144))));
        arr_2 [i_0] = -1;
        arr_3 [1] = var_10;
    }
    #pragma endscop
}
