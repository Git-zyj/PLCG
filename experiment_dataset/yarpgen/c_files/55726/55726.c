/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 55726
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=55726 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/55726
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_15;
    var_21 = ((var_1 ? ((~(max(-124, 18014397435740160)))) : var_15));

    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        var_22 = (arr_2 [i_0]);
        arr_3 [i_0] = ((((arr_0 [i_0 - 1] [i_0 - 1]) < 5334)));
        var_23 |= (~var_1);
        arr_4 [i_0] = ((!(((~((-1017201908 ? var_9 : 248)))))));
    }
    var_24 |= (((((1017201909 ? (min(var_18, 2147483634)) : -28))) ? (((18269916436034375070 || 160133816) ? (1017201901 > -1017201908) : 42)) : 0));
    var_25 |= var_3;
    #pragma endscop
}
