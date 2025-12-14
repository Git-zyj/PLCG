/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 77429
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=77429 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/77429
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        var_15 = (~var_4);
        var_16 = ((var_13 ? (min((~1492257125), ((192 ? 1 : 17479288642682795052)))) : (((var_11 ? (arr_1 [i_0] [i_0]) : -7913467946102359792)))));
        var_17 = (~-7913467946102359796);
        var_18 = (min((min(749426061, 7913467946102359792)), 6171058520043313048));
        var_19 = (arr_1 [i_0] [i_0]);
    }
    var_20 = ((var_2 ? var_7 : (+-1273175775)));
    var_21 = var_14;
    #pragma endscop
}
