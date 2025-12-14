/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 74479
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=74479 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/74479
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 20;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 21;i_4 += 1)
                        {
                            {
                                var_14 -= ((-((max((arr_12 [i_1] [i_0] [i_1 + 1] [i_1] [i_1 + 1] [i_1 - 1]), (arr_12 [i_1 + 1] [i_0] [i_1 + 1] [i_1] [i_1 - 3] [i_1 - 2]))))));
                                var_15 = var_13;
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 21;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 21;i_6 += 1)
                        {
                            {
                                arr_18 [i_2] [i_5] [i_6] |= 2658230887;
                                var_16 -= (arr_8 [i_6] [i_5] [i_2] [i_0] [i_0]);
                                var_17 = 1636736409;
                                var_18 = var_12;
                                var_19 -= ((-(((arr_11 [i_5] [i_2 - 1] [i_2] [i_1 - 3] [i_1] [i_5]) ^ var_5))));
                            }
                        }
                    }
                    var_20 |= (((arr_11 [i_1 - 1] [i_2 - 1] [i_1 - 1] [i_2 - 2] [i_2 - 1] [i_0]) ? (((var_0 ? var_12 : (min(var_8, var_9))))) : (((var_13 ? var_10 : 1636736409)))));
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_7 = 3; i_7 < 14;i_7 += 1)
    {
        for (int i_8 = 0; i_8 < 17;i_8 += 1)
        {
            {
                var_21 = (min(var_21, var_9));
                var_22 = (((max(16211, 4194296))) ? (max(16220, var_5)) : var_10);
            }
        }
    }
    #pragma endscop
}
