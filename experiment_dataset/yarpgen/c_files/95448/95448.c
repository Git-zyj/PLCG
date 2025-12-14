/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 95448
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=95448 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/95448
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 15;i_0 += 1)
    {
        var_15 = (((1 | 883202140) ? (arr_1 [i_0]) : ((((arr_1 [i_0]) != (arr_2 [i_0 + 1]))))));
        var_16 -= ((min((((~(arr_1 [12]))), (min((arr_0 [1]), 25))))));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 10;i_1 += 1)
    {
        var_17 = (((((var_3 ? (arr_4 [i_1]) : 64))) ? (arr_2 [i_1]) : (arr_3 [i_1])));
        var_18 = (((~var_4) ? (arr_5 [i_1]) : ((((arr_2 [i_1]) ? (arr_4 [i_1]) : -883202140)))));
    }
    var_19 = (max(var_19, (((~(~var_0))))));
    var_20 = ((1515722904 ? 22552 : 1687191404281863378));
    #pragma endscop
}
