/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 91940
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=91940 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/91940
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 4; i_2 < 22;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 24;i_3 += 1)
                    {
                        {
                            var_12 = (-(arr_3 [i_0]));
                            var_13 = (((((arr_2 [i_2 - 3] [i_3]) ? (arr_1 [i_3]) : var_11))) ? ((((var_8 || (((var_10 ^ (arr_3 [i_0])))))))) : (min((max(var_3, var_11)), var_9)));

                            for (int i_4 = 0; i_4 < 24;i_4 += 1)
                            {
                                arr_14 [i_0] [i_0] [i_3] = (max((((arr_8 [i_2 - 4]) / (arr_5 [1] [17] [i_2 - 3] [17]))), var_2));
                                var_14 = (max(var_14, ((((((((arr_11 [i_0] [i_0] [i_2] [i_2] [i_4]) ? 65535 : var_8)))) && (((var_4 ? 199 : var_9))))))));
                                var_15 = (!var_7);
                            }
                        }
                    }
                }
                var_16 = (min(var_16, ((-(((arr_8 [i_1]) * var_7))))));

                for (int i_5 = 0; i_5 < 24;i_5 += 1)
                {
                    arr_19 [i_5] = (arr_1 [i_0]);
                    var_17 = (max((arr_16 [i_0] [i_1] [i_5] [i_5]), (~3756771540)));
                    /* LoopNest 2 */
                    for (int i_6 = 3; i_6 < 23;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 24;i_7 += 1)
                        {
                            {
                                arr_24 [i_0] [i_5] [i_5] [i_5] [i_0] = (arr_13 [i_0] [i_1] [i_5] [i_5] [i_6] [i_7] [i_7]);
                                arr_25 [i_5] [i_1] [i_5] [i_1] [4] = (arr_12 [i_1] [i_5] [i_5]);
                                var_18 = (((1909137762 / 4570264562009398118) / (arr_18 [i_6 - 2] [i_6])));
                            }
                        }
                    }
                }
                for (int i_8 = 2; i_8 < 22;i_8 += 1)
                {
                    var_19 = (max(var_19, ((((var_9 ? 3756771540 : (arr_12 [i_8 - 1] [i_8 - 2] [i_8 - 1])))))));
                    var_20 = (((arr_20 [i_1] [i_1]) <= 168));
                }
                for (int i_9 = 1; i_9 < 23;i_9 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_10 = 0; i_10 < 24;i_10 += 1)
                    {
                        for (int i_11 = 1; i_11 < 23;i_11 += 1)
                        {
                            {
                                arr_36 [i_1] = (arr_28 [i_1] [i_10]);
                                arr_37 [i_11] [i_11] [i_9 - 1] [i_0] [i_0] = (max((((min(var_8, (arr_21 [i_0] [i_1] [i_1] [i_0] [i_1] [i_11 - 1]))))), (arr_28 [i_10] [i_11 - 1])));
                                var_21 = (min(var_21, ((~((var_0 ? (((((arr_17 [i_0] [18] [17]) <= var_10)))) : ((30 ? var_11 : var_3))))))));
                                arr_38 [i_0] [i_1] [i_9 + 1] [i_1] [i_1] = (max((((var_2 >= var_11) << (((max(var_7, (arr_22 [i_0] [i_0]))) - 661409302)))), ((((538195755 ? var_0 : var_10)) | -var_2))));
                                arr_39 [i_0] [5] = (((max(var_10, var_6)) | ((((arr_16 [i_0] [i_9 + 1] [i_10] [i_11]) ^ (arr_32 [i_0] [i_1] [i_9 + 1] [i_10] [i_11 + 1]))))));
                            }
                        }
                    }
                    arr_40 [i_0] [0] [i_0] = (max((((((arr_29 [i_1] [i_1] [i_9 - 1]) + 2147483647)) >> (((arr_29 [i_0] [14] [i_9 + 1]) + 16463)))), ((((arr_29 [i_0] [i_0] [i_9 + 1]) == (arr_29 [i_1] [i_9] [i_9 + 1]))))));
                    var_22 = (((((arr_27 [i_9 + 1] [17] [17]) ^ (arr_34 [i_0] [i_0] [i_0] [i_0] [i_1] [i_9 - 1]))) | (((arr_34 [i_0] [i_0] [i_0] [i_1] [i_1] [i_9 - 1]) ? (arr_27 [i_0] [i_1] [i_9]) : (arr_27 [i_0] [i_1] [i_9 - 1])))));
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_12 = 0; i_12 < 23;i_12 += 1)
    {
        for (int i_13 = 0; i_13 < 23;i_13 += 1)
        {
            {
                var_23 = var_10;
                var_24 = (((((var_6 ? (arr_4 [i_12]) : var_8))) ? ((13876479511700153520 ? (arr_4 [i_12]) : (arr_4 [i_13]))) : (max((arr_4 [i_12]), (arr_4 [i_12])))));
            }
        }
    }
    #pragma endscop
}
