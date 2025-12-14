/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 99172
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=99172 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/99172
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 *= ((var_10 ? (((((var_8 ? var_8 : var_2))) ? ((var_13 ? var_6 : var_12)) : var_4)) : (((-((var_9 ? var_1 : var_8)))))));

    for (int i_0 = 2; i_0 < 9;i_0 += 1)
    {
        arr_3 [i_0] [i_0] = ((((((arr_1 [1]) ? (arr_1 [i_0]) : (((arr_1 [i_0]) ? (arr_1 [i_0 + 1]) : (arr_1 [i_0])))))) ? (((!(arr_1 [i_0])))) : (((!(arr_1 [i_0 + 1]))))));
        var_15 = ((+((((((arr_2 [i_0]) ? (arr_0 [i_0 - 2] [i_0 - 2]) : (arr_0 [8] [2])))) ? (((arr_0 [i_0] [i_0]) ? (arr_1 [i_0]) : (arr_1 [i_0]))) : (((arr_2 [i_0]) ? (arr_0 [i_0] [i_0]) : (arr_0 [i_0] [i_0 + 1])))))));
        arr_4 [i_0] = ((((!(((-(arr_0 [i_0] [i_0])))))) ? (((((((arr_2 [2]) ? (arr_2 [i_0]) : (arr_0 [i_0] [i_0])))) ? (((arr_2 [i_0]) ? (arr_2 [i_0 - 2]) : (arr_2 [i_0]))) : (((arr_2 [i_0]) ? (arr_2 [9]) : (arr_2 [i_0])))))) : 17));
    }
    var_16 = (min(var_16, ((((((~(~var_0)))) ? var_13 : ((var_8 ? ((var_2 ? var_5 : var_7)) : var_0)))))));
    #pragma endscop
}
