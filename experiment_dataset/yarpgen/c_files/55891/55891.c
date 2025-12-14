/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 55891
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=55891 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/55891
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (min((((((var_8 ? 0 : 3785361422))) ? var_2 : (-9223372036854775807 - 1))), (((min(var_0, var_0))))));
    var_12 = (((~9223372036854775807) ? (((var_0 ? var_1 : (1 + 32973)))) : (min(var_2, (var_2 & var_1)))));

    /* vectorizable */
    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        var_13 ^= (((arr_1 [20] [20]) != (var_8 / var_3)));
        var_14 = 233;
        var_15 = (((((var_3 ? (arr_0 [i_0]) : var_5))) ? var_2 : (((var_3 ? var_7 : 41837)))));
    }
    var_16 = (min((max((min(var_0, var_2)), (min(var_1, 9223372036854775807)))), (((var_4 ? 65532 : ((max(var_9, 0))))))));
    #pragma endscop
}
