/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 69535
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=69535 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/69535
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = ((((15 ? (75 != var_1) : var_10)) >> var_4));

    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        var_13 = (((arr_2 [i_0]) ? 3243641284424910474 : -16));
        var_14 *= (((((arr_2 [i_0]) ? (arr_1 [i_0]) : (arr_1 [i_0]))) >> (max((~var_10), (((arr_1 [i_0]) ? (arr_2 [i_0]) : (arr_2 [1])))))));
        var_15 = (((arr_1 [i_0]) ? ((-39 ? (((arr_1 [i_0]) ? 162 : (arr_0 [i_0] [i_0]))) : (-19 ^ -15))) : ((16 >> (var_8 + 1722456897)))));
    }
    for (int i_1 = 2; i_1 < 16;i_1 += 1)
    {
        var_16 ^= var_3;
        arr_5 [i_1] = (170 ? var_8 : ((-20 ? -27655 : -16)));
        var_17 += ((~((max(5094, (arr_0 [i_1 + 1] [i_1 + 1]))))));
    }

    for (int i_2 = 0; i_2 < 14;i_2 += 1)
    {
        arr_8 [i_2] = 2873852800;
        arr_9 [i_2] [i_2] = ((~((((max((arr_6 [2] [2]), (arr_0 [i_2] [i_2])))) >> ((((15 ? (arr_3 [i_2]) : 149)) - 6058))))));
        var_18 &= var_3;
    }
    #pragma endscop
}
