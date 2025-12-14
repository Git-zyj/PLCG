/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 91858
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=91858 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/91858
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_15;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 15;i_1 += 1)
        {
            {
                var_18 = (((!(arr_2 [11] [i_1 - 1]))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 16;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 15;i_3 += 1)
                    {
                        {
                            arr_9 [i_0] [i_3] [10] [6] [i_3 - 1] = ((((((var_6 != (arr_7 [i_0] [3] [13] [15] [9] [i_3]))))) & (max((arr_2 [8] [11]), (arr_0 [11])))));
                            var_19 = 1;
                            arr_10 [i_3] [i_3] [i_3] [15] [i_3] = ((min((arr_3 [i_1 - 2] [i_1 - 2] [i_3 + 1]), (((var_14 & (arr_8 [i_1])))))));
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_4 = 1; i_4 < 1;i_4 += 1)
    {
        for (int i_5 = 0; i_5 < 20;i_5 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_6 = 0; i_6 < 20;i_6 += 1)
                {
                    for (int i_7 = 3; i_7 < 19;i_7 += 1)
                    {
                        for (int i_8 = 0; i_8 < 20;i_8 += 1)
                        {
                            {
                                var_20 += var_3;
                                arr_24 [i_6] [i_5] [13] [13] [4] [13] [i_8] = (arr_12 [4]);
                                arr_25 [15] [i_5] [i_6] [i_5] [15] = (arr_14 [13] [i_5] [i_6]);
                                arr_26 [i_4] [i_4] [i_6] [i_6] [17] [i_4] = -var_6;
                                arr_27 [12] [1] [13] [i_7 + 1] [i_6] [11] = (((((1674875488 + (arr_21 [11] [8] [i_6] [i_6] [i_6] [10])))) % (var_1 % var_11)));
                            }
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_9 = 1; i_9 < 19;i_9 += 1)
                {
                    for (int i_10 = 0; i_10 < 20;i_10 += 1)
                    {
                        {
                            arr_34 [i_9] [12] = ((1 ? var_7 : (arr_23 [5] [i_5] [13] [i_10] [18] [i_5])));
                            arr_35 [i_9] [i_9] = ((!(arr_22 [i_4] [10] [2] [1] [10])));
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_11 = 0; i_11 < 20;i_11 += 1)
                {
                    for (int i_12 = 0; i_12 < 20;i_12 += 1)
                    {
                        {
                            arr_41 [i_4 - 1] [1] [i_4 - 1] [1] [1] [12] = var_15;
                            arr_42 [i_5] = ((-(arr_23 [i_4 - 1] [i_4 - 1] [i_4 - 1] [i_4 - 1] [1] [1])));
                            arr_43 [i_11] [i_5] [10] [i_11] = (((((((arr_18 [i_4 - 1] [i_4 - 1] [11] [11]) | var_11)) >> (((max((arr_12 [i_4 - 1]), var_3)) - 7851756600949912415)))) << ((((((arr_22 [1] [9] [9] [7] [i_11]) ^ 1))) ? -0 : (((arr_40 [i_4] [i_5] [16] [i_5] [6] [6]) ? var_13 : var_16))))));
                        }
                    }
                }
                /* LoopNest 3 */
                for (int i_13 = 0; i_13 < 1;i_13 += 1)
                {
                    for (int i_14 = 0; i_14 < 20;i_14 += 1)
                    {
                        for (int i_15 = 0; i_15 < 20;i_15 += 1)
                        {
                            {
                                arr_51 [8] [8] [i_13] = 133169152;
                                arr_52 [i_13] [i_13] [i_13] [i_14] [i_15] [19] = (max(((min(((((arr_21 [12] [i_5] [12] [0] [i_15] [0]) && (arr_44 [i_4] [i_13] [9] [1])))), (arr_45 [i_13] [i_13] [i_13] [i_13])))), var_11));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
