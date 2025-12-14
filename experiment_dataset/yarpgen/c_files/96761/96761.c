/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 96761
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=96761 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/96761
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            {
                arr_6 [i_1] [i_0 - 1] [i_1] |= 11;
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 14;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 14;i_3 += 1)
                    {
                        {
                            var_10 = min(var_4, -22);
                            var_11 = (min(-var_8, (((!(((-38 ? (arr_10 [i_2] [i_3]) : var_3))))))));
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_4 = 0; i_4 < 21;i_4 += 1)
    {
        for (int i_5 = 0; i_5 < 21;i_5 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_6 = 2; i_6 < 20;i_6 += 1)
                {
                    for (int i_7 = 0; i_7 < 21;i_7 += 1)
                    {
                        for (int i_8 = 0; i_8 < 21;i_8 += 1)
                        {
                            {
                                arr_25 [i_4] [i_5] [0] [i_4] = ((((((arr_13 [i_4]) ? ((min(21, var_4))) : (((arr_16 [i_4]) ? var_4 : -22))))) ? (((!(arr_18 [i_6 + 1])))) : var_3));
                                var_12 -= ((((((var_4 ^ (arr_17 [i_6 - 2] [i_6 - 1] [3]))) + 2147483647)) >> (arr_17 [i_8] [i_7] [i_5])));
                                var_13 = ((22 ? (((((arr_15 [i_7]) != -92)) ? ((min(7, var_5))) : (7 ^ 100))) : ((min((min(-88, (arr_15 [0]))), (!var_5))))));
                            }
                        }
                    }
                }
                var_14 = ((((-(arr_20 [i_4] [i_5] [i_5]))) + (((arr_14 [i_4]) ? ((var_2 ? var_8 : (arr_21 [i_5] [i_4] [i_5] [i_4] [i_4]))) : (arr_14 [i_4])))));
            }
        }
    }
    var_15 = (var_0 > var_7);
    /* LoopNest 2 */
    for (int i_9 = 0; i_9 < 19;i_9 += 1)
    {
        for (int i_10 = 0; i_10 < 19;i_10 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_11 = 2; i_11 < 15;i_11 += 1)
                {
                    for (int i_12 = 1; i_12 < 17;i_12 += 1)
                    {
                        {
                            var_16 = arr_35 [5] [15];
                            arr_37 [i_9] [i_11 + 1] [13] [i_12] = arr_15 [16];
                        }
                    }
                }
                /* LoopNest 3 */
                for (int i_13 = 0; i_13 < 19;i_13 += 1)
                {
                    for (int i_14 = 0; i_14 < 19;i_14 += 1)
                    {
                        for (int i_15 = 0; i_15 < 19;i_15 += 1)
                        {
                            {
                                arr_45 [2] [i_10] [i_13] [i_14] [14] = var_5;
                                arr_46 [i_9] [i_10] [15] [6] = var_8;
                            }
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_16 = 0; i_16 < 23;i_16 += 1)
    {
        for (int i_17 = 0; i_17 < 23;i_17 += 1)
        {
            for (int i_18 = 0; i_18 < 23;i_18 += 1)
            {
                {
                    var_17 = ((-((var_0 ? ((min((arr_54 [i_16]), (arr_48 [i_16] [8])))) : ((min(30, (arr_51 [i_16] [i_17] [i_18]))))))));
                    arr_55 [i_16] = (min(var_5, (((arr_54 [i_18]) ? 8 : ((min(var_6, (arr_50 [3] [i_17]))))))));
                    /* LoopNest 2 */
                    for (int i_19 = 3; i_19 < 20;i_19 += 1)
                    {
                        for (int i_20 = 3; i_20 < 22;i_20 += 1)
                        {
                            {
                                var_18 = min(((min(var_8, 127))), (arr_47 [9]));
                                var_19 = arr_58 [i_20 - 3] [i_17] [8] [i_20] [i_20] [i_17];
                                arr_60 [i_19] [12] [i_18] [i_18] &= ((((((var_1 + 2147483647) >> (((~var_8) - 71))))) ? ((~((min(var_4, (-127 - 1)))))) : (((((var_1 + 2147483647) >> (((arr_49 [0] [i_18] [i_16]) + 144))))))));
                                arr_61 [8] [i_19] [i_18] [3] [i_19] = arr_52 [8];
                                var_20 = arr_56 [i_19] [9] [i_16];
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
