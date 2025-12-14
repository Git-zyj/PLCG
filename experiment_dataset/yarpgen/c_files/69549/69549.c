/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 69549
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=69549 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/69549
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        var_14 = (min(((min((arr_1 [i_0 - 1]), (arr_1 [i_0 - 1])))), ((-28172 ? (8705024097878171145 / 797059650) : -4141521484))));
        var_15 = ((797059650 ? (arr_1 [i_0 - 1]) : (((min((arr_1 [i_0 - 1]), (arr_1 [i_0 - 1])))))));
        arr_2 [i_0] = (887901260 ? (((-((min(93, var_8)))))) : var_7);
        var_16 = var_11;
    }

    for (int i_1 = 1; i_1 < 7;i_1 += 1)
    {
        var_17 |= (((((max(var_12, (arr_3 [2])))) ? (arr_1 [i_1]) : ((max(var_13, 19714))))));
        arr_5 [i_1] = (arr_3 [i_1]);
    }
    var_18 = var_13;
    #pragma endscop
}
