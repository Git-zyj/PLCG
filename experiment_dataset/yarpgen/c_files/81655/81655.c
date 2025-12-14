/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 81655
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=81655 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/81655
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        var_20 = (max((((min((arr_2 [i_0]), 43)) * ((((!(arr_0 [i_0]))))))), ((-(((arr_3 [i_0]) - var_17))))));
        var_21 = (min(var_21, (max(3734646728, -44))));
        var_22 = ((var_13 ? var_11 : (((((1 ? (arr_3 [i_0]) : -3503013673572204072))) ? var_4 : ((-(arr_3 [i_0])))))));
        var_23 = (((arr_3 [i_0]) ? (min(3503013673572204072, 8388607)) : (((-7795 ? (((arr_1 [i_0]) ? 1957231713 : -44)) : ((((-51 + 2147483647) >> (-7795 + 7811)))))))));
    }
    var_24 = var_3;
    var_25 = (((-69 ? var_8 : var_9)));
    var_26 = (min(var_26, (((min(-3503013673572204072, var_0))))));
    var_27 = (min(((var_2 ? (((7795 >> (-7795 + 7810)))) : (min(var_19, 3503013673572204048)))), -var_1));
    #pragma endscop
}
