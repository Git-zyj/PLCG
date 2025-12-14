/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 5981
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=5981 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/5981
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (((-34 - var_0) - ((((min(var_7, var_8))) - var_2))));

    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        var_12 = (((min(var_10, (arr_1 [i_0]))) >= (((var_5 ? (arr_1 [i_0]) : (arr_1 [i_0]))))));
        arr_3 [6] [6] = (max((((arr_0 [i_0]) ? (((arr_1 [i_0]) ? var_4 : (arr_0 [i_0]))) : ((max(-1009895401, 25874))))), (((((var_8 > (arr_0 [i_0]))) ? (-34 != 34) : (min((arr_2 [i_0]), 34)))))));
        arr_4 [i_0] = (min(var_0, (((arr_1 [i_0]) ? (arr_2 [i_0]) : (((arr_2 [i_0]) ? (arr_0 [i_0]) : (arr_0 [15])))))));
        arr_5 [i_0] [i_0] = ((min((!95), 192)));
    }
    #pragma endscop
}
