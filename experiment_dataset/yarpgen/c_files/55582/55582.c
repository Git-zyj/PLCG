/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 55582
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=55582 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/55582
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 ^= ((var_14 ? (var_9 + var_10) : (max(811784760, (((var_5 ? 0 : var_7)))))));
    var_17 = ((((((((var_13 ? var_9 : var_0))) ? (~3787053292) : (~-42)))) ? var_14 : var_15));

    for (int i_0 = 1; i_0 < 15;i_0 += 1)
    {
        var_18 = (max(var_18, 255));
        arr_2 [i_0] = (~(arr_0 [i_0] [i_0 - 1]));
        arr_3 [i_0] = ((((!(((-42 ? (arr_1 [i_0] [12]) : (arr_1 [i_0 - 1] [12])))))) ? var_11 : (((0 ? 767107051 : (((153 == (arr_0 [i_0] [i_0])))))))));
        var_19 ^= ((!(((var_11 ? (arr_1 [i_0 - 1] [i_0 - 1]) : var_12)))));
    }
    for (int i_1 = 1; i_1 < 12;i_1 += 1)
    {
        var_20 = ((((((-(((arr_1 [i_1] [i_1]) ? var_6 : var_11)))) + 9223372036854775807)) << ((((var_7 ? (min((arr_1 [i_1] [7]), var_0)) : 103)) - 74313586))));
        var_21 |= 255;
    }
    /* vectorizable */
    for (int i_2 = 0; i_2 < 1;i_2 += 1)
    {
        var_22 = ((var_1 || (arr_6 [i_2])));
        var_23 *= (arr_4 [10] [10]);
    }
    #pragma endscop
}
