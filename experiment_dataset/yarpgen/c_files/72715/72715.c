/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 72715
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=72715 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/72715
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = ((((((((var_13 ? var_3 : var_14)) > var_3)))) % var_12));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = ((((arr_1 [i_0]) ? (arr_0 [i_0]) : (arr_1 [i_0]))));
        var_16 = (min(var_16, (arr_1 [i_0])));
        var_17 = (min(var_17, (((((-(arr_1 [i_0]))) >= (arr_1 [i_0]))))));
        var_18 *= (((arr_1 [i_0]) - (arr_1 [i_0])));
        arr_3 [i_0] [i_0] = (arr_0 [i_0]);
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 12;i_1 += 1) /* same iter space */
    {
        var_19 = ((((((arr_0 [i_1]) ? var_11 : var_10))) ? ((0 ? 1397128533 : 3774786155)) : (arr_5 [i_1])));
        arr_6 [i_1] = (arr_1 [i_1]);
        arr_7 [i_1] = (((arr_5 [i_1]) ^ var_5));
        var_20 = (((arr_0 [i_1]) ? (arr_0 [i_1]) : ((((arr_4 [i_1] [10]) ? var_5 : (arr_5 [i_1]))))));
        var_21 = (min(var_21, (((((((arr_4 [i_1] [i_1]) ? (arr_5 [1]) : (arr_4 [i_1] [i_1])))) ? (((arr_5 [10]) ? var_6 : (arr_4 [i_1] [i_1]))) : (arr_4 [i_1] [i_1]))))));
    }
    /* vectorizable */
    for (int i_2 = 0; i_2 < 12;i_2 += 1) /* same iter space */
    {
        arr_11 [i_2] = ((((~(arr_5 [i_2]))) ^ ((((arr_9 [i_2]) <= (arr_9 [i_2]))))));
        arr_12 [i_2] = ((3220320274394775237 ? 1 : 11339));
    }
    /* vectorizable */
    for (int i_3 = 0; i_3 < 11;i_3 += 1)
    {
        arr_15 [i_3] = arr_9 [i_3];
        var_22 = (((var_0 & (arr_8 [i_3] [i_3]))));
    }
    var_23 = (var_6 ? ((((var_0 || (((var_14 ? var_4 : var_10))))))) : ((-93 ? ((8488 ? var_4 : 32256)) : 0)));
    #pragma endscop
}
