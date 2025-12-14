/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 97089
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=97089 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/97089
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = ((min(var_3, var_6)));

    for (int i_0 = 4; i_0 < 20;i_0 += 1)
    {
        var_16 = (max(var_16, (((((arr_1 [i_0]) ? var_3 : ((((arr_0 [i_0]) || 2147483642)))))))));
        arr_3 [i_0] [i_0] = ((min((((-780492410 ? -780492411 : 22))), (arr_0 [i_0 + 3]))));
    }

    for (int i_1 = 1; i_1 < 16;i_1 += 1)
    {
        var_17 -= (arr_1 [i_1 + 4]);
        var_18 = ((((((min((arr_2 [i_1] [8]), (arr_5 [i_1] [i_1]))) >> ((((arr_6 [i_1 - 1]) < 235)))))) ? (((arr_0 [i_1]) ^ (arr_1 [i_1 - 1]))) : (((((max((arr_0 [i_1]), (arr_0 [i_1]))) > ((2147483630 ? var_4 : (arr_5 [i_1] [i_1])))))))));
    }
    for (int i_2 = 0; i_2 < 1;i_2 += 1)
    {
        var_19 = ((min((arr_2 [i_2] [i_2]), 15304244713657898703)));
        arr_10 [i_2] = (min(15535257141812717376, (arr_2 [i_2] [i_2])));
        var_20 = ((((780492392 * (arr_8 [i_2]))) > (((((arr_9 [i_2]) >= (arr_9 [i_2])))))));
    }
    var_21 = (max((((var_11 <= (var_10 ^ 234)))), (((((var_6 ? 0 : var_2))) ? var_1 : (var_6 / var_5)))));
    #pragma endscop
}
