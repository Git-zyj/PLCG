/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 66621
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=66621 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/66621
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 3; i_0 < 14;i_0 += 1)
    {
        var_20 += ((var_3 && (~var_12)));
        var_21 = (arr_2 [i_0]);
    }
    for (int i_1 = 1; i_1 < 8;i_1 += 1)
    {
        arr_6 [i_1] = ((~(arr_2 [i_1])));
        var_22 = var_10;
    }
    var_23 = (228 / 60151);
    var_24 = var_16;
    #pragma endscop
}
