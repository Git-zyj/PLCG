/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 55685
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=55685 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/55685
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = var_2;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        var_17 = var_1;
        arr_2 [i_0] = ((((var_2 ^ (arr_0 [i_0] [i_0])))) ? (((arr_1 [9] [i_0]) ? (arr_1 [8] [i_0]) : var_15)) : ((var_7 >> (((arr_0 [i_0] [i_0]) - 1093107614)))));
        var_18 = (var_12 & var_8);
    }
    /* vectorizable */
    for (int i_1 = 1; i_1 < 1;i_1 += 1)
    {
        var_19 = 255;
        var_20 *= (!var_4);
    }
    var_21 = var_15;
    #pragma endscop
}
