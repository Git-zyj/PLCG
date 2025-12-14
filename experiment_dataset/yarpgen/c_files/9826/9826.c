/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 9826
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=9826 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/9826
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 10;i_0 += 1)
    {
        arr_4 [i_0 + 1] = ((((min(var_7, (arr_1 [i_0] [i_0 - 1])))) != (((((var_3 << (((arr_2 [i_0 + 1]) - 46)))) > ((var_0 ? 19398 : var_4)))))));
        arr_5 [i_0] [6] = (((arr_3 [i_0 + 1] [i_0 - 1]) ? (arr_3 [4] [4]) : (((-13765 ? var_6 : ((231 ? var_13 : var_5)))))));
    }
    /* LoopNest 3 */
    for (int i_1 = 0; i_1 < 16;i_1 += 1)
    {
        for (int i_2 = 0; i_2 < 16;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 16;i_3 += 1)
            {
                {
                    var_16 = (max(((~(arr_12 [5] [i_2] [i_1] [i_1]))), var_4));
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 16;i_4 += 1)
                    {
                        for (int i_5 = 1; i_5 < 14;i_5 += 1)
                        {
                            {
                                var_17 = var_1;
                                arr_17 [i_1] [i_2] [i_1] [i_4] [i_1] = (max(-19413, -19399));
                            }
                        }
                    }

                    for (int i_6 = 0; i_6 < 16;i_6 += 1)
                    {
                        arr_20 [7] [7] [7] [i_6] [7] = ((((((arr_19 [i_1] [i_2] [3] [3]) / (arr_19 [i_2] [3] [i_2] [i_2])))) ? (((arr_19 [i_1] [i_2] [i_3] [i_6]) & (arr_19 [i_1] [11] [i_1] [i_6]))) : ((max(127, -1)))));
                        arr_21 [i_1] [5] [i_3] [i_6] = ((((((var_6 - var_14) >> ((((max(231, var_9))) - 201))))) ? (((var_0 >= (((arr_9 [i_2]) ? var_2 : (arr_6 [i_1])))))) : 60));
                    }
                    for (int i_7 = 2; i_7 < 15;i_7 += 1)
                    {
                        arr_25 [i_7] [i_7] [i_7 - 2] [i_7 - 2] [i_7 + 1] = (((min(var_0, 41)) < (arr_14 [i_1])));
                        arr_26 [i_1] [i_1] [i_1] = (((arr_19 [i_1] [i_1] [i_1] [i_1]) ? ((~(arr_19 [i_1] [i_2] [i_2] [i_7 + 1]))) : (((arr_14 [i_1]) >> (176 - 154)))));
                        var_18 = ((((((max((arr_7 [i_1]), var_8))) ? (min(-19417, (arr_6 [i_1]))) : (arr_19 [7] [7] [i_7 - 1] [i_7 - 2]))) <= (((((max(var_7, var_7))) % (arr_23 [i_1] [i_2] [9] [9]))))));
                        arr_27 [i_1] [i_1] = (max((((arr_15 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1]) < ((max(var_5, var_13))))), ((((28836 ? 19398 : 231)) < (~var_6)))));
                    }
                }
            }
        }
    }
    #pragma endscop
}
