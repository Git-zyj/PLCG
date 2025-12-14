/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 89501
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=89501 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/89501
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (((((((0 ? 1733550241 : 12494641897469872831))) ? var_11 : ((min(158, 31044)))))) ? ((var_12 ? var_7 : ((7524 ? 12494641897469872831 : var_6)))) : var_9);

    /* vectorizable */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        var_15 = ((!(((var_8 ? (arr_0 [i_0]) : 5952102176239678773)))));
        arr_3 [i_0] [i_0] = (((arr_2 [i_0]) ? (((!(arr_1 [i_0])))) : 1));
        arr_4 [i_0] = 1;
    }
    for (int i_1 = 0; i_1 < 25;i_1 += 1)
    {
        var_16 = (min(var_16, 12494641897469872838));
        arr_7 [i_1] = ((!(((min(var_3, 13003181829305880120))))));
    }
    var_17 = ((((var_12 < var_0) ? 1 : (!1))));
    #pragma endscop
}
