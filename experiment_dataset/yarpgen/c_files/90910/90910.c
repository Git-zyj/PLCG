/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 90910
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=90910 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/90910
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = var_9;

    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        arr_3 [i_0] [9] = ((((max(var_8, var_0))) ? (arr_1 [i_0]) : (((arr_2 [11]) ? (min(var_6, (arr_0 [i_0]))) : (arr_0 [i_0])))));
        var_14 = var_2;
        var_15 = (max(var_15, (arr_0 [i_0])));
    }
    for (int i_1 = 0; i_1 < 21;i_1 += 1)
    {
        var_16 ^= (var_8 ? (((arr_6 [7]) ? (arr_7 [i_1]) : (arr_1 [i_1]))) : ((min(var_12, (4469620502113653983 < 0)))));
        var_17 = ((((arr_5 [i_1]) ? -1645020453 : (arr_5 [i_1]))));
    }
    for (int i_2 = 0; i_2 < 12;i_2 += 1)
    {
        var_18 ^= (((arr_0 [i_2]) ? ((min(var_8, (arr_9 [i_2] [i_2])))) : (((arr_0 [i_2]) ? var_3 : 65280))));
        arr_11 [i_2] [i_2] = ((var_5 - (((var_4 ? 10213705829260840067 : (arr_10 [i_2]))))));
        arr_12 [i_2] = (max((arr_0 [i_2]), ((min((2147483647 != 59738), (arr_5 [4]))))));
    }
    #pragma endscop
}
