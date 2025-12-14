/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 72644
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=72644 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/72644
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (min(var_13, 1));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        var_14 = (min(var_14, -75));
        arr_2 [i_0] [i_0] = (arr_0 [i_0]);
        var_15 = (((arr_0 [i_0]) ? (arr_0 [i_0]) : 23));
    }
    var_16 = (max(((!((min(var_2, var_4))))), ((var_2 && (((var_3 ? 29 : var_8)))))));
    var_17 -= var_5;
    #pragma endscop
}
