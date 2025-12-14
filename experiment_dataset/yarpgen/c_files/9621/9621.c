/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 9621
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=9621 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/9621
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = var_12;

    for (int i_0 = 0; i_0 < 0;i_0 += 1)
    {
        var_17 -= (min(((var_9 ? (1 / 1) : (((arr_1 [i_0]) * (arr_1 [i_0]))))), ((max((arr_2 [i_0 + 1]), var_10)))));
        var_18 ^= var_12;
    }
    var_19 = var_5;
    var_20 = (min(var_7, (max(var_2, ((var_2 ? var_1 : var_4))))));
    #pragma endscop
}
