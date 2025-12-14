/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 85509
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=85509 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/85509
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = var_14;

    for (int i_0 = 3; i_0 < 22;i_0 += 1)
    {
        var_19 = var_0;
        var_20 = 0;
        var_21 = ((((59992 && 2872648341) ? (var_1 / var_13) : (max((arr_1 [i_0]), 5534)))));
    }
    /* vectorizable */
    for (int i_1 = 4; i_1 < 10;i_1 += 1) /* same iter space */
    {
        /* LoopNest 3 */
        for (int i_2 = 1; i_2 < 10;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 11;i_3 += 1)
            {
                for (int i_4 = 2; i_4 < 9;i_4 += 1)
                {
                    {
                        var_22 = 13396;
                        var_23 = var_2;
                        var_24 |= (13396 - 64068);
                        var_25 = (arr_10 [i_1 - 1] [i_2 - 1] [i_2] [i_4]);
                    }
                }
            }
        }
        var_26 = (max(var_26, ((((arr_9 [i_1] [i_1] [i_1]) ^ var_10)))));
    }
    for (int i_5 = 4; i_5 < 10;i_5 += 1) /* same iter space */
    {
        var_27 = (max(var_27, (min(((1503954034 ? (arr_3 [i_5 - 3] [i_5]) : ((-1400332572791867244 ? var_5 : var_2)))), (arr_8 [i_5 + 1] [i_5] [i_5])))));
        /* LoopNest 2 */
        for (int i_6 = 2; i_6 < 10;i_6 += 1)
        {
            for (int i_7 = 2; i_7 < 8;i_7 += 1)
            {
                {
                    var_28 = (((((arr_1 [i_6 + 1]) > (arr_1 [i_6 - 1]))) ? var_4 : var_9));
                    var_29 = (arr_0 [i_5]);
                    var_30 = 127;
                }
            }
        }
    }
    /* vectorizable */
    for (int i_8 = 4; i_8 < 10;i_8 += 1) /* same iter space */
    {
        var_31 += (arr_21 [i_8 + 1] [i_8 - 3] [i_8 - 2]);

        for (int i_9 = 1; i_9 < 9;i_9 += 1) /* same iter space */
        {
            /* LoopNest 3 */
            for (int i_10 = 0; i_10 < 11;i_10 += 1)
            {
                for (int i_11 = 1; i_11 < 10;i_11 += 1)
                {
                    for (int i_12 = 0; i_12 < 11;i_12 += 1)
                    {
                        {
                            var_32 = (arr_2 [i_8]);
                            var_33 = (((arr_34 [i_11] [i_11 - 1]) + var_6));
                            var_34 = (((arr_22 [i_9 + 2]) || (arr_22 [i_9 + 1])));
                        }
                    }
                }
            }

            for (int i_13 = 3; i_13 < 10;i_13 += 1)
            {
                var_35 = var_7;
                /* LoopNest 2 */
                for (int i_14 = 0; i_14 < 11;i_14 += 1)
                {
                    for (int i_15 = 0; i_15 < 11;i_15 += 1)
                    {
                        {
                            var_36 = ((-var_5 ? ((18446744073709551602 ? (arr_11 [i_14] [i_13] [i_14] [i_15]) : var_9)) : (arr_24 [i_15] [i_14])));
                            var_37 += (arr_29 [1] [1] [i_14] [1]);
                            var_38 = 8017711756529379892;
                        }
                    }
                }
                var_39 = (max(var_39, var_4));
                /* LoopNest 2 */
                for (int i_16 = 4; i_16 < 9;i_16 += 1)
                {
                    for (int i_17 = 0; i_17 < 11;i_17 += 1)
                    {
                        {
                            var_40 = ((!(arr_37 [i_9 - 1] [i_9] [i_9 - 1] [i_13] [i_13 - 3])));
                            var_41 = (((arr_32 [i_8] [i_8 - 4] [i_8] [i_8 + 1] [i_17]) ? (arr_36 [i_16 - 1] [i_16 - 3] [i_16 + 2] [i_16 - 4]) : (arr_35 [10] [i_9] [i_9])));
                            var_42 = ((((((!(arr_30 [i_8] [i_9] [2] [i_8] [4] [2]))))) <= -6005198997204409852));
                        }
                    }
                }
            }
            for (int i_18 = 0; i_18 < 11;i_18 += 1)
            {
                var_43 = (!var_0);
                /* LoopNest 2 */
                for (int i_19 = 0; i_19 < 11;i_19 += 1)
                {
                    for (int i_20 = 2; i_20 < 8;i_20 += 1)
                    {
                        {
                            var_44 = (!var_17);
                            var_45 += var_0;
                            var_46 = (arr_16 [i_18]);
                            var_47 = ((~((var_3 ? 100642134 : 59998))));
                        }
                    }
                }
            }
            for (int i_21 = 0; i_21 < 11;i_21 += 1)
            {
                var_48 = (var_7 / 1400332572791867243);
                var_49 = var_3;
                var_50 = (((arr_53 [i_9]) || var_17));
            }
            for (int i_22 = 0; i_22 < 11;i_22 += 1)
            {
                var_51 = (arr_33 [9] [i_9 + 2] [i_22] [i_8] [i_9 + 2]);
                var_52 = ((~(((!(arr_22 [i_9]))))));
            }
        }
        for (int i_23 = 1; i_23 < 9;i_23 += 1) /* same iter space */
        {

            for (int i_24 = 0; i_24 < 11;i_24 += 1)
            {
                var_53 = (((arr_52 [i_8] [i_8] [i_23 - 1] [i_23] [7]) * (!127)));
                var_54 = ((2791013258 + (arr_53 [i_8 - 4])));
            }
            var_55 = -1;
            var_56 = var_10;
            var_57 = (!9223372036854775807);
        }
        for (int i_25 = 1; i_25 < 9;i_25 += 1) /* same iter space */
        {
            /* LoopNest 2 */
            for (int i_26 = 0; i_26 < 11;i_26 += 1)
            {
                for (int i_27 = 0; i_27 < 11;i_27 += 1)
                {
                    {
                        var_58 += (((arr_40 [i_8 + 1] [i_25] [i_26] [i_27] [i_27] [i_27]) + (arr_4 [i_27] [i_26])));
                        var_59 = ((-284549799 ? var_15 : (~9223372036854775804)));
                        var_60 = ((~(arr_54 [i_25 + 2])));
                    }
                }
            }
            var_61 = var_0;
        }
        for (int i_28 = 0; i_28 < 1;i_28 += 1)
        {
            var_62 = arr_18 [i_8 - 4];
            var_63 = (((~(arr_40 [i_8] [2] [i_8 + 1] [i_28] [i_28] [3]))));
        }
    }
    var_64 = ((1538969937 % ((54565 ? var_8 : var_5))));
    var_65 ^= var_8;
    #pragma endscop
}
