/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 79309
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=79309 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/79309
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 1; i_2 < 14;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 14;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 16;i_4 += 1)
                        {
                            {
                                var_16 ^= ((!((min((arr_9 [10] [i_1] [i_2] [i_2 - 1]), (arr_8 [i_3 + 1] [i_1] [i_2 + 2] [i_2 - 1]))))));
                                arr_14 [i_0] [0] [i_2] [i_0] [i_4] = var_4;
                            }
                        }
                    }
                }
                /* LoopNest 3 */
                for (int i_5 = 0; i_5 < 16;i_5 += 1)
                {
                    for (int i_6 = 3; i_6 < 15;i_6 += 1)
                    {
                        for (int i_7 = 1; i_7 < 13;i_7 += 1)
                        {
                            {
                                var_17 ^= ((~((var_14 / ((min((arr_11 [3] [i_5] [14]), (arr_10 [1]))))))));
                                var_18 = (max(var_18, (((((min(80, (((arr_4 [i_5] [i_7 - 1]) | var_5))))) && ((max((min(var_7, var_10)), var_10))))))));
                                arr_25 [i_0] [i_0] [i_5] [i_5] [i_6] [i_7] = (min((arr_16 [i_0] [i_0] [14] [i_6]), (((((arr_23 [i_0] [i_0] [i_7] [i_6 - 2] [i_0]) || (arr_19 [i_0] [i_1] [i_5] [i_6] [i_7] [i_7])))))));
                            }
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_8 = 1; i_8 < 14;i_8 += 1)
                {
                    for (int i_9 = 0; i_9 < 16;i_9 += 1)
                    {
                        {
                            arr_32 [i_8] [i_1] [i_8 - 1] [i_9] [i_9] [i_0] = (((((arr_22 [i_9] [i_8] [i_8 - 1] [i_8] [i_1] [i_0] [i_0]) + ((((arr_7 [i_0]) >= (arr_5 [3] [i_0])))))) <= 241));
                            var_19 = (max(var_19, (arr_12 [i_9] [i_9])));
                            arr_33 [i_9] [i_0] [i_0] [i_0] [i_0] = (arr_15 [i_0] [i_8] [i_8] [i_8 + 2]);
                            arr_34 [i_0] [1] [i_0] [i_0] [i_0] [i_0] = (max((((~(arr_6 [i_8 + 1])))), ((((min((arr_1 [i_0]), (arr_24 [i_9] [i_0] [i_1] [i_0] [i_0] [i_0])))) ? (((min(241, (arr_28 [i_0] [i_1] [i_8] [i_0] [i_9]))))) : (((arr_20 [i_9] [i_9] [5] [i_1] [9]) | (arr_4 [i_8] [8])))))));
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_10 = 0; i_10 < 11;i_10 += 1)
    {
        for (int i_11 = 0; i_11 < 11;i_11 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_12 = 0; i_12 < 11;i_12 += 1)
                {
                    for (int i_13 = 0; i_13 < 11;i_13 += 1)
                    {
                        {
                            var_20 *= (max(var_0, (arr_5 [i_10] [i_10])));
                            arr_45 [i_12] [i_13] = ((~(arr_23 [i_10] [i_10] [i_10] [i_10] [i_10])));
                            var_21 = (max((max(((max(var_8, var_7))), (((arr_17 [i_10] [i_11] [i_12]) ? (arr_5 [i_10] [i_11]) : (arr_1 [i_12]))))), ((((arr_19 [i_10] [i_11] [i_12] [i_11] [i_11] [i_12]) ? var_3 : ((((arr_12 [i_12] [i_12]) || (arr_7 [i_10])))))))));
                            var_22 = (((((((arr_13 [15] [i_10] [i_10] [i_12] [i_13]) ^ 7))) ? ((((arr_16 [13] [i_12] [i_10] [i_10]) ^ (arr_7 [8])))) : var_11)));
                        }
                    }
                }
                /* LoopNest 3 */
                for (int i_14 = 0; i_14 < 11;i_14 += 1)
                {
                    for (int i_15 = 0; i_15 < 11;i_15 += 1)
                    {
                        for (int i_16 = 0; i_16 < 11;i_16 += 1)
                        {
                            {
                                arr_54 [i_10] [i_11] [4] [i_15] [i_10] = arr_50 [i_10] [i_11] [1] [i_16];
                                var_23 = (!((max(1742940506492015328, -23787))));
                                var_24 = (0 ? (arr_42 [i_10] [i_11]) : ((((min((arr_19 [14] [8] [i_11] [i_14] [13] [i_16]), (arr_36 [i_15])))))));
                                arr_55 [i_10] [i_11] [i_14] [i_15] [i_16] = var_11;
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
