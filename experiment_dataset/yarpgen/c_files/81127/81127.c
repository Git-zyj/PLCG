/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 81127
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=81127 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/81127
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = var_7;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            {
                var_16 = (((~(arr_1 [i_0] [i_1]))));

                for (int i_2 = 0; i_2 < 14;i_2 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 14;i_4 += 1)
                        {
                            {
                                var_17 = (max(var_17, (arr_6 [i_1] [i_2] [i_3] [i_3])));
                                var_18 += (arr_4 [i_1] [i_1]);
                            }
                        }
                    }
                    var_19 = (max(var_19, var_2));
                }
                for (int i_5 = 0; i_5 < 14;i_5 += 1)
                {
                    var_20 = (max(var_20, (((~(arr_2 [i_0] [i_0] [i_0]))))));

                    for (int i_6 = 0; i_6 < 14;i_6 += 1)
                    {
                        var_21 = (max(var_21, (!-0)));
                        var_22 = ((!(((~(arr_4 [i_0] [1]))))));
                    }
                    for (int i_7 = 0; i_7 < 14;i_7 += 1)
                    {
                        var_23 &= (arr_1 [i_0] [i_5]);
                        var_24 = (((-(arr_11 [i_1] [i_5]))));
                    }
                    /* LoopNest 2 */
                    for (int i_8 = 3; i_8 < 13;i_8 += 1)
                    {
                        for (int i_9 = 0; i_9 < 14;i_9 += 1)
                        {
                            {
                                var_25 += var_14;
                                var_26 ^= (arr_20 [i_8 - 3] [8] [i_8 - 3] [4] [i_8 - 3] [i_8 - 2] [i_5]);
                            }
                        }
                    }

                    /* vectorizable */
                    for (int i_10 = 0; i_10 < 14;i_10 += 1)
                    {
                        var_27 += var_4;
                        arr_24 [i_0] [8] = var_4;
                    }

                    for (int i_11 = 0; i_11 < 14;i_11 += 1)
                    {

                        for (int i_12 = 0; i_12 < 14;i_12 += 1)
                        {
                            var_28 += var_1;
                            var_29 = (arr_8 [i_0] [i_1] [i_5] [i_5] [i_5]);
                        }
                        var_30 &= var_0;
                    }
                }
                /* LoopNest 3 */
                for (int i_13 = 0; i_13 < 14;i_13 += 1)
                {
                    for (int i_14 = 1; i_14 < 10;i_14 += 1)
                    {
                        for (int i_15 = 3; i_15 < 12;i_15 += 1)
                        {
                            {
                                var_31 = (max(var_31, (arr_9 [i_0] [i_0] [i_0] [i_0] [i_0] [6])));
                                var_32 *= (arr_21 [i_14 + 1] [i_15 + 1] [i_13] [i_14]);
                                var_33 |= (arr_8 [i_15] [i_15 + 1] [i_15 + 2] [i_15 + 2] [i_14 - 1]);
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
