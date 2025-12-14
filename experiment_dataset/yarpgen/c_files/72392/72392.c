/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 72392
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=72392 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/72392
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = -13;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_14 = ((((((arr_1 [i_0] [i_0]) ? (arr_1 [16] [16]) : var_8))) ? (arr_2 [i_0]) : ((~(arr_2 [i_0])))));
        var_15 *= (((((arr_0 [i_0]) == var_8)) ? ((~(arr_0 [i_0]))) : ((var_11 ? (arr_0 [i_0]) : (arr_0 [i_0])))));
    }
    var_16 |= var_0;
    #pragma endscop
}
