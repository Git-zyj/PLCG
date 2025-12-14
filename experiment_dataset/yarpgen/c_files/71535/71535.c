/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 71535
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=71535 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/71535
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 &= var_5;
    var_19 = ((!((min(((max(17413, 61517))), (max(var_5, var_6)))))));

    for (int i_0 = 4; i_0 < 23;i_0 += 1)
    {
        arr_2 [i_0] [1] = (arr_1 [i_0]);
        var_20 = (arr_0 [i_0] [i_0]);
    }

    for (int i_1 = 2; i_1 < 20;i_1 += 1)
    {
        var_21 = ((min((!49018), (arr_5 [i_1 - 1]))));
        var_22 = (max(var_22, (((((max((arr_1 [i_1 + 1]), (arr_1 [i_1 - 2])))) ? (((arr_1 [i_1 + 1]) ? (arr_3 [i_1 - 2]) : (arr_1 [i_1 - 1]))) : ((max((arr_1 [i_1 - 1]), (arr_1 [i_1 - 2])))))))));
    }
    var_23 = ((((((var_5 ? var_2 : var_3)) ? (max(var_11, var_13)) : (~var_1)))));
    #pragma endscop
}
