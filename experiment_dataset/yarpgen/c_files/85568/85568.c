/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 85568
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=85568 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/85568
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 1; i_0 < 16;i_0 += 1)
    {
        var_19 = (max(var_19, var_17));
        var_20 = var_11;
        var_21 += (((arr_2 [i_0 - 1]) / (arr_2 [i_0 + 1])));
    }
    var_22 = (min(var_22, var_9));

    /* vectorizable */
    for (int i_1 = 0; i_1 < 15;i_1 += 1)
    {
        var_23 = var_13;
        var_24 = (min(var_24, (~118)));
        var_25 = (((((100663296 ? (arr_0 [i_1] [i_1]) : var_18))) ? var_8 : (arr_5 [i_1])));
    }
    #pragma endscop
}
