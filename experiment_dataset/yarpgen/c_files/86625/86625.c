/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 86625
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=86625 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/86625
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = var_10;
    var_12 = var_4;
    var_13 = (!var_7);

    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {

        for (int i_1 = 1; i_1 < 22;i_1 += 1)
        {

            for (int i_2 = 1; i_2 < 23;i_2 += 1) /* same iter space */
            {
                arr_6 [i_1] = (!(arr_0 [i_0]));
                arr_7 [i_1] [i_1] [i_1] = (!var_4);
                arr_8 [i_1] [12] [i_2 - 1] [i_1 - 1] = (((arr_5 [i_1] [i_2 - 1] [i_1]) ? var_6 : ((~(arr_5 [i_1] [i_1 + 1] [i_1])))));
            }
            for (int i_3 = 1; i_3 < 23;i_3 += 1) /* same iter space */
            {
                var_14 = (arr_0 [i_3]);
                arr_11 [i_0] [i_1] [19] = ((-(((arr_4 [i_1] [i_3 + 1]) ? ((-(arr_3 [18] [i_1] [i_3]))) : (arr_9 [i_3 + 1] [i_3 + 1] [i_3 + 1])))));
            }
            var_15 = ((!((((~(arr_3 [i_1] [i_0] [i_0])))))));
            arr_12 [i_0] [i_1] [i_1] &= 63;
            arr_13 [i_0] [i_1] = var_2;
        }
        var_16 ^= ((~((-(arr_9 [i_0] [i_0] [i_0])))));
        arr_14 [8] = var_2;
        var_17 = (max(var_17, ((((((!(arr_3 [i_0] [i_0] [i_0])))))))));
    }
    for (int i_4 = 0; i_4 < 11;i_4 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_5 = 1; i_5 < 10;i_5 += 1)
        {
            for (int i_6 = 2; i_6 < 9;i_6 += 1)
            {
                {
                    var_18 = ((14681029585185351801 ? 14681029585185351801 : 2440070117881302434));

                    /* vectorizable */
                    for (int i_7 = 2; i_7 < 10;i_7 += 1) /* same iter space */
                    {
                        var_19 = (arr_1 [i_4] [i_7 + 1]);
                        arr_28 [i_6 - 1] [i_4] = (((arr_27 [i_7 - 1] [i_6] [i_7 - 1] [i_7 - 1] [i_5] [i_7 - 1]) ? (arr_27 [i_4] [i_5] [i_7 - 1] [i_7] [9] [i_4]) : (arr_27 [i_4] [i_5] [i_7 - 1] [i_7] [i_5] [i_5])));
                        var_20 = -var_6;

                        for (int i_8 = 0; i_8 < 11;i_8 += 1)
                        {
                            var_21 = ((~(arr_27 [i_4] [i_6] [i_6] [i_7] [i_6] [i_6])));
                            var_22 = (min(var_22, (((-(arr_30 [i_5 - 1] [i_6 + 2] [8] [i_8] [i_8] [i_8] [i_8]))))));
                            var_23 = ((!(arr_9 [i_4] [i_5 - 1] [i_5 + 1])));
                        }
                        for (int i_9 = 0; i_9 < 11;i_9 += 1)
                        {
                            arr_33 [i_4] [i_4] [i_4] [i_4] [i_4] |= (((arr_1 [i_4] [i_4]) ? ((var_10 ? (arr_27 [8] [8] [i_6] [i_6] [5] [i_5]) : var_6)) : -27294));
                            var_24 = (var_4 ? (arr_26 [i_4]) : (arr_26 [i_7]));
                            var_25 = var_0;
                        }
                        for (int i_10 = 0; i_10 < 11;i_10 += 1) /* same iter space */
                        {
                            var_26 = (max(var_26, ((-(arr_35 [i_7 + 1] [i_7] [i_7] [i_7 - 1] [i_7 + 1] [i_7 - 1] [i_7 - 2])))));
                            var_27 = -1932747350;
                            arr_38 [i_10] [i_7] [1] [i_4] [i_4] = ((~(arr_30 [i_4] [i_7 + 1] [i_6 + 2] [i_7] [i_10] [1] [i_10])));
                        }
                        for (int i_11 = 0; i_11 < 11;i_11 += 1) /* same iter space */
                        {
                            var_28 = (!-var_2);
                            arr_42 [i_4] [1] [1] [i_5] [i_4] = ((!(arr_0 [i_5 - 1])));
                            var_29 = (~var_8);
                        }
                    }
                    for (int i_12 = 2; i_12 < 10;i_12 += 1) /* same iter space */
                    {
                        arr_46 [i_12] [i_5] = ((1917171328 ? -3099986055950932534 : 2935225887358087000));
                        arr_47 [i_12 - 2] [i_6] = (9244452582170432486 ? 62564 : 51);
                    }
                    for (int i_13 = 2; i_13 < 10;i_13 += 1) /* same iter space */
                    {
                        var_30 = ((-((-((37963 ? 2147483647 : 255))))));
                        var_31 = ((((arr_45 [9] [i_6 + 1] [i_6 + 2] [9] [i_13 - 1]) ? (~var_4) : (arr_5 [i_6] [i_13 + 1] [i_6]))));
                    }
                }
            }
        }
        var_32 = 32704;
        var_33 = (max(var_33, -var_0));
        /* LoopNest 2 */
        for (int i_14 = 0; i_14 < 11;i_14 += 1)
        {
            for (int i_15 = 1; i_15 < 8;i_15 += 1)
            {
                {
                    var_34 ^= (((arr_0 [i_15 - 1]) ? (arr_0 [i_15 - 1]) : -var_3));
                    var_35 = (max(var_35, (((var_9 ? var_3 : (arr_29 [i_15] [i_15] [i_15 + 1] [i_14]))))));
                }
            }
        }
        var_36 = (arr_55 [i_4] [i_4]);
    }
    for (int i_16 = 0; i_16 < 11;i_16 += 1) /* same iter space */
    {
        arr_58 [i_16] [i_16] = (((-(arr_4 [i_16] [i_16]))));
        var_37 += ((+(((arr_26 [i_16]) ? var_0 : var_0))));
        arr_59 [i_16] = (arr_55 [i_16] [6]);
        arr_60 [i_16] = ((~((-(arr_55 [i_16] [i_16])))));
    }
    #pragma endscop
}
