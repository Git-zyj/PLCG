/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 9427
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=9427 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/9427
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 14;i_0 += 1)
    {
        arr_3 [i_0] [i_0] = ((((((var_3 / var_15) - var_11))) ? (((var_10 ? var_6 : var_2))) : var_6));
        arr_4 [i_0] = (-(((var_15 && var_3) >> (((var_3 * var_16) - 10813558)))));
        var_17 = ((((1 ? (var_5 > var_5) : var_2)) + ((((var_9 + var_3) <= -var_5)))));
        arr_5 [i_0 + 2] [i_0 - 1] = ((-(((var_3 - var_5) - (var_8 + var_16)))));
    }
    var_18 = ((+((((var_8 + var_7) > var_14)))));
    #pragma endscop
}
