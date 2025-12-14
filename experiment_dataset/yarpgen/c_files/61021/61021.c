/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 61021
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=61021 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/61021
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 1; i_0 < 16;i_0 += 1)
    {
        var_18 = ((var_15 ? (((arr_0 [i_0]) ? (arr_1 [1]) : 773551289)) : (arr_1 [i_0])));
        arr_2 [i_0] = ((((~(arr_0 [i_0]))) + ((var_8 - (arr_0 [i_0])))));
    }
    var_19 = (((var_5 / var_0) ? var_0 : (6443 / var_0)));
    var_20 = (var_8 / (var_4 & var_9));
    #pragma endscop
}
