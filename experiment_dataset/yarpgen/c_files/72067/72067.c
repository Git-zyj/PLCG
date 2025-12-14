/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 72067
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=72067 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/72067
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = max(((244 - ((-90 ? 790808568 : var_12)))), -74);
    var_16 = var_13;
    var_17 = ((var_12 ? (max(var_9, -0)) : 44438));

    for (int i_0 = 1; i_0 < 14;i_0 += 1)
    {
        var_18 = (((max(var_13, (arr_1 [i_0 + 1] [i_0 - 1]))) < (((-113 ? 112 : ((max(var_3, 62563))))))));
        var_19 = (min(((max(102, 49))), 62563));
        var_20 = (((~var_8) ? var_11 : (var_10 | var_4)));
    }
    for (int i_1 = 0; i_1 < 12;i_1 += 1)
    {
        var_21 = (!596084275);
        var_22 = (min(((~((-113 ? (arr_4 [i_1] [i_1]) : (arr_1 [10] [10]))))), (min(11, ((min(106, -126)))))));
    }
    #pragma endscop
}
