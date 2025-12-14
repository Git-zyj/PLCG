/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 76751
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=76751 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/76751
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1) /* same iter space */
    {

        for (int i_1 = 1; i_1 < 15;i_1 += 1)
        {
            arr_6 [0] [i_1 + 2] [16] &= (((arr_3 [16]) << (((((arr_5 [i_1]) + 6201)) - 18))));
            var_12 = (var_4 >> ((((var_9 ? ((var_4 ? (arr_5 [2]) : var_8)) : ((var_4 | (arr_4 [i_0] [i_1 + 2]))))) + 6197)));
        }
        var_13 = (min(((max(((var_9 - (arr_4 [i_0] [i_0]))), ((var_7 ? (arr_4 [i_0] [i_0]) : (arr_2 [i_0])))))), (min(((var_5 / (arr_0 [i_0] [i_0]))), (((var_2 * (arr_4 [i_0] [i_0]))))))));
    }
    /* vectorizable */
    for (int i_2 = 0; i_2 < 1;i_2 += 1) /* same iter space */
    {
        arr_9 [i_2] = var_7;
        arr_10 [i_2] = ((~(((arr_3 [14]) ^ var_5))));

        for (int i_3 = 0; i_3 < 1;i_3 += 1)
        {
            var_14 = var_6;
            arr_13 [i_3] = ((var_9 ? var_10 : (arr_7 [i_2] [i_3])));
        }
        for (int i_4 = 1; i_4 < 14;i_4 += 1) /* same iter space */
        {
            var_15 = (max(var_15, (arr_2 [i_4 + 3])));
            arr_17 [i_2] [i_4] = var_8;
        }
        for (int i_5 = 1; i_5 < 14;i_5 += 1) /* same iter space */
        {
            var_16 = ((var_2 ? (arr_18 [i_2]) : (arr_18 [i_5 + 2])));
            arr_20 [i_2] [i_2] [i_5 + 3] = 11145648289273950328;
            var_17 = var_11;
            arr_21 [i_2] [i_2] [i_2] = (arr_0 [8] [i_5 - 1]);
        }
    }

    for (int i_6 = 0; i_6 < 24;i_6 += 1)
    {
        var_18 = min((((-(arr_22 [i_6])))), ((var_7 / (min(7301095784435601313, (arr_22 [i_6]))))));
        var_19 += (((((((min(56794, var_0))) * (arr_24 [i_6])))) ? -var_5 : ((min((arr_23 [i_6]), (arr_23 [i_6]))))));

        /* vectorizable */
        for (int i_7 = 1; i_7 < 1;i_7 += 1)
        {
            arr_28 [i_7] [i_6] [i_6] = var_1;
            var_20 = (((arr_22 [i_7 - 1]) ? var_6 : var_2));
            arr_29 [i_6] [i_7] = (arr_23 [i_7 - 1]);
            var_21 = ((~(arr_24 [i_7 - 1])));
        }
    }
    for (int i_8 = 0; i_8 < 23;i_8 += 1)
    {
        var_22 = (((min((arr_24 [i_8]), var_4)) ? (((arr_24 [i_8]) ? var_10 : (arr_24 [i_8]))) : ((min(var_11, (arr_24 [i_8]))))));
        arr_33 [i_8] = ((+(((var_0 - var_6) + var_6))));
    }
    for (int i_9 = 3; i_9 < 7;i_9 += 1)
    {
        var_23 = (~var_10);
        arr_36 [i_9] = ((~((~(1 | var_11)))));

        for (int i_10 = 1; i_10 < 7;i_10 += 1)
        {
            var_24 = ((((max(var_4, (min(var_4, (arr_26 [i_9 - 3] [i_9 - 3])))))) >= ((max((((arr_30 [i_10]) > var_8)), var_4)))));
            var_25 = (min((((var_5 && (arr_39 [i_9])))), (min(7301095784435601313, var_0))));
        }
        var_26 = (min(((11145648289273950303 ? ((-(arr_0 [i_9] [i_9 - 1]))) : (arr_7 [i_9] [i_9]))), ((((arr_34 [i_9 + 2] [i_9 + 1]) != var_10)))));
    }
    for (int i_11 = 0; i_11 < 10;i_11 += 1)
    {
        var_27 = (min(var_27, (((-((((max(var_0, var_1))) / ((0 ? var_2 : 15)))))))));
        var_28 = arr_39 [i_11];
    }
    #pragma endscop
}
