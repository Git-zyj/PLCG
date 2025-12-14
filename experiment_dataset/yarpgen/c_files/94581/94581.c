/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 94581
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=94581 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/94581
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = var_9;
    var_13 = ((min((max(var_2, var_4), var_9))));
    var_14 = (min(var_4, var_8));
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 15;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 14;i_3 += 1)
                    {
                        {
                            arr_10 [i_0] = ((~((~((-(arr_4 [i_0])))))));
                            var_15 += ((var_4 >> (((arr_8 [i_0] [i_0] [i_0]) - 41947))));
                            arr_11 [i_0] = -549525280;
                        }
                    }
                }
                arr_12 [i_0] [i_1] [i_0] = min((((arr_5 [i_1] [i_1] [i_0]) & (arr_5 [i_1] [i_0] [i_0]))), (arr_5 [i_0] [i_1] [i_1]));
                /* LoopNest 2 */
                for (int i_4 = 2; i_4 < 12;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 15;i_5 += 1)
                    {
                        {
                            arr_19 [i_5] [i_0] [i_1] = (arr_5 [i_5] [0] [i_5]);
                            arr_20 [i_0] [i_0] [i_0] [i_5] = (((((max(18446744073709551615, 18296674910674402323)))) * (18446744073709551615 && 18296674910674402323)));
                            arr_21 [i_0] [i_1] [i_0] [i_5] = (min((((arr_13 [i_4 + 3]) ? (arr_15 [i_5] [i_4] [6]) : 150069163035149292)), (min((((var_1 ? 75 : var_9))), 11888972635703252026))));
                            arr_22 [i_5] [i_0] [13] [13] [i_0] [10] = ((((-((14 ? 3201657364 : var_3))))) ? var_8 : (((((arr_14 [i_0] [i_1]) > var_8)) ? ((11929545977575092180 ? var_10 : var_11)) : ((max((arr_15 [i_1] [i_1] [i_1]), (arr_0 [i_0])))))));
                        }
                    }
                }
                arr_23 [i_0] = (((((-45 + ((((arr_16 [13] [i_0] [13] [13] [13] [i_1]) && 1093309934)))))) ? (arr_1 [i_1]) : (((arr_3 [i_0] [i_0]) / (arr_3 [i_0] [i_0])))));
                arr_24 [i_0] = 14;
            }
        }
    }
    /* LoopNest 2 */
    for (int i_6 = 3; i_6 < 15;i_6 += 1)
    {
        for (int i_7 = 0; i_7 < 16;i_7 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_8 = 0; i_8 < 16;i_8 += 1)
                {
                    for (int i_9 = 0; i_9 < 16;i_9 += 1)
                    {
                        {
                            var_16 = (arr_32 [i_8] [i_7] [i_8] [i_7] [i_8]);
                            arr_35 [i_6] [15] [i_9] [i_7] = var_10;
                            arr_36 [i_6] [i_6] [i_7] = ((var_5 ? (min(var_0, ((var_11 + (arr_31 [i_7]))))) : var_4));
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_10 = 0; i_10 < 16;i_10 += 1)
                {
                    for (int i_11 = 1; i_11 < 15;i_11 += 1)
                    {
                        {
                            arr_43 [i_6] [i_6] [i_7] [i_10] [3] = ((((((arr_32 [9] [i_11 - 1] [i_10] [i_7] [15]) != 1578028))) <= (((!((max(var_5, var_2))))))));
                            arr_44 [i_7] [i_7] [i_7] [i_10] [i_7] = (((min((arr_40 [i_7] [1] [7] [i_7] [i_10] [i_6 + 1]), 6463420209552087736))) ? (((arr_40 [i_7] [i_7] [i_7] [i_11] [i_7] [i_10]) - (arr_40 [i_7] [i_6 - 2] [i_6 - 2] [13] [i_10] [i_11]))) : 1359188267);
                            arr_45 [i_7] = (max((-19 > var_1), (((((var_0 ? (arr_32 [i_6] [5] [5] [i_7] [i_7]) : (arr_29 [i_10])))) % ((var_7 ? var_4 : (arr_29 [10])))))));
                        }
                    }
                }
                var_17 = -18296674910674402327;
            }
        }
    }
    #pragma endscop
}
