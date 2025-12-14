/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 85263
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=85263 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/85263
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 15;i_0 += 1)
    {
        var_14 = (min(var_14, ((min(2399179638, 17890)))));
        arr_3 [i_0] = ((min(36028797018931200, (arr_2 [i_0 - 1] [i_0]))));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 13;i_1 += 1)
    {
        var_15 = (min(var_15, ((~(~17267842410734230843)))));
        var_16 -= -2513;
        var_17 = 1178901662975320773;
    }
    for (int i_2 = 0; i_2 < 12;i_2 += 1)
    {
        arr_9 [i_2] = ((((!(arr_5 [i_2]))) ? ((var_10 >> (((arr_1 [i_2]) + 214306799)))) : (!1155340541366478021)));
        arr_10 [i_2] = ((-(((arr_0 [i_2] [i_2]) ? 1831094733 : (arr_4 [i_2] [i_2])))));
        arr_11 [i_2] = (((((var_10 ? var_4 : 2399179634))) >> (((arr_1 [2]) + 214306808))));
        var_18 = (min(var_3, ((((arr_1 [i_2]) ? (arr_1 [13]) : (arr_1 [i_2]))))));
        var_19 = (min(var_19, (!125)));
    }
    var_20 = (((((((var_10 ? var_7 : var_12)) > (var_4 > -22)))) != var_4));
    #pragma endscop
}
