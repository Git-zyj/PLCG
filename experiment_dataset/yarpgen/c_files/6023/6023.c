/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 6023
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=6023 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/6023
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 16;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        {
                            var_18 = (max(var_18, -0));
                            var_19 = (((arr_11 [i_2 + 2] [i_2 + 2] [i_2 - 1] [i_2 + 2]) ? (arr_7 [i_2 - 1] [i_2 + 2] [i_2 - 1] [i_2 + 1]) : (~65529)));
                            var_20 = (arr_5 [i_2] [i_3]);
                        }
                    }
                }
                /* LoopNest 3 */
                for (int i_4 = 2; i_4 < 18;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 19;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 19;i_6 += 1)
                        {
                            {
                                arr_21 [i_4 - 2] [1] [7] [i_4 - 2] [i_1] [6] |= (((min((0 * 0), (arr_19 [i_0] [i_1] [11] [i_4 + 1] [i_5] [i_6] [15]))) << ((112 ? (1 > -113) : ((1 ? (arr_4 [i_4]) : (arr_2 [i_1] [i_6])))))));
                                var_21 = (1 > -1);
                            }
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_7 = 0; i_7 < 14;i_7 += 1)
    {
        for (int i_8 = 0; i_8 < 14;i_8 += 1)
        {
            for (int i_9 = 0; i_9 < 14;i_9 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_10 = 4; i_10 < 13;i_10 += 1)
                    {
                        for (int i_11 = 0; i_11 < 14;i_11 += 1)
                        {
                            {
                                var_22 -= -1;
                                arr_35 [i_7] [i_7] [1] [i_7] [i_11] [11] [i_7] = arr_13 [i_10] [i_10 - 2] [i_10 - 4] [i_10 - 4];
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_12 = 0; i_12 < 14;i_12 += 1)
                    {
                        for (int i_13 = 0; i_13 < 14;i_13 += 1)
                        {
                            {
                                var_23 |= (arr_20 [16] [i_7]);
                                var_24 = (min(var_24, 30));
                                var_25 = (arr_14 [i_7] [i_8] [i_9] [i_12] [i_9]);
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_14 = 0; i_14 < 14;i_14 += 1)
                    {
                        for (int i_15 = 0; i_15 < 14;i_15 += 1)
                        {
                            {
                                var_26 = (min((((~(((arr_24 [9]) ? 127 : var_8))))), ((((((arr_32 [i_15] [i_14] [i_9] [3] [i_8] [i_7]) ? 4080 : 2))) ? (((~(arr_26 [i_7] [i_9] [i_14])))) : (~1073741824)))));
                                var_27 -= -64;
                                var_28 = (min(var_28, (((var_15 ? (max((arr_5 [i_7] [i_7]), -127)) : (arr_33 [i_7] [i_14] [0] [i_8] [i_7]))))));
                                var_29 = ((((~((var_6 ? (arr_22 [i_15]) : (arr_2 [i_8] [i_8]))))) | (14 >> 1)));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_16 = 0; i_16 < 14;i_16 += 1)
                    {
                        for (int i_17 = 2; i_17 < 13;i_17 += 1)
                        {
                            {
                                arr_51 [i_7] [i_8] [i_16] [i_16] = ((~(((arr_9 [i_16]) ? ((max(var_6, (arr_31 [i_8] [i_9] [i_17])))) : ((min((arr_38 [i_17 - 1] [i_16] [i_9] [i_8] [13]), (arr_47 [i_7] [i_16] [i_17 - 2]))))))));
                                arr_52 [i_16] [i_16] = 1;
                            }
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_18 = 1; i_18 < 24;i_18 += 1)
    {
        for (int i_19 = 3; i_19 < 23;i_19 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_20 = 0; i_20 < 25;i_20 += 1)
                {
                    for (int i_21 = 2; i_21 < 24;i_21 += 1)
                    {
                        for (int i_22 = 2; i_22 < 23;i_22 += 1)
                        {
                            {
                                var_30 = (max(var_30, (arr_60 [i_19 - 2])));
                                arr_67 [24] [i_19] [i_20] [i_19 - 1] [i_18] [i_19] [i_18 - 1] = (((arr_60 [i_22]) ? 248 : (((-1 + 2147483647) >> 1))));
                                arr_68 [i_19] [i_20] [i_19] = (max((arr_66 [i_18] [i_18] [i_18] [i_18] [i_21] [i_22 - 2]), ((((((var_13 << (var_16 - 372150824464207096)))) && ((((arr_59 [i_19] [i_19]) ? (arr_64 [i_19]) : (arr_65 [i_19] [i_19] [i_21 - 1])))))))));
                            }
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_23 = 0; i_23 < 25;i_23 += 1)
                {
                    for (int i_24 = 1; i_24 < 23;i_24 += 1)
                    {
                        {
                            var_31 = (((((3221225472 ? 20 : (arr_64 [i_19])))) && (((((min(1, 65535))) ? (min(var_13, (arr_64 [i_19]))) : -3)))));
                            arr_74 [i_19] [i_23] [i_19] = (((arr_71 [i_18 - 1] [i_23] [i_18 - 1]) ^ (((arr_71 [i_24 - 1] [i_19 + 1] [i_18]) ? (arr_71 [i_18 - 1] [i_18 - 1] [i_24 + 1]) : (arr_71 [i_24 + 1] [i_23] [16])))));
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
