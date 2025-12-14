/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 98401
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=98401 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/98401
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_14;

    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        var_20 = (min(((max((var_5 == var_3), (max(var_12, var_3))))), var_11));
        var_21 += ((!((!(arr_1 [1])))));
        var_22 = (((arr_0 [i_0]) ? ((max((max(var_10, (arr_1 [i_0]))), (max(-1118989168, (arr_0 [i_0])))))) : (((arr_1 [i_0]) / ((1 ? 1836842222 : 131071))))));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 18;i_1 += 1)
    {
        var_23 ^= (((arr_2 [i_1]) ? (arr_3 [i_1]) : (arr_2 [i_1])));
        arr_5 [i_1] = (((arr_3 [i_1]) >> (var_4 - 29729)));
    }
    var_24 = ((var_16 | (min((~var_14), (min(var_18, var_4))))));
    var_25 &= ((var_2 ? var_3 : var_15));
    #pragma endscop
}
