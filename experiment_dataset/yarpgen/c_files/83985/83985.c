/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 83985
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=83985 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/83985
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 4; i_0 < 13;i_0 += 1)
    {
        arr_4 [i_0 - 2] = ((~((-587416441831723558 ? 19465 : 26))));
        arr_5 [i_0] = (((max(var_14, var_7)) / ((max(var_13, var_12)))));
    }
    for (int i_1 = 0; i_1 < 12;i_1 += 1)
    {
        var_16 = (-4 | var_11);
        arr_8 [i_1] = (min(1, 63728));
        var_17 += ((((min(4022707121, var_11))) ? var_9 : ((var_3 ? var_4 : var_8))));
    }

    for (int i_2 = 1; i_2 < 14;i_2 += 1)
    {
        arr_11 [i_2 + 1] = var_7;
        var_18 = var_2;
    }
    /* vectorizable */
    for (int i_3 = 1; i_3 < 16;i_3 += 1)
    {
        var_19 = var_6;
        var_20 = (!var_6);
        arr_14 [i_3 + 1] [i_3] = var_12;
        var_21 = (1 / 19462);
    }
    #pragma endscop
}
