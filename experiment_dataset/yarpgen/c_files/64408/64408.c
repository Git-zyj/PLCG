/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 64408
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=64408 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/64408
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (var_0 != ((((!var_8) ? -5 : ((max(var_9, var_7)))))));

    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        var_11 = (max(var_11, ((((((!(((var_9 ? (arr_1 [i_0]) : var_5)))))) > (arr_1 [i_0]))))));
        var_12 += ((!(((0 ^ 0) > 0))));
        var_13 = ((((((arr_0 [i_0]) ? (arr_1 [9]) : (arr_1 [i_0])))) ? (arr_0 [i_0]) : (arr_1 [i_0])));
    }
    for (int i_1 = 2; i_1 < 12;i_1 += 1)
    {
        var_14 = (((((-(arr_1 [i_1])))) ? ((((arr_0 [i_1]) != ((((var_0 != (arr_1 [i_1])))))))) : (((var_1 || (!5))))));
        var_15 = (max(var_15, (arr_0 [i_1])));
        arr_4 [i_1] [i_1] = ((~((((!var_9) > (max((arr_2 [i_1]), (arr_0 [i_1]))))))));
        var_16 = (min(var_16, ((((arr_1 [i_1 - 1]) * (-var_4 || var_2))))));
        var_17 = (~var_5);
    }
    var_18 = ((var_3 < ((var_0 / ((var_2 ? var_9 : var_6))))));
    #pragma endscop
}
