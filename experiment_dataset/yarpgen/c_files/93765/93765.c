/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 93765
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=93765 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/93765
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = ((var_2 ? var_14 : (((!-109) ? (((!(-127 - 1)))) : (var_14 >= 118)))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        arr_3 [i_0] = 127;
        arr_4 [5] [i_0] |= -118;
        var_16 = (min(var_16, (((~(0 || -103))))));
        var_17 = (max(var_17, ((((arr_1 [i_0]) >= (arr_1 [i_0]))))));
        arr_5 [i_0] = (((~var_4) ? -123 : var_5));
    }
    /* vectorizable */
    for (int i_1 = 2; i_1 < 20;i_1 += 1) /* same iter space */
    {
        var_18 |= var_2;
        var_19 = (arr_8 [i_1 - 1]);
        arr_10 [i_1] = 94;
    }
    /* vectorizable */
    for (int i_2 = 2; i_2 < 20;i_2 += 1) /* same iter space */
    {
        arr_14 [i_2] = ((-118 || (-123 & -109)));
        var_20 = (min(var_20, (((-(((arr_12 [6]) ? 12 : (arr_8 [i_2 + 1]))))))));
        var_21 += ((!(arr_7 [i_2 - 1] [i_2 + 1])));
    }
    /* vectorizable */
    for (int i_3 = 3; i_3 < 11;i_3 += 1)
    {
        arr_17 [i_3] [12] = ((~(arr_13 [i_3 - 2])));
        arr_18 [i_3] [i_3] = (((arr_15 [i_3 + 1]) ? (arr_9 [i_3]) : (arr_9 [i_3])));
        arr_19 [i_3] [i_3] = ((!(arr_12 [i_3])));
        var_22 = (((arr_8 [i_3 + 2]) | 123));
    }
    #pragma endscop
}
