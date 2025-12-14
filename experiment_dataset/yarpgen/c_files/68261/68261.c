/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 68261
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=68261 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/68261
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        arr_2 [i_0] = ((18446744073709551615 ? 25 : 96));
        var_15 -= (arr_0 [i_0] [i_0]);
        arr_3 [i_0] = ((((1485 + ((127 ? 64051 : 263173062669586361)))) - ((5 ? ((max((arr_1 [i_0]), 1485))) : (max((arr_0 [i_0] [i_0]), var_1))))));
    }
    var_16 = ((-117518562 & 2860694378) ? ((var_5 ? var_13 : (((min(97, var_6)))))) : (((((var_0 ? 117518559 : 1485))) ? (-1528722018 | 263173062669586343) : 57)));
    var_17 = var_12;
    var_18 -= min(((-4 ? var_3 : ((var_0 << (26498 - 26479))))), (!337371277));
    #pragma endscop
}
