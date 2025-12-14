/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 72852
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=72852 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/72852
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 2; i_2 < 18;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 19;i_3 += 1)
                    {
                        {
                            arr_12 [i_2] [0] [0] [10] [i_3] |= (~-24);
                            arr_13 [0] [i_1] [i_2] [i_1] &= (max((arr_9 [i_0] [18] [i_2] [i_3] [i_3]), var_1));
                            var_12 = (((((min((arr_1 [i_1] [7]), (arr_4 [i_0] [i_0] [i_0]))) | (((arr_4 [i_3] [i_2] [i_1]) + (arr_6 [i_0] [i_1] [i_2] [12]))))) << (((max((max(var_5, -74)), var_9)) - 18446744073709551541))));
                            arr_14 [i_3] [19] [i_3] = arr_7 [i_0] [i_1] [10];
                        }
                    }
                }
                /* LoopNest 3 */
                for (int i_4 = 1; i_4 < 20;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 21;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 21;i_6 += 1)
                        {
                            {
                                arr_24 [i_0] = (max(var_3, (max((max((arr_3 [i_5]), var_3)), ((max(var_1, var_8)))))));
                                arr_25 [i_0] [9] [0] [i_4] [i_5] [6] = var_10;
                                var_13 *= arr_19 [i_0] [i_0];
                            }
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_7 = 0; i_7 < 10;i_7 += 1)
    {
        for (int i_8 = 0; i_8 < 10;i_8 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_9 = 2; i_9 < 8;i_9 += 1)
                {
                    for (int i_10 = 0; i_10 < 10;i_10 += 1)
                    {
                        {
                            arr_37 [i_7] = min((max(7, 224062574)), (arr_17 [i_7] [i_8] [i_9] [17]));
                            var_14 = (arr_20 [i_7] [i_8] [i_9 - 1]);
                            arr_38 [i_7] [i_7] [i_7] [i_7] = ((((max(((!(arr_4 [i_7] [i_8] [i_7]))), (!var_0)))) | var_9));
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_11 = 0; i_11 < 10;i_11 += 1)
                {
                    for (int i_12 = 0; i_12 < 10;i_12 += 1)
                    {
                        {
                            var_15 = (max(var_15, ((((((-var_11 ^ (((arr_19 [i_7] [9]) ? var_4 : -30))))) ? -1153870331 : ((((((arr_42 [i_12] [i_11] [i_8] [i_7]) < var_4))) % ((((arr_33 [i_11] [i_11] [i_8] [i_12]) && (arr_11 [16] [i_11] [6] [14] [i_12])))))))))));
                            arr_44 [i_7] [i_8] [i_11] [i_12] = (0 ? ((((arr_5 [i_12] [8] [i_7]) + var_3))) : (max((arr_26 [i_7] [1]), 10639754702172487332)));
                            arr_45 [i_8] = ((max((arr_5 [i_11] [i_8] [i_7]), var_6)) * var_11);
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_13 = 1; i_13 < 15;i_13 += 1)
    {
        for (int i_14 = 0; i_14 < 18;i_14 += 1)
        {
            for (int i_15 = 0; i_15 < 18;i_15 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_16 = 0; i_16 < 18;i_16 += 1)
                    {
                        for (int i_17 = 0; i_17 < 18;i_17 += 1)
                        {
                            {
                                arr_58 [i_17] [12] [i_15] [i_14] [3] = (arr_16 [8] [i_14] [i_15]);
                                arr_59 [i_13] = (((-(min((arr_20 [i_15] [i_14] [i_13]), 26)))));
                                arr_60 [6] = (arr_57 [10]);
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_18 = 3; i_18 < 17;i_18 += 1)
                    {
                        for (int i_19 = 0; i_19 < 18;i_19 += 1)
                        {
                            {
                                var_16 ^= ((!((max(112, (!var_1))))));
                                var_17 = (min((((!(arr_22 [i_13] [i_18 - 3] [i_15] [i_18] [i_19] [i_18])))), var_9));
                                arr_66 [i_13] [i_13] [i_13 + 1] [i_18] [12] = (((0 + 18446744073709551615) < 0));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_20 = 0; i_20 < 18;i_20 += 1)
                    {
                        for (int i_21 = 0; i_21 < 18;i_21 += 1)
                        {
                            {
                                arr_71 [i_13] [i_14] [1] [i_20] [i_21] = max((((!(arr_56 [i_21] [i_21] [i_20] [i_13 - 1])))), (arr_63 [i_13] [11] [i_13 - 1] [10] [i_21] [i_21]));
                                arr_72 [15] [9] [i_15] [3] [i_13 + 1] = ((arr_53 [i_13] [i_15] [10]) ? (max(var_3, (arr_0 [i_15]))) : ((7806989371537064274 ? ((max(101, var_0))) : (arr_48 [14]))));
                                arr_73 [6] [i_20] [i_15] [i_15] [12] [i_13] [i_13] = 5;
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_22 = 0; i_22 < 18;i_22 += 1)
                    {
                        for (int i_23 = 2; i_23 < 16;i_23 += 1)
                        {
                            {
                                var_18 = (max(var_18, (24 / 108)));
                                var_19 = (min(var_19, (arr_68 [i_13] [i_14] [3] [i_23 + 1])));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_24 = 0; i_24 < 18;i_24 += 1)
                    {
                        for (int i_25 = 0; i_25 < 18;i_25 += 1)
                        {
                            {
                                arr_83 [3] [3] [2] [11] [i_25] [i_25] [14] = ((max(((7806989371537064293 ? var_11 : (arr_19 [i_14] [i_14])), ((var_2 << (((arr_77 [i_25]) - 18377745677767247329))))))));
                                arr_84 [i_13] [i_14] [i_15] [5] [i_25] = (max(var_11, (max((max((arr_4 [i_13] [i_13] [i_13]), (arr_10 [i_25]))), (!11430358064042898746)))));
                                arr_85 [i_13 + 3] [8] [i_15] [i_24] [i_25] = min(-1523542452, (arr_3 [7]));
                                var_20 = (min(var_20, var_2));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
