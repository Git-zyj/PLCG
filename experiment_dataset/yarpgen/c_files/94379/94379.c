/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 94379
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=94379 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/94379
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        var_20 = (min((((arr_1 [2] [2]) ? (arr_2 [i_0]) : (((arr_0 [i_0]) ? var_8 : var_7)))), (((arr_2 [i_0]) / ((max(var_8, (arr_2 [i_0]))))))));
        var_21 = (min((((!(((var_1 ? (arr_2 [i_0]) : -1)))))), ((min((arr_2 [i_0]), var_13)))));
        var_22 = (max((((((var_12 - (arr_2 [5])))) ? var_7 : (arr_0 [i_0]))), (((((((arr_2 [i_0]) >> (var_13 - 11481215970631642463)))) || ((!(arr_0 [i_0]))))))));
        var_23 = ((((var_10 > (arr_1 [i_0] [i_0]))) ? ((((var_3 > (arr_2 [i_0]))) ? (arr_0 [i_0]) : var_14)) : ((max((arr_0 [i_0]), (var_9 <= 1))))));
        arr_3 [i_0] [5] = (((arr_0 [i_0]) + (arr_1 [i_0] [i_0])));
    }
    for (int i_1 = 1; i_1 < 20;i_1 += 1)
    {
        var_24 &= (((((((arr_6 [i_1 - 1] [i_1 - 1]) <= (arr_6 [i_1 + 1] [i_1 - 1]))))) ^ ((var_10 ? (arr_4 [i_1 - 1]) : (var_1 / var_11)))));
        var_25 = (((((-(arr_6 [i_1 - 1] [i_1 - 1])) - (((arr_4 [i_1]) ? (arr_6 [9] [i_1]) : var_11))))));
        var_26 = ((((min((arr_4 [i_1 - 1]), (arr_4 [i_1 - 1])))) <= (!var_15)));
    }
    var_27 |= (min(((var_7 ? var_11 : var_10)), (var_11 ^ var_1)));
    #pragma endscop
}
