/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 64105
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=64105 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/64105
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = ((var_6 ? (((((min(var_11, var_4))) + (var_8 - var_3)))) : (min(((max(var_4, var_8))), -var_6))));

    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        var_14 += ((((((min(var_7, var_0))) ? (((arr_2 [i_0]) ? (arr_0 [i_0]) : var_2)) : ((max(var_1, (arr_2 [i_0])))))) % ((-((var_4 ? (arr_0 [i_0]) : var_11))))));

        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            arr_5 [i_0] &= (max((((arr_0 [i_0]) ? ((((arr_4 [1] [i_0]) / (arr_2 [i_1])))) : (var_12 / var_12))), (((-(((arr_1 [i_0]) - var_2)))))));
            var_15 += ((((-(arr_3 [i_1]))) > (((!(arr_1 [i_0]))))));
            var_16 = (((min(50331648, (var_3 & var_8)))) + (max(((var_9 ? var_6 : var_11)), -var_12)));
        }
        var_17 += (min((((arr_1 [i_0]) ? (((arr_0 [4]) ? (arr_1 [i_0]) : (arr_1 [12]))) : ((-(arr_3 [i_0]))))), (arr_4 [i_0] [i_0])));
    }
    #pragma endscop
}
