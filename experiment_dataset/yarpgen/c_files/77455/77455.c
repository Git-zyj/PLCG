/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 77455
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=77455 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/77455
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 20;i_2 += 1)
            {
                {
                    arr_10 [i_2] [i_1 - 1] [i_1 + 4] [i_0] = arr_4 [i_0] [i_1] [i_2];
                    var_19 = var_18;
                }
            }
        }
    }
    var_20 = (((((((var_12 ? 5788003432613798948 : var_10)) / ((var_13 ? var_9 : var_11))))) ? var_7 : (max(var_6, (min(-16384, var_10))))));
    /* LoopNest 2 */
    for (int i_3 = 0; i_3 < 14;i_3 += 1)
    {
        for (int i_4 = 2; i_4 < 13;i_4 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_5 = 3; i_5 < 12;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 14;i_6 += 1)
                    {
                        for (int i_7 = 2; i_7 < 12;i_7 += 1)
                        {
                            {
                                arr_24 [i_5] [i_7 - 2] [i_5 + 1] [i_5 + 1] [1] [i_5] [i_5] = (((-1 ? 1588 : 8885359611458407035)) - var_15);
                                var_21 = (max((arr_4 [i_5 - 3] [i_5 - 3] [i_7]), (((arr_1 [i_6] [i_4]) - (arr_4 [i_3] [i_3] [i_3])))));
                            }
                        }
                    }
                }
                arr_25 [i_3] = (((((var_9 > (arr_12 [i_3] [i_3]))) ? (arr_2 [i_4] [i_4 + 1] [i_4]) : (((arr_9 [i_4 + 1] [i_3]) ? (arr_22 [i_4] [2] [6] [i_4]) : (arr_23 [i_3]))))));
            }
        }
    }
    #pragma endscop
}
