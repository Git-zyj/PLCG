/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 79265
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=79265 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/79265
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (!var_5);

    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        arr_2 [i_0] = ((-(arr_1 [3])));
        var_12 = (min(var_12, ((min(((((((arr_0 [i_0]) + 183)) * (!183)))), (min(((min(var_1, (arr_1 [2])))), (((arr_1 [i_0]) ? -18309 : var_0)))))))));
        var_13 -= (max((((arr_1 [i_0]) ? (arr_0 [i_0]) : var_2)), 73));
    }
    for (int i_1 = 0; i_1 < 13;i_1 += 1)
    {
        var_14 |= (arr_3 [i_1]);
        var_15 = ((-(arr_4 [i_1])));
        var_16 = ((123 + ((var_9 / (var_10 & var_1)))));
    }
    for (int i_2 = 0; i_2 < 12;i_2 += 1)
    {
        arr_9 [i_2] = var_2;
        arr_10 [i_2] = (min(((((max(679494165, var_8))) ? (((max((arr_4 [i_2]), -68)))) : var_4)), ((13774 ? (((arr_1 [8]) / var_8)) : -var_2))));
    }
    #pragma endscop
}
