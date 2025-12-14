/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 72089
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=72089 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/72089
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 -= 1;

    for (int i_0 = 4; i_0 < 9;i_0 += 1)
    {
        var_13 = (min((min(112, ((max((arr_0 [i_0 - 1]), (arr_2 [i_0] [i_0])))))), (((1 ? ((1 ? 1 : var_1)) : 31013)))));
        arr_3 [i_0] = (28 || 31002);
        var_14 = (arr_1 [3] [i_0]);
    }
    var_15 = (((((((max(var_1, 989930282746304460))) ? ((var_2 ? var_5 : var_1)) : ((min(3754550254, var_0)))))) ? 7881890064624537563 : var_3));
    var_16 = (min(var_8, var_10));
    #pragma endscop
}
