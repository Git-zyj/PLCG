/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 5962
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=5962 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/5962
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 24;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 24;i_3 += 1)
                    {
                        {
                            var_12 = var_4;
                            arr_9 [i_0] [i_1] [i_0] [i_1] = ((~((~((((arr_0 [i_0]) > (arr_6 [i_0] [i_0 - 1] [i_0] [i_0]))))))));
                        }
                    }
                }

                for (int i_4 = 0; i_4 < 24;i_4 += 1)
                {
                    arr_13 [i_0] [i_0] [i_0] [9] = var_10;
                    var_13 ^= var_10;
                    var_14 += var_5;

                    for (int i_5 = 0; i_5 < 1;i_5 += 1)
                    {
                        arr_16 [i_0] [i_0] [i_4] [i_0] = ((2008937447 | (25394 - var_6)));
                        var_15 = (min(var_15, var_11));
                    }
                    for (int i_6 = 3; i_6 < 23;i_6 += 1) /* same iter space */
                    {
                        var_16 = ((var_4 ? var_7 : (~var_9)));
                        var_17 = ((~((((var_11 | var_3) >= (((arr_18 [i_6] [i_4] [i_1]) | (arr_15 [1] [0] [i_4] [i_0] [14] [i_0]))))))));

                        for (int i_7 = 0; i_7 < 24;i_7 += 1)
                        {
                            var_18 = var_6;
                            arr_23 [i_1] [i_0] [1] = ((~((((arr_20 [i_7] [i_1] [i_0] [i_1] [i_0]) < var_4)))));
                            arr_24 [i_0] [22] [23] [i_0] = ((var_6 ? -2008937438 : var_4));
                            var_19 = var_2;
                        }
                        /* vectorizable */
                        for (int i_8 = 0; i_8 < 1;i_8 += 1)
                        {
                            var_20 = (((arr_7 [i_0 + 1] [i_1] [i_6 - 1] [i_8]) + var_3));
                            var_21 = (((((((arr_26 [i_8] [i_0] [i_0] [i_1]) < 1)))) % -2008937418));
                        }
                        for (int i_9 = 3; i_9 < 23;i_9 += 1)
                        {
                            var_22 = (~(~var_3));
                            arr_32 [i_0] [i_0] [i_4] [i_6] [14] [i_6] = ((((arr_31 [i_6 - 1] [8] [i_9 - 2] [i_0 - 1] [i_6 - 1]) | (var_1 || 1))));
                        }
                    }
                    for (int i_10 = 3; i_10 < 23;i_10 += 1) /* same iter space */
                    {
                        arr_35 [i_0] [i_1] [i_0] [i_10 - 3] = 255;
                        var_23 = 1;
                    }
                    for (int i_11 = 3; i_11 < 23;i_11 += 1) /* same iter space */
                    {
                        arr_38 [i_0] [i_1] [i_0] [i_0] = (arr_37 [i_11 - 1] [i_0 - 1] [i_4] [12] [14] [i_1]);

                        for (int i_12 = 0; i_12 < 24;i_12 += 1)
                        {
                            arr_41 [i_11] [7] [i_11] [i_0] = (arr_39 [i_4] [i_4] [i_4] [i_4] [i_4] [i_4]);
                            var_24 = (max(var_24, (var_5 <= var_9)));
                            arr_42 [i_0] [i_11] [i_4] [i_1] [i_0] = ((((((((~(arr_19 [13] [19] [i_11] [i_12])))) && (arr_18 [i_0 + 1] [i_1] [i_0 + 1])))) | var_5));
                            arr_43 [i_0] [i_0] [19] [i_1] [i_4] [i_11] [i_12] = ((~(((arr_39 [i_0] [i_0] [i_4] [i_11 - 2] [i_0] [i_12]) ? (~var_4) : (((20907 ? 20 : var_8)))))));
                            var_25 = var_10;
                        }
                        /* vectorizable */
                        for (int i_13 = 0; i_13 < 1;i_13 += 1)
                        {
                            arr_48 [i_0] [23] [i_11] [i_4] [i_4] [i_1] [i_0] = (var_10 ? (arr_25 [i_4] [i_0] [i_4]) : (~var_5));
                            var_26 = (max(var_26, (var_8 || var_6)));
                            arr_49 [i_0] [9] [i_4] [i_1] [i_0] = (((arr_4 [i_11] [i_1] [i_0]) ? var_3 : var_6));
                            arr_50 [22] [i_0] [i_4] [i_11] [i_4] [17] = var_4;
                        }
                        arr_51 [i_0] [i_1] [17] [i_0] = var_4;

                        /* vectorizable */
                        for (int i_14 = 0; i_14 < 24;i_14 += 1)
                        {
                            var_27 = var_11;
                            arr_54 [12] [i_1] [i_1] [i_4] [0] &= var_9;
                        }

                        /* vectorizable */
                        for (int i_15 = 0; i_15 < 24;i_15 += 1) /* same iter space */
                        {
                            arr_58 [i_0] [i_1] [i_0] = var_3;
                            var_28 = (min(var_28, var_3));
                            arr_59 [i_0] [2] [i_0] [i_0] = var_10;
                            arr_60 [i_0] = -42;
                            arr_61 [13] [i_0] [i_4] [i_11] = var_5;
                        }
                        for (int i_16 = 0; i_16 < 24;i_16 += 1) /* same iter space */
                        {
                            arr_65 [i_0] [i_0] [i_4] [i_0] [i_16] = (arr_17 [i_0] [i_4] [i_11] [22]);
                            var_29 = var_11;
                        }
                        /* vectorizable */
                        for (int i_17 = 0; i_17 < 24;i_17 += 1) /* same iter space */
                        {
                            arr_68 [i_0] [i_0] [i_0] = (var_10 * var_10);
                            arr_69 [i_0] = var_10;
                        }
                        for (int i_18 = 0; i_18 < 24;i_18 += 1) /* same iter space */
                        {
                            arr_72 [i_0] [i_11 - 1] [i_0] = (arr_5 [i_4] [i_1] [i_4]);
                            arr_73 [8] [i_1] [i_0] [i_18] = ((~(arr_22 [i_18] [i_11] [i_0] [i_0] [12] [i_0])));
                            arr_74 [i_0] [i_0] [i_0] [i_4] [i_0] [i_0] |= var_7;
                            var_30 = (((!1552782674) != (arr_6 [1] [i_0 - 1] [i_0] [i_1])));
                        }
                    }
                }
                arr_75 [i_0] [i_0] = (~(((((var_7 <= (arr_15 [i_1] [i_1] [i_1] [i_0] [i_1] [i_0])))) % (var_0 <= var_9))));
                var_31 = (min(var_31, 1));
            }
        }
    }
    var_32 = (((((var_2 | (~var_7)))) | var_4));
    #pragma endscop
}
