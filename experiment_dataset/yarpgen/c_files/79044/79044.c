/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 79044
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=79044 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/79044
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (max(var_11, -var_0));
    var_12 |= var_7;
    var_13 = (max(var_13, ((max(-12931, (~-115011109597094875))))));

    for (int i_0 = 1; i_0 < 12;i_0 += 1)
    {
        var_14 = (min(var_14, (((((((arr_0 [2] [2]) ? -115011109597094868 : var_8))) && ((4194048 && (arr_0 [2] [2]))))))));
        var_15 = (min(var_15, ((min((arr_2 [1]), ((-115011109597094872 / (arr_1 [i_0] [i_0 - 1]))))))));
    }
    /* vectorizable */
    for (int i_1 = 4; i_1 < 9;i_1 += 1)
    {

        for (int i_2 = 1; i_2 < 10;i_2 += 1)
        {
            arr_9 [i_1] [i_1] = -3;
            arr_10 [i_2] = (((arr_5 [3]) ? var_7 : (arr_8 [i_1] [i_1 - 2])));

            for (int i_3 = 0; i_3 < 13;i_3 += 1)
            {
                var_16 = (((arr_12 [i_1] [i_2] [i_2 + 1] [i_1 + 4]) == var_5));
                var_17 = (max(var_17, ((((1 ? 10066341690644048854 : var_6)) < (-7 * 1)))));
            }
        }
        for (int i_4 = 0; i_4 < 13;i_4 += 1) /* same iter space */
        {
            var_18 = var_5;
            var_19 = (max(var_19, (((-(arr_11 [i_1 + 2] [i_1 - 4] [i_1 - 3] [i_1 + 2]))))));
            var_20 = var_9;
            var_21 = (max(var_21, (((~(arr_11 [i_1] [i_4] [i_4] [i_1]))))));
            var_22 = (max(var_22, (((var_2 ? (((arr_13 [i_4]) ^ 1)) : (arr_6 [i_1 + 2] [i_1 + 3] [i_1 - 3]))))));
        }
        for (int i_5 = 0; i_5 < 13;i_5 += 1) /* same iter space */
        {
            arr_20 [i_5] [i_1] [i_1] |= (arr_15 [i_1] [i_1] [i_5]);
            var_23 = (max(var_23, 4095));

            for (int i_6 = 1; i_6 < 1;i_6 += 1)
            {
                var_24 = (min(var_24, ((((((arr_22 [i_1] [i_1]) && var_8)) && 224)))));
                arr_24 [i_1] [i_6] [i_1] = ((var_5 ? var_8 : (arr_21 [i_1 - 3] [i_6 - 1] [i_6 - 1])));
                var_25 = (max(var_25, ((((arr_11 [i_6 - 1] [i_6] [i_1 + 1] [i_1]) ? 64 : ((94 ? 18446744073709551598 : var_8)))))));
                var_26 = (((arr_6 [i_1 + 3] [i_1 + 4] [i_1]) ? (arr_6 [i_1] [i_5] [i_6]) : 7990));
                var_27 = ((1 ? (arr_6 [i_1] [i_6] [i_6 - 1]) : var_4));
            }
            for (int i_7 = 0; i_7 < 13;i_7 += 1)
            {
                var_28 = var_8;
                var_29 *= (~var_3);
            }
        }
        for (int i_8 = 0; i_8 < 13;i_8 += 1) /* same iter space */
        {
            var_30 = (max(var_30, ((((((arr_16 [i_8]) & -12)) | (arr_28 [i_1] [i_8]))))));
            var_31 ^= ((var_2 * (arr_17 [i_1] [i_8])));
        }
        arr_32 [i_1] = ((0 * ((((var_8 > (arr_3 [i_1])))))));
        arr_33 [9] = ((-var_9 + (arr_7 [i_1 - 1])));
        arr_34 [i_1] = var_0;
        var_32 = (max(var_32, -6));
    }
    #pragma endscop
}
