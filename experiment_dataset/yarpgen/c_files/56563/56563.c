/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 56563
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=56563 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/56563
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 3; i_0 < 10;i_0 += 1)
    {
        arr_3 [i_0] = ((((arr_2 [i_0] [i_0 - 2]) == (arr_0 [i_0 - 3]))));
        arr_4 [i_0] [i_0] = ((+((max((arr_1 [i_0 + 1]), (arr_1 [i_0 - 1]))))));
        arr_5 [i_0] = (arr_0 [i_0]);
        arr_6 [3] = (min(((((((arr_2 [i_0] [i_0]) * (arr_1 [i_0 + 1]))) >> (arr_2 [i_0] [i_0])))), ((((((arr_2 [i_0] [i_0 + 1]) / (arr_1 [i_0])))) * ((var_11 ? 5029601156643367870 : 11889310979160156589))))));
    }
    for (int i_1 = 0; i_1 < 19;i_1 += 1)
    {
        var_12 = max(((((0 || 901564229100444548) || (((4850244157590933149 << (17545179844609107066 - 17545179844609107066))))))), (((((arr_7 [i_1] [i_1]) ? 1 : 2)) | 8768240503876853498)));
        var_13 *= (((arr_8 [i_1]) > (((arr_8 [i_1]) ? (arr_8 [i_1]) : 23696))));
        arr_10 [i_1] = 1;
    }
    for (int i_2 = 0; i_2 < 1;i_2 += 1)
    {
        arr_13 [i_2] [i_2] = (~-135);
        var_14 = var_4;
    }
    for (int i_3 = 0; i_3 < 0;i_3 += 1)
    {
        var_15 = (((135 & 68) && 23699));
        arr_16 [i_3] = ((((((var_8 && var_1) ? (arr_14 [i_3]) : ((((arr_14 [i_3]) <= (arr_14 [i_3]))))))) ^ ((((((arr_15 [i_3]) ^ (arr_15 [i_3])))) ? ((((arr_15 [i_3]) - var_7))) : ((var_2 | (arr_14 [i_3])))))));
    }
    var_16 = var_2;
    var_17 = ((((((max(var_8, var_9))) ? (((var_1 ? var_9 : var_5))) : ((var_0 ? var_10 : var_9)))) >> (var_9 - 174)));
    #pragma endscop
}
