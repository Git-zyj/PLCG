/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 73482
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=73482 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/73482
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 17;i_0 += 1)
    {
        var_15 = var_11;
        var_16 = ((var_5 ? (min((min((arr_1 [3] [3]), 48)), (min(var_8, 1821173553)))) : -786770957));
    }
    var_17 = ((((((~var_13) << (var_2 - 8123210574036309737)))) ? (min(48, 9734992117971427736)) : var_2));
    var_18 = var_11;
    var_19 = ((var_4 * (var_3 / -8003995366313792708)));
    var_20 = var_7;
    #pragma endscop
}
