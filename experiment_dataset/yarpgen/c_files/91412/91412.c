/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 91412
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=91412 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/91412
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 21;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 23;i_3 += 1)
                    {
                        {
                            var_20 += (max(((~(arr_11 [i_1 - 1] [i_1 + 1] [i_1 + 1] [i_1 + 2] [i_1 + 2] [i_1 + 2]))), (arr_11 [8] [i_1] [i_0] [i_2] [i_2] [i_1 - 3])));
                            var_21 = -1;
                            var_22 -= 1;
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_4 = 1; i_4 < 22;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 23;i_5 += 1)
                    {
                        {
                            var_23 = (max(var_23, (arr_15 [i_0] [i_1 - 3] [12] [i_1])));
                            var_24 = (max(var_24, -19));
                            var_25 = var_14;
                            var_26 = (arr_10 [i_0] [i_1] [i_4] [i_4]);
                            arr_17 [i_0] [6] [i_0] [i_0] [i_0] &= var_0;
                        }
                    }
                }
                /* LoopNest 3 */
                for (int i_6 = 1; i_6 < 22;i_6 += 1)
                {
                    for (int i_7 = 4; i_7 < 22;i_7 += 1)
                    {
                        for (int i_8 = 0; i_8 < 23;i_8 += 1)
                        {
                            {
                                var_27 &= (((min(((var_15 ? var_14 : 24052)), var_5)) << (((min(((((arr_5 [i_0] [i_8]) == (arr_4 [i_8])))), -1)) + 10))));
                                var_28 = (min(((min(65512, -14630))), var_11));
                                var_29 = ((min(65512, (-9223372036854775807 - 1))));
                            }
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_9 = 1; i_9 < 10;i_9 += 1)
    {
        for (int i_10 = 0; i_10 < 1;i_10 += 1)
        {
            for (int i_11 = 1; i_11 < 10;i_11 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_12 = 1; i_12 < 8;i_12 += 1)
                    {
                        for (int i_13 = 0; i_13 < 11;i_13 += 1)
                        {
                            {
                                var_30 = max(((min(-1, (arr_28 [i_9 + 1] [i_13])))), ((21 ? 31370 : -68)));
                                var_31 = (max((arr_16 [i_10] [i_11] [i_12 + 2] [i_13]), (max((!var_1), (arr_36 [i_12 - 1])))));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_14 = 0; i_14 < 11;i_14 += 1)
                    {
                        for (int i_15 = 0; i_15 < 1;i_15 += 1)
                        {
                            {
                                var_32 = var_1;
                                var_33 &= (max((((arr_42 [i_9 - 1]) * (min((arr_31 [i_11]), var_13)))), (min((((arr_39 [i_9] [i_9] [i_9] [i_9]) ? var_13 : (arr_20 [i_9] [i_9]))), (arr_35 [i_9 + 1] [i_11 - 1] [i_9] [i_9 + 1])))));
                                var_34 &= var_16;
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_16 = 2; i_16 < 9;i_16 += 1)
                    {
                        for (int i_17 = 0; i_17 < 11;i_17 += 1)
                        {
                            {
                                arr_50 [i_9] [10] [9] [i_16] [i_17] [i_17] [i_17] = (((arr_42 [i_9 - 1]) ? (max(-31372, (arr_38 [i_9 - 1] [i_9 - 1] [1]))) : ((((arr_4 [i_16]) ? (arr_42 [i_9 - 1]) : -29072)))));
                                arr_51 [i_16] [i_16] [i_16 - 2] [i_16] [i_16 - 2] = (min((-2147483647 - 1), ((-(arr_14 [10] [i_16 - 2] [i_16 + 2] [i_16 + 2])))));
                                var_35 = (((((((((arr_16 [i_10] [2] [i_16] [i_16]) ? 65528 : (arr_16 [i_16] [i_9] [0] [i_16])))) ? (((min(var_17, (arr_25 [i_9] [18] [i_11] [18] [i_17]))))) : ((31371 ? (arr_13 [i_9] [i_10] [10] [i_17]) : var_19))))) < (((arr_13 [i_9 + 1] [i_10] [i_11] [i_9 + 1]) ? ((min(var_0, var_11))) : (arr_19 [i_16] [i_11] [i_10] [i_16])))));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_18 = 1; i_18 < 10;i_18 += 1)
                    {
                        for (int i_19 = 0; i_19 < 11;i_19 += 1)
                        {
                            {
                                var_36 = ((max((-8340 < 0), var_2)));
                                arr_58 [i_9] [i_9] [i_9] [i_9] [i_9] [i_9] = (min((max((((arr_29 [i_9] [i_9]) ^ 31372)), (arr_39 [9] [i_10] [2] [i_10]))), 88));
                                var_37 = (min(18446744073709551615, (arr_31 [1])));
                                var_38 = 9223372036854775793;
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
