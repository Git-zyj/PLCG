/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 95120
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=95120 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/95120
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = var_8;

    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        var_16 = (max(var_16, ((((((((min((arr_0 [i_0] [i_0]), var_14))) - (((arr_1 [i_0] [i_0]) ? 0 : (arr_1 [i_0] [i_0])))))) ? (min((min(var_1, 1852443077982335045)), ((var_6 ? var_0 : 8229457352767895955)))) : (arr_1 [i_0] [i_0]))))));
        var_17 = (min(var_17, (arr_0 [i_0] [i_0])));
    }
    #pragma endscop
}
