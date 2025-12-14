/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 55853
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=55853 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/55853
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = ((var_4 ? ((((((var_0 ? var_4 : var_6))) ? var_10 : ((var_7 ? var_10 : var_10))))) : (((((var_2 ? var_2 : var_10))) ? ((var_4 ? var_10 : -5369378486014952994)) : var_1))));
    var_12 = var_7;

    /* vectorizable */
    for (int i_0 = 2; i_0 < 24;i_0 += 1)
    {
        arr_3 [i_0] = (((arr_1 [i_0 + 1]) ? 5369378486014952994 : (arr_1 [i_0 + 1])));
        arr_4 [i_0] = ((var_6 ? (arr_0 [i_0] [i_0 - 2]) : ((var_3 ? 2900472661 : (arr_2 [i_0])))));
        arr_5 [i_0] [i_0] = ((var_5 ? var_8 : (arr_2 [i_0 - 1])));
        var_13 = ((arr_2 [i_0 - 1]) ? (arr_2 [i_0 - 1]) : (arr_2 [i_0 - 1]));
        var_14 = (((arr_2 [i_0 - 1]) ? (arr_2 [i_0 - 2]) : 8191));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 16;i_1 += 1)
    {
        var_15 = ((33554400 ? (arr_1 [i_1]) : var_10));
        var_16 = (((arr_0 [i_1] [i_1]) ? 119 : var_5));
    }
    /* vectorizable */
    for (int i_2 = 1; i_2 < 12;i_2 += 1)
    {
        var_17 = (((((var_3 ? var_6 : 4294967295))) ? var_8 : 1394494634));
        var_18 = (((arr_6 [i_2 - 1] [i_2 - 1]) ? (arr_8 [i_2 - 1] [i_2 - 1]) : var_1));
    }
    #pragma endscop
}
