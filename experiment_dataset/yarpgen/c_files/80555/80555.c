/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 80555
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=80555 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/80555
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 20;i_2 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 19;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 1;i_4 += 1)
                        {
                            {
                                var_12 = (((22606 && 56) ? ((max(-82, (arr_0 [i_0] [i_0])))) : (((!(arr_6 [i_0] [1] [3]))))));
                                var_13 += (((arr_1 [i_0]) ? (arr_2 [i_0] [i_0 + 2]) : (arr_8 [i_0] [i_0 + 3] [i_2])));
                            }
                        }
                    }
                    var_14 = (((((20508 ? 63 : -24))) ? (min(66, -0)) : ((((arr_4 [i_0 - 1] [i_0] [10]) ? var_0 : ((((arr_1 [i_0]) || 50))))))));
                }
                /* vectorizable */
                for (int i_5 = 0; i_5 < 20;i_5 += 1)
                {
                    var_15 = (!var_1);
                    var_16 = -22594;
                    var_17 *= (((!121) ? var_9 : (54 > var_8)));
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 20;i_6 += 1)
                    {
                        for (int i_7 = 1; i_7 < 18;i_7 += 1)
                        {
                            {
                                var_18 -= 65472;
                                arr_23 [i_1] [1] [i_1] = (arr_17 [i_0 - 1] [i_0 + 1] [1] [i_7 + 2]);
                                var_19 = 120;
                            }
                        }
                    }
                }
                /* vectorizable */
                for (int i_8 = 0; i_8 < 1;i_8 += 1) /* same iter space */
                {
                    arr_27 [i_0] [i_1] [i_8] [i_1] = ((~(arr_19 [i_0 - 1])));
                    /* LoopNest 2 */
                    for (int i_9 = 1; i_9 < 18;i_9 += 1)
                    {
                        for (int i_10 = 0; i_10 < 20;i_10 += 1)
                        {
                            {
                                var_20 = (((55 ? var_11 : (arr_26 [i_0] [i_0] [1]))));
                                var_21 -= var_6;
                            }
                        }
                    }
                }
                for (int i_11 = 0; i_11 < 1;i_11 += 1) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (int i_12 = 3; i_12 < 18;i_12 += 1)
                    {
                        for (int i_13 = 0; i_13 < 20;i_13 += 1)
                        {
                            {
                                var_22 = ((!(((~(!65467))))));
                                var_23 = 30652;
                                var_24 += var_9;
                                var_25 += ((1 > (1 ^ 114)));
                                var_26 = ((1 >= (max((arr_0 [2] [i_11]), (var_10 - var_7)))));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_14 = 1; i_14 < 16;i_14 += 1)
                    {
                        for (int i_15 = 1; i_15 < 19;i_15 += 1)
                        {
                            {
                                var_27 = var_4;
                                var_28 = ((+(min((((arr_33 [15] [i_1] [12] [i_14 + 3] [i_15]) / -22604)), 22617))));
                                var_29 += 12319;
                                arr_47 [i_0 + 1] [i_0 + 1] [i_11] [i_11] [i_14 + 1] [i_15] = (arr_41 [i_1] [i_1] [i_15 + 1]);
                            }
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_16 = 0; i_16 < 1;i_16 += 1)
                {
                    for (int i_17 = 2; i_17 < 18;i_17 += 1)
                    {
                        {

                            /* vectorizable */
                            for (int i_18 = 0; i_18 < 20;i_18 += 1)
                            {
                                var_30 = (arr_31 [i_0 - 1] [i_1] [i_0 - 1] [i_17] [i_18] [i_18]);
                                var_31 += -8068;
                                var_32 &= ((var_2 == (12575 - var_7)));
                                arr_56 [3] [i_1] [i_1] [i_1] [i_1] [i_1] [i_1] &= var_5;
                            }
                            for (int i_19 = 0; i_19 < 20;i_19 += 1)
                            {
                                var_33 = ((max((~var_6), 74)) > ((-3813767195287942577 ? ((-62 ? var_11 : 0)) : 74)));
                                var_34 = (((((arr_51 [i_0 + 2] [i_1] [i_16] [i_16] [i_17] [i_19]) ? -67 : (arr_40 [i_0 + 3] [i_1] [i_1] [i_16] [i_16] [i_17 + 2] [i_19]))) > (arr_40 [14] [i_1] [i_1] [1] [i_17 - 2] [i_19] [i_19])));
                                var_35 = (((((~(((arr_21 [i_0 + 1] [i_0] [i_1] [i_0] [i_0] [i_19] [i_0]) ? var_11 : (arr_3 [i_1] [1] [i_19])))))) ? (!-122) : var_0));
                            }
                            /* vectorizable */
                            for (int i_20 = 0; i_20 < 0;i_20 += 1)
                            {
                                var_36 &= (arr_15 [i_20 + 1] [i_20] [i_20 + 1]);
                                var_37 = 116;
                            }
                            var_38 &= (min(var_11, 65521));
                        }
                    }
                }
                var_39 = (((arr_49 [i_1] [i_0] [i_0]) ? ((max((arr_10 [i_0] [i_0] [i_1] [i_0]), 63))) : ((~(!var_5)))));
                arr_63 [i_0] = (!((((!6168) * ((6 ? (arr_11 [2] [i_1] [i_1] [8] [i_1]) : (arr_52 [i_0] [i_0 + 1] [i_0] [18])))))));
            }
        }
    }
    var_40 = var_7;
    #pragma endscop
}
