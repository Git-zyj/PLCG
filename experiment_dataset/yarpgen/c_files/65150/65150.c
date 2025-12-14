/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 65150
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=65150 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/65150
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_1] = (max((max((((arr_1 [i_0]) / var_8)), var_4)), -822425761));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 22;i_2 += 1)
                {
                    for (int i_3 = 3; i_3 < 21;i_3 += 1)
                    {
                        {
                            arr_14 [13] [i_1] [1] [13] = (((((-(min(-50, 1668910375))))) ? var_6 : 1));
                            arr_15 [i_0] [i_1] [i_2] [i_3] = ((!(((((max(-70, (arr_1 [i_0])))) ? 21391 : var_1)))));
                            arr_16 [i_0] [i_1] [i_2] = (((!1) ? ((((arr_6 [i_1] [i_3 - 2] [i_3]) >= (min((arr_8 [i_0] [i_1] [i_2]), 2))))) : var_6));
                            arr_17 [i_0] [i_0] [i_1] [11] [i_0] [i_3] = 1;
                            arr_18 [i_2] [i_3] = (((!285076099) ? (((((arr_3 [i_0] [i_0] [i_0]) ? 32767 : 3456089883)) << 1)) : (~-28433)));
                        }
                    }
                }
                /* LoopNest 3 */
                for (int i_4 = 0; i_4 < 22;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 22;i_5 += 1)
                    {
                        for (int i_6 = 2; i_6 < 21;i_6 += 1)
                        {
                            {
                                arr_27 [i_0] [i_4] [i_0] [i_5] [i_6] = (min(85, 9223372036854775807));
                                arr_28 [i_0] [i_0] [i_0] [i_5] [i_0] [i_1] [i_4] = 50;
                                arr_29 [i_6 - 1] [i_5] [i_4] [i_1] [i_0] = ((~(var_8 | 62406)));
                                arr_30 [14] [i_1] [i_1] [i_1] [i_1] [i_1] [i_1] = -var_6;
                            }
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_7 = 0; i_7 < 11;i_7 += 1)
    {
        for (int i_8 = 3; i_8 < 9;i_8 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_9 = 0; i_9 < 1;i_9 += 1)
                {
                    for (int i_10 = 0; i_10 < 11;i_10 += 1)
                    {
                        {
                            arr_42 [i_7] [i_7] [i_9] [i_7] = 1;
                            arr_43 [i_7] [2] [i_9] [i_10] [i_7] [2] = 41380;
                            arr_44 [i_7] [i_7] [i_7] = ((1 ? 1 : -126));
                            arr_45 [i_7] [i_8 - 3] [i_9] [i_7] [i_9] = 8388607;
                            arr_46 [i_7] [i_10] [i_8] [i_7] = (max(1, (((((var_3 ? var_10 : 125))) ? (arr_21 [i_8 - 3] [i_8 - 3] [i_8 - 3] [i_8 - 2]) : ((3138 ? 0 : 1))))));
                        }
                    }
                }
                arr_47 [i_7] [i_8 + 1] [i_7] = (max(4395831218055033741, (arr_36 [i_7] [i_8] [i_8 - 1])));
                /* LoopNest 3 */
                for (int i_11 = 0; i_11 < 11;i_11 += 1)
                {
                    for (int i_12 = 0; i_12 < 11;i_12 += 1)
                    {
                        for (int i_13 = 0; i_13 < 11;i_13 += 1)
                        {
                            {
                                arr_56 [i_7] [i_8 + 2] [i_11] [i_7] [i_13] [8] [i_13] = (min(((max((arr_20 [i_8 - 2] [i_8 - 2] [i_11]), 3))), ((((min(584081835, var_4))) ? 7618920789580380891 : (arr_37 [8] [8] [5])))));
                                arr_57 [4] [i_8] [3] [i_7] = (arr_33 [9]);
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
