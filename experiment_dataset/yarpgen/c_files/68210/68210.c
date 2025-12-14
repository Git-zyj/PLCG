/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 68210
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=68210 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/68210
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 ^= (!var_5);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 2; i_2 < 20;i_2 += 1)
                {
                    for (int i_3 = 3; i_3 < 20;i_3 += 1)
                    {
                        {
                            arr_13 [i_0] [i_0] [i_0] = ((-1 != (1884314200 != 1)));
                            var_14 = (max(var_14, -1180558368));
                        }
                    }
                }

                /* vectorizable */
                for (int i_4 = 3; i_4 < 19;i_4 += 1)
                {
                    var_15 = var_9;
                    var_16 = var_3;
                }
                /* vectorizable */
                for (int i_5 = 0; i_5 < 22;i_5 += 1)
                {
                    arr_18 [i_5] = (-2750637042 - -1544330254);
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 22;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 22;i_7 += 1)
                        {
                            {
                                arr_23 [i_5] [i_1] [i_5] = (((var_8 - var_3) ? (arr_0 [i_1]) : (arr_22 [i_0] [6] [i_6])));
                                arr_24 [i_7] [i_7] [i_5] [i_7] [i_7] = var_11;
                                var_17 -= var_5;
                            }
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_8 = 3; i_8 < 21;i_8 += 1)
                {
                    for (int i_9 = 0; i_9 < 22;i_9 += 1)
                    {
                        {
                            var_18 += ((((arr_21 [i_9]) ? 3248177047349118688 : (arr_26 [i_8 - 2] [i_8 + 1]))));
                            arr_30 [i_0] [i_0] [i_0] [i_0] [i_0] &= (max(((var_12 ? var_8 : var_11)), ((min(var_0, (arr_6 [i_8 - 1] [i_8 - 3] [i_8 + 1]))))));

                            for (int i_10 = 0; i_10 < 22;i_10 += 1)
                            {
                                arr_33 [1] [i_9] [13] [i_8] [1] [i_0] = (~1);
                                var_19 = (min(var_19, ((min((~144), (3 < 1032864737936543176))))));
                            }
                            /* vectorizable */
                            for (int i_11 = 0; i_11 < 22;i_11 += 1)
                            {
                                arr_36 [i_11] [21] [i_1] [i_1] [i_0] = (arr_22 [10] [10] [i_9]);
                                var_20 *= ((-34431359 ? (arr_12 [i_1] [i_1] [i_8 - 2] [i_8 + 1]) : (arr_6 [i_1] [i_8] [i_8 - 2])));
                                var_21 = ((-22130 * ((var_5 / (arr_14 [i_0] [i_0] [13] [15])))));
                            }
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_12 = 3; i_12 < 19;i_12 += 1)
                {
                    for (int i_13 = 3; i_13 < 19;i_13 += 1)
                    {
                        {
                            arr_42 [i_13] [9] [i_13] [i_13 - 2] = ((-34431352 ? 1180558364 : 1));
                            arr_43 [i_1] [i_1] [i_12] [i_1] [i_13] |= var_11;
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
