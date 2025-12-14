/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 76761
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=76761 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/76761
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 3; i_0 < 11;i_0 += 1)
    {
        arr_3 [7] [7] = 1;
        arr_4 [i_0] &= (((((+((min((arr_1 [6]), (arr_0 [1]))))))) ? ((-var_3 ? (min((arr_2 [6] [i_0]), 1696239934)) : (arr_0 [i_0 - 1]))) : var_15));
        arr_5 [i_0] = ((((((arr_0 [i_0]) ? (arr_0 [i_0]) : 3030014261285583556)) >= ((19930 ? -8475486351429657464 : (arr_1 [i_0 - 2]))))));
    }
    var_16 = (max(var_16, ((min(-154, 4081325432)))));
    #pragma endscop
}
