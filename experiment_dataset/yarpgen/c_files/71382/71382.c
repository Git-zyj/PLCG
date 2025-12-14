/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 71382
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=71382 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/71382
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 23;i_0 += 1)
    {
        arr_3 [i_0] = ((((((((arr_0 [i_0] [i_0]) || (arr_0 [i_0] [i_0])))) <= (~var_1))) ? (min((min((arr_1 [i_0]), -9100809708700589873)), -9100809708700589848)) : ((min(22892, (((arr_0 [i_0] [i_0]) + 9100809708700589892)))))));
        arr_4 [i_0] = 5943336052408749922;
        arr_5 [i_0] [i_0] = ((7649576106216703008 & (((((~(arr_2 [i_0])))) ? (min(var_3, (arr_1 [i_0]))) : 7649576106216703008))));
        var_18 = (min(var_18, (((((min(var_15, 0))) ? (((~(((arr_0 [4] [4]) & (arr_2 [2])))))) : (((arr_0 [10] [10]) & ((var_17 ? 607565558 : 255)))))))));
    }
    for (int i_1 = 0; i_1 < 13;i_1 += 1)
    {
        arr_10 [i_1] = (((max(var_2, (arr_0 [i_1] [i_1]))) <= (((((min(207, (arr_6 [i_1]))) <= (((min((arr_8 [i_1]), var_14))))))))));
        arr_11 [i_1] = ((!(arr_2 [i_1])));
    }
    /* vectorizable */
    for (int i_2 = 4; i_2 < 13;i_2 += 1)
    {

        for (int i_3 = 0; i_3 < 17;i_3 += 1)
        {
            arr_16 [i_2] [i_3] = 1;
            var_19 = var_8;
            arr_17 [i_2] = (((arr_14 [i_2 - 1] [i_3]) ? ((607565558 >> (607565552 - 607565525))) : ((((!(arr_13 [i_3])))))));
        }
        arr_18 [i_2] [i_2] &= (((arr_0 [i_2] [i_2]) || (((var_3 ? (arr_12 [i_2]) : (arr_12 [i_2]))))));
        var_20 -= arr_15 [i_2 + 1];
        var_21 = (min(var_21, (((7649576106216703008 ? (arr_0 [i_2] [i_2]) : var_2)))));
    }
    var_22 = (((max(9100809708700589866, 4092))) ? ((min(-15, var_2))) : ((min(var_0, ((var_9 ? var_5 : var_4))))));
    #pragma endscop
}
