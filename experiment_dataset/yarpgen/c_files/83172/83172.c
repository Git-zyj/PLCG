/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 83172
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=83172 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/83172
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 10;i_1 += 1)
        {
            {
                arr_5 [i_1] = ((0 ? (((arr_0 [i_1 - 2]) + (arr_0 [i_1 - 2]))) : 13));
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 11;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 10;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 11;i_4 += 1)
                        {
                            {
                                var_16 = (min(8, 31815));
                                var_17 = ((((max(0, 0))) | (((((arr_7 [i_0] [i_0] [i_0]) ^ 0)) & -14))));
                            }
                        }
                    }
                }
                arr_13 [i_0] [i_0] [i_0] = (((arr_0 [i_0]) ? ((~((65535 ? -7 : 31821)))) : (arr_2 [i_0] [7])));
                arr_14 [i_0] [i_1] = (min(-31815, 7));
                var_18 = (-65408 / var_8);
            }
        }
    }
    var_19 = (((var_1 - (1059455211 - var_3))));
    /* LoopNest 2 */
    for (int i_5 = 0; i_5 < 20;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 20;i_6 += 1)
        {
            {
                var_20 = ((~(arr_17 [i_5] [i_6])));
                arr_20 [i_5] = (arr_18 [i_5] [i_5]);
                arr_21 [i_5] [i_6] = (((!var_14) / (arr_15 [i_5])));

                for (int i_7 = 4; i_7 < 19;i_7 += 1)
                {
                    var_21 |= var_15;
                    /* LoopNest 2 */
                    for (int i_8 = 0; i_8 < 20;i_8 += 1)
                    {
                        for (int i_9 = 0; i_9 < 20;i_9 += 1)
                        {
                            {
                                var_22 = var_11;
                                arr_30 [i_5] [i_6] [i_7 + 1] [i_8] [i_7] = min((((18219432079190418384 && (arr_25 [i_7 - 2] [i_7 + 1] [i_7 - 4] [i_7 + 1])))), var_8);
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
