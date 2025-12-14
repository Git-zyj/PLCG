/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 6814
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=6814 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/6814
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = var_3;
    var_19 = (min(var_19, var_2));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 21;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 20;i_3 += 1)
                    {
                        {
                            var_20 ^= (arr_7 [i_2] [i_3]);

                            for (int i_4 = 2; i_4 < 20;i_4 += 1)
                            {
                                var_21 = (arr_8 [i_0] [i_1] [i_2] [i_3] [i_4]);
                                var_22 = (min(var_22, (arr_8 [i_0] [i_1] [i_0] [i_0] [12])));
                                arr_11 [i_4] [i_1] [i_1] [i_1] [i_0] = (arr_0 [i_1] [i_0]);
                            }
                            /* vectorizable */
                            for (int i_5 = 0; i_5 < 21;i_5 += 1)
                            {
                                var_23 -= arr_10 [i_0] [i_0] [1] [i_2] [5] [8] [i_5];
                                var_24 ^= (arr_4 [i_0] [i_0] [i_0] [i_0]);
                                arr_14 [i_0] [i_0] [i_3] [5] [i_5] = (arr_1 [i_0] [i_0]);
                                arr_15 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = (arr_10 [i_5] [i_1] [i_0] [i_1] [i_5] [i_5] [i_5]);
                            }
                            for (int i_6 = 1; i_6 < 18;i_6 += 1)
                            {
                                var_25 = (arr_10 [i_0] [i_0] [i_1] [i_0] [i_0] [i_0] [i_6]);
                                arr_18 [i_0] [i_1] [i_2] [i_2] [i_6] = (arr_10 [i_6] [i_3] [i_0] [i_2] [i_0] [i_1] [i_0]);
                            }
                        }
                    }
                }
                /* LoopNest 3 */
                for (int i_7 = 0; i_7 < 1;i_7 += 1)
                {
                    for (int i_8 = 1; i_8 < 19;i_8 += 1)
                    {
                        for (int i_9 = 0; i_9 < 0;i_9 += 1)
                        {
                            {
                                var_26 = (arr_19 [i_0] [i_7]);
                                var_27 -= (arr_10 [i_0] [i_1] [i_7] [i_7] [i_7] [i_7] [i_9]);
                                arr_26 [i_0] [i_1] [i_7] [i_8] [i_7] = (arr_23 [i_7] [i_7] [i_7] [i_0]);
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
