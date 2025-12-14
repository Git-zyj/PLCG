/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 99973
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=99973 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/99973
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (max(var_13, ((var_6 <= (max(((min(var_11, var_2))), (var_0 + var_1)))))));
    var_14 = var_4;

    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        arr_3 [1] = ((((arr_0 [i_0]) <= (arr_0 [i_0]))));
        var_15 = 31249;
    }

    for (int i_1 = 0; i_1 < 19;i_1 += 1)
    {
        arr_6 [i_1] = (max((max(31249, (((arr_0 [1]) ? (arr_1 [i_1]) : (arr_4 [i_1]))))), (arr_5 [i_1] [i_1])));
        var_16 = ((var_7 ? (max((-1000171638 | 1564996113), (arr_2 [i_1]))) : (((max(var_4, (arr_2 [i_1])))))));
    }
    #pragma endscop
}
