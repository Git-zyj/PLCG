/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 803
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=803 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/803
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_16 = (max((min((~-264530009), (arr_0 [i_0] [i_0]))), (arr_1 [1])));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 20;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 1;i_3 += 1)
                    {
                        {
                            var_17 = (max(var_17, (arr_3 [i_3 - 1] [i_3 - 1] [i_3 - 1])));
                            arr_10 [i_1] [i_1] [i_1] [i_1] [14] &= var_11;
                        }
                    }
                }
                arr_11 [i_1] = ((!(arr_4 [6] [6] [1])));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_4 = 2; i_4 < 22;i_4 += 1)
    {
        for (int i_5 = 0; i_5 < 23;i_5 += 1)
        {
            {
                arr_17 [i_5] [17] = var_9;
                var_18 = (!-32);
                /* LoopNest 3 */
                for (int i_6 = 0; i_6 < 23;i_6 += 1)
                {
                    for (int i_7 = 0; i_7 < 23;i_7 += 1)
                    {
                        for (int i_8 = 1; i_8 < 21;i_8 += 1)
                        {
                            {
                                arr_27 [i_4] [i_4] [i_4] [i_4] [13] [i_4] = ((~((max(var_11, (arr_18 [i_4] [i_4 - 2] [i_4 + 1] [i_8 + 1]))))));
                                var_19 = ((~(var_4 & var_3)));
                                arr_28 [i_4] [i_5] [i_4] [18] [i_8 - 1] [i_5] [4] = (((max((arr_12 [3]), 117)) + (arr_16 [6] [6])));
                            }
                        }
                    }
                }
                /* LoopNest 3 */
                for (int i_9 = 1; i_9 < 19;i_9 += 1)
                {
                    for (int i_10 = 0; i_10 < 23;i_10 += 1)
                    {
                        for (int i_11 = 0; i_11 < 23;i_11 += 1)
                        {
                            {
                                arr_35 [i_4] [i_9] [i_9] [i_9] [i_9] = -638009358730382515;
                                var_20 = (max((arr_25 [i_4] [i_4] [15] [i_4 - 1] [i_4] [i_4]), (var_15 & 47266)));
                                var_21 = 18272;
                            }
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_12 = 0; i_12 < 1;i_12 += 1)
                {
                    for (int i_13 = 3; i_13 < 22;i_13 += 1)
                    {
                        {
                            var_22 = (min(var_22, ((((((~(arr_30 [i_4] [0] [11])))))))));
                            arr_40 [i_12] [i_12] = -638009358730382495;
                            arr_41 [i_4 - 2] [i_4] [i_12] [i_4] [i_4] = var_2;
                            var_23 = (58 * -8718);
                        }
                    }
                }
            }
        }
    }
    var_24 = var_0;
    #pragma endscop
}
