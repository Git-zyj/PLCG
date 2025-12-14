/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 99496
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=99496 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/99496
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = var_0;

    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = ((((((-(arr_1 [i_0] [i_0])))) - (((arr_1 [i_0] [i_0]) * (arr_0 [i_0] [i_0]))))) < ((((!((((arr_1 [i_0] [i_0]) ? (arr_1 [i_0] [18]) : (arr_0 [i_0] [20])))))))));
        arr_3 [i_0] = ((~(((((((arr_1 [i_0] [1]) ? (arr_1 [i_0] [i_0]) : (arr_0 [i_0] [i_0])))) || ((!(arr_1 [i_0] [i_0]))))))));
        var_19 = (arr_0 [i_0] [i_0]);
        arr_4 [i_0] [i_0] = ((((((((arr_1 [0] [0]) ? (arr_0 [i_0] [i_0]) : (arr_0 [i_0] [i_0])))) || (arr_0 [i_0] [i_0]))) ? (arr_1 [i_0] [i_0]) : ((((((~(arr_1 [i_0] [i_0])))) || ((((arr_1 [i_0] [i_0]) / (arr_1 [i_0] [8])))))))));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 19;i_1 += 1)
    {
        var_20 = ((((~(arr_1 [i_1] [i_1])))) ? (arr_7 [i_1]) : ((52 ? 65535 : 4294901776)));
        var_21 = (((arr_0 [i_1] [i_1]) >> (((arr_7 [i_1]) + 1625521230))));
    }
    var_22 = (((((((var_2 ? var_7 : var_5))) ? var_10 : ((var_15 ? var_10 : var_9)))) == ((((var_12 && (var_11 && var_12)))))));
    var_23 = (max(var_23, (((var_17 ? ((((((var_6 ? var_0 : var_3))) ? ((var_15 ? var_3 : var_14)) : (var_0 >= var_2)))) : (((((var_17 ? var_0 : var_9))) ? (var_9 + var_15) : var_12)))))));
    var_24 = (((var_12 ? (((var_15 ? var_10 : var_10)) : var_16))));
    #pragma endscop
}
