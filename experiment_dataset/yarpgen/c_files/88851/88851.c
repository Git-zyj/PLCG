/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 88851
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=88851 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/88851
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 3; i_0 < 22;i_0 += 1)
    {
        arr_2 [3] [i_0] = ((((max((min((arr_0 [i_0]), var_15)), (~-35)))) ? (((arr_1 [i_0]) * 2850426775)) : ((var_6 ? 1444540545 : 2850426775))));
        var_18 = (~16480);
        var_19 = var_5;
    }
    var_20 = (max(((-((-29 ? var_5 : var_14)))), (((-8623861841539708757 ? var_14 : var_12)))));
    var_21 ^= var_10;
    #pragma endscop
}
