/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 94117
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=94117 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/94117
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        var_16 = (((((arr_0 [i_0] [i_0]) > (arr_0 [i_0] [i_0]))) ? (arr_0 [6] [i_0]) : (arr_0 [i_0] [5])));
        var_17 += -24;
        var_18 = var_14;
    }
    for (int i_1 = 0; i_1 < 1;i_1 += 1)
    {
        var_19 ^= (((arr_4 [2]) << (var_8 - 1149056880)));
        var_20 += min((((arr_5 [1]) ? ((168 ? 196 : 255)) : (arr_0 [i_1] [i_1]))), ((~(arr_0 [i_1] [i_1]))));
        arr_6 [6] &= ((min((min(61838, (arr_0 [i_1] [i_1]))), (arr_1 [i_1]))) * (((((max((arr_4 [6]), 64))) && (((960650271 ? 1 : (arr_2 [i_1] [i_1]))))))));
    }

    for (int i_2 = 0; i_2 < 21;i_2 += 1)
    {
        var_21 *= ((((((arr_1 [i_2]) << (((arr_9 [i_2]) + 6976381461229537886))))) ? var_10 : -960650259));
        var_22 = (max(var_22, (((+(max(var_1, ((((arr_7 [i_2]) == (arr_9 [i_2])))))))))));
    }
    for (int i_3 = 1; i_3 < 18;i_3 += 1)
    {
        arr_15 [i_3] = ((((var_2 ? 1082558942 : var_10))));
        arr_16 [i_3] [i_3] = ((-(((((arr_14 [i_3 + 1] [i_3]) ? (arr_7 [1]) : (arr_2 [i_3] [i_3]))) << (var_14 - 383)))));
    }
    var_23 = (max(var_15, (((var_9 ? var_12 : var_14)))));
    #pragma endscop
}
