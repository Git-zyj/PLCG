/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 63796
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=63796 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/63796
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            {
                var_19 = (arr_3 [0] [0]);
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 24;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        {
                            var_20 = (((arr_6 [i_0] [i_3]) != (arr_0 [i_1])));

                            for (int i_4 = 0; i_4 < 1;i_4 += 1)
                            {
                                arr_13 [i_2] [6] [i_1] [i_3] = (((max((arr_3 [i_4] [i_1]), (arr_7 [i_1] [i_1])))) ? (((arr_6 [i_1] [15]) ^ ((1073741760 ^ (arr_0 [i_3]))))) : (arr_4 [i_1] [i_2] [i_3]));
                                var_21 &= (max((arr_12 [i_1]), ((((max((arr_10 [i_4] [i_1] [i_0] [i_0] [i_1]), (arr_9 [i_0] [i_1] [i_3]))) + (arr_9 [i_1] [i_1] [i_4]))))));
                                arr_14 [i_1] [i_3] [i_4] = ((-(var_8 && -var_13)));
                            }
                            arr_15 [i_3] [i_3] = ((var_16 ? ((((max(1, var_14))) ? ((min((arr_4 [i_0] [i_0] [i_0]), (arr_2 [i_0])))) : ((var_9 * (arr_7 [i_0] [8]))))) : (arr_11 [i_3] [i_3] [i_2] [19] [i_3] [i_0])));

                            /* vectorizable */
                            for (int i_5 = 0; i_5 < 24;i_5 += 1)
                            {
                                var_22 = (((arr_7 [i_0] [i_5]) ? (arr_1 [i_2] [i_2]) : (arr_4 [i_3] [i_3] [i_2])));
                                var_23 = (((arr_9 [i_3] [i_1] [i_2]) ? (arr_9 [i_1] [i_2] [i_5]) : (arr_9 [i_0] [i_3] [i_5])));
                                var_24 = (max(var_24, (arr_9 [i_2] [i_1] [i_2])));
                            }
                            for (int i_6 = 2; i_6 < 23;i_6 += 1)
                            {
                                var_25 = (arr_21 [i_0] [i_1] [i_2] [5] [5] [i_6]);
                                arr_22 [i_3] [i_1] [i_2] [i_3] [i_6] [i_3] [i_6] = (~-1073741739);
                            }
                        }
                    }
                }
                /* LoopNest 3 */
                for (int i_7 = 4; i_7 < 23;i_7 += 1)
                {
                    for (int i_8 = 0; i_8 < 24;i_8 += 1)
                    {
                        for (int i_9 = 0; i_9 < 24;i_9 += 1)
                        {
                            {
                                var_26 &= (((max((arr_12 [i_7 + 1]), 3800716093)) + (arr_5 [i_1] [i_7 - 1] [i_7])));
                                var_27 = ((((((!(arr_26 [i_7 + 1] [i_7 + 1] [i_7 + 1] [i_7 + 1]))))) & ((((max((arr_9 [i_1] [i_8] [i_9]), 1073741738))) ? (arr_18 [i_0]) : (!var_5)))));
                            }
                        }
                    }
                }

                /* vectorizable */
                for (int i_10 = 0; i_10 < 24;i_10 += 1)
                {
                    arr_33 [i_0] [i_1] [i_10] = ((-5 | (arr_11 [i_10] [i_0] [i_1] [i_1] [i_0] [i_0])));
                    arr_34 [i_10] [i_1] [18] = ((!(arr_24 [i_10])));
                    /* LoopNest 2 */
                    for (int i_11 = 0; i_11 < 24;i_11 += 1)
                    {
                        for (int i_12 = 0; i_12 < 1;i_12 += 1)
                        {
                            {
                                var_28 = ((arr_9 [i_0] [i_1] [i_11]) >= (arr_5 [i_0] [i_1] [i_12]));
                                arr_40 [i_0] [i_12] = (arr_0 [i_0]);
                            }
                        }
                    }
                    var_29 += 1;
                    var_30 = (arr_16 [i_0] [i_1] [i_1] [i_1] [i_1]);
                }
                /* vectorizable */
                for (int i_13 = 1; i_13 < 22;i_13 += 1)
                {
                    arr_45 [i_0] [i_1] [i_13] |= (((((arr_39 [i_0]) - (arr_4 [i_0] [i_1] [i_0]))) + (((var_2 + (arr_11 [i_0] [i_0] [i_1] [i_1] [i_0] [i_1]))))));
                    var_31 = ((((((arr_11 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]) <= var_10))) | (arr_6 [i_13 + 1] [i_13 - 1])));
                }
                arr_46 [i_1] [i_0] = (arr_10 [i_0] [i_0] [i_1] [i_1] [23]);
            }
        }
    }
    var_32 = (var_6 ? var_14 : var_12);
    #pragma endscop
}
