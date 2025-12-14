/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 79315
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=79315 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/79315
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 3; i_0 < 12;i_0 += 1)
    {
        var_17 = (max(var_17, (((((arr_1 [i_0 + 2]) ? (arr_0 [i_0] [i_0]) : (arr_0 [2] [i_0])))))));
        var_18 = ((arr_0 [i_0 - 2] [i_0 - 2]) - ((1382186886 ? (arr_0 [i_0] [i_0 + 1]) : 3144828399)));
    }
    for (int i_1 = 1; i_1 < 15;i_1 += 1)
    {
        var_19 &= (min((min(-var_2, (((arr_3 [6] [i_1 + 1]) ? 1164684739 : var_5)))), (((min(2912780414, var_13))))));
        var_20 = (min(var_20, (((((min((arr_2 [i_1]), (arr_3 [i_1] [i_1 - 1])))) ? (((arr_3 [i_1] [i_1 - 1]) ? (arr_2 [i_1 - 1]) : (arr_3 [i_1] [i_1 + 1]))) : (((arr_3 [i_1] [i_1 + 1]) | (arr_2 [i_1]))))))));
        var_21 = ((-(min(((var_16 ? var_11 : 1382186886)), (arr_3 [i_1] [i_1])))));
        var_22 = (((min((arr_3 [i_1] [i_1 + 1]), (arr_3 [i_1] [i_1 + 1]))) * (((((arr_3 [i_1 - 1] [i_1 + 1]) && (arr_3 [i_1] [i_1 + 1])))))));
    }
    var_23 = var_0;

    /* vectorizable */
    for (int i_2 = 2; i_2 < 12;i_2 += 1)
    {
        var_24 = (arr_1 [i_2 - 1]);
        var_25 = 2912780434;
        var_26 = arr_2 [i_2 - 1];
        var_27 = (((!(arr_3 [i_2] [i_2]))) ? 3130282572 : (!34719731));
    }
    for (int i_3 = 0; i_3 < 10;i_3 += 1)
    {

        for (int i_4 = 0; i_4 < 10;i_4 += 1)
        {
            var_28 += (1382186881 + 1382186881);
            var_29 = min(36050, (min((arr_6 [i_3]), (arr_3 [i_3] [i_3]))));
        }
        for (int i_5 = 1; i_5 < 9;i_5 += 1)
        {
            var_30 = (~((((1382186881 ? 3130282572 : (arr_4 [10]))) ^ 9)));
            var_31 = (((((arr_2 [i_5 + 1]) / (arr_2 [i_5 + 1])))) ? (min((arr_2 [i_5 + 1]), 3130282533)) : (arr_2 [i_5 - 1]));
        }
        for (int i_6 = 2; i_6 < 7;i_6 += 1)
        {
            var_32 -= ((((((((13033 ? (arr_4 [0]) : 25336))) ? ((-83 + (arr_2 [i_3]))) : (((min(-2462, (arr_5 [i_3])))))))) ? ((((-(arr_6 [i_6 - 1]))) | (((2147483647 && (arr_5 [4])))))) : (((!((min(127, (arr_16 [i_6])))))))));
            var_33 = (arr_1 [i_6]);
            var_34 = (((((3130282556 * var_11) >> ((((-(arr_13 [0] [i_6] [i_6]))) - 1474205998)))) == ((((((arr_6 [i_6 + 3]) >> (1382186881 - 1382186875)))) | (arr_3 [i_6 - 2] [i_3])))));
        }
        arr_17 [i_3] [i_3] = ((-898766410 & (arr_7 [i_3] [i_3])));
    }
    /* vectorizable */
    for (int i_7 = 3; i_7 < 15;i_7 += 1)
    {
        arr_20 [i_7 + 1] = ((var_0 ? (arr_3 [i_7] [i_7 - 2]) : var_16));

        for (int i_8 = 0; i_8 < 16;i_8 += 1)
        {
            var_35 |= (((arr_21 [i_7] [i_8] [i_8]) ? 50162 : (arr_3 [i_7] [i_8])));
            arr_23 [i_7] [i_8] [i_7] = ((var_16 ? (arr_21 [i_7 - 3] [i_7 - 2] [i_7 + 1]) : var_2));
            var_36 += 2147483647;
        }
        var_37 = (((arr_3 [i_7 - 2] [9]) && (arr_3 [i_7 - 1] [i_7])));
    }
    var_38 = (max(var_38, var_16));
    #pragma endscop
}
