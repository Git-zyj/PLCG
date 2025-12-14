/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 97657
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=97657 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/97657
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 12;i_0 += 1) /* same iter space */
    {
        arr_2 [i_0] = (min((~34), -1797908696005777823));
        var_13 *= var_11;
        var_14 = (((((arr_0 [i_0]) ? (arr_0 [i_0]) : -9888)) < ((((9888 - var_11) > (max(var_3, var_4)))))));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 12;i_1 += 1) /* same iter space */
    {
        var_15 = (min(var_15, var_5));
        var_16 = ((0 ? (arr_4 [i_1]) : (arr_4 [i_1])));
        var_17 = ((14549055575879706958 ? 9913 : (((0 > (arr_3 [i_1]))))));

        for (int i_2 = 4; i_2 < 11;i_2 += 1)
        {
            var_18 = (arr_7 [i_1] [i_1]);
            var_19 = (max(var_19, ((((~var_6) ? 1 : (((arr_4 [i_1]) * var_8)))))));
            var_20 = (max(var_20, -var_4));
            var_21 = (min(var_21, var_12));
        }
        for (int i_3 = 2; i_3 < 11;i_3 += 1)
        {
            var_22 = (min(var_22, (((1 ? (arr_3 [i_3 + 1]) : 43139)))));
            var_23 += (arr_1 [2]);
            var_24 = (min(var_24, var_12));
        }
        for (int i_4 = 0; i_4 < 12;i_4 += 1)
        {
            var_25 = 161;
            var_26 -= var_6;
        }
    }
    /* vectorizable */
    for (int i_5 = 0; i_5 < 12;i_5 += 1) /* same iter space */
    {
        var_27 = (((arr_13 [i_5]) > var_5));
        var_28 = (arr_0 [i_5]);
    }
    var_29 = ((128 ? ((var_3 ? ((var_2 ? var_5 : var_12)) : -1)) : 10435));
    #pragma endscop
}
