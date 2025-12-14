/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 72021
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=72021 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/72021
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 |= ((var_6 ? (~-165493537838130235) : ((((min(3394758104, var_1))) % -2440102815659933043))));

    for (int i_0 = 1; i_0 < 15;i_0 += 1)
    {
        var_12 = ((!((min((max(4268873455291712329, var_10)), ((max((arr_1 [i_0]), var_9))))))));
        arr_2 [i_0] [i_0] = max(((~((1 ? var_1 : (arr_1 [10]))))), ((var_8 ? ((max(var_3, (arr_0 [i_0] [i_0 + 2])))) : (max((arr_1 [i_0]), 900209191)))));
        arr_3 [i_0] [i_0] = (min((((!((min(var_2, 24204)))))), 3895180871));
    }
    var_13 = (max(var_13, ((max(3394758102, 7912)))));
    #pragma endscop
}
