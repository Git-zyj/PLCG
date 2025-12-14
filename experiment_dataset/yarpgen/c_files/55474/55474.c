/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 55474
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=55474 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/55474
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = 8794861737724423011;
    var_20 = (((var_8 + ((var_3 ? 28071 : 37451)))));
    var_21 = (!8355);

    for (int i_0 = 1; i_0 < 13;i_0 += 1)
    {
        var_22 &= ((max((arr_1 [i_0 + 2]), (arr_1 [i_0 + 2]))));
        var_23 = (max((arr_0 [i_0 - 1]), 846135455355966094));
    }
    var_24 = (-(((1 + var_13) ? var_4 : -var_15)));
    #pragma endscop
}
