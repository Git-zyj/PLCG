/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 88922
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=88922 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/88922
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        var_16 = ((+((-126 ? (((arr_1 [i_0]) ? 49 : (arr_1 [i_0]))) : var_3))));
        var_17 = ((~(125 & 169)));
        var_18 = (min(var_18, (min((~-478590180), ((max((arr_1 [i_0]), (arr_0 [i_0] [i_0]))))))));
    }
    for (int i_1 = 0; i_1 < 18;i_1 += 1)
    {
        arr_5 [i_1] = (arr_0 [i_1] [i_1]);
        var_19 = var_13;
        var_20 &= (-((((var_7 ? (arr_2 [i_1] [i_1]) : (arr_0 [i_1] [0]))))));
    }
    var_21 = (max(var_21, var_2));
    var_22 &= ((((max((-9223372036854775807 - 1), 246))) ? (var_7 ^ var_4) : var_8));
    var_23 = (~var_2);
    #pragma endscop
}
