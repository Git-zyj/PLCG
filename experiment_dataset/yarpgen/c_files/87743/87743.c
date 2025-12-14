/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 87743
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=87743 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/87743
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 14;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 2; i_2 < 12;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 15;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            {
                                arr_14 [i_2] [i_3] [14] [7] [i_2] [i_2] = 230;
                                arr_15 [i_0] [i_0] [i_2] [i_2] [i_3] [i_3] [i_4] = (arr_12 [i_0] [i_0] [i_1] [i_0] [i_1] [i_0] [i_4]);
                            }
                        }
                    }
                }

                for (int i_5 = 0; i_5 < 1;i_5 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_6 = 2; i_6 < 13;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 15;i_7 += 1)
                        {
                            {
                                arr_24 [i_7] [i_7] [i_5] [i_5] [i_5] [i_0] [i_0] = (min((arr_10 [i_6 + 2] [i_1]), (arr_22 [i_6] [i_0] [i_0])));
                                arr_25 [1] [i_0] [i_5] [i_5] [6] = (arr_11 [i_1 + 1] [i_1 + 1] [i_5] [i_1] [i_1 - 1]);
                            }
                        }
                    }
                    arr_26 [i_5] [i_5] [i_5] = ((-((~(arr_9 [i_5] [i_1 - 1] [i_0] [i_5])))));
                    arr_27 [12] [12] [12] [i_0] = ((arr_20 [i_1 - 1]) ? (arr_8 [i_1] [i_5] [i_5] [i_5] [i_5]) : -86);
                    arr_28 [i_0] [i_0] [i_0] [i_5] = ((((!var_6) ? ((~(arr_1 [i_5]))) : (arr_19 [i_1 + 1] [i_1 + 1] [i_1 - 1] [i_1 + 1] [i_1 + 1] [i_5]))));
                }
                arr_29 [i_0] [i_1 - 1] [i_0] = (min(((((((arr_8 [i_1] [i_1 + 1] [i_1 + 1] [i_0] [i_1]) / var_9)) != ((-(arr_2 [1] [12] [12])))))), ((-(arr_5 [i_0])))));
                arr_30 [i_1] [i_0] [i_0] = ((~(((!(~14))))));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_8 = 0; i_8 < 16;i_8 += 1)
    {
        for (int i_9 = 0; i_9 < 1;i_9 += 1)
        {
            {
                arr_36 [1] [i_9] [i_9] = (arr_32 [i_8]);
                arr_37 [i_8] = max((min(17500454839462206742, (arr_35 [i_8]))), (((17378 ? 230 : 48158))));

                for (int i_10 = 2; i_10 < 13;i_10 += 1)
                {
                    arr_41 [i_9] [14] [6] [5] = 946289234247344872;
                    arr_42 [1] [i_9] [i_9] = (min((((-(arr_40 [10] [i_10 + 1] [10])))), 7831562216939965448));
                }
                for (int i_11 = 2; i_11 < 14;i_11 += 1)
                {
                    arr_46 [i_9] = (min((13992260700231357192 * 230), ((((((-(arr_40 [i_8] [i_8] [2])))) ? ((((arr_40 [i_8] [i_9] [i_11]) < var_11))) : 0)))));
                    /* LoopNest 2 */
                    for (int i_12 = 0; i_12 < 1;i_12 += 1)
                    {
                        for (int i_13 = 1; i_13 < 1;i_13 += 1)
                        {
                            {
                                arr_51 [i_8] [i_8] [i_12] [i_8] [i_8] [i_12] = ((var_1 ? ((((-(arr_49 [10] [2] [i_8] [i_9] [i_8] [i_9] [i_8]))))) : ((((arr_48 [i_8] [i_11]) == (arr_50 [i_8] [i_8] [i_8] [i_8] [i_8]))))));
                                arr_52 [i_8] [i_13] [i_8] [i_13] [i_9] [i_13] = ((~((min((arr_49 [i_12] [i_9] [i_9] [i_9] [i_12] [i_11 - 1] [i_8]), (arr_49 [i_8] [i_8] [i_9] [i_9] [i_12] [i_11 + 1] [i_11]))))));
                            }
                        }
                    }
                }
                arr_53 [i_9] = (max((((!((((arr_49 [i_8] [i_8] [i_9] [i_8] [i_9] [i_8] [i_8]) * (arr_48 [i_8] [i_8]))))))), (min((min(var_10, 48158)), ((((arr_45 [i_8] [i_9] [i_8] [i_9]) ? 255 : (arr_39 [i_9] [i_9]))))))));
            }
        }
    }
    #pragma endscop
}
