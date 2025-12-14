/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 90260
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=90260 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/90260
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (((((var_9 ? ((min(var_12, var_17))) : ((var_17 ? var_4 : var_13))))) ? (((!45) ? var_13 : ((var_16 ? var_16 : var_15)))) : (!var_1)));
    var_21 = ((((((((2044 ? var_11 : var_15))) ? var_15 : (min(var_11, var_17))))) - var_7));
    var_22 = var_6;

    for (int i_0 = 2; i_0 < 20;i_0 += 1)
    {
        arr_2 [i_0] = (((((arr_0 [i_0 + 2] [i_0]) >= var_16)) ? (((((var_6 ? (arr_1 [i_0]) : var_17))) ? (((arr_0 [18] [i_0]) / var_4)) : var_1)) : -252));
        var_23 = ((var_9 != (arr_0 [i_0] [i_0])));
    }
    #pragma endscop
}
