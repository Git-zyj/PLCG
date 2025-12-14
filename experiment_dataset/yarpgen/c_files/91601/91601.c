/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 91601
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=91601 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/91601
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = -var_0;

    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        arr_2 [i_0] = (((arr_0 [i_0]) ? ((((arr_1 [i_0] [i_0]) ? ((-1 ? (arr_1 [i_0] [i_0]) : (arr_1 [i_0] [i_0]))) : (arr_1 [i_0] [i_0])))) : (((((var_9 ? (arr_0 [i_0]) : (arr_1 [i_0] [i_0])))) ? var_5 : (arr_0 [i_0])))));
        arr_3 [i_0] = var_12;
        var_15 = (((((arr_0 [i_0]) ? var_11 : (arr_0 [i_0]))) / ((((arr_1 [i_0] [i_0]) ? var_5 : (arr_1 [i_0] [i_0]))))));
    }
    for (int i_1 = 0; i_1 < 11;i_1 += 1)
    {
        var_16 += (((((!(arr_4 [i_1])))) & ((var_3 - ((1 ? 1 : 1))))));
        var_17 = (max((((((1073741824 ? 1 : (arr_1 [i_1] [i_1])))) ? (((arr_4 [2]) ? (arr_4 [i_1]) : (arr_1 [i_1] [i_1]))) : (((-1073741824 & (arr_6 [i_1] [i_1])))))), (((((((arr_1 [i_1] [i_1]) >> (var_3 + 16948)))) ? (arr_4 [i_1]) : ((1073741837 ? 28041 : 1)))))));
    }
    var_18 = var_12;
    #pragma endscop
}
