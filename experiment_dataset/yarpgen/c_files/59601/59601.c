/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 59601
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=59601 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/59601
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 14;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 3; i_3 < 16;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 16;i_4 += 1)
                        {
                            {
                                arr_14 [i_0] [i_1] = (arr_4 [i_2] [i_1] [i_0]);
                                var_20 = ((-1407387448 ? (~332324527) : ((-((-42 ? 166 : (-2147483647 - 1)))))));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 2; i_5 < 16;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 17;i_6 += 1)
                        {
                            {
                                var_21 = ((max(var_6, ((max(var_10, var_2))))));
                                arr_19 [i_1] [i_1] [i_2] [13] [i_1] = (max((((max(-1046639685, var_12)))), (((arr_9 [3] [i_1 + 2] [7] [4]) ? (arr_9 [i_0] [i_1 - 3] [i_6] [i_6]) : var_13))));
                                arr_20 [i_0] [i_1] [i_1] [i_2 - 1] [4] [i_6] = ((((((-(arr_6 [i_0] [i_1 + 2]))) + 2147483647)) << (((max((arr_6 [11] [i_1 - 1]), var_15)) - 25))));
                                arr_21 [i_0] [i_1] [i_0] [i_0] [i_0] = (arr_7 [i_2 - 1] [3] [3]);
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_7 = 3; i_7 < 15;i_7 += 1)
                    {
                        for (int i_8 = 0; i_8 < 17;i_8 += 1)
                        {
                            {
                                arr_26 [i_0] [13] [i_2] [i_0] [i_8] [i_1] [i_2] = (((127 << (95 - 88))));
                                var_22 = (arr_2 [i_8]);
                            }
                        }
                    }
                }
            }
        }
    }
    var_23 &= var_16;
    /* LoopNest 2 */
    for (int i_9 = 0; i_9 < 15;i_9 += 1)
    {
        for (int i_10 = 0; i_10 < 15;i_10 += 1)
        {
            {
                var_24 = max((((-30 ? var_3 : var_12))), var_11);
                arr_33 [11] [i_9] [11] = ((((~(max(9223372036854775807, 4539))))) ? ((((var_8 <= ((min((arr_23 [i_9] [i_9] [i_9] [i_9]), (-127 - 1)))))))) : ((var_15 | (((var_9 ? (arr_30 [i_10]) : -14673))))));
            }
        }
    }
    var_25 = (max(var_18, (min(var_10, var_13))));
    var_26 = (max(var_26, ((max(var_0, var_18)))));
    #pragma endscop
}
