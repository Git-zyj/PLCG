/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 57922
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=57922 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/57922
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (max((((((var_15 ? var_0 : var_10))) ? -var_1 : var_11)), (~var_12)));
    var_17 = ((var_1 < ((((var_9 ? var_13 : var_12)) / (((var_9 << (var_6 - 64144))))))));

    for (int i_0 = 2; i_0 < 20;i_0 += 1)
    {
        var_18 = ((~(var_1 / var_10)));
        var_19 = 36;
        var_20 |= ((~(~var_7)));

        for (int i_1 = 3; i_1 < 20;i_1 += 1)
        {
            arr_5 [i_0] [i_1] [i_0] = 0;
            arr_6 [i_1] [i_1] = (((((arr_3 [i_0 + 2] [i_1] [i_1]) ? (arr_3 [i_0 - 1] [i_1] [i_0 + 3]) : (arr_3 [i_0 + 2] [9] [i_1 + 3])))) ? ((var_3 ? (arr_3 [i_0 + 3] [i_1] [i_0 + 2]) : 213)) : ((-(arr_3 [i_0 + 3] [i_1 - 1] [i_0 - 2]))));
        }
    }
    for (int i_2 = 4; i_2 < 10;i_2 += 1)
    {
        var_21 = ((var_6 && (((var_1 ? 37089 : -7043084102921731047)))));
        var_22 = (min((min((arr_4 [i_2] [i_2] [i_2]), 4294967286)), 41));
        var_23 = (max(var_23, var_10));
        var_24 = (arr_3 [i_2 - 4] [i_2 - 3] [i_2 - 1]);
        arr_9 [i_2] [10] = ((+(((var_5 + var_3) ? -77 : (arr_8 [i_2 - 4])))));
    }
    /* vectorizable */
    for (int i_3 = 0; i_3 < 24;i_3 += 1)
    {
        var_25 = (((arr_10 [i_3] [i_3]) ? (~var_7) : (arr_10 [i_3] [i_3])));

        for (int i_4 = 0; i_4 < 24;i_4 += 1)
        {
            var_26 = (arr_11 [i_4] [i_3]);
            arr_14 [i_3] [i_3] [i_3] = var_4;
            var_27 = (((var_14 / (arr_12 [3] [i_4]))));
            arr_15 [i_4] = var_9;
            arr_16 [i_4] = (((arr_13 [i_4]) ? (arr_10 [i_3] [i_3]) : (arr_11 [i_3] [i_4])));
        }
        for (int i_5 = 4; i_5 < 22;i_5 += 1) /* same iter space */
        {
            var_28 = (max(var_28, (!17592186044415)));
            var_29 = (232 | -61);
        }
        for (int i_6 = 4; i_6 < 22;i_6 += 1) /* same iter space */
        {
            var_30 = 2300362771;
            arr_21 [i_6] = 178;
            var_31 = ((var_6 ? var_2 : ((var_3 ? var_0 : 35))));
            var_32 = ((56 ? 9345273791542236484 : 65535));
        }
        for (int i_7 = 0; i_7 < 24;i_7 += 1)
        {
            arr_26 [i_3] [i_3] = (arr_20 [i_3] [i_3]);
            var_33 = (min(var_33, (arr_12 [i_3] [i_3])));
        }
        var_34 = (max(var_34, (127 * 204)));
        var_35 = (max(var_35, -var_4));
    }
    var_36 = var_10;
    #pragma endscop
}
