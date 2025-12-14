/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 92695
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=92695 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/92695
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 2; i_2 < 23;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 25;i_3 += 1)
                    {
                        {
                            var_16 += ((((((((-15 ? (arr_9 [i_0] [i_0] [i_1] [i_0] [i_3]) : var_6))) ? ((65535 ? 65535 : 14555481502168781179)) : var_6))) ? ((((min((arr_1 [i_2] [i_0]), (arr_10 [i_0] [i_0] [i_0] [i_0]))) < ((min(var_0, 161)))))) : (((arr_10 [i_2 - 2] [i_1] [i_2] [i_3]) - (arr_3 [i_2 - 2] [i_1] [i_3])))));
                            var_17 = (min(var_17, var_8));
                        }
                    }
                }
                /* LoopNest 3 */
                for (int i_4 = 0; i_4 < 25;i_4 += 1)
                {
                    for (int i_5 = 1; i_5 < 24;i_5 += 1)
                    {
                        for (int i_6 = 1; i_6 < 23;i_6 += 1)
                        {
                            {
                                var_18 = (min(var_18, ((((arr_15 [i_5] [14] [i_5 + 1]) << (var_1 < 161))))));
                                var_19 += (((((~(!1939712506)))) ? ((max(124, (!var_2)))) : (arr_8 [i_0] [i_1] [i_6 + 1])));
                                var_20 = -65535;
                                var_21 = (max(var_21, (-9223372036854775807 - 1)));
                                var_22 = ((38128 ? 1 : 4088));
                            }
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_7 = 0; i_7 < 24;i_7 += 1)
    {
        for (int i_8 = 0; i_8 < 24;i_8 += 1)
        {
            for (int i_9 = 0; i_9 < 24;i_9 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_10 = 0; i_10 < 1;i_10 += 1)
                    {
                        for (int i_11 = 0; i_11 < 24;i_11 += 1)
                        {
                            {
                                arr_30 [i_7] [i_7] [14] [i_7] = var_10;
                                var_23 = (max(var_23, ((min(var_5, 7663)))));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_12 = 0; i_12 < 24;i_12 += 1)
                    {
                        for (int i_13 = 2; i_13 < 22;i_13 += 1)
                        {
                            {
                                arr_36 [i_7] [i_8] [i_8] [i_13] = (((arr_9 [i_13 - 1] [i_13 + 1] [i_13 - 2] [i_13 + 1] [i_8]) == (arr_9 [i_13 + 1] [i_13 - 2] [i_13 + 2] [i_8] [i_8])));
                                var_24 = (max(var_24, (((!(((18446744073709551611 ? -32755 : 0))))))));
                                arr_37 [i_7] [i_8] [3] [i_9] [i_12] [9] [3] = (((max(((-1 ? 1 : 40469)), ((var_14 ? (arr_18 [21] [i_12] [1] [i_8] [i_7]) : 32)))) < (max((arr_14 [i_7] [i_9] [i_13 + 1] [i_8]), (((arr_5 [i_12] [i_12] [i_7]) / (arr_8 [i_7] [i_7] [i_7])))))));
                                arr_38 [8] [8] [i_9] [i_9] [i_9] [i_9] [i_9] = (((((max((arr_5 [i_13 - 1] [i_13 + 2] [i_13 - 1]), (arr_5 [i_13 - 1] [i_13 - 2] [i_13 - 2]))))) - (min(2460833171, (1435927288 - 4194303)))));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_14 = 0; i_14 < 1;i_14 += 1)
                    {
                        for (int i_15 = 0; i_15 < 1;i_15 += 1)
                        {
                            {
                                var_25 = (min(var_25, (((((min((arr_18 [i_7] [i_7] [i_7] [i_7] [1]), (max((arr_34 [i_15] [i_15] [i_15] [i_15]), var_13))))) ? (((min(-125, var_15)))) : var_2)))));
                                var_26 = (min(((((((max(1, (arr_42 [i_9] [i_14] [i_9] [22] [1] [i_9]))))) >= (min(288230376151711743, var_13))))), (max(65535, 56334))));
                                var_27 = (max(var_27, (arr_6 [0] [i_9] [0])));
                                var_28 = (max(((var_3 ? (((arr_21 [13] [13] [15]) ? var_14 : (arr_27 [i_8] [i_15]))) : (arr_12 [i_14] [i_15]))), (((arr_9 [i_7] [i_7] [i_7] [i_7] [i_7]) ? (arr_35 [i_9] [i_14] [i_7] [i_14] [i_15]) : ((min(var_13, var_1)))))));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_16 = 1; i_16 < 22;i_16 += 1)
                    {
                        for (int i_17 = 0; i_17 < 24;i_17 += 1)
                        {
                            {
                                arr_49 [i_7] [i_17] [i_9] [i_9] [i_9] [i_16] = (max(17, 161));
                                var_29 = (arr_33 [5] [i_9] [13] [5]);
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
