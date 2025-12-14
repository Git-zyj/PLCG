/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 64620
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=64620 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/64620
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 24;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 24;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 24;i_4 += 1)
                        {
                            {
                                var_16 = (arr_8 [i_0] [i_0] [i_0] [i_0] [i_0]);
                                arr_12 [i_0] = ((max(var_3, 29098)));
                                arr_13 [i_0] [i_0] [i_2] [i_2] [i_0] = (max((arr_6 [i_0] [i_0] [i_0] [i_0] [i_0]), ((var_5 / (arr_0 [i_0 + 1])))));
                            }
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_5 = 2; i_5 < 21;i_5 += 1)
                {
                    for (int i_6 = 2; i_6 < 23;i_6 += 1)
                    {
                        {
                            arr_19 [i_1] [i_5] [i_0] = (arr_14 [i_6 - 1] [i_6 - 1] [i_6 - 2] [i_0]);
                            var_17 = ((-(max((4796 ^ 29098), 5559))));
                        }
                    }
                }
            }
        }
    }
    var_18 = var_12;
    /* LoopNest 2 */
    for (int i_7 = 2; i_7 < 18;i_7 += 1)
    {
        for (int i_8 = 1; i_8 < 21;i_8 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_9 = 0; i_9 < 1;i_9 += 1)
                {
                    for (int i_10 = 2; i_10 < 21;i_10 += 1)
                    {
                        for (int i_11 = 2; i_11 < 21;i_11 += 1)
                        {
                            {
                                arr_35 [i_11] [i_7] [i_7] [i_8 - 1] [i_7] = 2173974840;
                                var_19 = (!var_7);
                            }
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_12 = 0; i_12 < 22;i_12 += 1)
                {
                    for (int i_13 = 2; i_13 < 20;i_13 += 1)
                    {
                        {
                            arr_42 [i_7] [i_7] [i_13] = (max((arr_22 [i_7]), -163));
                            arr_43 [i_7] [i_7] [i_12] [i_7] = ((((((~var_14) ? var_5 : (((29101 ? -29101 : var_8)))))) ? 74 : (((arr_5 [i_12] [i_12] [i_12]) ? (((arr_22 [i_8]) ? var_8 : var_5)) : var_3))));
                            var_20 = (~var_4);
                            arr_44 [i_7] [i_7] [i_8] [i_7] [i_7] [i_13] = (max(((-19807 ? ((max(29112, -29110))) : ((~(arr_33 [i_7] [i_8] [i_7]))))), (max((~29070), ((((arr_36 [i_7] [i_8 + 1] [i_7]) < -29101)))))));
                        }
                    }
                }
                var_21 -= (((arr_10 [i_7] [i_7] [i_7] [1] [i_8]) >= -64));
            }
        }
    }
    #pragma endscop
}
