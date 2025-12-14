/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 79799
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=79799 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/79799
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        arr_4 [10] = ((((var_4 ? var_9 : -4009617296560284540)) * (22 < -8602551285423227639)));
        var_17 = (min(var_17, -106));
        arr_5 [i_0] = ((var_6 ? var_10 : (arr_1 [i_0])));
        var_18 = ((4820970784441660375 ? -61 : 329434318));
    }
    var_19 = var_15;
    #pragma endscop
}
