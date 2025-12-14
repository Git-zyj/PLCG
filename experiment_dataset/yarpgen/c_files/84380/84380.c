/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 84380
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=84380 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/84380
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            {
                arr_4 [i_0] [14] = ((((((arr_2 [i_0]) & (min(var_3, 18446744073709551615))))) || (((arr_0 [i_0 + 1]) >= (((arr_1 [i_1]) ? (arr_0 [i_0]) : var_8))))));

                for (int i_2 = 0; i_2 < 25;i_2 += 1)
                {
                    arr_7 [i_0] [i_1] [i_2] [i_1] = var_11;
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 25;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            {
                                arr_14 [i_2] [i_1] [i_3] [i_3] [i_2] = (((arr_0 [i_0 - 1]) / ((((arr_10 [i_0] [i_1] [i_2] [19] [i_4] [i_0 - 1]) ? (arr_3 [i_0 + 1] [i_0] [i_0 - 1]) : (arr_10 [i_0] [i_1] [i_2] [i_3] [i_4] [i_0 + 1]))))));
                                arr_15 [i_0] [i_1] [i_2] [i_3] [i_4] [i_0] = (((~var_11) ? var_1 : var_12));
                                arr_16 [i_1] [i_2] = (!1);
                                arr_17 [i_0 + 1] [i_0 + 1] [i_3] [10] [i_2] [i_1] = ((+(((max((arr_13 [i_0] [i_1] [i_2] [i_3] [i_2] [i_3] [i_0]), var_9)) + (arr_6 [i_0] [i_0 + 1] [i_0] [i_0 - 1])))));
                            }
                        }
                    }
                    arr_18 [i_2] [i_1] [i_1] [i_0] = ((!((((34 ? 34 : 59034)) >= ((858374971 ? 1 : 3))))));
                }
                for (int i_5 = 1; i_5 < 23;i_5 += 1)
                {
                    arr_22 [i_5] [5] [i_1] [i_5] = (arr_13 [i_0 - 1] [i_1] [i_5 + 2] [i_5] [i_0] [i_1] [i_1]);

                    for (int i_6 = 0; i_6 < 25;i_6 += 1)
                    {
                        arr_25 [i_0] [i_0] [10] [i_6] [i_5] = ((~(((arr_8 [i_0 - 1] [i_1] [23] [i_6]) & (arr_13 [i_0] [i_1] [i_1] [i_5 + 1] [i_5] [i_6] [i_5])))));

                        for (int i_7 = 0; i_7 < 25;i_7 += 1)
                        {
                            arr_29 [i_0] [i_7] [i_5] [5] = (min((max(13, (((var_9 ? 1 : 1048575))))), ((((arr_21 [i_5 + 2] [i_5]) ? (arr_21 [i_5 + 1] [i_5]) : (arr_21 [i_5 + 2] [i_5]))))));
                            arr_30 [16] [i_0] [i_5] [i_5] [i_6] [i_6] [i_7] = ((var_1 ? (~var_4) : (((~((var_11 ? (arr_23 [i_5]) : -54)))))));
                        }
                    }
                    for (int i_8 = 0; i_8 < 25;i_8 += 1)
                    {

                        /* vectorizable */
                        for (int i_9 = 4; i_9 < 23;i_9 += 1)
                        {
                            arr_36 [i_0] [24] [i_1] [i_5] [i_5 + 1] = arr_9 [i_0] [i_1] [i_5] [21] [i_5];
                            arr_37 [i_0] [i_8] [i_1] = (1 / 2147483647);
                        }
                        arr_38 [i_5] [i_5] = ((~(~231)));
                        arr_39 [i_1] [i_5] [i_5 - 1] = (var_0 >= var_4);
                        arr_40 [9] [i_5] [i_5] = ((((~var_10) / ((~(arr_3 [i_0 + 1] [i_1] [i_5]))))));
                    }
                    /* vectorizable */
                    for (int i_10 = 0; i_10 < 25;i_10 += 1)
                    {
                        arr_44 [i_0] [4] [i_5] [i_5] [17] [i_0] = ((-((42 ? -2 : var_9))));
                        arr_45 [i_5] [i_1] [i_5] [i_10] = ((!(arr_24 [i_5])));
                    }
                }
                for (int i_11 = 0; i_11 < 25;i_11 += 1)
                {
                    arr_49 [i_0] [12] [i_0 - 1] = (((arr_13 [i_0] [i_0] [i_0] [i_1] [i_1] [i_0] [i_11]) ? (((min(1, 21)))) : (((arr_42 [i_1] [i_1] [i_1]) ? (((-1 ? (arr_1 [i_0]) : var_11))) : 359123655488362748))));
                    arr_50 [18] [10] [i_11] [i_11] = var_8;
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_12 = 0; i_12 < 22;i_12 += 1)
    {
        for (int i_13 = 0; i_13 < 22;i_13 += 1)
        {
            for (int i_14 = 0; i_14 < 22;i_14 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_15 = 2; i_15 < 19;i_15 += 1)
                    {
                        for (int i_16 = 3; i_16 < 20;i_16 += 1)
                        {
                            {
                                arr_64 [i_12] [i_13] [1] [i_14] [i_15] [i_13] = ((!(var_2 / var_9)));
                                arr_65 [i_12] [i_13] [i_14] [i_14] [i_13] [i_15] [7] = (~var_4);
                            }
                        }
                    }
                    arr_66 [i_12] [i_13] [i_14] [i_14] = ((!((((var_6 && 0) ? ((var_1 ? var_8 : (arr_11 [i_13]))) : var_5)))));
                    arr_67 [i_12] [16] [1] [i_14] = (min(((var_8 ? (arr_13 [1] [i_13] [i_13] [i_14] [i_14] [i_13] [i_14]) : -1301377171)), ((-(18446744073709551615 / -7663134532488400869)))));
                }
            }
        }
    }
    #pragma endscop
}
