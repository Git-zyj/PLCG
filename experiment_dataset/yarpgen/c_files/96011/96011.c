/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 96011
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=96011 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/96011
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 22;i_0 += 1)
    {
        var_16 += ((((var_13 && (arr_2 [16]))) ? (((min(16630, 2)))) : ((~((250 ? var_6 : 255))))));
        var_17 = (min(250, (((!(arr_0 [i_0 + 1]))))));
    }
    for (int i_1 = 2; i_1 < 21;i_1 += 1)
    {
        var_18 = arr_4 [i_1];
        var_19 = ((min(((var_1 ? (-9223372036854775807 - 1) : var_8)), (((1 ? var_10 : var_0))))));
        var_20 = (((((var_14 < 1) * ((-(arr_4 [i_1]))))) * (((((!var_8) && (!var_7)))))));
        var_21 ^= (var_5 || var_12);
    }
    for (int i_2 = 0; i_2 < 24;i_2 += 1)
    {
        arr_8 [i_2] = ((5 >= ((((min(var_10, (arr_3 [i_2] [i_2])))) ? ((min((arr_5 [i_2] [0]), var_6))) : (var_11 ^ 1)))));
        var_22 |= (min(((var_7 ? (arr_5 [21] [i_2]) : 1)), (238 < var_4)));
        var_23 = 1;
    }
    var_24 = (min((((var_6 || 3218898073300819687) ? var_13 : var_3)), ((min((241 || 1234377291), var_10)))));
    var_25 = var_13;
    #pragma endscop
}
