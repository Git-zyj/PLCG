/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 74301
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=74301 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/74301
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = max(((-((min(58937, 236))))), (min(((123 ? var_1 : var_9)), (!var_14))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        var_19 = arr_0 [i_0] [16];

        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {

            for (int i_2 = 0; i_2 < 17;i_2 += 1)
            {
                arr_7 [i_0] [i_1] [i_2] [i_1] = (((-123 ? var_11 : var_15)));
                arr_8 [i_0] [i_1 - 1] [i_1] [i_2] = var_3;
            }
            arr_9 [i_1] = (((arr_0 [i_1 - 1] [i_0]) ? (arr_0 [i_1 - 1] [3]) : 5811123615462345937));
            /* LoopNest 2 */
            for (int i_3 = 0; i_3 < 17;i_3 += 1)
            {
                for (int i_4 = 1; i_4 < 16;i_4 += 1)
                {
                    {
                        var_20 = ((~(arr_12 [i_4] [i_4 - 1] [i_4 - 1] [i_4 + 1])));
                        var_21 = (!0);

                        for (int i_5 = 3; i_5 < 13;i_5 += 1)
                        {
                            var_22 = ((~(arr_18 [i_1] [i_4 + 1] [i_3] [i_1 - 1] [i_1 - 1] [i_1])));
                            arr_19 [i_1] [i_4] = (arr_14 [6]);
                        }
                    }
                }
            }

            for (int i_6 = 0; i_6 < 17;i_6 += 1)
            {

                for (int i_7 = 0; i_7 < 17;i_7 += 1)
                {
                    arr_25 [i_1] = 6609;

                    for (int i_8 = 0; i_8 < 17;i_8 += 1) /* same iter space */
                    {
                        var_23 = ((var_1 ? 40433 : 0));
                        arr_29 [3] [i_1] [i_1] [i_7] [i_8] [i_8] [i_8] = ((-(arr_15 [i_0] [i_0] [i_7] [i_8])));
                    }
                    for (int i_9 = 0; i_9 < 17;i_9 += 1) /* same iter space */
                    {
                        arr_33 [i_0] [i_1] [i_1] [i_6] [i_6] [7] [i_1] = (((arr_31 [i_1 - 1] [6] [i_1 - 1] [i_1 - 1] [i_1 - 1] [i_1]) ? (arr_32 [i_6] [i_1 - 1] [i_1] [i_1] [i_1]) : (arr_31 [11] [i_1 - 1] [i_1 - 1] [i_1 - 1] [i_0] [i_0])));
                        arr_34 [i_1 - 1] [i_1] = (arr_4 [i_0] [i_0] [i_6]);
                    }
                }
                for (int i_10 = 0; i_10 < 17;i_10 += 1)
                {

                    for (int i_11 = 3; i_11 < 16;i_11 += 1)
                    {
                        arr_41 [i_6] [i_10] [i_6] [i_1] [i_1] [i_6] |= var_1;
                        var_24 -= (((arr_39 [i_1 - 1]) && var_7));
                        var_25 = arr_14 [12];
                    }
                    for (int i_12 = 1; i_12 < 1;i_12 += 1)
                    {
                        var_26 = (((arr_43 [i_12 - 1] [i_1]) ? (arr_32 [i_0] [i_1 - 1] [i_10] [i_1 - 1] [i_12 - 1]) : (arr_32 [i_0] [i_1 - 1] [i_1] [i_10] [i_12 - 1])));
                        var_27 = (min(var_27, (arr_4 [i_0] [1] [i_12])));
                        var_28 = (((var_17 ? var_14 : var_8)));
                    }
                    var_29 = (min(var_29, (!var_6)));
                }
                arr_44 [i_1 - 1] [i_1] [i_6] = (arr_42 [i_1]);
            }
            for (int i_13 = 0; i_13 < 17;i_13 += 1)
            {
                arr_47 [i_0] [i_1] [i_13] = 756398911;
                var_30 = (((3538568390 ? (arr_1 [i_0]) : 14)));
                /* LoopNest 2 */
                for (int i_14 = 0; i_14 < 17;i_14 += 1)
                {
                    for (int i_15 = 0; i_15 < 17;i_15 += 1)
                    {
                        {
                            arr_54 [i_0] [i_15] [i_13] [i_14] [i_1] [i_0] = (((arr_48 [i_1 - 1] [i_1 - 1] [i_1 - 1] [i_1 - 1] [i_1 - 1]) ? (arr_48 [i_1 - 1] [i_1 - 1] [i_1 - 1] [i_1 - 1] [i_1 - 1]) : (arr_48 [i_1 - 1] [i_1 - 1] [i_1 - 1] [i_1 - 1] [i_1 - 1])));
                            var_31 = ((var_6 ? (arr_22 [i_1 - 1] [i_1] [10] [i_13]) : (arr_22 [i_1 - 1] [i_1 - 1] [i_13] [i_14])));
                        }
                    }
                }
            }
            for (int i_16 = 0; i_16 < 17;i_16 += 1)
            {
                arr_57 [i_0] [i_1] [i_1] = (((arr_49 [i_0] [14] [0] [i_1] [i_1] [i_16]) * 4));
                /* LoopNest 2 */
                for (int i_17 = 1; i_17 < 16;i_17 += 1)
                {
                    for (int i_18 = 0; i_18 < 17;i_18 += 1)
                    {
                        {
                            var_32 = (arr_15 [i_0] [i_1 - 1] [i_1 - 1] [i_17 + 1]);
                            var_33 = ((-123 + (arr_15 [i_0] [i_1 - 1] [i_1 - 1] [i_17 + 1])));
                            var_34 = (arr_28 [i_1 - 1] [i_1 - 1] [i_1] [i_17 + 1] [i_17 - 1]);
                            arr_64 [i_0] [i_0] [1] [14] [i_16] [i_17] [i_18] |= -3576258145;
                            var_35 = ((126 | (arr_36 [i_1 - 1] [i_1] [i_1] [i_18])));
                        }
                    }
                }
            }
        }
        arr_65 [i_0] = var_10;
        var_36 = (min(var_36, (arr_56 [i_0] [10] [10] [i_0])));
        /* LoopNest 2 */
        for (int i_19 = 0; i_19 < 17;i_19 += 1)
        {
            for (int i_20 = 0; i_20 < 17;i_20 += 1)
            {
                {
                    arr_70 [i_20] [2] [i_0] [i_0] = (((arr_39 [i_0]) ? ((var_12 & (arr_67 [i_0]))) : (arr_49 [i_0] [i_0] [2] [i_0] [i_0] [i_0])));
                    /* LoopNest 2 */
                    for (int i_21 = 0; i_21 < 17;i_21 += 1)
                    {
                        for (int i_22 = 1; i_22 < 14;i_22 += 1)
                        {
                            {
                                arr_77 [i_0] [i_19] [i_19] [i_21] [i_22] = (((((arr_46 [i_22] [i_19] [i_20]) + 2147483647)) << (!var_12)));
                                arr_78 [i_22] [9] = (arr_56 [i_0] [i_0] [i_22] [i_0]);
                            }
                        }
                    }
                    var_37 = (((arr_72 [i_0] [i_0] [i_19] [9] [i_0]) && (arr_72 [i_0] [i_19] [i_19] [i_20] [i_20])));
                }
            }
        }
    }
    #pragma endscop
}
