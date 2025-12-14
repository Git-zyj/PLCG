/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 82474
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=82474 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/82474
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 16;i_0 += 1)
    {
        var_19 = (max(var_19, (~6946)));
        arr_2 [i_0 + 1] = ((!(arr_1 [i_0 - 2])));
    }
    var_20 = (((35184372088831 ? (var_7 & var_4) : var_1)) * (!var_18));
    #pragma endscop
}
