/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 84671
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=84671 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/84671
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 16;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 17;i_4 += 1)
                        {
                            {
                                var_12 &= 62568;
                                var_13 += max((arr_5 [i_0]), (arr_9 [i_0] [i_1 + 1] [i_2] [i_3] [i_4]));
                                var_14 = (((((arr_10 [i_3] [i_1 - 3] [i_1 - 3] [i_1 - 4] [i_3 - 1]) | -3461037949787944546)) / (((max((arr_0 [i_1 - 1]), 62568))))));
                                arr_11 [i_0] [i_3] [i_2 - 2] [i_3 - 1] [i_4] = 3968;
                            }
                        }
                    }
                    var_15 += (((arr_2 [i_0]) ? (arr_0 [i_1 - 4]) : var_3));
                    var_16 = ((-(arr_7 [i_2 - 2] [i_2] [i_1 - 2] [i_0])));
                    arr_12 [i_2] [i_1 - 1] [9] = (min(var_4, var_3));
                }
            }
        }
    }
    var_17 = var_1;
    var_18 *= ((~(((var_9 || (var_6 < var_10))))));
    /* LoopNest 2 */
    for (int i_5 = 0; i_5 < 11;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 1;i_6 += 1)
        {
            {
                arr_20 [i_5] = var_0;
                var_19 = (((var_2 < (((arr_13 [i_5]) % 8976841727976934929)))));
                var_20 = min((arr_17 [i_5] [i_5] [i_5]), (max(6, 16)));
                var_21 = (((-(arr_19 [i_5] [i_6]))));
                var_22 = (arr_8 [i_5] [i_5] [1] [i_6]);
            }
        }
    }
    #pragma endscop
}
