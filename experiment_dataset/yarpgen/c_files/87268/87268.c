/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 87268
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=87268 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/87268
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = ((((((((min(var_7, var_7)))) - var_4))) ? (((((var_6 ? var_2 : var_7))) | ((var_0 ? var_5 : var_1)))) : var_12));
    var_14 += var_3;

    for (int i_0 = 2; i_0 < 21;i_0 += 1)
    {
        var_15 ^= arr_0 [i_0] [i_0 + 1];
        var_16 = (((((((arr_1 [i_0] [i_0]) == var_5)) ? (((min((arr_1 [i_0] [i_0]), (arr_1 [i_0] [18]))))) : (((arr_2 [14]) ? var_9 : (arr_2 [i_0]))))) <= ((var_1 | (((arr_0 [i_0] [i_0]) ? (arr_1 [i_0] [i_0]) : (arr_2 [i_0])))))));
    }
    for (int i_1 = 2; i_1 < 17;i_1 += 1)
    {
        var_17 = (min(var_17, (((((max((((var_2 ? var_6 : (arr_0 [i_1] [i_1])))), ((var_10 - (arr_4 [2])))))) ? var_11 : ((((((arr_6 [i_1]) ? var_11 : (arr_2 [7])))) ? (arr_2 [i_1]) : var_4)))))));
        var_18 += (((min((arr_3 [i_1] [i_1 - 2]), (arr_3 [i_1] [i_1]))) ? (arr_2 [i_1]) : (min(var_3, ((var_1 ? (arr_4 [i_1 + 1]) : var_10))))));
    }
    var_19 = ((((((var_3 ? var_11 : var_4)) > (min(var_7, var_11)))) ? var_2 : (min((((var_6 ? var_6 : var_1))), (max(var_6, var_10))))));
    var_20 = var_11;
    #pragma endscop
}
