/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 94203
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=94203 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/94203
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 4; i_0 < 12;i_0 += 1)
    {
        arr_3 [i_0] [i_0] = (((((arr_0 [i_0]) > (arr_1 [i_0] [i_0]))) ? (((arr_2 [i_0 + 1]) & var_7)) : var_4));
        var_13 = ((((((arr_1 [i_0] [i_0 - 4]) ? (max((arr_1 [i_0] [i_0]), (arr_1 [i_0] [i_0]))) : 1))) ? (((-96 ? 211 : 112))) : ((~((var_5 ? (arr_1 [i_0] [i_0]) : (arr_2 [i_0])))))));
    }
    var_14 = ((((((var_11 ? 112 : var_8) > 120)))));
    var_15 ^= var_9;
    var_16 = (min(var_16, ((((((118 ? 125 : 11032))) ? (!var_9) : (((!(((var_5 ? var_3 : var_4)))))))))));
    #pragma endscop
}
