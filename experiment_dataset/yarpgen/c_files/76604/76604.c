/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 76604
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=76604 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/76604
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = var_0;
    var_16 = var_4;
    var_17 = (max(var_17, var_13));

    for (int i_0 = 2; i_0 < 12;i_0 += 1)
    {
        var_18 = (max(var_18, (var_11 - var_8)));
        var_19 += (min((max(var_14, var_2)), ((max((arr_0 [12] [i_0]), var_13)))));
        var_20 += var_11;
    }
    for (int i_1 = 3; i_1 < 13;i_1 += 1)
    {
        var_21 = ((((min((arr_4 [i_1 + 1]), (min(var_14, var_3))))) ? (arr_3 [i_1]) : var_12));
        arr_5 [i_1] = var_7;
        var_22 = var_10;
    }
    for (int i_2 = 0; i_2 < 22;i_2 += 1)
    {
        var_23 = (max(var_23, var_7));
        var_24 = (max(var_24, (arr_7 [i_2])));
        var_25 += ((var_7 ? var_14 : var_5));
    }
    for (int i_3 = 0; i_3 < 14;i_3 += 1)
    {
        var_26 = var_14;
        var_27 = (min(var_27, (var_12 >= var_8)));
        var_28 = (max(var_28, ((min(((((arr_3 [2]) ? var_11 : (arr_3 [2])))), ((var_0 ? var_10 : var_12)))))));
    }
    #pragma endscop
}
