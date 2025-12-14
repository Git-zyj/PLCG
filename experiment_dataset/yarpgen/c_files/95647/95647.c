/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 95647
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=95647 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/95647
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = 18446744073709551615;
    var_15 = var_9;

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_16 = var_6;
        var_17 = ((~(min(28372, var_4))));
        var_18 = ((+(max((arr_1 [i_0] [i_0]), (6816 | var_7)))));
        var_19 = (((((-28358 ? var_10 : 1010510208))) && 1010510208));
        var_20 = (((((((arr_1 [i_0] [i_0]) ? var_5 : (arr_1 [i_0] [i_0]))) + 2147483647)) << (((max(((var_8 >> (((arr_1 [6] [i_0]) - 312571623)))), 1217546406)) - 1217546406))));
    }
    #pragma endscop
}
