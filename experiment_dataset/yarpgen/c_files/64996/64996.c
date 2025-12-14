/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 64996
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=64996 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/64996
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 14;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 14;i_3 += 1)
                    {
                        {
                            var_10 = ((-1 ? (((+((max((arr_0 [i_0] [i_2]), var_4)))))) : var_2));
                            var_11 = var_8;
                            arr_10 [i_2] = max(((var_2 ^ (arr_5 [5] [5] [i_0]))), (((((max((arr_9 [4] [i_3] [10] [i_1] [i_0]), 17))) ? (arr_7 [i_2]) : ((((!(arr_4 [0] [4] [1])))))))));
                            var_12 = (arr_9 [i_0] [2] [i_0] [i_2] [i_0]);
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_4 = 1; i_4 < 10;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 14;i_5 += 1)
                    {
                        {
                            var_13 = (((((arr_4 [i_4 + 2] [i_4] [i_4]) ? ((max(17, 18))) : (arr_5 [i_0] [i_0] [i_0]))) % -2940));
                            var_14 = ((((((arr_12 [i_1] [i_4 - 1] [i_4 - 1]) ? (arr_14 [i_4] [i_4 - 1] [i_4] [i_4 - 1]) : (arr_13 [i_1] [i_4 - 1] [i_5] [i_1])))) ? ((var_3 ? (arr_5 [i_1] [i_4 - 1] [i_5]) : 246)) : ((((arr_13 [i_4] [i_4 - 1] [i_4 - 1] [i_4 + 4]) >= var_9)))));
                            arr_16 [i_0] [i_1] [i_4] [i_1] = (arr_15 [12] [12] [12] [i_5] [i_0]);
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_6 = 1; i_6 < 15;i_6 += 1)
    {
        for (int i_7 = 0; i_7 < 18;i_7 += 1)
        {
            {
                arr_22 [i_7] [i_7] = ((!((max((arr_20 [i_6 + 2] [i_6 + 3] [i_6 + 2]), var_0)))));

                for (int i_8 = 0; i_8 < 18;i_8 += 1)
                {
                    var_15 = 245;
                    var_16 = var_6;
                }
                for (int i_9 = 0; i_9 < 18;i_9 += 1)
                {
                    arr_29 [i_6] [i_7] [i_6] [i_6] = (arr_26 [i_6 - 1] [i_7]);
                    arr_30 [i_6 - 1] [i_7] [i_7] = ((-((((max(16777215, 7))) ? 16568624353715202317 : (((4193792 ? (arr_18 [i_9] [i_6 - 1]) : (arr_19 [i_9] [i_7]))))))));
                    arr_31 [i_7] [i_7] = (max((((0 ? ((max(-2931, (arr_20 [i_6 - 1] [i_7] [i_9])))) : (arr_24 [i_6] [i_7] [i_7] [i_9])))), (((arr_24 [i_6 + 3] [i_6 - 1] [i_6 + 1] [i_6 + 1]) / var_2))));
                }
                /* LoopNest 2 */
                for (int i_10 = 2; i_10 < 15;i_10 += 1)
                {
                    for (int i_11 = 0; i_11 < 18;i_11 += 1)
                    {
                        {
                            var_17 = ((!((max((max(var_7, var_5)), 22628)))));

                            for (int i_12 = 0; i_12 < 18;i_12 += 1)
                            {
                                arr_41 [i_7] = (max((((arr_26 [i_6] [i_7]) ? ((((arr_17 [12] [i_12]) ? (arr_39 [i_6] [i_7] [i_10 + 3] [i_11] [i_12]) : 30))) : (arr_36 [i_10] [i_7] [i_7] [14]))), (max((max((arr_19 [i_6] [i_12]), var_3)), -30475))));
                                arr_42 [i_6] [i_7] [i_10 - 1] [i_7] [i_12] [i_12] = var_2;
                                arr_43 [i_6] [i_6 - 1] [i_7] [i_6] [i_6] [i_6] [i_6] = (arr_33 [i_6] [i_6] [1]);
                            }
                            for (int i_13 = 0; i_13 < 1;i_13 += 1)
                            {
                                arr_47 [i_7] [i_7] [i_10] [i_11] = max((((!(!var_4)))), (min(1258451014, var_3)));
                                arr_48 [i_7] [i_11] = (max((max((arr_18 [i_10 - 1] [i_6 - 1]), (arr_28 [i_10 + 3] [i_10 - 1] [i_6 - 1]))), 16));
                                arr_49 [i_6] [16] [i_6] [i_7] [i_6 + 2] [i_6] = (max((((~(max(-5075091279658057859, 0))))), ((((((arr_17 [i_6 + 2] [i_7]) ? var_0 : 4193792))) ? (max(var_2, var_3)) : ((max(1754076155, (arr_28 [i_6 - 1] [i_7] [i_10]))))))));
                                var_18 = (((((((min(0, var_6)))) >= 268435455)) ? (min(7, (arr_45 [11] [11] [i_6] [i_10 + 3] [11] [i_11] [i_11]))) : (arr_45 [i_11] [13] [i_10 + 2] [3] [0] [i_11] [i_10 + 2])));
                            }
                            /* vectorizable */
                            for (int i_14 = 0; i_14 < 18;i_14 += 1)
                            {
                                arr_54 [i_7] = ((!(arr_44 [i_7])));
                                var_19 = ((var_8 ? var_4 : (arr_45 [2] [i_6] [i_6 + 1] [i_10 - 2] [i_10 - 2] [16] [i_10])));
                                var_20 = (arr_19 [i_11] [16]);
                            }
                        }
                    }
                }
            }
        }
    }
    var_21 = (min(var_7, var_7));
    var_22 = var_7;
    #pragma endscop
}
