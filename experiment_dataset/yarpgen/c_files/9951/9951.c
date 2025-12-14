/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 9951
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=9951 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/9951
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 12;i_2 += 1)
            {
                {
                    var_19 = 1;
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 12;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 12;i_4 += 1)
                        {
                            {
                                var_20 = (min(var_20, ((max((!-93), (~var_4))))));
                                arr_15 [i_0] [i_0] [i_0] [i_2] [i_3] [i_4] [i_4] = ((-5061085609246116267 ? ((((arr_2 [i_0]) ? (arr_11 [i_1] [i_2]) : 1))) : (((((var_5 ? 4172 : var_6))) + (max((arr_0 [i_0]), var_10))))));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 12;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 12;i_6 += 1)
                        {
                            {
                                arr_23 [i_0] = (arr_3 [i_0] [i_0] [i_6]);
                                arr_24 [i_0] [i_1] [i_2] = ((((((((1 ? var_1 : var_5))) ? ((((!(arr_11 [i_2] [i_0]))))) : -var_5))) - (arr_20 [i_0 - 2] [i_0] [i_0 - 3] [i_0] [i_0] [i_0 - 1])));
                                arr_25 [i_0] = ((!(((+(((arr_12 [i_0] [i_1] [i_1] [i_5] [i_6] [i_0]) - (arr_18 [6] [i_1] [i_1] [i_2]))))))));
                            }
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_7 = 0; i_7 < 25;i_7 += 1)
    {
        for (int i_8 = 0; i_8 < 25;i_8 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_9 = 0; i_9 < 25;i_9 += 1)
                {
                    for (int i_10 = 0; i_10 < 25;i_10 += 1)
                    {
                        {
                            arr_35 [i_7] |= ((min(var_1, 0)));
                            arr_36 [i_7] [i_8] [i_7] [i_10] [i_9] [i_10] |= 1;
                            var_21 = 0;
                        }
                    }
                }
                var_22 -= (((((max((arr_32 [i_7] [i_7] [14] [i_7]), 2147483647))) & (((arr_34 [i_8]) ? var_16 : var_11)))));
                /* LoopNest 2 */
                for (int i_11 = 0; i_11 < 1;i_11 += 1)
                {
                    for (int i_12 = 0; i_12 < 25;i_12 += 1)
                    {
                        {
                            var_23 = ((((max(var_3, var_1))) ^ (arr_41 [i_7] [i_8] [i_11] [i_12])));
                            arr_42 [i_7] [i_8] [i_11] [i_12] [i_8] &= (!-11782);
                            arr_43 [i_7] [i_11] [i_12] = (arr_27 [i_12]);
                        }
                    }
                }
                /* LoopNest 3 */
                for (int i_13 = 0; i_13 < 25;i_13 += 1)
                {
                    for (int i_14 = 1; i_14 < 23;i_14 += 1)
                    {
                        for (int i_15 = 0; i_15 < 25;i_15 += 1)
                        {
                            {
                                var_24 = (var_11 ? (max((~var_13), (arr_46 [i_7] [i_7] [i_14 - 1] [i_15]))) : (min((arr_32 [i_7] [i_13] [i_7] [i_7]), (arr_30 [i_7] [i_8] [i_7] [i_14]))));
                                var_25 -= (-((((min(var_8, var_8))) ? ((var_7 ? (arr_48 [i_7] [i_8] [i_13] [i_14] [i_15] [i_15]) : (arr_27 [i_15]))) : (arr_29 [i_7] [i_8] [i_13]))));
                                var_26 = -11782;
                                arr_52 [13] [i_14 + 2] [i_13] [13] [i_14 + 2] = ((((((min(var_4, (arr_41 [i_7] [i_7] [i_13] [i_7])))) ? (arr_50 [i_13] [i_14] [i_14 + 1] [i_14] [i_14 + 1]) : var_17)) << (((max(var_7, -18446744073709551615)) - 4203))));
                            }
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_16 = 0; i_16 < 20;i_16 += 1)
    {
        for (int i_17 = 1; i_17 < 18;i_17 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_18 = 0; i_18 < 20;i_18 += 1)
                {
                    for (int i_19 = 0; i_19 < 20;i_19 += 1)
                    {
                        {
                            arr_64 [i_16] [i_17 + 2] [i_18] [i_19] [i_17 + 1] [i_17] = (min(((~(!var_7))), ((((min((arr_32 [17] [i_17 + 2] [i_18] [i_17]), var_14))) ? (arr_30 [i_17] [i_17 + 1] [i_17 - 1] [i_17]) : 1))));
                            var_27 = var_3;
                            var_28 = ((min((arr_26 [i_17 - 1] [i_17 + 2]), (arr_26 [i_17 - 1] [i_17 + 1]))) + var_17);
                            arr_65 [i_16] [i_17] [i_18] [i_17] [i_19] [i_19] = ((var_10 ? ((-721533487 ? (arr_38 [i_16] [i_16] [i_18] [i_17 + 1]) : var_2)) : (arr_38 [i_16] [i_17] [i_17] [i_17 - 1])));
                        }
                    }
                }
                /* LoopNest 3 */
                for (int i_20 = 0; i_20 < 20;i_20 += 1)
                {
                    for (int i_21 = 0; i_21 < 20;i_21 += 1)
                    {
                        for (int i_22 = 1; i_22 < 1;i_22 += 1)
                        {
                            {
                                var_29 -= 0;
                                var_30 = (((-(arr_55 [i_16] [i_21] [i_22]))));
                                arr_74 [i_20] [i_17] [i_16] = 30971;
                                arr_75 [i_16] [i_16] [i_20] [i_17] [i_22 - 1] = (max((min(((var_9 ? var_14 : (arr_46 [i_16] [i_16] [i_21] [i_22 - 1]))), 63734)), (((!(((arr_34 [i_20]) || (arr_45 [i_16] [i_16] [i_20] [i_21]))))))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_31 = ((!((!(!var_9)))));
    #pragma endscop
}
