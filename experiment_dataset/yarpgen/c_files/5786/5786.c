/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 5786
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=5786 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/5786
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (((min(var_7, var_10))));
    var_16 = var_5;
    var_17 = var_13;

    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        var_18 = (arr_2 [i_0]);
        var_19 = var_4;
        var_20 = (~(((((var_3 ? (arr_3 [6]) : (arr_2 [i_0])))) - (min((arr_1 [i_0] [i_0]), var_12)))));
        arr_4 [i_0] = ((var_9 | ((min((min(var_13, var_13)), (((var_6 <= (arr_3 [i_0])))))))));
    }
    #pragma endscop
}
