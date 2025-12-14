/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 58592
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=58592 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/58592
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (min((((~-117) << ((var_5 ? 0 : var_2)))), (min(((var_2 ? var_8 : var_2)), (var_5 & var_7)))));
    var_12 = var_3;

    /* vectorizable */
    for (int i_0 = 2; i_0 < 11;i_0 += 1)
    {

        for (int i_1 = 1; i_1 < 10;i_1 += 1)
        {
            arr_4 [i_0] [i_1] [i_0] = ((!(arr_1 [i_1 - 1])));
            arr_5 [i_1] [i_1] = (arr_2 [i_0] [3]);
            var_13 = ((32 ? ((((arr_0 [5]) ? (arr_1 [i_1 + 1]) : (arr_0 [8])))) : (arr_2 [i_0] [2])));
        }
        for (int i_2 = 0; i_2 < 12;i_2 += 1)
        {
            arr_10 [i_0] = arr_6 [0] [1] [i_0];
            var_14 = (arr_2 [i_0 - 1] [i_2]);
            var_15 ^= (arr_3 [i_0 - 1]);
            var_16 -= ((((arr_8 [i_0 + 1]) && (arr_9 [1] [i_0]))));
        }
        var_17 = ((arr_1 [i_0 - 1]) || (((223 ? 45 : (arr_3 [i_0])))));
        var_18 = ((var_3 ? (arr_6 [i_0] [i_0 + 1] [i_0 + 1]) : (arr_9 [i_0 - 1] [i_0 - 1])));
        var_19 = (max(var_19, ((((arr_2 [i_0] [i_0]) ? (arr_0 [i_0 - 1]) : (!1))))));
        var_20 = arr_1 [i_0];
    }
    for (int i_3 = 0; i_3 < 22;i_3 += 1)
    {
        var_21 = -1119475045;
        var_22 = (max(var_22, (((((((arr_12 [1]) ? (arr_12 [i_3]) : 24)))) >= ((((((arr_11 [i_3]) | var_1)) <= ((min(var_7, -1119475062))))))))));
        var_23 = ((max((min((arr_12 [5]), 45865)), (arr_12 [i_3]))));
    }
    for (int i_4 = 0; i_4 < 13;i_4 += 1)
    {
        var_24 = (min(255, ((96 ? 101 : -1119475060))));
        var_25 = (((((~(394543271 < 1)))) ? 17964179129201454151 : 106));
        var_26 += var_8;
    }
    for (int i_5 = 0; i_5 < 12;i_5 += 1)
    {
        var_27 ^= (((arr_9 [i_5] [i_5]) ? ((((arr_9 [i_5] [i_5]) != (arr_9 [i_5] [i_5])))) : (((arr_9 [i_5] [i_5]) << (1119475054 - 1119475039)))));
        arr_17 [i_5] = (min(((max((arr_13 [5] [1]), 101))), ((((min((arr_13 [i_5] [9]), 96))) ? (min(var_4, 215142496)) : (arr_0 [i_5])))));
        var_28 = (((((((arr_0 [i_5]) ? var_10 : (arr_8 [i_5]))))) & (((1 && ((max(47670, var_3))))))));
    }
    var_29 = (!var_6);
    #pragma endscop
}
