/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 72138
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=72138 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/72138
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_2;
    var_15 = var_6;
    var_16 = (((((1 ? 45550 : var_2)) << (((((~16384) + 16441)) - 12)))));

    for (int i_0 = 4; i_0 < 12;i_0 += 1)
    {
        var_17 = (max((45550 / 1), ((-1207567548 - (arr_1 [i_0 + 1])))));
        var_18 = 0;
        var_19 = ((((((arr_1 [i_0 - 1]) < 4071980670))) << ((((-739942477 ? -1207567548 : 1)) + 1207567571))));
    }
    #pragma endscop
}
