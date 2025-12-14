/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 61975
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=61975 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/61975
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            {
                var_12 = ((max(var_1, (arr_1 [i_1 - 1]))));
                arr_5 [i_0] = 41954;
                arr_6 [5] = 35676;
            }
        }
    }
    /* LoopNest 3 */
    for (int i_2 = 0; i_2 < 1;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 18;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 18;i_4 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 18;i_5 += 1)
                    {
                        for (int i_6 = 3; i_6 < 16;i_6 += 1)
                        {
                            {
                                arr_21 [i_2] [i_3] [i_2] [i_2] [i_2] = (((((arr_18 [i_6] [2] [i_5] [i_4] [i_3] [i_2] [i_2]) | var_9))) ? 2067 : ((var_5 ? ((var_10 ? var_9 : var_3)) : var_6)));
                                var_13 = ((arr_18 [i_2] [i_2] [i_4] [i_5] [i_6 + 1] [i_6 + 2] [i_2]) + (0 / 1));
                            }
                        }
                    }
                    var_14 = (min(var_14, (max((max((max(var_1, var_10)), (var_5 * var_0))), ((((((1 / (arr_13 [i_4])))) + ((var_8 ? (arr_15 [12] [i_3]) : var_5)))))))));
                }
            }
        }
    }
    #pragma endscop
}
