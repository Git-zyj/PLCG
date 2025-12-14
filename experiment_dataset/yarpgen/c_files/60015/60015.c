/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 60015
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=60015 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/60015
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 *= ((var_1 / (max(var_5, ((min(var_6, var_17)))))));
    var_19 = ((((((var_12 ? var_0 : var_1)) / var_3)) - var_8));
    var_20 &= -44997;

    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        var_21 += ((min((arr_1 [i_0] [7]), (arr_1 [i_0] [i_0]))));
        arr_3 [i_0] = (arr_2 [i_0]);
    }
    for (int i_1 = 1; i_1 < 10;i_1 += 1)
    {

        for (int i_2 = 0; i_2 < 11;i_2 += 1) /* same iter space */
        {
            var_22 = (arr_1 [i_1] [i_1]);
            arr_10 [i_1] [i_1] [i_2] = 2147483641;
        }
        /* vectorizable */
        for (int i_3 = 0; i_3 < 11;i_3 += 1) /* same iter space */
        {
            arr_14 [i_1] = (arr_2 [15]);
            var_23 = (min(var_23, (arr_0 [i_3])));
        }
        for (int i_4 = 0; i_4 < 11;i_4 += 1) /* same iter space */
        {
            var_24 = ((-(((arr_13 [i_1 + 1] [i_1 + 1] [i_1 + 1]) ? (arr_13 [i_1 - 1] [i_1 - 1] [i_1 + 1]) : (arr_13 [i_1 - 1] [i_1 - 1] [i_1 - 1])))));
            var_25 = (((~-591170541) ? ((-1 ^ (1243196010 | -1243196008))) : -83));

            for (int i_5 = 2; i_5 < 10;i_5 += 1)
            {
                arr_19 [i_4] [i_1] [i_5 + 1] [8] = (704919282 && 64144);
                arr_20 [8] [i_4] [i_1] [i_1] = (arr_18 [1] [i_1] [i_1]);
                var_26 = (min((arr_12 [i_1]), (min((arr_17 [i_1 + 1] [2] [2]), (arr_6 [i_5 - 2] [i_4] [2])))));
            }
            for (int i_6 = 0; i_6 < 11;i_6 += 1)
            {
                var_27 = ((-(min((~2923516438), ((3840 ? -2231321995128076160 : 7))))));
                arr_23 [i_1 - 1] [i_1 - 1] [i_1] = (((((-(arr_7 [i_1 - 1] [i_1])))) ? var_2 : (((min((arr_11 [i_1 + 1] [i_4]), (arr_11 [i_1 + 1] [i_1 + 1])))))));
            }
            var_28 = (((((((max((arr_8 [i_1] [i_4]), (arr_12 [i_1])))) ? ((((arr_21 [i_1] [i_1] [i_1 + 1]) ? (arr_18 [i_4] [i_1] [i_4]) : (arr_1 [i_1 + 1] [i_1])))) : ((var_9 / (arr_22 [i_1] [i_1] [i_1])))))) ? (arr_21 [i_1 + 1] [i_1] [i_1 + 1]) : (arr_21 [i_1 - 1] [i_1] [i_4])));
        }
        for (int i_7 = 0; i_7 < 11;i_7 += 1) /* same iter space */
        {
            arr_28 [i_1 - 1] [i_7] [i_1] = (((arr_25 [i_1 + 1]) / (arr_17 [i_1 - 1] [5] [0])));
            arr_29 [i_1] = max(((-(arr_12 [i_1]))), ((min(var_17, (arr_2 [i_7])))));
            var_29 = var_11;
        }
        var_30 = ((((((2231321995128076159 ? 174 : 0))) ? (arr_15 [5] [i_1]) : ((max(var_17, var_4))))));
        var_31 = ((((arr_2 [i_1 + 1]) ? (arr_24 [i_1 - 1] [i_1 + 1] [i_1]) : (arr_24 [i_1 + 1] [i_1 + 1] [3]))) | ((((arr_8 [i_1] [i_1 + 1]) / (arr_7 [i_1] [i_1])))));

        for (int i_8 = 3; i_8 < 8;i_8 += 1) /* same iter space */
        {
            arr_32 [i_1] [i_8] = (((arr_5 [i_1] [i_8]) ? ((((max((arr_8 [i_1] [i_8]), (arr_1 [i_1 - 1] [i_1 - 1])))) ? var_5 : (arr_4 [i_1]))) : (max(var_9, ((((arr_31 [i_8]) ? (arr_9 [i_1 - 1] [i_1] [i_8]) : (arr_12 [i_1]))))))));
            var_32 = var_4;
        }
        /* vectorizable */
        for (int i_9 = 3; i_9 < 8;i_9 += 1) /* same iter space */
        {
            arr_35 [i_1] = (((arr_33 [i_1] [i_1 - 1] [i_1]) / var_11));
            var_33 -= (((arr_27 [i_1 - 1] [i_9 + 2]) + ((2147483647 ? var_11 : var_15))));
            var_34 = ((+((-1243196021 ? (arr_18 [i_1] [i_1] [i_9]) : (arr_12 [i_1])))));
        }
        /* vectorizable */
        for (int i_10 = 0; i_10 < 11;i_10 += 1)
        {
            arr_39 [i_1] [i_1] = (((arr_7 [i_1] [i_1]) ? 44 : var_6));
            arr_40 [i_1] = (((var_11 / (arr_15 [i_1] [i_1]))));
            arr_41 [i_1] [i_1] = var_9;
        }
        for (int i_11 = 2; i_11 < 9;i_11 += 1)
        {

            for (int i_12 = 0; i_12 < 11;i_12 += 1)
            {
                arr_48 [i_1] = (~255);
                arr_49 [i_1 - 1] [i_1] = (min((((-2147483641 - -69) ? 19841 : (min(126, 1824096653)))), (arr_34 [i_12] [i_1 + 1])));
            }
            var_35 = ((-(~-83)));
            arr_50 [i_1] = ((+(((arr_31 [i_1]) | (arr_5 [i_1 - 1] [i_1])))));
            var_36 = var_4;
        }
    }
    #pragma endscop
}
