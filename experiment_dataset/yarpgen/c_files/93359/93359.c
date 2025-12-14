/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 93359
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=93359 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/93359
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        var_15 = ((((-(arr_1 [i_0]))) - ((var_4 ? ((-(arr_1 [1]))) : var_11))));
        var_16 = 0;
    }
    var_17 = (max(var_17, ((max(var_11, var_12)))));
    #pragma endscop
}
