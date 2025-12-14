/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 91236
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=91236 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/91236
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 *= ((-(~1040540491541522564)));

    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        var_14 = (((max(25, 1040540491541522564)) + -12800));
        var_15 -= ((var_10 ? (arr_1 [1] [i_0]) : (min((arr_1 [i_0] [i_0]), 7038028903423006550))));
    }
    var_16 = var_0;
    #pragma endscop
}
