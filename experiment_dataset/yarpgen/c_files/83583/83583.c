/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 83583
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=83583 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/83583
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_17 = ((min(((var_2 ? 1 : (arr_0 [i_0 + 4] [i_0 + 4])), 155))));
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 20;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 20;i_4 += 1)
                        {
                            {
                                arr_14 [i_0] [i_0] [i_0] [i_0] = (((!var_8) ? ((1 ? ((max(var_0, 1))) : var_11)) : ((((max(var_10, 162))) ? ((min(1, var_9))) : 0))));
                                arr_15 [i_0 + 4] [i_1] [i_2] [i_1] [i_4] [i_3] [i_0] = ((((((((var_12 ? var_2 : (arr_0 [i_0] [i_0])))) ? ((0 ? (arr_11 [i_0] [i_0] [i_4]) : (arr_9 [i_0 + 1] [i_0 + 1] [i_0] [i_4]))) : ((1 ^ (arr_10 [i_0])))))) ? ((max((arr_1 [i_0]), (max(var_1, (arr_8 [i_0] [i_0] [i_0 + 1] [i_0])))))) : (min((var_14 - var_1), (arr_7 [i_0 + 4] [i_0 + 3])))));
                            }
                        }
                    }
                }
                /* LoopNest 3 */
                for (int i_5 = 0; i_5 < 1;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 1;i_6 += 1)
                    {
                        for (int i_7 = 1; i_7 < 19;i_7 += 1)
                        {
                            {
                                var_18 += var_12;
                                var_19 = ((-(((((var_4 + (arr_9 [i_0 + 1] [i_0 + 1] [i_0] [i_0])))) ? var_8 : ((min((arr_7 [i_0] [i_0]), (arr_20 [1] [1] [1] [i_6] [i_6]))))))));
                                arr_22 [i_0] [i_1] [i_1] = (((((arr_9 [i_0 + 2] [i_7 - 1] [i_0] [i_7]) ? (arr_9 [i_0 + 2] [i_7 - 1] [i_0] [i_7]) : (arr_9 [i_0 + 2] [i_7 - 1] [i_0] [i_0]))) * (arr_9 [i_0 + 2] [i_7 - 1] [i_0] [i_7 - 1])));
                            }
                        }
                    }
                }
            }
        }
    }
    var_20 = (((var_1 ? var_7 : var_9)));
    var_21 = ((230 ? var_8 : var_2));
    var_22 = ((((max((~var_7), -1))) ? ((min((min(var_10, 1)), (var_14 > 1)))) : var_3));
    #pragma endscop
}
