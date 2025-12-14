/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 87998
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=87998 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/87998
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = var_12;
    var_17 -= (max(((-72057594037927936 ? ((max(var_6, var_12))) : (var_0 >> var_1))), (((((var_6 ? var_14 : var_4))) ? ((4953838216771329740 ? var_5 : var_11)) : var_12))));

    /* vectorizable */
    for (int i_0 = 1; i_0 < 21;i_0 += 1)
    {
        arr_2 [i_0] = ((-(arr_0 [i_0 + 1])));
        var_18 = (((1 * 1) >> (var_4 - 79)));
        var_19 = 50309;
    }
    /* vectorizable */
    for (int i_1 = 2; i_1 < 15;i_1 += 1)
    {
        var_20 = (((arr_3 [i_1 - 1]) != (arr_0 [i_1 + 1])));
        var_21 = (((arr_3 [i_1 - 2]) == (arr_0 [11])));
        var_22 = ((var_1 ? ((var_11 ? var_3 : (arr_0 [i_1]))) : (arr_0 [i_1 - 1])));
        arr_5 [i_1] = ((-var_9 >> ((((arr_1 [i_1 + 2]) <= 50742)))));
    }
    for (int i_2 = 1; i_2 < 23;i_2 += 1)
    {
        var_23 ^= var_12;
        var_24 = 499;
        arr_8 [10] = ((-(~15230)));
        arr_9 [i_2] [i_2] = (((((!var_0) / (arr_0 [i_2]))) / ((-(((arr_0 [i_2]) ? 238 : var_7))))));
        arr_10 [i_2 + 1] = 83;
    }
    var_25 = var_2;
    var_26 = var_4;
    #pragma endscop
}
