/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 85340
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=85340 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/85340
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 2; i_0 < 21;i_0 += 1)
    {
        var_14 = ((-(arr_1 [i_0 + 1])));
        arr_2 [i_0] = 63510;
    }

    for (int i_1 = 1; i_1 < 22;i_1 += 1)
    {
        var_15 = var_11;
        arr_6 [6] [i_1] = 63510;
        var_16 = arr_5 [i_1];
    }
    for (int i_2 = 0; i_2 < 14;i_2 += 1)
    {

        for (int i_3 = 0; i_3 < 14;i_3 += 1) /* same iter space */
        {
            arr_13 [4] [i_2] = 105;
            var_17 = ((var_0 ? ((-((~(arr_3 [i_2] [i_2]))))) : (max(23470, (2026 - var_0)))));
        }
        for (int i_4 = 0; i_4 < 14;i_4 += 1) /* same iter space */
        {
            var_18 += ((((!(((7 ? var_3 : var_12))))) ? (arr_9 [i_2]) : (((max(var_9, (var_13 >= 32768)))))));
            var_19 &= max((arr_3 [i_2] [i_2]), -81);
            var_20 = var_4;
        }
        arr_18 [i_2] [i_2] = ((((max((arr_0 [i_2] [i_2]), (arr_0 [i_2] [i_2])))) ? (arr_0 [i_2] [i_2]) : ((~(arr_10 [i_2] [i_2] [i_2])))));
    }
    #pragma endscop
}
