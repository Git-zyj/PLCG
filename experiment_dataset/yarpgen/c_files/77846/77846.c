/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 77846
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=77846 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/77846
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = ((((var_4 - ((max(var_14, 15)))))) ? (max((206 ^ var_4), (var_7 - 63))) : (min(((7 << (((-1527659135 + 1527659166) - 10)))), (max(var_3, 58182)))));

    for (int i_0 = 4; i_0 < 13;i_0 += 1)
    {
        var_18 = (max(((-18983 ? (arr_2 [i_0 - 1] [i_0 - 4]) : (arr_0 [i_0 - 1]))), ((min(1072101611, var_14)))));
        var_19 = (max(var_19, (arr_1 [i_0])));
        var_20 = (max(var_20, ((max((((arr_2 [i_0] [i_0 + 1]) ? 11 : (max(18446744073709551615, 2046089982)))), 2176758099539633551)))));
    }
    for (int i_1 = 0; i_1 < 18;i_1 += 1)
    {
        var_21 = (((32 ^ -2046089998) ? (((((min((arr_3 [i_1]), 37))) - (((!(arr_3 [i_1]))))))) : ((((min(1, (arr_3 [i_1])))) ? (min(18446744073709551615, 2046089969)) : (arr_4 [12] [i_1])))));
        var_22 -= ((+((-(((arr_3 [i_1]) ? (arr_4 [i_1] [i_1]) : (arr_4 [i_1] [i_1])))))));
    }
    #pragma endscop
}
