/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 64957
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=64957 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/64957
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 &= var_8;

    /* vectorizable */
    for (int i_0 = 1; i_0 < 23;i_0 += 1)
    {
        var_16 = (max(var_16, -29283));

        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            var_17 = ((~((var_14 & (arr_0 [i_1])))));

            for (int i_2 = 3; i_2 < 23;i_2 += 1)
            {
                arr_7 [i_0] [i_2] = (arr_3 [i_0 + 2]);
                arr_8 [1] [i_0] [i_1] [i_2 - 3] = var_2;
            }
            for (int i_3 = 0; i_3 < 0;i_3 += 1)
            {
                /* LoopNest 2 */
                for (int i_4 = 1; i_4 < 22;i_4 += 1)
                {
                    for (int i_5 = 3; i_5 < 23;i_5 += 1)
                    {
                        {
                            var_18 = (((arr_14 [i_4] [i_4 + 2] [i_4 + 2] [i_4]) & (arr_14 [i_4] [i_4 + 2] [i_4 + 2] [i_4])));
                            var_19 ^= (~-1);
                            var_20 |= ((4294967293 | 24) ? (arr_16 [i_0 + 2] [i_1] [i_0 + 2] [i_4]) : ((232 ? var_0 : -29283)));
                        }
                    }
                }
                arr_17 [i_0] [i_0] = ((!(arr_10 [i_3 + 1] [i_3 + 1])));
            }
            for (int i_6 = 0; i_6 < 25;i_6 += 1)
            {
                /* LoopNest 2 */
                for (int i_7 = 0; i_7 < 25;i_7 += 1)
                {
                    for (int i_8 = 2; i_8 < 23;i_8 += 1)
                    {
                        {
                            arr_27 [i_0] [i_0] [1] [i_0] [i_0] = var_14;
                            arr_28 [i_6] [i_0] = ((var_0 | (arr_26 [i_0 + 1] [i_0])));
                            arr_29 [i_0] [i_1] [i_1] [i_6] [i_0] [i_1] [i_8 + 1] = (arr_18 [i_0] [i_7] [i_0]);
                            var_21 = (arr_15 [i_0] [i_8 - 2] [i_8] [i_8] [i_8 - 1] [i_8 - 2]);
                            var_22 = (arr_11 [i_0] [i_7] [i_0] [i_0] [i_0]);
                        }
                    }
                }
                arr_30 [i_0] [i_1] [i_0] [i_0] = (((arr_19 [i_0] [i_1] [i_1] [i_6]) | 261632));

                for (int i_9 = 0; i_9 < 25;i_9 += 1)
                {
                    arr_34 [i_9] [i_6] [i_0] [i_1] [i_0] = ((3720940824122134433 ? (arr_18 [i_0 + 1] [i_0 + 1] [i_0]) : (arr_22 [i_0 - 1] [i_0 - 1] [i_0 + 2] [i_0 - 1])));
                    var_23 = (arr_31 [i_0] [i_0] [i_6] [i_1] [i_0] [i_9]);
                }
            }
            for (int i_10 = 0; i_10 < 25;i_10 += 1)
            {
                arr_38 [i_0] [i_0] [i_0] = (arr_25 [i_0] [i_0 + 1] [i_10] [20] [15] [i_0 + 1]);
                /* LoopNest 2 */
                for (int i_11 = 3; i_11 < 23;i_11 += 1)
                {
                    for (int i_12 = 0; i_12 < 25;i_12 += 1)
                    {
                        {
                            arr_44 [i_12] [i_0] [i_0] [i_1] = (((((arr_0 [i_12]) + 2147483647)) >> (((arr_0 [1]) + 390240004))));
                            var_24 = (arr_5 [i_10] [i_11 + 1] [16] [i_11]);
                        }
                    }
                }
                arr_45 [10] [10] [i_1] |= ((var_0 > (arr_9 [i_1])));
            }
            var_25 += -var_5;
        }
        for (int i_13 = 0; i_13 < 25;i_13 += 1)
        {
            /* LoopNest 3 */
            for (int i_14 = 2; i_14 < 23;i_14 += 1)
            {
                for (int i_15 = 1; i_15 < 24;i_15 += 1)
                {
                    for (int i_16 = 0; i_16 < 1;i_16 += 1)
                    {
                        {
                            arr_56 [i_0] [i_13] [i_15] [i_15] [21] [i_0] = arr_26 [19] [i_0];
                            var_26 = ((40 % (arr_42 [i_0] [13] [i_0] [i_14 + 2] [1])));
                            arr_57 [i_0] [i_0] = (arr_24 [i_14 - 1] [i_14 - 1] [i_15 - 1]);
                            arr_58 [i_0] [i_0 + 2] [i_13] [i_13] [i_14] [i_0] [11] = (arr_1 [17] [i_0]);
                            arr_59 [i_0] [i_13] [i_0] [i_0] [21] = ((-(arr_50 [7] [i_15 + 1] [i_0] [i_15 + 1])));
                        }
                    }
                }
            }
            /* LoopNest 3 */
            for (int i_17 = 2; i_17 < 24;i_17 += 1)
            {
                for (int i_18 = 0; i_18 < 25;i_18 += 1)
                {
                    for (int i_19 = 0; i_19 < 25;i_19 += 1)
                    {
                        {
                            arr_69 [i_0] [3] [i_0] [i_13] [i_0] = var_3;
                            arr_70 [i_0] [i_18] [6] [i_0] [i_0] = -1;
                            var_27 = (arr_43 [3] [i_13] [i_17] [i_18] [i_19]);
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
