/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 60462
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=60462 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/60462
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 *= var_8;

    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        var_13 = 29700;
        var_14 = 20;
        var_15 = (arr_1 [i_0]);
        var_16 -= (arr_1 [i_0]);
    }
    var_17 = var_0;
    var_18 = 14;
    var_19 = -89;
    #pragma endscop
}
