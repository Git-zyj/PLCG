/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 87868
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=87868 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/87868
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (((~90) ? var_6 : (min(var_2, (max(var_8, -1))))));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            {

                /* vectorizable */
                for (int i_2 = 1; i_2 < 18;i_2 += 1)
                {
                    var_18 = (min(var_18, (((-29 ? (((-29 + 2147483647) >> 1)) : var_9)))));
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 18;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 18;i_4 += 1)
                        {
                            {
                                var_19 *= (((1 - (arr_7 [i_0] [i_2] [i_4]))));
                                arr_13 [i_0] [i_1] [i_2] [i_4] = (arr_11 [i_4 - 1] [1] [10] [i_4 - 2] [i_3 - 2]);
                            }
                        }
                    }
                }
                for (int i_5 = 0; i_5 < 19;i_5 += 1)
                {
                    arr_16 [i_0] [i_1] = 1;
                    var_20 = var_16;
                }
                for (int i_6 = 0; i_6 < 1;i_6 += 1) /* same iter space */
                {
                    arr_19 [i_6] [i_1] = ((-(arr_4 [i_1])));
                    /* LoopNest 2 */
                    for (int i_7 = 1; i_7 < 15;i_7 += 1)
                    {
                        for (int i_8 = 0; i_8 < 19;i_8 += 1)
                        {
                            {
                                arr_26 [i_8] [12] [i_6] [i_1] [i_1] [i_0] [i_0] = (((-245680967 == 0) ? ((((arr_17 [i_7 - 1] [i_7 - 1] [i_7 + 4]) == (arr_12 [i_0] [i_0] [i_0 + 1] [1] [i_1] [i_7 + 2])))) : ((max((arr_20 [i_0 - 2] [i_0]), -113)))));
                                arr_27 [i_0 - 1] [i_0 - 1] [i_6] [i_1] [i_0 - 1] = (arr_24 [1] [i_0 - 2] [i_7 + 4]);
                                arr_28 [i_0] [i_1] [i_6] [i_7 + 4] [i_8] [i_1] [i_6] = (max(228, -90));
                                arr_29 [i_0 - 2] [i_1] [3] [i_0] [i_8] [i_7 - 1] = (((arr_24 [i_7] [i_6] [i_1]) < (arr_4 [i_0])));
                            }
                        }
                    }
                }
                for (int i_9 = 0; i_9 < 1;i_9 += 1) /* same iter space */
                {
                    var_21 ^= (((12 ? -30 : 1)));
                    /* LoopNest 2 */
                    for (int i_10 = 0; i_10 < 0;i_10 += 1)
                    {
                        for (int i_11 = 0; i_11 < 1;i_11 += 1)
                        {
                            {
                                arr_37 [i_0] [i_1] [i_9] [1] [i_0] [i_11] = 1308586592;
                                arr_38 [1] [i_1] [i_9] [i_10] = ((((max((arr_4 [i_0 + 1]), 1))) >> (((arr_11 [i_0 + 1] [i_0] [i_0 - 1] [i_0 + 1] [0]) - 11620))));
                            }
                        }
                    }
                    arr_39 [11] [i_0] [i_1] [12] = arr_33 [i_0 - 1] [i_0 + 1] [i_9] [i_1] [i_1];
                    var_22 = ((+(((arr_5 [i_0] [i_9] [i_0]) ? (arr_14 [i_0 - 2] [i_0 - 2] [i_0]) : -8796093022208))));
                }

                for (int i_12 = 0; i_12 < 19;i_12 += 1)
                {
                    var_23 = (min(var_23, (((1 << 1) ? 1 : (arr_21 [i_0] [i_0 - 2] [i_0] [i_0 + 1] [i_0 - 1] [i_0 - 2])))));
                    /* LoopNest 2 */
                    for (int i_13 = 0; i_13 < 1;i_13 += 1)
                    {
                        for (int i_14 = 2; i_14 < 15;i_14 += 1)
                        {
                            {
                                arr_49 [i_13] [i_13] = var_12;
                                var_24 *= -32;
                                var_25 ^= var_1;
                                arr_50 [i_0 - 1] [i_0 + 2] = 1;
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
