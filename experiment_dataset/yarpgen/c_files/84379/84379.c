/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 84379
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=84379 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/84379
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        arr_4 [i_0] [i_0] = (((((-95 && (arr_2 [8]))) ? (max(-95, (arr_0 [i_0] [i_0]))) : ((max(29, var_3))))));
        var_14 = (max((max((arr_1 [i_0]), (arr_1 [i_0]))), (min((arr_1 [i_0]), (arr_1 [i_0])))));
    }
    for (int i_1 = 0; i_1 < 12;i_1 += 1)
    {
        var_15 = (min(var_15, ((((((~(!11481484700143588506)))) ? (((arr_6 [i_1]) ? ((((!(arr_6 [i_1]))))) : (((arr_6 [3]) ? (arr_0 [i_1] [i_1]) : (arr_0 [i_1] [21]))))) : var_4)))));
        arr_7 [i_1] [i_1] = (var_1 > -95);
    }
    for (int i_2 = 2; i_2 < 18;i_2 += 1)
    {
        var_16 = arr_3 [i_2] [i_2];
        var_17 = (min(var_17, (max((max((arr_0 [i_2 - 2] [i_2 + 1]), var_1)), (arr_9 [i_2])))));
    }
    var_18 = var_11;
    var_19 |= (((((29721 ? 80 : var_7))) & ((var_11 ? var_10 : var_13))));
    var_20 = var_8;
    #pragma endscop
}
