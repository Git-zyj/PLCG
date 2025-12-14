/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 95106
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=95106 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/95106
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        var_14 = 7321;
        var_15 -= (arr_0 [i_0]);
        var_16 |= (!1);
    }
    var_17 ^= (max(-179413405, (((var_10 ? var_0 : -85)))));
    #pragma endscop
}
