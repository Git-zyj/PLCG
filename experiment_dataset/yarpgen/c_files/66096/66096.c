/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 66096
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=66096 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/66096
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_19 = arr_4 [i_1];
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 19;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 19;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 19;i_4 += 1)
                        {
                            {
                                var_20 |= (arr_11 [i_0] [i_0] [i_0] [i_0] [i_0]);
                                var_21 = (max((((118 * ((-118 ? 133484890 : 115))))), (arr_9 [i_3] [5] [i_1] [5])));
                                arr_14 [i_1] [i_3] [i_2] [i_1] [i_1] = var_9;
                                arr_15 [i_0] [i_1] [i_2] [i_3] [i_4] [i_3] = ((((14867849880516341675 ? -119 : -122))) ? ((var_16 ? ((~(arr_9 [i_0] [i_4] [i_0] [i_3]))) : (arr_8 [i_4] [i_2] [i_0]))) : (arr_6 [i_1] [i_2] [i_2] [i_2]));
                            }
                        }
                    }
                }
                arr_16 [i_0] [i_1] [i_1] = (max((!var_10), (((arr_13 [i_0] [i_0] [i_0] [i_0] [i_1] [i_1]) ? ((0 ? var_15 : var_5)) : (arr_2 [i_1] [i_0])))));
                var_22 = (max(var_22, (((max((((arr_5 [i_0] [i_0] [i_0]) ? (arr_4 [i_0]) : var_17)), (((-(arr_2 [i_1] [i_0]))))))))));

                /* vectorizable */
                for (int i_5 = 0; i_5 < 1;i_5 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 19;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 19;i_7 += 1)
                        {
                            {
                                arr_25 [i_7] [i_1] [i_1] [i_6] [i_1] = (((arr_13 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]) ? (arr_13 [i_0] [i_0] [i_5] [i_6] [i_7] [i_7]) : 1895821920));
                                var_23 = (max(var_23, ((((((arr_9 [i_1] [i_1] [i_1] [18]) + (arr_21 [i_0] [i_1] [i_6] [i_7])))) || 2496121768006608130))));
                                arr_26 [i_0] [i_0] [i_1] [4] [i_6] [i_7] &= var_13;
                            }
                        }
                    }
                    arr_27 [i_5] [i_1] [i_0] = (((var_10 ? 3214987408 : var_3)));
                    /* LoopNest 2 */
                    for (int i_8 = 0; i_8 < 19;i_8 += 1)
                    {
                        for (int i_9 = 0; i_9 < 19;i_9 += 1)
                        {
                            {
                                var_24 &= (((((-119 ? var_16 : 5888))) ? ((118 ? var_0 : (arr_31 [i_0] [i_1] [i_0] [i_5] [i_1] [i_8] [15]))) : (arr_13 [i_8] [i_8] [i_8] [i_8] [i_8] [i_8])));
                                var_25 = (((arr_29 [i_8] [i_0]) && (arr_29 [i_0] [i_1])));
                                arr_32 [i_1] [i_9] = (arr_13 [i_0] [i_0] [i_0] [i_8] [i_9] [i_9]);
                            }
                        }
                    }

                    for (int i_10 = 0; i_10 < 1;i_10 += 1)
                    {
                        var_26 |= 1;
                        var_27 = (arr_34 [i_10] [i_5]);
                    }
                    for (int i_11 = 0; i_11 < 19;i_11 += 1)
                    {
                        var_28 = (arr_12 [i_0] [i_11] [i_5] [i_1] [i_0] [i_0] [i_0]);
                        var_29 &= 31;
                    }
                }
            }
        }
    }
    var_30 = var_12;
    /* LoopNest 2 */
    for (int i_12 = 0; i_12 < 19;i_12 += 1)
    {
        for (int i_13 = 0; i_13 < 19;i_13 += 1)
        {
            {
                var_31 = (max(1, var_1));
                var_32 |= (arr_6 [i_13] [i_12] [i_12] [i_12]);
                arr_43 [i_12] [i_12] = (((!((!(-127 - 1))))));
            }
        }
    }
    #pragma endscop
}
