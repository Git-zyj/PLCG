/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 90624
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=90624 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/90624
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 19;i_1 += 1)
        {
            {
                var_18 = (0 ? 2147483647 : (min((arr_6 [i_0 - 3] [i_0]), var_14)));

                /* vectorizable */
                for (int i_2 = 0; i_2 < 20;i_2 += 1)
                {
                    var_19 = var_2;

                    for (int i_3 = 0; i_3 < 20;i_3 += 1)
                    {
                        var_20 = (min(var_20, var_17));
                        arr_12 [i_0 - 2] [i_0] [i_2] [i_3] = (((arr_3 [i_0 + 1] [i_1 - 2] [i_1 - 3]) ? var_6 : -446605022));

                        for (int i_4 = 0; i_4 < 20;i_4 += 1)
                        {
                            var_21 = (min(var_21, ((((arr_5 [i_4] [18]) ? (arr_0 [i_0 - 2] [i_1 - 2]) : 55847089)))));
                            arr_15 [i_0] [i_1] [i_0] [i_3] [15] = 849372572;
                            arr_16 [i_0] = (arr_4 [i_0]);
                            arr_17 [i_0] [i_1] [i_2] [i_0] [i_4] [i_4] = arr_6 [i_0] [i_0];
                        }

                        for (int i_5 = 0; i_5 < 20;i_5 += 1) /* same iter space */
                        {
                            var_22 -= (arr_7 [i_1 - 2] [i_5]);
                            arr_21 [i_3] [i_0] = 2043205459;
                        }
                        for (int i_6 = 0; i_6 < 20;i_6 += 1) /* same iter space */
                        {
                            var_23 = (arr_1 [i_0] [i_1 - 2]);
                            var_24 = ((((((arr_1 [i_0] [i_6]) ? (arr_0 [6] [i_3]) : (arr_3 [i_0] [i_1] [i_3])))) ? ((((arr_20 [i_0] [i_1 - 1] [i_2] [i_2] [i_6]) ? -1306375026 : var_16))) : (arr_7 [i_1 - 1] [i_0])));
                        }
                        for (int i_7 = 0; i_7 < 20;i_7 += 1)
                        {
                            arr_29 [i_0 - 3] [i_0] [i_2] = (arr_11 [i_0 + 2] [i_1] [i_2] [i_2]);
                            arr_30 [i_0] [i_7] [i_7] [i_3] [12] [i_0] [i_0] = ((var_8 + 2147483647) >> (var_11 - 79789930));
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_8 = 0; i_8 < 20;i_8 += 1)
                    {
                        for (int i_9 = 0; i_9 < 20;i_9 += 1)
                        {
                            {
                                arr_35 [i_9] [i_0] [i_2] [i_2] [i_0] [i_0] = -1306375026;
                                var_25 = var_8;
                            }
                        }
                    }
                }
                for (int i_10 = 0; i_10 < 20;i_10 += 1)
                {
                    var_26 = var_5;
                    /* LoopNest 2 */
                    for (int i_11 = 0; i_11 < 20;i_11 += 1)
                    {
                        for (int i_12 = 0; i_12 < 20;i_12 += 1)
                        {
                            {
                                arr_45 [i_0 - 1] [i_1] [i_10] [i_10] [i_11] [i_0] = 1306375018;
                                arr_46 [i_0] = (((max((arr_34 [i_0] [i_0 + 2] [10] [i_0 + 2] [i_0] [i_1 - 1]), (arr_34 [i_0] [i_0 + 1] [i_0] [i_1] [i_0] [i_1 - 2])))) ? (((((arr_34 [i_0] [i_0 + 1] [i_0] [1] [i_0] [i_1 + 1]) < (arr_34 [i_0] [i_0 - 1] [i_0] [14] [i_0] [i_1 - 3]))))) : ((-(arr_34 [i_0] [i_0 - 1] [i_1] [13] [i_0] [i_1 - 1]))));
                                var_27 = ((max(((((arr_0 [i_12] [i_1]) ? (arr_0 [i_0 - 3] [i_0 - 3]) : (arr_9 [i_0] [i_10] [i_12])))), (arr_6 [i_0] [i_0]))));
                                var_28 = (+(min((((arr_13 [i_0] [i_0] [i_0] [i_0] [i_0]) ? (arr_11 [i_0] [i_10] [14] [i_12]) : var_13)), (arr_39 [i_0 + 2] [i_0] [i_12] [i_12] [i_0 - 1]))));
                            }
                        }
                    }
                    arr_47 [i_0 - 1] [10] [i_0] [16] = max(((-(arr_31 [i_0] [i_1 - 2] [i_0] [i_0] [i_0 + 2] [i_0]))), ((-480566877 ? var_3 : (arr_40 [i_1] [i_1] [i_1] [i_0 + 1] [i_0] [i_0]))));
                }
            }
        }
    }

    /* vectorizable */
    for (int i_13 = 1; i_13 < 9;i_13 += 1)
    {
        var_29 = arr_14 [i_13] [i_13] [0] [i_13];
        arr_51 [i_13] = arr_42 [i_13 - 1] [i_13] [i_13 - 1] [i_13 + 2] [i_13] [i_13];
    }
    #pragma endscop
}
