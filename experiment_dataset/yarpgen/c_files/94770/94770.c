/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 94770
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=94770 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/94770
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = ((min(var_7, var_1)));
    var_14 = var_0;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        var_15 *= (((arr_0 [i_0] [i_0]) / (arr_0 [i_0] [i_0])));
        var_16 = arr_0 [3] [3];
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 16;i_1 += 1)
    {
        var_17 = (max(var_17, (!var_9)));
        var_18 = (~251);
        var_19 = 251;
    }
    #pragma endscop
}
