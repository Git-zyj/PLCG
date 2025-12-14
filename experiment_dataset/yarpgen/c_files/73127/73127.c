/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 73127
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=73127 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/73127
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 21;i_1 += 1)
        {
            {
                var_15 = ((((((arr_2 [i_0] [i_0] [i_1]) ? var_9 : (arr_2 [i_1 + 1] [i_1] [i_0])))) ? (((!(arr_2 [i_0] [i_1 - 2] [i_0])))) : (~var_9)));
                arr_4 [i_0] [i_0] [i_0] = (max((~15728640), (3 | var_5)));
                arr_5 [1] [1] = ((((((var_3 << (var_11 - 6372758576802476157)))) || ((min(var_1, (arr_3 [i_0])))))));
            }
        }
    }

    for (int i_2 = 0; i_2 < 10;i_2 += 1)
    {

        for (int i_3 = 3; i_3 < 9;i_3 += 1) /* same iter space */
        {
            arr_12 [i_3] [3] = arr_7 [i_2];
            var_16 = ((((+(((arr_11 [i_2] [i_3]) % var_1)))) >> (((((arr_8 [2] [i_3 - 1]) ? (arr_8 [i_2] [i_3 - 1]) : (arr_8 [i_2] [i_3 - 1]))) + 1776703622))));
            var_17 ^= (((((arr_2 [i_3 - 2] [i_3] [i_3]) / var_6))) % ((var_8 ? var_4 : (arr_9 [i_3 - 2] [i_3]))));
        }
        for (int i_4 = 3; i_4 < 9;i_4 += 1) /* same iter space */
        {
            var_18 = (max(var_18, (((!(!var_9))))));
            var_19 = (max(var_19, (((((max((arr_2 [i_4 - 1] [i_4] [i_4 - 2]), (arr_2 [i_4 - 3] [i_4] [i_4])))) + var_6)))));
        }
        for (int i_5 = 2; i_5 < 9;i_5 += 1)
        {
            arr_18 [i_2] [i_5] = ((((-(arr_15 [i_5 - 1] [i_5 - 1] [i_5 - 1]))) != (((var_10 / (arr_11 [i_2] [i_5]))))));

            /* vectorizable */
            for (int i_6 = 0; i_6 < 10;i_6 += 1)
            {
                arr_23 [i_2] [i_2] = (((((arr_13 [i_2]) >= 9)) && var_4));
                arr_24 [i_2] [i_2] [i_6] [i_6] = var_3;
            }
            /* vectorizable */
            for (int i_7 = 1; i_7 < 8;i_7 += 1)
            {
                var_20 = (((((var_8 ? -747754230 : 10))) ? var_4 : var_2));
                arr_28 [1] [i_2] [i_5] [i_7] = (((arr_19 [i_2] [i_5] [i_7]) << (((arr_19 [i_2] [i_2] [i_7 + 2]) - 402905873))));
                var_21 = (-9223372036854775807 - 1);

                for (int i_8 = 0; i_8 < 0;i_8 += 1)
                {
                    var_22 |= (((((-(arr_26 [i_2] [i_5 + 1] [i_5] [i_8])))) ? ((~(arr_0 [i_7]))) : var_9));

                    for (int i_9 = 0; i_9 < 10;i_9 += 1) /* same iter space */
                    {
                        var_23 = (~var_10);
                        arr_33 [i_9] [i_5] [i_9] [i_7] [i_8] [i_9] [i_7] = (var_1 ? (arr_0 [i_5 - 2]) : (arr_0 [i_5 + 1]));
                    }
                    for (int i_10 = 0; i_10 < 10;i_10 += 1) /* same iter space */
                    {
                        var_24 = (arr_32 [i_7] [i_7] [i_5] [i_7]);
                        arr_36 [i_2] [i_2] [i_7 - 1] [i_7] [i_10] [i_7] [i_5] = (arr_30 [i_2] [i_5] [3] [6] [i_10]);
                    }
                    arr_37 [i_2] [i_5] [i_7 + 2] [7] [i_7] [i_7] = ((~(arr_16 [i_2] [i_5 + 1] [i_7])));
                    var_25 = ((var_8 ? (arr_25 [i_5 - 1] [i_7 - 1]) : (arr_25 [i_5 - 2] [i_7 + 2])));
                }
                for (int i_11 = 2; i_11 < 8;i_11 += 1)
                {
                    arr_41 [i_7] [i_7] [i_7] [i_11] = 28;
                    arr_42 [i_2] [i_7] [i_7] [i_11] = ((var_1 ? var_12 : ((((arr_0 [1]) >= -16)))));
                }
            }
            var_26 = (min(var_26, ((((((((arr_35 [i_2]) * (arr_35 [i_2]))))) && (((~(arr_25 [i_5 - 2] [i_5 - 2])))))))));
        }
        arr_43 [i_2] = 196;
    }
    #pragma endscop
}
