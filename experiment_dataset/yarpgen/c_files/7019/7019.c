/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 7019
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=7019 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/7019
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_5;
    var_18 = (min(var_18, var_7));
    var_19 = -var_5;

    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {

        /* vectorizable */
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            var_20 = (min(var_20, 15107945681007551640));
            var_21 ^= (((~var_12) ? ((var_11 ? var_6 : var_3)) : (arr_1 [i_0])));
            var_22 += var_9;
            arr_4 [i_0] [i_0] [i_1] = ((var_15 ? var_2 : var_2));
        }
        for (int i_2 = 0; i_2 < 12;i_2 += 1)
        {
            var_23 = ((!((((((var_3 ? (arr_7 [7] [i_2]) : (arr_3 [i_0] [i_0] [3])))) ? (arr_3 [i_0] [i_0] [i_0]) : ((var_3 ? var_9 : var_6)))))));
            arr_9 [i_0] = (((-2580 ? var_14 : (arr_7 [i_0] [i_2]))));
            arr_10 [i_0] [i_0] = ((~((~(arr_2 [i_0])))));
            arr_11 [i_2] = var_8;

            /* vectorizable */
            for (int i_3 = 1; i_3 < 11;i_3 += 1)
            {
                var_24 = (arr_13 [i_0] [i_3 + 1] [i_3 - 1]);
                var_25 = ((var_2 ? ((var_13 ? (arr_2 [i_3]) : var_7)) : (arr_13 [i_3] [i_3 - 1] [i_3])));
            }
        }
        for (int i_4 = 0; i_4 < 12;i_4 += 1)
        {
            var_26 ^= ((-var_12 ? ((62967 ? 14585344593159153966 : 24776)) : ((min(var_13, (arr_14 [i_4] [i_0] [i_0]))))));
            var_27 *= ((+(max((arr_0 [i_4] [i_4]), (((arr_12 [i_0]) ? var_0 : (arr_1 [i_0])))))));
        }
        arr_16 [i_0] [i_0] = var_7;
        arr_17 [i_0] = (arr_6 [i_0]);
    }
    /* vectorizable */
    for (int i_5 = 0; i_5 < 23;i_5 += 1)
    {
        arr_20 [i_5] = ((!(arr_18 [i_5])));
        var_28 = (max(var_28, (((var_12 ? -var_8 : (~var_7))))));
        var_29 ^= (arr_19 [i_5]);
    }
    /* vectorizable */
    for (int i_6 = 2; i_6 < 11;i_6 += 1)
    {
        var_30 &= (arr_22 [i_6 - 2]);
        arr_23 [3] [10] = ((var_12 ? var_7 : (arr_22 [i_6 - 1])));

        for (int i_7 = 1; i_7 < 12;i_7 += 1)
        {
            var_31 = (max(var_31, (arr_18 [i_6])));
            arr_26 [i_6] [i_7] = ((var_1 ? (arr_22 [i_6 - 2]) : var_3));
        }
        for (int i_8 = 1; i_8 < 11;i_8 += 1)
        {
            arr_31 [i_6 - 2] [i_8] [i_8] = ((1870351856 ? -127 : 2580));

            for (int i_9 = 0; i_9 < 13;i_9 += 1)
            {
                arr_34 [i_8] [i_8] = ((78 ? 16970925612195860475 : 125));
                var_32 -= ((var_0 ? (arr_27 [i_6] [2] [i_9]) : (~var_2)));
            }
        }
        for (int i_10 = 0; i_10 < 13;i_10 += 1)
        {
            var_33 = (!var_9);
            var_34 = (((~var_6) ? 29844 : (arr_28 [i_6] [i_6])));
        }
    }
    /* vectorizable */
    for (int i_11 = 0; i_11 < 17;i_11 += 1)
    {
        var_35 = (max(var_35, ((((arr_38 [i_11]) ? var_7 : (arr_39 [i_11]))))));
        var_36 -= ((!(((var_7 ? (arr_38 [16]) : var_7)))));

        for (int i_12 = 2; i_12 < 16;i_12 += 1)
        {
            var_37 = (arr_40 [i_11] [i_12 + 1]);
            arr_44 [i_11] [i_11] = ((231 ? 13453453822695508053 : 2289464165));
        }
        for (int i_13 = 2; i_13 < 14;i_13 += 1)
        {
            var_38 = arr_48 [i_13 - 1];
            arr_49 [5] = (arr_47 [i_13 + 1]);
        }
    }
    #pragma endscop
}
