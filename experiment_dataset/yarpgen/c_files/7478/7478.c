/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 7478
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=7478 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/7478
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 *= ((((var_13 > (12 + 116)))));
    var_15 = var_5;

    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        var_16 ^= (max(((var_12 ? (min((arr_0 [i_0] [i_0]), var_0)) : (((min((arr_0 [8] [0]), var_6)))))), (((var_13 >= (((arr_0 [0] [9]) ? var_3 : 14971)))))));
        var_17 = (max(var_17, ((max((((min(1092670080, var_2)) + var_3)), ((var_8 ? var_12 : var_10)))))));
        arr_2 [i_0] [4] = (max(7565301407040429372, (min((arr_1 [i_0]), (arr_1 [i_0])))));
        arr_3 [i_0] = var_11;
        arr_4 [8] = (arr_0 [i_0] [i_0]);
    }
    for (int i_1 = 1; i_1 < 10;i_1 += 1)
    {
        arr_9 [i_1] [i_1] = (i_1 % 2 == zero) ? (((4126224303234270205 ? (((((arr_6 [i_1]) + 2147483647)) << (((((arr_6 [i_1]) + 110)) - 29)))) : (arr_6 [i_1])))) : (((4126224303234270205 ? (((((((arr_6 [i_1]) - 2147483647)) + 2147483647)) << (((((((arr_6 [i_1]) + 110)) - 29)) - 109)))) : (arr_6 [i_1]))));
        var_18 = ((7 >> (((max((max(-760305142, (-127 - 1))), (42 - 0))) - 29))));
        var_19 ^= (6993012236192876356 * 199);
        var_20 *= (arr_5 [6]);
    }
    var_21 -= ((((var_9 ? (max(var_12, var_9)) : (var_9 - var_11))) >> (var_7 + 29302)));
    #pragma endscop
}
