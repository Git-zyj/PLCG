/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 60751
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=60751 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/60751
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = ((var_7 << ((var_15 >> (var_17 - 8817121493259101612)))));
    var_20 = var_4;

    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        var_21 &= (arr_0 [2]);
        var_22 -= ((((arr_1 [i_0]) && (arr_1 [i_0]))));
    }
    #pragma endscop
}
