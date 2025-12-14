/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 72445
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=72445 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/72445
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = ((-(((max(50284, var_1)) / var_1))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 23;i_1 += 1)
        {
            {

                for (int i_2 = 3; i_2 < 22;i_2 += 1)
                {

                    for (int i_3 = 0; i_3 < 25;i_3 += 1) /* same iter space */
                    {
                        var_11 = ((65535 > (max(172816977, (arr_3 [14] [i_2 + 3] [i_2 - 1])))));
                        var_12 = (min(((((max((arr_10 [i_0] [i_1] [i_2 + 3] [i_1]), var_2)) > (((max((arr_6 [i_3]), var_6))))))), (min((((3374716569615847369 <= (arr_10 [i_0 - 1] [i_1 + 1] [i_2] [i_1])))), (arr_4 [i_0 + 1])))));
                        var_13 *= -6903857245762872362;
                        var_14 = ((-((-(4421650176194858959 / 15072027504093704255)))));
                    }
                    /* vectorizable */
                    for (int i_4 = 0; i_4 < 25;i_4 += 1) /* same iter space */
                    {
                        arr_13 [i_1] = (93 > var_4);
                        arr_14 [i_1 + 1] [i_1 + 1] [i_1] = 2;
                        arr_15 [i_1] [i_0 + 2] [i_1 + 2] [14] [14] = ((-(15072027504093704252 <= 28)));
                        var_15 = (((arr_9 [i_2 - 2] [2] [i_0 + 3] [i_2 - 2]) / (arr_9 [i_2 - 3] [i_2 - 3] [i_0 - 1] [i_4])));
                        var_16 = (((var_0 >= 1023) > (arr_8 [i_1] [i_2 - 1])));
                    }
                    arr_16 [9] [9] [i_1] = var_3;
                    arr_17 [i_1] [i_0] [i_1] = (((min((max((arr_0 [i_0 + 2] [i_0]), var_0)), (arr_12 [i_0] [i_1] [i_2 - 1] [i_1]))) ^ (arr_11 [i_0 - 1] [i_1 + 1] [i_1] [i_2 - 3])));
                }
                /* vectorizable */
                for (int i_5 = 0; i_5 < 25;i_5 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 25;i_6 += 1)
                    {
                        for (int i_7 = 1; i_7 < 23;i_7 += 1)
                        {
                            {
                                var_17 ^= (((arr_24 [i_1] [i_1] [i_1 + 2] [i_1] [i_0]) / (arr_18 [i_7 - 1] [i_0] [i_0 + 2] [i_0])));
                                var_18 = 17722;
                            }
                        }
                    }
                    arr_27 [16] [i_1 + 2] [i_5] &= -6016836721289911397;
                    arr_28 [i_0] [i_1] [i_0] = ((13135 <= (arr_11 [i_0 + 1] [i_0 + 1] [i_1] [i_0 + 2])));
                }
                /* vectorizable */
                for (int i_8 = 0; i_8 < 25;i_8 += 1)
                {
                    arr_32 [i_0] [i_0 + 2] [i_1] [i_8] = (arr_6 [i_0 + 2]);
                    var_19 = (17199995572232908603 & 24);
                }

                for (int i_9 = 0; i_9 < 25;i_9 += 1) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (int i_10 = 0; i_10 < 25;i_10 += 1)
                    {
                        for (int i_11 = 0; i_11 < 25;i_11 += 1)
                        {
                            {
                                var_20 = var_6;
                                var_21 &= (arr_23 [i_1 + 1] [i_1 + 1]);
                            }
                        }
                    }
                    var_22 *= ((~(((((arr_39 [i_0 + 1] [i_0 + 1] [13] [i_1 - 1] [i_1 - 1] [i_1 + 1] [i_9]) ^ var_4)) & (((arr_36 [i_0] [i_0] [i_1 - 1] [i_9] [i_9] [i_9]) & 49))))));
                }
                for (int i_12 = 0; i_12 < 25;i_12 += 1) /* same iter space */
                {
                    arr_45 [i_1] [i_1] [i_12] = (max(6903857245762872362, ((max((arr_11 [i_1] [i_1 - 1] [i_1] [i_1 + 2]), 37)))));
                    arr_46 [24] [i_1 + 1] [i_1] = (arr_30 [23] [i_1 + 1] [i_1 + 2] [i_1 - 1]);
                    arr_47 [i_1] [i_1] [i_12] [i_0] = (arr_0 [20] [i_12]);
                }
                arr_48 [i_1] = -658426937;
                var_23 *= (((arr_10 [6] [4] [i_1] [6]) * (((arr_37 [8] [i_1 + 2] [6] [6] [i_1 + 1] [i_1 + 2]) / -1014))));
            }
        }
    }
    #pragma endscop
}
