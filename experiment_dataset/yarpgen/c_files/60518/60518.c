/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 60518
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=60518 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/60518
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (max(var_19, var_3));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        arr_2 [12] = ((27489 >= (((arr_0 [i_0]) ? (arr_0 [i_0]) : var_12))));
        var_20 += (((arr_0 [20]) >> (var_7 - 1273475975)));
    }

    /* vectorizable */
    for (int i_1 = 0; i_1 < 23;i_1 += 1)
    {
        var_21 = (arr_4 [i_1]);
        var_22 = var_5;
        var_23 = var_7;
    }
    #pragma endscop
}
