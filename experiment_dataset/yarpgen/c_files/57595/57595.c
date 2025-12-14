/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 57595
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=57595 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/57595
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (min(var_17, ((min(((max(60520, 60520))), (min(var_12, var_6)))))));
    var_18 = (min(var_6, var_11));
    var_19 = (min((max(var_3, (min(var_15, var_8)))), var_1));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_20 = (arr_2 [i_1]);

                for (int i_2 = 0; i_2 < 13;i_2 += 1) /* same iter space */
                {
                    arr_8 [7] [7] = (min((min(1068220624, (-2147483647 - 1))), (arr_5 [i_0] [i_0] [i_0])));

                    for (int i_3 = 0; i_3 < 13;i_3 += 1)
                    {
                        var_21 = (arr_10 [2] [7] [i_3]);

                        /* vectorizable */
                        for (int i_4 = 1; i_4 < 12;i_4 += 1)
                        {
                            var_22 = (min(var_22, (arr_1 [i_0])));
                            var_23 &= (arr_14 [i_4] [i_1] [i_1] [9] [i_4 - 1]);
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 2; i_5 < 11;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 13;i_6 += 1)
                        {
                            {
                                var_24 = (arr_9 [1] [10] [i_2] [10]);
                                arr_21 [i_6] [1] [i_0] [i_5] [i_6] = (min(((max(118, 0))), (arr_7 [i_6] [i_5] [i_1] [i_0])));
                                arr_22 [i_1] [i_2] [i_6] = (arr_7 [0] [2] [i_2] [i_5 + 2]);
                            }
                        }
                    }
                }
                for (int i_7 = 0; i_7 < 13;i_7 += 1) /* same iter space */
                {
                    var_25 = max((arr_9 [i_0] [i_0] [11] [i_7]), (arr_9 [i_0] [i_7] [i_7] [i_1]));
                    /* LoopNest 2 */
                    for (int i_8 = 4; i_8 < 11;i_8 += 1)
                    {
                        for (int i_9 = 0; i_9 < 13;i_9 += 1)
                        {
                            {
                                arr_32 [i_0] [i_0] [4] [2] [i_0] = (arr_18 [i_9] [6] [5] [0] [2] [0]);
                                var_26 -= (min((max((max((arr_11 [i_0] [3] [i_0] [i_0]), (arr_7 [i_7] [i_7] [i_7] [i_7]))), ((max((arr_5 [i_0] [i_0] [i_0]), (arr_6 [i_0] [i_0] [i_0])))))), (arr_13 [i_0] [i_0])));
                            }
                        }
                    }
                    arr_33 [i_0] [i_0] = (arr_26 [i_7]);
                    arr_34 [i_0] [3] [i_7] = (arr_16 [i_7] [4] [0] [i_0] [4]);
                    var_27 *= (arr_15 [i_0] [i_0]);
                }
                /* vectorizable */
                for (int i_10 = 0; i_10 < 13;i_10 += 1) /* same iter space */
                {
                    var_28 = (arr_7 [i_0] [i_0] [i_0] [i_0]);
                    /* LoopNest 2 */
                    for (int i_11 = 3; i_11 < 11;i_11 += 1)
                    {
                        for (int i_12 = 0; i_12 < 13;i_12 += 1)
                        {
                            {
                                arr_42 [i_11 - 2] [i_0] [i_0] [i_0] = arr_14 [i_0] [i_11 - 2] [i_11 - 2] [2] [i_11 - 2];
                                var_29 = (arr_27 [9] [6] [i_10] [i_11] [i_11] [i_11]);
                            }
                        }
                    }
                    var_30 = (arr_13 [i_0] [i_10]);
                }
            }
        }
    }
    #pragma endscop
}
