/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 96252
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=96252 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/96252
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 19;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 20;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 1;i_3 += 1)
                    {
                        {
                            var_17 = (min(var_17, ((min(((((221 >= (arr_4 [i_0] [17] [i_1]))) ? 1669565289788019502 : var_6)), (arr_0 [12] [12]))))));
                            var_18 = ((arr_4 [i_3 - 1] [i_1] [i_0]) ? ((-(arr_5 [i_0 - 2] [i_0 + 1]))) : (~255));
                            var_19 &= (arr_0 [i_0 - 4] [i_1 + 1]);
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 20;i_4 += 1)
                {
                    for (int i_5 = 1; i_5 < 19;i_5 += 1)
                    {
                        {
                            arr_14 [i_4] = (((250376629918609679 ? 221 : 182)));
                            var_20 = (min(var_20, (((((min(var_14, var_12))) ? ((var_1 ? (arr_9 [8] [i_1] [i_1] [i_5 - 1]) : -var_0)) : (arr_1 [i_0 - 2]))))));
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_6 = 0; i_6 < 14;i_6 += 1)
    {
        for (int i_7 = 4; i_7 < 11;i_7 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_8 = 1; i_8 < 10;i_8 += 1)
                {
                    for (int i_9 = 0; i_9 < 14;i_9 += 1)
                    {
                        {
                            var_21 = (min(var_21, (arr_20 [i_6] [i_7])));
                            arr_25 [6] [i_9] [i_6] = ((arr_24 [i_8 + 1] [i_7 - 1] [i_9] [i_7]) / (128 - 41534));
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_10 = 0; i_10 < 14;i_10 += 1)
                {
                    for (int i_11 = 0; i_11 < 14;i_11 += 1)
                    {
                        {
                            arr_32 [i_6] [7] [i_6] [i_11] [i_11] = (((arr_6 [11]) ? (-9223372036854775807 - 1) : var_8));
                            arr_33 [i_6] [i_11] [i_10] [i_10] [i_10] = ((min((var_6 + var_6), ((54 + (arr_0 [i_6] [i_11]))))));
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_12 = 1; i_12 < 1;i_12 += 1)
                {
                    for (int i_13 = 0; i_13 < 14;i_13 += 1)
                    {
                        {
                            var_22 = ((250376629918609693 ? 224 : (1 <= 0)));
                            arr_38 [1] = 262143;
                            arr_39 [i_6] [i_7] [i_6] [i_6] [i_13] [i_13] = (var_3 != var_12);
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_14 = 0; i_14 < 14;i_14 += 1)
    {
        for (int i_15 = 0; i_15 < 14;i_15 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_16 = 1; i_16 < 11;i_16 += 1)
                {
                    for (int i_17 = 1; i_17 < 1;i_17 += 1)
                    {
                        {
                            arr_49 [i_16] = (arr_27 [i_14] [i_16] [i_14]);
                            arr_50 [i_16] = ((+(max((arr_30 [i_17 - 1] [i_17 - 1] [i_17 - 1] [i_17 - 1]), 15943489651385486932))));
                            var_23 = 241;
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_18 = 2; i_18 < 13;i_18 += 1)
                {
                    for (int i_19 = 2; i_19 < 12;i_19 += 1)
                    {
                        {
                            arr_56 [i_14] [4] [i_18 + 1] [i_15] [i_14] [i_14] = (arr_31 [i_14] [i_19] [i_18] [2] [i_18] [i_18]);
                            arr_57 [i_14] [i_14] [i_14] = var_16;
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_20 = 0; i_20 < 14;i_20 += 1)
                {
                    for (int i_21 = 2; i_21 < 11;i_21 += 1)
                    {
                        {
                            arr_65 [i_20] = ((+(((arr_19 [i_21 - 2] [i_21 - 2] [i_21 + 3]) ? (arr_19 [i_21 + 1] [i_21 - 1] [i_21]) : (arr_19 [i_21 - 2] [i_21 + 3] [i_21 + 3])))));
                            arr_66 [i_14] [i_15] [1] [i_20] = ((!(-9569190654393610204 <= var_8)));
                            arr_67 [i_14] [i_20] [6] [i_14] [i_14] [i_14] = (max(262134, 62));
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
