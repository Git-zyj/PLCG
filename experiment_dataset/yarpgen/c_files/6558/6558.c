/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 6558
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=6558 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/6558
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (min(var_2, var_5));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        var_17 = var_11;
        var_18 = var_4;
        arr_3 [i_0] = var_10;
        arr_4 [i_0] = var_15;
        var_19 = var_11;
    }
    var_20 = (min(var_4, var_3));
    var_21 ^= (min((min(((min(var_8, var_1))), var_0)), (min(var_14, (min(var_12, var_14))))));
    var_22 = var_6;
    #pragma endscop
}
