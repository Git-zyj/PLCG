/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 67937
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=67937 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/67937
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 1; i_0 < 16;i_0 += 1)
    {
        var_14 = var_11;
        arr_4 [i_0] = (arr_2 [i_0]);
        arr_5 [i_0 - 1] = (((arr_3 [i_0 - 1]) ? (arr_3 [i_0]) : (arr_3 [i_0 - 1])));
    }
    for (int i_1 = 2; i_1 < 20;i_1 += 1)
    {
        arr_10 [i_1] = (max(((!(arr_7 [i_1]))), (min((arr_7 [i_1]), (arr_7 [i_1])))));
        var_15 = (min(var_15, (((((((arr_9 [i_1 + 2] [12]) ? (arr_9 [i_1 - 2] [16]) : (arr_9 [i_1 - 1] [10])))) && ((max((arr_9 [i_1 + 1] [20]), (arr_9 [i_1 - 1] [10])))))))));
    }
    for (int i_2 = 2; i_2 < 23;i_2 += 1)
    {
        var_16 = (arr_12 [i_2 + 1]);
        var_17 = (((-(arr_12 [i_2 + 1]))) + (((arr_11 [i_2 - 1] [i_2]) ? var_9 : (arr_13 [i_2 + 1] [16]))));
        var_18 = ((max((max((arr_11 [16] [i_2]), (arr_11 [i_2] [i_2]))), (arr_13 [21] [i_2]))));
    }
    var_19 = (((((max(18245305950977929652, var_1))) ? ((201438122731621986 ? 201438122731621964 : var_0)) : var_5)));
    var_20 = ((var_10 ? ((~((18245305950977929629 ? var_10 : 1428580341)))) : var_5));
    #pragma endscop
}
