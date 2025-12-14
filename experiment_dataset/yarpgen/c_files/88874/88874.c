/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 88874
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=88874 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/88874
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 22;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        {
                            arr_9 [i_0] [i_0] [i_3] [i_0] = (((((-((var_4 ? 1 : var_1))))) ? (max(-1, ((-(arr_4 [i_0] [i_1] [11] [i_3]))))) : ((~((1 ? 1 : 1))))));
                            arr_10 [i_0] [i_3] [i_0] = (arr_2 [i_0] [1]);
                        }
                    }
                }
                var_17 |= (var_4 ? ((-(arr_5 [i_0]))) : (min(1, (min(15, 1)))));
                var_18 -= (((((((1 ? 1 : (arr_3 [i_0])))) ? (arr_8 [i_0] [i_1]) : var_4))) ? (arr_8 [i_1] [i_1]) : (max((((var_4 < (arr_2 [i_0] [11])))), (arr_6 [i_0] [i_0] [i_1] [i_1]))));
                arr_11 [i_1] = ((!(((arr_6 [i_1] [6] [i_1] [i_0]) != (!var_15)))));
                arr_12 [i_0] [i_1] [i_1] = ((((-(max(var_7, 1)))) - var_6));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_4 = 0; i_4 < 10;i_4 += 1)
    {
        for (int i_5 = 4; i_5 < 6;i_5 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_6 = 1; i_6 < 9;i_6 += 1)
                {
                    for (int i_7 = 0; i_7 < 1;i_7 += 1)
                    {
                        {
                            var_19 -= ((~((~(!1716769072)))));
                            arr_24 [i_6] [i_6 + 1] [8] [i_6] = var_0;
                            var_20 = (!var_7);
                            arr_25 [i_7] = ((min((arr_13 [i_5 - 3] [i_5 + 1]), (arr_17 [i_5 + 3]))) ^ ((((arr_17 [i_5 - 1]) * (arr_16 [i_6 - 1] [i_5] [i_5 + 3])))));
                            var_21 -= (min((((arr_13 [i_5 + 3] [i_5 - 1]) << (var_8 - 3074261945))), ((1103839958 ? (arr_6 [i_5 + 1] [i_5 - 1] [i_6 - 1] [1]) : (arr_13 [i_5 - 4] [i_5 - 2])))));
                        }
                    }
                }

                for (int i_8 = 0; i_8 < 0;i_8 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_9 = 1; i_9 < 1;i_9 += 1)
                    {
                        for (int i_10 = 0; i_10 < 1;i_10 += 1)
                        {
                            {
                                var_22 = (min(var_22, (((((max(var_12, (max(var_9, var_0))))) ? (((!((min((arr_2 [i_10] [i_8 + 1]), var_2)))))) : ((var_14 << (((arr_20 [i_4] [i_5 + 4] [1] [1]) - 3469276746)))))))));
                                var_23 = (min(var_23, (arr_2 [i_4] [i_4])));
                                arr_32 [i_5] [0] [i_9] [i_4] [i_5] [1] [i_4] &= ((1 / (arr_29 [i_5 + 4] [i_8 + 1] [i_8 + 1] [i_9] [i_9 - 1])));
                                arr_33 [i_4] [i_5] [i_8] [9] [i_9] = var_7;
                            }
                        }
                    }
                    var_24 = (max((((((1 ? var_9 : (arr_19 [i_8 + 1]))) != (min(1, (arr_28 [i_4] [1] [i_8] [i_4])))))), (max((var_2 > var_14), (min((arr_23 [i_8 + 1] [i_8] [i_8] [i_4] [i_5 - 1] [i_8]), var_2))))));
                }
                for (int i_11 = 1; i_11 < 6;i_11 += 1)
                {
                    var_25 = 1103839968;
                    arr_36 [i_11] [i_5] = (min((1 << var_12), (((max(1, (arr_16 [0] [1] [i_11]))) ? 1 : 1))));
                }
                /* vectorizable */
                for (int i_12 = 0; i_12 < 10;i_12 += 1)
                {
                    arr_39 [i_4] [i_4] [i_4] [i_4] = ((!(arr_1 [i_5 - 2])));

                    for (int i_13 = 0; i_13 < 1;i_13 += 1) /* same iter space */
                    {
                        var_26 += 2963835343;
                        arr_42 [i_5 - 2] [i_13] = var_3;
                    }
                    for (int i_14 = 0; i_14 < 1;i_14 += 1) /* same iter space */
                    {
                        var_27 = 0;

                        for (int i_15 = 0; i_15 < 10;i_15 += 1)
                        {
                            arr_48 [i_4] [i_5 + 4] [i_12] [4] [i_14] [i_15] [i_15] = (1735026433 / 1);
                            var_28 = ((~(arr_4 [i_4] [i_4] [i_4] [i_5 - 2])));
                        }
                        var_29 = arr_43 [i_4] [i_5] [i_12] [i_12] [i_12] [i_14];
                        var_30 = (max(var_30, (((-(arr_4 [i_5 + 3] [i_5 + 4] [i_5 - 4] [i_5 + 1]))))));
                    }
                }
                for (int i_16 = 1; i_16 < 8;i_16 += 1)
                {
                    var_31 = 1;
                    var_32 = ((((-((var_2 ? (arr_45 [1] [4] [i_16 + 1] [i_16] [i_16]) : (arr_20 [i_4] [2] [i_4] [7])))))) ? var_5 : ((((!((((arr_5 [1]) ? (arr_22 [i_4] [i_4] [i_4] [i_4]) : 1))))))));
                }
                arr_51 [i_5] [i_5 - 4] [i_4] = 1;
                var_33 = (max((((var_1 << ((max(1, 0)))))), (max((3658305748 / 1), ((558768797 ? 1 : 2643548994))))));
            }
        }
    }
    /* LoopNest 3 */
    for (int i_17 = 0; i_17 < 0;i_17 += 1)
    {
        for (int i_18 = 0; i_18 < 22;i_18 += 1)
        {
            for (int i_19 = 0; i_19 < 22;i_19 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_20 = 0; i_20 < 22;i_20 += 1)
                    {
                        for (int i_21 = 0; i_21 < 1;i_21 += 1)
                        {
                            {
                                arr_65 [3] [i_18] = (min((((!(arr_3 [i_17])))), var_2));
                                var_34 = ((((1 ? var_7 : var_3)) < (((var_6 ? (arr_54 [i_17]) : var_1)))));
                            }
                        }
                    }

                    for (int i_22 = 0; i_22 < 1;i_22 += 1)
                    {
                        arr_68 [i_18] [i_18] [5] [i_22] = arr_2 [7] [i_19];
                        arr_69 [i_18] [i_19] = (max((((var_8 / var_8) ? var_14 : (arr_66 [i_17 + 1] [i_18] [i_19] [i_22] [1] [7]))), (max(var_10, 1))));
                    }
                    for (int i_23 = 0; i_23 < 22;i_23 += 1)
                    {
                        var_35 -= max(((max(var_6, (arr_6 [i_17] [i_17 + 1] [i_17 + 1] [3])))), ((max(((!(arr_58 [i_23] [i_18] [i_23]))), ((var_11 > (arr_7 [i_19])))))));
                        var_36 = 712239714;
                    }
                    /* vectorizable */
                    for (int i_24 = 0; i_24 < 22;i_24 += 1)
                    {
                        var_37 += (!-var_14);
                        var_38 = -712239714;
                        var_39 = (var_12 & var_13);
                    }
                    for (int i_25 = 0; i_25 < 1;i_25 += 1)
                    {
                        var_40 *= (arr_59 [i_17 + 1] [i_19] [i_17 + 1]);
                        var_41 = (min((arr_2 [i_17 + 1] [i_17 + 1]), ((min((arr_71 [i_17 + 1] [i_18] [1] [1]), 1)))));
                    }
                    /* LoopNest 2 */
                    for (int i_26 = 0; i_26 < 1;i_26 += 1)
                    {
                        for (int i_27 = 2; i_27 < 21;i_27 += 1)
                        {
                            {
                                arr_82 [i_17] [i_17] [i_18] [i_17] = min(var_16, (max(4284759462, (arr_78 [i_17 + 1] [i_17 + 1] [15] [i_27 + 1] [i_18]))));
                                arr_83 [5] [i_17 + 1] [i_18] [i_19] [1] [i_26] [i_27] = (((arr_4 [i_17 + 1] [i_19] [1] [i_27 - 1]) / (arr_7 [i_18])));
                                arr_84 [i_27] [10] [i_17 + 1] [10] [i_18] = (max((max((arr_53 [i_17 + 1]), (arr_5 [i_27 - 1]))), var_5));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
