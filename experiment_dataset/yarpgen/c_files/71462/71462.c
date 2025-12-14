/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 71462
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=71462 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/71462
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (max(var_18, ((min(var_7, (min(var_1, (249 ^ -2096690697157429743))))))));

    for (int i_0 = 1; i_0 < 22;i_0 += 1)
    {
        var_19 |= ((max((((var_8 ? var_13 : var_14))), ((1340177047774535024 ? (arr_0 [i_0]) : 1381727698)))));
        arr_2 [i_0] = (max(((-0 ? 65535 : (696293685 % -21943))), ((((((arr_0 [i_0]) ? (arr_1 [i_0]) : (arr_0 [i_0])))) ? ((min(var_4, var_4))) : 319330481))));
    }
    #pragma endscop
}
