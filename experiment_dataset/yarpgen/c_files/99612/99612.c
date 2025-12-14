/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 99612
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=99612 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/99612
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 12;i_0 += 1)
    {
        var_15 = (var_7 ? -23196 : 4805010583587944083);
        var_16 = (((((arr_0 [i_0 + 1]) ? var_9 : -0)) & ((((min(18446744073709551615, (arr_0 [i_0])))) ? (((~(arr_0 [4])))) : (arr_2 [i_0 - 1] [i_0])))));
    }
    for (int i_1 = 0; i_1 < 1;i_1 += 1)
    {
        var_17 = ((-(min((((arr_3 [1] [i_1]) * 18446744073709551615)), ((2288345756 ? 0 : -23196))))));
        var_18 = (max(((var_14 ^ (((arr_4 [i_1]) ? 1 : 4095)))), (arr_3 [i_1] [i_1])));
        var_19 *= (((((~(arr_1 [i_1])))) ? (arr_0 [i_1]) : (arr_4 [i_1])));
        var_20 |= ((~(arr_2 [i_1] [i_1])));
    }
    for (int i_2 = 3; i_2 < 18;i_2 += 1)
    {
        var_21 = ((((((arr_6 [i_2]) + var_14))) ? (min(((0 ? var_11 : (arr_6 [i_2]))), (23195 & 1))) : 13641733490121607533));
        var_22 = arr_7 [i_2 + 2];
    }
    var_23 = (((var_0 ? (min(18446744073709551601, var_3)) : (((2 ? var_5 : 17))))) | var_14);
    #pragma endscop
}
