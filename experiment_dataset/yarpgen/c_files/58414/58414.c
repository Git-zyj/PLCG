/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 58414
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=58414 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/58414
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = min(((min(var_0, var_2))), ((-116 ? var_10 : var_3)));

    for (int i_0 = 2; i_0 < 14;i_0 += 1)
    {
        arr_2 [i_0 - 2] [i_0] = var_5;
        var_12 = (min(var_12, (((231 ? 115 : 257906847)))));
    }
    #pragma endscop
}
