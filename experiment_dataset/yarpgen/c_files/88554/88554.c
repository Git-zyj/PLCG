/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 88554
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=88554 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/88554
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (((!var_16) ? (var_14 - -5757429044609012554) : (max(var_4, (1 / var_15)))));

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        arr_4 [i_0] [i_0] = (-((((arr_0 [i_0]) && var_0))));
        var_21 = (((((((var_9 ? var_3 : var_11))) ? (min(-15123473, var_16)) : ((min(var_17, (arr_2 [i_0] [i_0])))))) > (((!(((682617316 ? (arr_0 [i_0]) : (arr_1 [10] [i_0])))))))));
    }
    var_22 = (~var_8);
    #pragma endscop
}
