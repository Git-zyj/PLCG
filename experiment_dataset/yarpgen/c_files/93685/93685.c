/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 93685
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=93685 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/93685
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        arr_2 [2] [19] = (((~8090339611989122690) | ((((arr_0 [1]) ? (arr_0 [7]) : 36351)))));
        arr_3 [4] = ((((((arr_0 [i_0]) ? 2147483647 : (arr_0 [21])))) ? ((var_0 + (arr_0 [1]))) : ((max((arr_1 [19] [i_0]), var_5)))));
    }
    for (int i_1 = 0; i_1 < 25;i_1 += 1)
    {
        arr_7 [i_1] = ((var_9 ? var_9 : (((!(!var_1))))));
        var_11 = (~var_3);
        var_12 = (arr_4 [i_1]);
    }
    for (int i_2 = 1; i_2 < 9;i_2 += 1)
    {
        arr_12 [3] = (((((arr_8 [i_2 - 1]) != (arr_8 [i_2 - 1]))) ? (max((arr_8 [8]), var_3)) : var_4));
        arr_13 [2] = ((var_8 ? var_1 : (((arr_4 [14]) / var_5))));
    }
    var_13 = 960;
    #pragma endscop
}
