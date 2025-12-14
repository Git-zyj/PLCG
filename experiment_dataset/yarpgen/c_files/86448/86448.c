/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 86448
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=86448 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/86448
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 *= (max(((var_7 ? ((max(var_7, var_13))) : (!var_8))), ((((var_6 & var_14) < (!var_17))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 17;i_2 += 1)
                {
                    var_19 = (((((((-(arr_4 [i_0] [1] [7])))) ? (((arr_6 [i_2] [i_2] [i_2] [i_2]) - var_6)) : (arr_1 [i_0]))) != ((max((arr_3 [i_2] [i_1] [i_0]), (arr_8 [i_0]))))));
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 15;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 17;i_4 += 1)
                        {
                            {
                                arr_13 [i_2] [i_1] [i_0] [i_3] [i_4] [i_2] [i_3] = (((((((((arr_11 [i_0] [i_1] [i_2] [i_3 + 2] [i_4]) + var_10))) ? (arr_0 [i_4]) : ((var_16 ? var_0 : (arr_2 [i_4])))))) ? ((max((arr_11 [i_3] [i_3 + 2] [i_3 - 1] [i_3] [i_3]), (arr_11 [i_3] [i_3] [i_3 - 2] [i_3] [i_3])))) : (arr_11 [13] [i_3 + 1] [i_3] [i_3] [i_3 + 2])));
                                var_20 = (((((-(((arr_1 [i_0]) ? var_8 : (arr_4 [i_0] [14] [i_4])))))) ? var_8 : (max(-var_4, var_4))));
                            }
                        }
                    }
                    var_21 = (min(var_21, (((((min((min((arr_11 [14] [i_1] [i_2] [i_0] [i_0]), var_1)), (((var_14 ? var_4 : var_17)))))) ? -var_3 : (max((arr_4 [i_0] [i_1] [i_2]), (((var_2 ? (arr_0 [i_0]) : var_0))))))))));
                }
                for (int i_5 = 0; i_5 < 17;i_5 += 1)
                {
                    arr_16 [i_0] [i_1] [i_5] = (max((((max(var_2, (arr_15 [i_1] [i_1] [i_5] [i_5]))))), (arr_6 [i_0] [i_0] [i_1] [i_5])));
                    var_22 = ((((-(arr_2 [i_0])))) ? (((arr_2 [i_0]) ? (arr_2 [i_1]) : (arr_2 [i_0]))) : (((arr_2 [i_0]) ? (arr_2 [i_0]) : var_17)));
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 17;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 17;i_7 += 1)
                        {
                            {
                                var_23 *= ((((var_1 || (arr_1 [i_1]))) ? (((max((arr_1 [i_5]), (var_5 || var_4))))) : (((~var_8) ? (((arr_14 [i_1] [i_0]) ? (arr_14 [2] [2]) : (arr_15 [i_0] [i_5] [12] [i_7]))) : (arr_21 [2] [i_0] [i_0] [i_1] [i_5] [5] [i_7])))));
                                var_24 = (min(var_24, ((max(((var_8 ? (arr_18 [i_7] [i_6] [i_5] [i_1] [i_0]) : (arr_15 [i_0] [i_6] [i_1] [11]))), ((max((arr_12 [i_0] [i_1] [i_1]), ((max(var_16, (arr_17 [i_0] [i_1] [i_5] [i_6] [i_7] [i_0]))))))))))));
                                var_25 = ((~(max((arr_20 [i_0] [i_1] [i_1] [i_6] [1] [i_7]), ((max((arr_17 [i_0] [1] [i_1] [i_5] [i_6] [3]), (arr_1 [i_0]))))))));
                                var_26 = (min(var_26, (max((((~(arr_3 [i_0] [i_1] [10])))), var_5))));
                            }
                        }
                    }
                    var_27 = (max((((arr_21 [i_5] [i_1] [i_0] [i_1] [i_0] [i_0] [i_0]) ? (arr_21 [4] [i_1] [i_1] [i_0] [i_1] [1] [2]) : (arr_21 [i_5] [i_5] [i_5] [0] [i_5] [i_5] [13]))), (((arr_21 [i_0] [i_1] [i_1] [i_1] [i_1] [i_5] [i_5]) << (((arr_21 [i_5] [i_1] [i_1] [i_1] [i_1] [i_1] [i_1]) - 57236))))));

                    for (int i_8 = 0; i_8 < 0;i_8 += 1)
                    {
                        var_28 = (min(var_28, (((((((((arr_15 [i_8] [i_5] [i_1] [i_0]) * var_2))))) != (max((max(var_2, var_10)), ((max(var_5, (arr_21 [11] [i_0] [i_1] [i_1] [i_5] [3] [i_1])))))))))));

                        /* vectorizable */
                        for (int i_9 = 0; i_9 < 1;i_9 += 1) /* same iter space */
                        {
                            arr_28 [i_0] [i_1] [1] [i_8 + 1] [i_8] [i_1] = (arr_17 [i_8 + 1] [i_8] [i_8 + 1] [i_8] [i_8 + 1] [i_8 + 1]);
                            arr_29 [i_9] [i_8] [i_1] [i_8] [i_0] = ((+(((arr_15 [i_0] [i_1] [i_5] [i_9]) ? (arr_20 [i_0] [i_1] [i_5] [i_5] [i_9] [i_5]) : var_15))));
                            var_29 -= (arr_19 [i_8] [5] [i_8 + 1] [i_8 + 1] [i_8 + 1] [i_8 + 1]);
                            var_30 = ((!(arr_25 [i_0] [i_0] [8] [i_8 + 1] [i_9])));
                        }
                        for (int i_10 = 0; i_10 < 1;i_10 += 1) /* same iter space */
                        {
                            var_31 = ((((~(~var_8))) < ((((((arr_2 [i_0]) ^ var_4))) ? (~var_6) : ((((arr_18 [i_0] [i_1] [i_5] [i_8] [i_10]) != (arr_24 [i_0] [i_0] [i_5] [i_0]))))))));
                            var_32 = (min(var_32, ((((~((max(var_3, (arr_1 [i_5]))))))))));
                        }
                    }
                    for (int i_11 = 0; i_11 < 17;i_11 += 1)
                    {
                        arr_35 [i_0] [i_11] [i_5] [i_11] = (max(((((var_17 ? var_12 : (arr_6 [i_11] [10] [i_1] [i_0]))) != ((((arr_21 [i_0] [i_0] [15] [i_1] [i_1] [i_5] [i_11]) ? (arr_2 [12]) : (arr_34 [i_0] [i_1] [i_5] [0])))))), ((!(arr_30 [i_11] [i_5] [i_1] [i_1] [i_0] [i_11])))));
                        arr_36 [i_11] [i_11] [i_11] [i_0] = (((arr_2 [i_0]) | (((arr_2 [i_5]) ? (arr_2 [5]) : (arr_2 [i_11])))));
                        var_33 = ((((((arr_22 [14]) ? var_6 : ((((arr_15 [i_11] [i_5] [i_1] [i_0]) && var_13)))))) ? (((!((!(arr_22 [i_11])))))) : (arr_32 [i_11] [i_5] [i_1] [i_1] [i_11])));
                        var_34 = ((-(((!((max(var_8, (arr_3 [i_0] [i_1] [i_5])))))))));
                    }
                }
                /* vectorizable */
                for (int i_12 = 2; i_12 < 16;i_12 += 1)
                {
                    var_35 = var_6;
                    var_36 *= arr_1 [i_12 - 1];
                }
                arr_40 [i_0] = (max(((max((arr_7 [i_1] [i_0]), ((var_0 ? (arr_38 [i_0] [i_1] [14] [i_1]) : (arr_33 [i_1] [i_0] [i_0] [i_0])))))), (min(((max((arr_20 [i_0] [16] [14] [14] [i_0] [i_0]), (arr_23 [i_0] [i_0] [i_1] [i_1])))), (arr_4 [0] [0] [i_1])))));
                /* LoopNest 2 */
                for (int i_13 = 0; i_13 < 17;i_13 += 1)
                {
                    for (int i_14 = 0; i_14 < 17;i_14 += 1)
                    {
                        {
                            var_37 = (max(var_37, ((!((!(arr_20 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])))))));
                            arr_45 [i_0] [i_0] [i_0] = (!(arr_42 [i_13] [i_13] [i_13]));
                        }
                    }
                }
                var_38 = (min(var_38, (((((((-(arr_8 [i_0]))))) ? (min(var_0, (arr_44 [9] [i_0] [i_0] [11]))) : (((((arr_2 [i_1]) == (arr_14 [i_0] [i_1]))))))))));
                var_39 *= (arr_15 [i_0] [i_0] [i_0] [i_0]);
            }
        }
    }
    #pragma endscop
}
