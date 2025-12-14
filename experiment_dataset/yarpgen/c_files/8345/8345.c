/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 8345
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=8345 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/8345
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = ((((((max(251, var_4))) ? var_2 : ((var_1 ? var_10 : 4)))) == ((min(var_7, var_7)))));
    var_19 = var_6;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 4; i_2 < 21;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 24;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 24;i_4 += 1)
                        {
                            {
                                var_20 = (max(var_20, (((251 ? -18461 : 251)))));
                                arr_13 [i_0] [i_0] [i_2] [i_2] [i_0] = -1;
                                arr_14 [i_1] [i_3] [i_2 - 1] [i_1] [i_0] = (min(((var_17 / (arr_12 [i_0] [i_0] [i_1] [i_2 + 2] [i_0] [i_2 + 2] [i_0]))), (arr_11 [i_0] [i_1] [i_2] [i_3] [11])));
                                var_21 = ((arr_5 [i_2 - 4]) * var_0);
                            }
                        }
                    }
                    var_22 = (((((arr_12 [i_2 - 4] [i_2] [i_2 - 4] [i_2 + 1] [i_2 + 3] [i_2 + 2] [i_2 + 3]) ? (arr_12 [i_2 - 1] [14] [i_2 + 1] [i_2 + 1] [i_2 - 1] [i_2 - 1] [i_2]) : (arr_8 [i_2 + 3] [i_2 + 3] [i_2 - 1] [i_2 + 3] [i_2 - 3] [i_2 - 1])))) ? var_11 : (((4294967295 ? (var_15 / var_16) : ((127 ? var_7 : var_2))))));
                }
            }
        }
    }
    var_23 = (((var_5 ? 1429998832210849566 : var_9)));
    var_24 = var_11;
    #pragma endscop
}
