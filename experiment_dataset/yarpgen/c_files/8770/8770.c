/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 8770
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=8770 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/8770
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 += ((((max(17575006175232, var_0))) ? var_6 : var_3));

    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        var_11 ^= ((((max((arr_0 [i_0]), 9007199254740991)) - ((((arr_1 [i_0] [i_0]) & var_7))))));
        arr_2 [i_0] = ((((-9693 ? ((var_6 ? (arr_1 [i_0] [i_0]) : (arr_0 [i_0]))) : -9693)) % (((-18263 != (9692 ^ 10))))));
        arr_3 [i_0] = (((arr_1 [i_0] [i_0]) ? ((((min(var_4, (arr_1 [i_0] [i_0])))) ? (arr_0 [i_0]) : (((arr_0 [i_0]) ? 9705 : 9714)))) : (arr_1 [i_0] [i_0])));
        var_12 = (((((((((arr_0 [i_0]) - -9715))) ? ((((arr_1 [i_0] [i_0]) || (arr_1 [i_0] [i_0])))) : (max(var_2, var_6))))) ? (arr_0 [i_0]) : (max((15988723437990206987 | var_9), (((0 ? 9085112850765042136 : (arr_0 [i_0]))))))));
        var_13 = 15988723437990206987;
    }
    #pragma endscop
}
