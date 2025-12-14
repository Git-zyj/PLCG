/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 68237
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=68237 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/68237
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            {
                var_10 = var_4;

                /* vectorizable */
                for (int i_2 = 0; i_2 < 10;i_2 += 1)
                {
                    var_11 = (max(var_11, ((((arr_0 [i_2]) - (arr_0 [i_1]))))));
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 8;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 10;i_4 += 1)
                        {
                            {
                                arr_14 [i_1] [i_4] &= (arr_3 [i_2]);
                                var_12 *= ((!(arr_7 [i_3 - 1] [i_3 - 1] [i_3 + 1])));
                                arr_15 [i_4] [i_4] [i_3 - 1] [i_2] [i_1] [i_4] [i_0] = (((arr_8 [i_4] [i_3 + 2] [i_2]) ? ((-(arr_4 [i_0]))) : ((-(arr_13 [i_0] [i_0] [i_2] [i_3 + 2] [i_4])))));
                                arr_16 [i_4] [i_4] [i_4] = var_5;
                            }
                        }
                    }
                    arr_17 [i_2] [i_1] [i_0] = (((arr_13 [i_0] [i_1] [9] [i_0] [i_0]) & (arr_13 [i_0] [i_2] [i_2] [4] [i_0])));
                }
                /* vectorizable */
                for (int i_5 = 0; i_5 < 10;i_5 += 1) /* same iter space */
                {
                    arr_20 [i_0] [2] [i_0] = (arr_10 [i_0] [i_0] [i_1] [i_1] [i_5] [i_5]);
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 10;i_6 += 1)
                    {
                        for (int i_7 = 1; i_7 < 9;i_7 += 1)
                        {
                            {
                                var_13 = (arr_0 [i_0]);
                                arr_26 [i_0] [6] [i_5] [i_6] [2] |= var_2;
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_8 = 1; i_8 < 1;i_8 += 1)
                    {
                        for (int i_9 = 1; i_9 < 7;i_9 += 1)
                        {
                            {
                                arr_32 [i_8] [i_8] [i_8] [i_8 - 1] [i_8] = (i_8 % 2 == zero) ? ((((((arr_0 [i_0]) + 2147483647)) << (((arr_31 [3] [i_8] [i_5] [3] [3] [i_8 - 1]) - 124))))) : ((((((arr_0 [i_0]) + 2147483647)) << (((((((arr_31 [3] [i_8] [i_5] [3] [3] [i_8 - 1]) - 124)) + 93)) - 28)))));
                                arr_33 [i_0] [i_1] [i_5] [i_8] [i_9] [i_8] = (((1277991508 & (arr_7 [i_5] [i_1] [i_0]))));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_10 = 1; i_10 < 9;i_10 += 1)
                    {
                        for (int i_11 = 0; i_11 < 1;i_11 += 1)
                        {
                            {
                                var_14 = 0;
                                arr_39 [i_5] [6] = (arr_8 [i_10 - 1] [i_10 + 1] [i_10 + 1]);
                                arr_40 [i_5] [i_5] [i_5] [i_5] [i_5] = (var_9 * (arr_25 [i_10 - 1]));
                            }
                        }
                    }
                }
                for (int i_12 = 0; i_12 < 10;i_12 += 1) /* same iter space */
                {
                    var_15 = (((((1 ? -1127303549 : 1648756268))) ? (((arr_3 [i_0]) ? (arr_2 [i_1] [i_12]) : (arr_35 [i_1] [i_0] [i_12] [8]))) : 0));
                    var_16 = ((14855677846592072927 - (arr_41 [i_0] [i_1] [i_0])));

                    /* vectorizable */
                    for (int i_13 = 0; i_13 < 1;i_13 += 1)
                    {
                        arr_47 [i_0] [i_0] [i_0] [i_12] [i_0] = ((1 + (arr_19 [i_12] [i_13])));
                        arr_48 [i_0] [i_0] [i_12] [i_12] [7] = 52838;
                    }
                    for (int i_14 = 0; i_14 < 10;i_14 += 1)
                    {
                        var_17 = (max((arr_5 [i_0] [i_0] [i_0]), (arr_5 [i_0] [i_1] [i_12])));
                        var_18 = (max(var_18, (((((-23315 ? ((1 ? 17572 : var_4)) : (arr_3 [i_0]))) <= 8)))));
                        arr_51 [i_0] [i_1] [i_12] [i_12] = 1;
                    }
                }
                for (int i_15 = 0; i_15 < 10;i_15 += 1) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (int i_16 = 0; i_16 < 10;i_16 += 1)
                    {
                        for (int i_17 = 3; i_17 < 6;i_17 += 1)
                        {
                            {
                                arr_61 [1] [1] [i_15] [i_16] [i_17] = (!var_9);
                                arr_62 [i_17] [1] [i_15] [1] [i_17 - 3] [i_17 - 3] [i_16] = var_7;
                            }
                        }
                    }
                    arr_63 [i_15] = (((arr_42 [i_1] [i_1] [i_1]) && var_3));
                }
                arr_64 [8] [8] [i_0] = ((~(((((var_8 || (arr_28 [i_0] [i_1] [i_1] [i_0])))) ^ -1608248494))));
                var_19 = (min(var_19, (((-(arr_36 [1] [i_0] [i_1] [i_1] [i_1]))))));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_18 = 1; i_18 < 15;i_18 += 1)
    {
        for (int i_19 = 0; i_19 < 16;i_19 += 1)
        {
            {
                arr_69 [i_18 - 1] [i_19] [i_19] = ((((max(var_3, ((1648756284 & (arr_67 [i_18] [10])))))) ? var_4 : (((1648756257 ? (min(var_9, var_3)) : (arr_68 [i_18] [i_19] [i_18]))))));
                arr_70 [i_18 - 1] [i_19] = (((53 < 13933063283269081843) ? ((((!((((arr_67 [15] [14]) ^ var_4))))))) : (~1224978254)));
                arr_71 [9] [i_19] [i_19] = (((arr_66 [i_18 + 1] [i_18 + 1]) && (arr_66 [i_18 - 1] [i_18 + 1])));
            }
        }
    }
    var_20 = ((-((var_3 ? var_4 : var_7))));
    var_21 = (max(var_21, var_5));
    #pragma endscop
}
