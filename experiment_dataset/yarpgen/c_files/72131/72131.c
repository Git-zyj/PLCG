/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 72131
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=72131 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/72131
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 21;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 22;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            {
                                arr_14 [i_1] [i_1] = (min((arr_6 [i_0 + 1] [i_1 + 2] [8]), (((~(arr_0 [i_0 + 3]))))));
                                var_18 = (max((arr_7 [10] [i_1]), ((63 & (arr_8 [1] [4] [i_2] [i_3] [i_4])))));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 24;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 24;i_6 += 1)
                        {
                            {
                                var_19 = (((((arr_13 [i_0] [i_1] [i_2] [i_5] [i_1]) + (49497 * var_16))) & (max((((arr_9 [i_0] [i_1] [22] [i_5]) | (arr_19 [i_0] [i_1] [i_2] [i_5] [i_6]))), ((-(arr_16 [19] [i_5] [12])))))));
                                var_20 ^= (((((arr_11 [1] [1] [i_2] [i_5] [4] [2]) ? (((-(arr_2 [22] [i_1])))) : (arr_12 [i_1 - 1] [i_2 + 1]))) | (((max((arr_8 [i_0 + 2] [11] [i_0 + 3] [i_0 + 1] [i_0]), (arr_8 [i_0] [i_0] [i_0 + 4] [i_0 - 1] [i_0])))))));
                                var_21 = -var_2;
                                arr_20 [i_1] = ((((arr_9 [i_0 + 3] [i_1 - 2] [i_1 - 1] [i_2 + 1]) ? (arr_9 [i_0 + 1] [i_1 - 2] [i_1 - 1] [i_2 - 1]) : (arr_9 [i_0 + 3] [i_1 + 2] [i_1 - 2] [i_2 - 1]))));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_7 = 0; i_7 < 24;i_7 += 1)
                    {
                        for (int i_8 = 0; i_8 < 24;i_8 += 1)
                        {
                            {
                                var_22 = ((((max(23502, (arr_24 [i_0 + 2])))) ? ((((arr_10 [i_0 + 1] [i_1] [i_1] [i_7] [i_8]) ? (arr_22 [1] [i_1] [i_8] [i_2] [i_8]) : (arr_19 [i_0] [i_1] [0] [i_7] [i_8])))) : ((((((arr_6 [i_0] [i_7] [i_8]) * (arr_23 [i_1] [i_1 + 1] [i_2 + 1] [i_7] [i_8])))) ? (((var_7 ? 16036 : var_13))) : (arr_0 [i_7])))));
                                var_23 = ((-((~(((arr_24 [i_0]) & (arr_12 [i_0] [i_1])))))));
                                arr_25 [i_0 + 1] [i_1 + 2] [i_2] [i_1] [i_7] [i_8] = (((max(((var_11 ? -56 : (arr_3 [i_1]))), (((arr_21 [i_1] [i_7]) ? (arr_3 [i_1]) : 84)))) <= (((((arr_22 [i_0] [i_1 + 2] [i_2] [i_7] [i_8]) ? (arr_4 [i_1]) : var_6)) * (arr_24 [i_1])))));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_9 = 0; i_9 < 24;i_9 += 1)
                    {
                        for (int i_10 = 0; i_10 < 24;i_10 += 1)
                        {
                            {
                                var_24 = (max(23502, -47));
                                arr_31 [i_1] [i_1] [i_2 + 2] [i_9] [i_10] = (((~(max(var_5, var_7)))));
                                arr_32 [10] [4] [i_2] [i_9] [i_1] = (((-((0 ? (arr_18 [1] [i_1] [i_2] [i_9] [i_10]) : -60)))));
                            }
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_11 = 0; i_11 < 18;i_11 += 1)
    {
        for (int i_12 = 0; i_12 < 18;i_12 += 1)
        {
            for (int i_13 = 0; i_13 < 18;i_13 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_14 = 0; i_14 < 18;i_14 += 1)
                    {
                        for (int i_15 = 0; i_15 < 18;i_15 += 1)
                        {
                            {
                                var_25 = (arr_11 [i_11] [i_13] [i_12] [i_13] [1] [i_15]);
                                arr_45 [i_13] = (arr_33 [i_11] [10]);
                                arr_46 [12] [i_12] [i_13] [1] [i_13] [i_15] = min(((-32 ? 1 : 49501)), 97);
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_16 = 0; i_16 < 18;i_16 += 1)
                    {
                        for (int i_17 = 0; i_17 < 18;i_17 += 1)
                        {
                            {
                                var_26 = 4;
                                var_27 = 1;
                                var_28 = (min(var_28, ((((arr_29 [i_11]) ? ((-(arr_7 [8] [i_17]))) : (arr_36 [i_11] [i_11]))))));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_18 = 0; i_18 < 18;i_18 += 1)
                    {
                        for (int i_19 = 0; i_19 < 18;i_19 += 1)
                        {
                            {
                                var_29 = ((((46 || var_1) ? (arr_7 [i_11] [i_13]) : (-57 || var_16))));
                                var_30 = ((((-(max(var_7, var_9))))) ? 1 : (((~196) ? (((arr_15 [i_11] [i_12] [i_12] [i_13] [i_18] [22]) ? var_3 : (arr_22 [i_11] [0] [i_11] [1] [21]))) : (((var_5 ^ (arr_9 [i_11] [i_11] [i_11] [i_11])))))));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
