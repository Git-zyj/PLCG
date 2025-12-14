/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 76471
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=76471 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/76471
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = var_10;
    var_17 = (min(var_17, (98 / 43604)));
    var_18 = (((((((var_10 ? var_13 : var_7))) || (((var_0 ? var_11 : var_13))))) || ((((var_7 & var_8) ? ((var_6 ? var_3 : var_2)) : (((var_9 ? var_5 : var_6))))))));

    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        var_19 = ((((!((((arr_1 [i_0]) ? (arr_1 [3]) : (arr_0 [i_0] [i_0])))))) ? (((((arr_0 [i_0] [i_0]) ? (arr_0 [i_0] [i_0]) : (arr_1 [i_0]))) + (arr_1 [i_0]))) : (((-(arr_1 [i_0]))))));
        var_20 = (max(var_20, (((-(((((arr_1 [i_0]) > (arr_1 [i_0]))) ? (arr_1 [i_0]) : (((arr_1 [i_0]) ? (arr_1 [i_0]) : (arr_0 [i_0] [i_0]))))))))));
    }
    var_21 = var_11;
    #pragma endscop
}
