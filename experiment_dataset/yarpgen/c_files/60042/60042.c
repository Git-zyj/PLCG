/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 60042
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=60042 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/60042
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (max(var_19, (((!(((var_1 ? ((min(var_8, var_0))) : var_13))))))));
    var_20 = min((((((var_18 ? var_10 : var_17))) ? var_11 : (!var_7))), ((max((var_2 == var_3), -124))));

    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        var_21 = (max(var_21, (((((-125 | 2478348507) & ((~(arr_1 [16]))))) & var_11))));
        arr_3 [i_0] = (arr_0 [i_0] [i_0]);
        arr_4 [i_0] = ((((max(22911, 249))) + (((var_13 / 557482817) ? (arr_2 [i_0]) : (arr_2 [i_0])))));
    }
    #pragma endscop
}
