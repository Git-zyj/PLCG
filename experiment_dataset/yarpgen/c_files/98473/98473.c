/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 98473
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=98473 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/98473
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        arr_3 [i_0] [16] = (((2147483647 ? 1673429695 : 3339230385)) ^ (((((max(-473648003, (arr_1 [i_0] [i_0])))) ? 1083414974 : -2104161838))));
        var_15 = 4294967287;
    }
    var_16 = (((((max(var_1, var_3)) - (var_9 + var_0)))) ? var_5 : ((-((var_11 ? 1583967356 : var_4)))));
    #pragma endscop
}
