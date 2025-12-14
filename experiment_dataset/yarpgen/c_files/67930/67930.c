/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 67930
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=67930 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/67930
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 16;i_1 += 1)
        {
            {
                var_20 = (max(var_20, 63342));
                var_21 = (((arr_0 [i_0 + 3] [i_1 + 2]) ? ((1 * (arr_0 [i_0 + 4] [i_1]))) : (arr_0 [10] [i_0 - 1])));
                /* LoopNest 2 */
                for (int i_2 = 2; i_2 < 15;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        {

                            for (int i_4 = 1; i_4 < 16;i_4 += 1)
                            {
                                var_22 = (((-127 - 1) || -1460629073128582452));
                                var_23 = (max(var_23, 13947));
                                var_24 = (max((((~(arr_4 [i_0] [i_1 - 1] [i_0])))), 0));
                            }
                            arr_14 [i_0] [i_1] [i_0] [i_0] [i_3] = 1;
                        }
                    }
                }
                /* LoopNest 3 */
                for (int i_5 = 0; i_5 < 1;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 18;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 18;i_7 += 1)
                        {
                            {
                                var_25 = (arr_4 [i_0] [i_5] [i_0]);
                                arr_26 [i_0] = ((~(arr_10 [i_0] [i_1] [16])));
                                arr_27 [1] [i_0] [i_5] [i_5] [i_5] = (max((min(var_5, (((arr_15 [i_0] [i_1] [16] [i_6]) ? (arr_9 [i_0 + 3]) : 56186)))), (!51589)));
                            }
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_8 = 0; i_8 < 16;i_8 += 1)
    {
        for (int i_9 = 0; i_9 < 16;i_9 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_10 = 1; i_10 < 13;i_10 += 1)
                {
                    for (int i_11 = 0; i_11 < 16;i_11 += 1)
                    {
                        {
                            var_26 = (~255);
                            var_27 = (arr_33 [i_9] [i_10 + 3] [i_11]);
                            var_28 ^= (((arr_38 [i_10 + 2] [i_10] [i_10 + 3] [i_10 + 2] [i_10 + 3] [i_11]) - (((arr_32 [i_8] [i_10 - 1] [i_8]) - var_13))));
                            arr_41 [i_8] [i_8] [i_10] [i_8] = ((((((arr_4 [i_10 + 2] [i_10 + 2] [i_8]) << ((((arr_30 [i_8]) < var_0)))))) ? (((((arr_36 [i_8] [i_8] [i_8] [i_8]) ? 2194 : 56186)))) : (arr_12 [i_9] [i_9] [i_10 + 1] [i_10] [i_10] [i_11] [i_9])));
                        }
                    }
                }
                arr_42 [i_8] [10] = (((max((arr_40 [i_8] [i_8] [i_8] [i_8] [1]), (arr_40 [i_9] [i_9] [i_9] [i_8] [1]))) + (arr_40 [i_8] [i_8] [i_8] [i_8] [i_8])));
                arr_43 [i_8] = ((var_13 ? ((-(!63342))) : (min((-32767 - 1), (((arr_33 [i_8] [i_8] [1]) ? var_14 : 2193))))));

                for (int i_12 = 0; i_12 < 16;i_12 += 1)
                {
                    var_29 = 795863870;
                    var_30 = ((+(((arr_33 [i_8] [i_8] [i_12]) + (arr_33 [8] [i_9] [i_12])))));

                    for (int i_13 = 0; i_13 < 16;i_13 += 1) /* same iter space */
                    {
                        var_31 = var_18;
                        var_32 = (((5960222124070887531 ? (arr_18 [0]) : (arr_18 [i_13]))));
                    }
                    for (int i_14 = 0; i_14 < 16;i_14 += 1) /* same iter space */
                    {
                        arr_53 [i_14] [i_9] [i_9] [i_12] [i_14] [i_14] = (((~(!13947))));
                        var_33 += ((((((arr_46 [i_8] [i_12] [13] [i_14]) == (arr_46 [1] [i_12] [i_8] [i_8])))) - ((min((arr_46 [i_8] [i_9] [i_12] [i_14]), (arr_19 [i_8] [i_9] [i_14]))))));
                        var_34 = (((arr_33 [i_8] [12] [i_9]) > ((((max(56186, (arr_30 [i_8])))) | (arr_0 [i_8] [i_9])))));
                        arr_54 [i_14] [i_9] = var_9;
                    }
                    /* vectorizable */
                    for (int i_15 = 0; i_15 < 16;i_15 += 1) /* same iter space */
                    {
                        arr_58 [3] [i_15] [12] [i_15] = (var_2 || 63342);
                        var_35 = 23500;
                        arr_59 [i_8] [i_15] [i_12] = (0 && 0);
                        var_36 = (max(var_36, -0));
                    }
                }
                for (int i_16 = 2; i_16 < 13;i_16 += 1)
                {
                    arr_63 [i_16 - 1] [i_9] [6] = var_13;
                    var_37 = max(1023, -15519);
                    arr_64 [i_8] = var_2;
                    arr_65 [i_16] = ((((((((arr_4 [i_9] [0] [i_9]) + (arr_9 [i_8])))) ? (arr_47 [2]) : ((min(0, 0))))) + (min(((0 ? (arr_60 [i_8] [i_9] [i_16 + 3] [3]) : (arr_7 [i_8]))), (arr_10 [i_16] [i_16] [i_16])))));
                    arr_66 [i_8] [i_9] [i_16] [i_16] = (max(9223372036854775807, 3665422640));
                }
                /* vectorizable */
                for (int i_17 = 0; i_17 < 16;i_17 += 1)
                {
                    arr_69 [i_8] [i_8] [i_9] [i_17] = (arr_13 [i_9] [i_17] [i_17] [i_9] [10] [i_9]);
                    arr_70 [2] = var_11;
                }
            }
        }
    }
    var_38 = (((var_11 ? (min(var_8, 1092643703) : 14421216028613502746))));
    #pragma endscop
}
