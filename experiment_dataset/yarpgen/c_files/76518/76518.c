/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 76518
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=76518 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/76518
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = ((min((var_0 / var_7), (min(var_6, var_2)))) / ((min(var_8, var_12))));
    var_16 = -var_4;
    var_17 = ((((min(((var_13 ? -1513724178 : var_5)), var_5))) && var_10));

    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        var_18 *= ((!(((~((-(arr_1 [i_0]))))))));
        var_19 = (var_10 ? (arr_2 [i_0]) : ((min(1, var_8))));
        arr_3 [i_0] = min((((arr_2 [i_0]) ? (min(-452498258, var_0)) : var_6)), -0);
        arr_4 [i_0] = (min((min((((-2147483647 - 1) ? (arr_2 [i_0]) : -3)), ((var_12 ? var_0 : (arr_0 [i_0]))))), (arr_1 [i_0])));
    }
    /* vectorizable */
    for (int i_1 = 3; i_1 < 20;i_1 += 1)
    {
        arr_7 [i_1] = ((((79 ? 240 : 30815))) ? (arr_5 [i_1 - 2]) : (arr_6 [i_1]));
        var_20 = ((arr_6 [i_1]) - ((-866616694 ? var_7 : (arr_5 [i_1 + 1]))));
        var_21 *= ((92 % ((1312987911 ? -1701556003 : (arr_5 [i_1])))));
        arr_8 [i_1] = ((var_6 ? (arr_5 [i_1 + 1]) : (((arr_5 [i_1]) | 0))));
    }
    var_22 = var_8;
    #pragma endscop
}
