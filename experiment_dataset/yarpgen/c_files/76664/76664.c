/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 76664
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=76664 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/76664
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = var_10;

    for (int i_0 = 3; i_0 < 13;i_0 += 1)
    {
        arr_2 [i_0] = ((min(((var_4 ? var_13 : (arr_0 [12])), (28 ^ var_16)))));
        var_19 -= ((4095 ? ((max((1167324853 % 79), 236))) : ((22 ? (((max(229, 46)))) : 7790801334852658257))));
        arr_3 [i_0] [i_0] = var_3;
        arr_4 [i_0] = ((((((arr_0 [i_0 - 1]) ? ((max(85, (arr_1 [i_0])))) : var_0))) ? (arr_0 [i_0 + 1]) : ((((var_9 >> (var_4 - 22192984))) << (3454279561 && var_0)))));
    }
    for (int i_1 = 0; i_1 < 14;i_1 += 1)
    {
        arr_7 [i_1] = (max((min(((max(5207, var_15))), ((199 ? 9 : 7658491376223271779)))), (min(((var_12 ? var_8 : var_3)), (min(var_9, (arr_6 [i_1])))))));
        var_20 -= (((var_8 | var_11) - (((arr_6 [i_1]) - (arr_5 [i_1])))));
    }
    var_21 ^= min(((1 ? -63 : 3)), (((1 << ((var_15 ? var_2 : var_9))))));
    var_22 = (((-4163 - 16352) ? 144114638320041984 : -53));
    #pragma endscop
}
