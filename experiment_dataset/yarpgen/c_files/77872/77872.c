/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 77872
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=77872 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/77872
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = ((-(((((var_15 ? 0 : var_2))) ? 188472988 : ((min(var_4, var_12)))))));
    var_19 = var_16;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            {
                arr_6 [i_0] [10] [i_1] = ((((((arr_4 [i_0]) ? var_6 : (max((arr_2 [i_1] [i_1]), (arr_4 [i_1])))))) || (((-var_1 ? var_10 : (arr_5 [i_0] [i_0]))))));
                arr_7 [7] [9] = (max((((4106494307 ? -32760 : 1))), (min(((var_11 ? (arr_0 [i_1]) : var_9)), ((~(arr_0 [18])))))));
                /* LoopNest 2 */
                for (int i_2 = 2; i_2 < 20;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 22;i_3 += 1)
                    {
                        {
                            var_20 = (min(((-17199 ? (arr_8 [i_0] [9] [i_2 + 1] [9]) : (((arr_4 [7]) ? var_10 : var_3)))), (max(var_1, ((var_6 ? var_3 : (arr_3 [i_0] [i_0])))))));

                            for (int i_4 = 2; i_4 < 20;i_4 += 1)
                            {
                                var_21 = (((min(-var_5, ((0 - (arr_12 [i_0] [i_0] [i_0] [i_0] [i_0])))))) ? (arr_0 [i_0]) : (arr_13 [i_2]));
                                arr_14 [0] [i_2] [i_4] = ((((max((arr_2 [i_1] [i_3]), ((1 ? 0 : 4106494307))))) ? (((~(arr_10 [i_0] [i_1] [i_2] [i_2 - 2] [i_4 - 2])))) : ((-((2683371025 % (arr_0 [i_2])))))));
                                arr_15 [i_4] [i_0] [i_2] [i_2] [i_0] [i_2] = var_3;
                            }
                            arr_16 [i_0] [i_1] [i_1] [i_2] [i_3] = max((max(var_10, (((arr_5 [18] [i_0]) ? var_9 : 58)))), ((((arr_9 [19] [19] [i_2]) || (((~(arr_3 [i_0] [i_0]))))))));
                            arr_17 [i_0] [i_0] [i_2] [i_2] [i_3] = (((arr_8 [i_0] [i_1] [i_1] [i_3]) ? ((~(~var_8))) : (((((max((arr_4 [i_2]), (arr_1 [13])))) & (~var_15))))));
                        }
                    }
                }
                arr_18 [i_0] [i_0] = (arr_2 [i_0] [i_1]);
            }
        }
    }
    var_22 = (max(var_5, var_10));
    #pragma endscop
}
