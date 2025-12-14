/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 75012
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=75012 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/75012
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = -var_9;

    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        arr_4 [i_0] = var_4;
        arr_5 [i_0] |= (max(-923373284, ((((arr_0 [i_0]) > 923373283)))));
        var_14 = (min(var_14, (min(-881716764, ((min(var_10, (arr_3 [i_0]))))))));
        var_15 = ((!((((arr_0 [i_0]) ? (arr_3 [i_0]) : var_3)))));
        arr_6 [i_0] &= (max((min(-24684, ((7 ? var_8 : var_9)))), ((var_10 ? ((var_4 ? var_8 : -923373284)) : (~var_3)))));
    }
    #pragma endscop
}
