/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 87906
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=87906 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/87906
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 22;i_1 += 1)
        {
            {
                arr_7 [i_0] = ((-250351931 ? 1 : -7716253242831081332));

                for (int i_2 = 0; i_2 < 25;i_2 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 25;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            {
                                arr_15 [i_0 - 1] [i_1 + 3] [i_0 - 1] [i_0] [i_4] = 492249158;
                                var_15 = arr_12 [19] [19] [i_1] [i_2] [i_3] [i_0];
                                var_16 = (min(var_16, 24531));
                            }
                        }
                    }
                    var_17 = (arr_12 [i_0 - 2] [i_0 - 2] [i_0 - 2] [i_0] [i_2] [i_0]);
                }
                /* LoopNest 2 */
                for (int i_5 = 0; i_5 < 25;i_5 += 1)
                {
                    for (int i_6 = 1; i_6 < 24;i_6 += 1)
                    {
                        {
                            var_18 = (arr_8 [i_0 - 1] [i_0 - 1] [i_0]);

                            /* vectorizable */
                            for (int i_7 = 0; i_7 < 1;i_7 += 1)
                            {
                                var_19 = (1 & -1011496401281351894);
                                arr_23 [i_0] [3] [10] [i_6] [24] [i_6] = -3690670877760300444;
                            }
                            for (int i_8 = 0; i_8 < 1;i_8 += 1)
                            {
                                var_20 = (1 < 1);
                                arr_26 [i_0 - 2] [8] [i_0] [15] [i_8] = ((~(0 > 16777215)));
                            }
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_9 = 4; i_9 < 24;i_9 += 1)
                {
                    for (int i_10 = 1; i_10 < 24;i_10 += 1)
                    {
                        {
                            var_21 = ((-5578790226223836275 ? 0 : -1267774867453988216));
                            arr_32 [i_0] [i_1 - 1] [i_9] [i_9] [i_10 - 1] = (max((!5023240529539895601), 1));
                        }
                    }
                }
                var_22 &= 1;
            }
        }
    }
    var_23 = (max((min(-288225978105200640, var_13)), ((max(3690670877760300444, -2486485513171919355)))));
    #pragma endscop
}
