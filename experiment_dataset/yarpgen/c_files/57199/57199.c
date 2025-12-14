/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 57199
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=57199 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/57199
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 += var_5;
    var_18 = var_10;

    for (int i_0 = 1; i_0 < 15;i_0 += 1)
    {
        var_19 = (min(var_19, ((max((~1874651389), ((max((arr_0 [i_0 - 1]), 1))))))));
        var_20 = var_6;
        arr_2 [i_0] = var_11;
        var_21 += ((~((min((arr_1 [0]), (arr_1 [1]))))));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 24;i_1 += 1) /* same iter space */
    {
        var_22 = var_4;
        var_23 &= (arr_3 [i_1]);
        var_24 += var_10;
        var_25 = var_16;
        arr_6 [12] = var_0;
    }
    /* vectorizable */
    for (int i_2 = 0; i_2 < 24;i_2 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_3 = 0; i_3 < 24;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 24;i_4 += 1)
            {
                {
                    var_26 = (((arr_3 [i_2]) ? (arr_3 [i_3]) : (arr_3 [i_3])));

                    for (int i_5 = 2; i_5 < 22;i_5 += 1)
                    {
                        var_27 = (arr_18 [i_2] [i_4] [i_3] [i_3] [i_2]);
                        var_28 += var_6;
                        arr_19 [i_3] [i_4] [i_3] [i_3] = (((arr_5 [i_5 + 2] [i_2]) ? ((var_9 + (arr_13 [i_5] [i_3] [i_2]))) : (arr_12 [i_5 + 2] [i_5 - 2] [i_5 - 2] [i_2])));
                    }
                    for (int i_6 = 0; i_6 < 24;i_6 += 1)
                    {
                        var_29 &= (arr_7 [i_6] [i_2]);
                        var_30 = arr_16 [i_6] [i_6] [i_4] [i_2] [i_2];
                        arr_23 [i_3] [i_4] [i_3] = (((arr_13 [i_6] [i_3] [i_2]) ? var_1 : (arr_12 [i_6] [i_4] [i_3] [i_2])));
                        arr_24 [20] [i_3] [i_3] [i_2] = (((arr_7 [i_6] [i_4]) ? (arr_7 [i_4] [i_2]) : var_16));
                    }
                    var_31 = (4278025756 <= 16941552);
                    arr_25 [i_3] [i_3] [i_3] = (arr_10 [i_3]);
                }
            }
        }

        for (int i_7 = 4; i_7 < 21;i_7 += 1)
        {
            var_32 = arr_7 [i_7] [i_2];

            for (int i_8 = 0; i_8 < 24;i_8 += 1)
            {
                var_33 = var_1;
                var_34 = (min(var_34, (((((((arr_26 [i_2] [i_2]) ? (arr_22 [i_8] [i_7 + 2] [i_7] [i_2] [i_2] [i_2]) : var_0))) ? (arr_20 [i_8] [i_8] [i_8] [i_7] [i_2] [i_2]) : (arr_5 [i_8] [i_2]))))));
            }
            for (int i_9 = 0; i_9 < 24;i_9 += 1)
            {
                /* LoopNest 2 */
                for (int i_10 = 1; i_10 < 23;i_10 += 1)
                {
                    for (int i_11 = 0; i_11 < 24;i_11 += 1)
                    {
                        {
                            var_35 = var_2;
                            var_36 ^= ((~(arr_38 [i_10] [i_7] [0] [i_7] [i_10 - 1])));
                            arr_41 [i_11] [i_10] [i_10] [i_9] [i_10] [i_2] = (((arr_29 [1] [i_7 - 4] [i_7 - 4] [i_2]) <= ((var_15 ? var_4 : var_3))));
                            var_37 = ((((((arr_36 [i_11] [i_9] [i_2]) ^ var_15))) > var_10));
                            arr_42 [18] [i_10] [i_10] [i_7] = var_4;
                        }
                    }
                }
                var_38 += 1274211859;
                var_39 |= (arr_26 [i_9] [i_2]);
            }
            for (int i_12 = 1; i_12 < 22;i_12 += 1)
            {
                var_40 *= (arr_38 [i_12 + 2] [i_7] [i_7 - 3] [i_7] [i_2]);
                var_41 -= ((~(arr_17 [23] [i_12 + 2] [i_12 - 1] [i_12 - 1])));
                var_42 = (arr_20 [i_12 + 1] [i_12 - 1] [i_12] [i_12 - 1] [i_7 + 2] [i_7]);
            }
            arr_45 [i_7 + 3] = var_5;
            arr_46 [i_7 - 1] = ((~(((arr_5 [18] [i_2]) ? (arr_30 [i_7] [i_2] [i_2]) : var_8))));
        }
        for (int i_13 = 1; i_13 < 1;i_13 += 1)
        {

            for (int i_14 = 0; i_14 < 24;i_14 += 1)
            {
                var_43 = (min(var_43, (arr_4 [i_13])));
                var_44 += arr_21 [i_13] [i_13] [i_13] [i_2];
            }
            for (int i_15 = 0; i_15 < 24;i_15 += 1)
            {
                var_45 = (arr_33 [i_2] [i_2] [i_2]);
                /* LoopNest 2 */
                for (int i_16 = 0; i_16 < 24;i_16 += 1)
                {
                    for (int i_17 = 4; i_17 < 21;i_17 += 1)
                    {
                        {
                            var_46 = (max(var_46, (arr_20 [i_17 + 2] [i_17 + 1] [1] [i_17] [i_17 + 2] [i_17 + 2])));
                            var_47 = (min(var_47, (((((((arr_29 [i_17] [i_2] [i_13] [i_2]) ? var_4 : var_13))) ? ((var_12 ? var_9 : var_13)) : (arr_12 [6] [i_16] [i_15] [6]))))));
                            var_48 = var_11;
                            arr_58 [i_13] [i_16] [i_15] [i_2] [i_13] = var_3;
                        }
                    }
                }
                arr_59 [i_13] [i_13 - 1] [i_13] = var_5;
            }
            var_49 *= ((((((arr_18 [i_2] [i_13] [i_2] [i_2] [i_2]) ? (arr_30 [i_13 - 1] [i_13] [i_2]) : var_13))) ? var_2 : (arr_54 [i_2] [i_13] [i_2])));
        }
        for (int i_18 = 0; i_18 < 24;i_18 += 1)
        {
            var_50 = (max(var_50, (arr_48 [i_18] [i_2] [i_2])));

            for (int i_19 = 0; i_19 < 1;i_19 += 1)
            {
                var_51 += var_3;
                var_52 = ((var_12 == (arr_51 [i_19] [i_18] [21])));
                var_53 = ((-(arr_57 [i_19] [i_18] [i_18] [i_18] [i_18] [i_2])));
            }
        }
    }
    #pragma endscop
}
