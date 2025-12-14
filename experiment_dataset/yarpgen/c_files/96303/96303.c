/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 96303
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=96303 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/96303
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            {

                /* vectorizable */
                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {

                    for (int i_3 = 0; i_3 < 14;i_3 += 1)
                    {
                        arr_8 [i_0] [i_0 - 2] [i_1] [i_2] [i_3] &= (((arr_5 [i_0 - 3] [i_0 - 3] [i_0 - 4] [i_0 - 1]) ? (arr_5 [i_0 + 1] [i_0 + 2] [i_0 + 2] [i_0 - 4]) : (arr_2 [i_0 - 1] [i_3] [i_3])));
                        var_10 = (arr_3 [i_0] [i_1] [i_3]);
                        var_11 = (min(var_11, var_6));
                    }
                    for (int i_4 = 0; i_4 < 14;i_4 += 1)
                    {
                        var_12 = ((1 ? (arr_3 [i_0 - 3] [5] [i_2]) : 222));
                        var_13 = (max(var_13, ((((arr_5 [i_0 + 2] [i_0 + 1] [i_0 - 2] [i_0 + 2]) != (arr_5 [i_0 - 4] [i_0 + 1] [i_0 - 1] [i_0 - 2]))))));
                    }
                    var_14 = (((((~(arr_3 [i_0 - 4] [i_1] [i_2])))) & (arr_9 [i_0 + 2] [5] [i_0 - 2] [i_0 - 2] [i_0])));
                }
                for (int i_5 = 0; i_5 < 14;i_5 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 1;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 14;i_7 += 1)
                        {
                            {
                                var_15 = ((!((!(arr_9 [i_0] [5] [i_0] [i_0 - 3] [i_0])))));
                                var_16 = (max((arr_2 [i_1] [i_5] [i_6]), ((((((arr_17 [i_0] [i_0] [i_5] [i_6] [i_7]) ? (arr_15 [i_0 - 4] [i_0 - 4] [4] [i_6]) : (arr_0 [i_0] [i_0])))) ? (min(var_9, var_0)) : var_3))));
                                var_17 = ((((arr_4 [i_6] [i_5] [i_0]) ? ((((arr_1 [i_1]) << (((arr_1 [i_7]) - 120))))) : var_4)));
                                var_18 = var_0;
                                var_19 = ((-(max(var_2, (arr_6 [i_0] [i_1] [i_5] [i_1] [i_7])))));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_8 = 0; i_8 < 14;i_8 += 1)
                    {
                        for (int i_9 = 0; i_9 < 14;i_9 += 1)
                        {
                            {
                                arr_24 [i_1] [i_1] [i_5] [i_8] [i_9] [i_8] [i_1] = (min((arr_12 [i_0 - 2] [i_5]), (min((arr_0 [6] [i_9]), 209948247))));
                                var_20 = (~(((((arr_1 [i_1]) ? (arr_17 [i_0] [i_1] [11] [i_8] [i_0]) : var_4)) + var_0)));
                                arr_25 [0] [0] [6] [i_5] [i_1] [i_1] [i_0] = (arr_9 [i_0] [i_0] [i_5] [1] [i_9]);
                            }
                        }
                    }
                    var_21 = (arr_13 [i_0] [i_1] [i_0] [i_1]);
                }
                for (int i_10 = 1; i_10 < 13;i_10 += 1)
                {
                    var_22 = ((((((arr_11 [i_0 + 2] [i_0 + 2] [i_1] [i_10 + 1]) ? ((max((arr_21 [i_10]), (arr_11 [i_0 - 3] [i_0] [i_0 - 3] [7])))) : (min((arr_23 [i_0 - 2] [6] [i_0] [i_1] [4]), (arr_9 [i_0] [3] [i_1] [i_1] [i_10])))))) ? ((((!7213766022673730660) <= (arr_23 [i_0] [i_0] [i_1] [i_10 + 1] [i_10])))) : ((26387 ? 89 : ((-7213766022673730670 ? 11270 : (arr_15 [i_0 - 4] [i_0] [i_0] [i_0 - 4])))))));
                    var_23 = ((((max((~var_5), var_5))) >= (((11962416731561504113 % -4) ? (arr_5 [i_0] [i_1] [i_10 + 1] [i_0]) : -var_6))));
                }
                /* vectorizable */
                for (int i_11 = 1; i_11 < 12;i_11 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_12 = 0; i_12 < 14;i_12 += 1)
                    {
                        for (int i_13 = 2; i_13 < 10;i_13 += 1)
                        {
                            {
                                arr_34 [i_0] [i_1] [1] [i_12] [i_1] = (((arr_21 [i_1]) ^ ((-(arr_23 [i_0 - 4] [i_0 - 4] [i_11] [i_11] [i_13])))));
                                arr_35 [i_12] [i_12] = (~1);
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_14 = 0; i_14 < 0;i_14 += 1)
                    {
                        for (int i_15 = 0; i_15 < 14;i_15 += 1)
                        {
                            {
                                var_24 = ((((1179 ? 45 : 87))) % var_9);
                                var_25 &= ((!(arr_40 [i_0 - 4] [i_1] [i_11 - 1] [i_11 - 1] [i_15])));
                            }
                        }
                    }
                    var_26 = (~86);
                }
                arr_41 [i_0] = var_7;
                var_27 = var_9;
            }
        }
    }
    /* LoopNest 2 */
    for (int i_16 = 2; i_16 < 22;i_16 += 1)
    {
        for (int i_17 = 1; i_17 < 23;i_17 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_18 = 0; i_18 < 1;i_18 += 1)
                {
                    for (int i_19 = 0; i_19 < 24;i_19 += 1)
                    {
                        {
                            var_28 = (+(max((arr_44 [i_17] [i_18] [i_19]), (arr_44 [i_16] [i_17 - 1] [i_18]))));

                            /* vectorizable */
                            for (int i_20 = 0; i_20 < 24;i_20 += 1)
                            {
                                var_29 = (((arr_48 [i_16 - 2]) ? (arr_55 [i_16 + 2] [i_17 - 1] [i_17] [i_18] [i_18] [i_19] [i_18]) : (arr_49 [i_16 + 2] [i_16] [i_19] [i_16])));
                                var_30 = (max(var_30, ((((arr_46 [i_16] [i_16 - 1] [i_16 + 2] [i_17 - 1]) - (arr_53 [i_20] [i_19] [i_18] [i_17 + 1] [i_16]))))));
                            }
                            for (int i_21 = 0; i_21 < 24;i_21 += 1)
                            {
                                arr_59 [i_21] [i_17] [i_21] [i_21] [i_21] [i_16 + 1] = (arr_48 [i_16]);
                                arr_60 [i_16] [i_16] [i_19] [i_21] = (min((((((max(78, 97))) != ((var_4 ? var_3 : (arr_53 [i_16] [i_16] [i_18] [i_19] [i_21])))))), (max((min(var_6, (arr_49 [3] [3] [i_19] [4]))), ((87 ? 92 : 196))))));
                            }
                        }
                    }
                }

                for (int i_22 = 0; i_22 < 24;i_22 += 1)
                {
                    arr_63 [i_16] [i_17 - 1] [i_22] = (((1 ? 7213766022673730642 : 85)));
                    /* LoopNest 2 */
                    for (int i_23 = 0; i_23 < 24;i_23 += 1)
                    {
                        for (int i_24 = 1; i_24 < 1;i_24 += 1)
                        {
                            {
                                var_31 = var_8;
                                var_32 = (arr_58 [23] [i_17] [i_17] [i_17] [i_23] [i_24]);
                                var_33 = -1407820368;
                            }
                        }
                    }
                    arr_69 [i_16] = var_5;
                    arr_70 [i_16 + 2] = (-139 % ((~(~var_0))));
                }
            }
        }
    }
    #pragma endscop
}
