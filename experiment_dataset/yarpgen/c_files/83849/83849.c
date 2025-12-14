/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 83849
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=83849 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/83849
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = 6647290598535978032;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 15;i_2 += 1)
            {
                {
                    var_15 = var_7;
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 13;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 15;i_4 += 1)
                        {
                            {
                                var_16 = ((((((((arr_1 [i_3]) ? (arr_2 [i_0] [i_0]) : var_3)) & 65526))) ? var_13 : (arr_12 [i_3 - 2] [i_3 - 2] [i_3 + 1] [i_3 + 2] [i_3 + 2])));
                                var_17 = (((arr_6 [i_3 - 2] [i_3 + 2] [i_3 - 1] [i_3 + 1]) * (min((arr_8 [i_3 + 2] [i_3 - 1] [i_3 - 1] [i_3 - 1] [i_3 + 1] [i_3 - 1]), (arr_6 [i_3 - 1] [i_3 + 2] [i_3 - 1] [i_3 - 2])))));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 1; i_5 < 13;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 15;i_6 += 1)
                        {
                            {
                                var_18 = var_9;
                                var_19 = 1;
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_7 = 0; i_7 < 1;i_7 += 1)
                    {
                        for (int i_8 = 0; i_8 < 15;i_8 += 1)
                        {
                            {
                                arr_22 [i_0] [i_0] [10] [i_0] [i_0] [8] [8] &= (arr_17 [i_0] [i_0] [i_2] [i_0]);
                                var_20 = arr_11 [i_0] [i_0] [i_1] [9] [i_7] [i_8];
                                var_21 = (min(var_21, (((var_11 ? (arr_7 [i_2] [i_8]) : (arr_7 [i_2] [i_1]))))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_22 = var_11;
    var_23 = 1;
    #pragma endscop
}
