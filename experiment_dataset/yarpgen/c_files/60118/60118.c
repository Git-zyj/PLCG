/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 60118
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=60118 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/60118
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        var_20 = (max(2046, 2060));
        arr_2 [i_0] = (max(((max((~4294965253), ((var_15 ? var_1 : (arr_1 [i_0] [i_0])))))), (((((4294965249 ? 2059 : var_17))) ? (max((arr_1 [i_0] [i_0]), (arr_0 [i_0]))) : (~7751225)))));
    }
    var_21 = var_12;
    #pragma endscop
}
