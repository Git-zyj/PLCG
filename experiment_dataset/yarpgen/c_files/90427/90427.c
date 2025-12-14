/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 90427
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=90427 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/90427
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 3; i_0 < 9;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            var_16 = (((arr_1 [i_0]) ? (arr_4 [i_0]) : var_15));
            var_17 = (arr_2 [i_0 + 1]);
        }
        for (int i_2 = 4; i_2 < 7;i_2 += 1)
        {
            var_18 = (arr_7 [i_0]);
            var_19 = ((!(arr_1 [i_0])));
        }
        for (int i_3 = 0; i_3 < 11;i_3 += 1)
        {
            var_20 = (min((((!(((~(arr_4 [i_0]))))))), (max(((var_14 ? (arr_8 [i_0]) : var_1)), (arr_8 [i_0])))));
            var_21 = (((arr_5 [0]) ? var_12 : var_0));
        }
        var_22 = (max((max((min(3176263577, 6888119992853666812)), ((((-20810 + 2147483647) << (103 - 103)))))), ((var_15 ? var_2 : (((arr_5 [i_0]) ? (arr_4 [2]) : (arr_7 [6])))))));
        var_23 = (min((((-(arr_2 [i_0])))), (((112 >= (var_1 - var_2))))));
        var_24 = (min(var_24, (arr_3 [i_0])));
    }
    var_25 = (min(var_25, var_4));
    var_26 *= ((((((7970395047369564466 ? 1776676399 : var_2)) > var_6)) ? var_1 : ((((-62 * 1) <= var_1)))));
    #pragma endscop
}
