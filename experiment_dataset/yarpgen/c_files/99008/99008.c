/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 99008
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=99008 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/99008
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 14;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 14;i_4 += 1)
                        {
                            {
                                var_14 = ((30195 > (((arr_9 [i_1] [i_1] [i_1 - 1] [i_3] [i_1]) ? var_12 : (arr_7 [i_1] [i_1] [i_1 - 1] [i_1 + 1])))));
                                var_15 = (max(var_15, (arr_11 [i_2] [i_0])));
                                var_16 -= (((arr_9 [i_0] [i_1 - 1] [i_1 + 1] [i_1 + 1] [i_4]) && ((((arr_9 [i_1 - 1] [i_1 + 1] [i_1 - 1] [i_1 + 1] [i_1]) ? -32749 : -1759607232)))));
                                var_17 = ((~(arr_7 [13] [i_1] [i_1 - 1] [i_1 + 1])));
                            }
                        }
                    }
                    var_18 = (-(((((30203 ? var_8 : var_1))) ? ((min((arr_6 [i_0] [i_0] [i_0]), 32739))) : ((~(arr_9 [i_0] [i_0] [i_0] [i_0] [i_0]))))));
                    arr_13 [i_1 - 1] [i_0] = ((((arr_11 [i_0] [i_1 - 1]) < var_7)));
                }
            }
        }
    }
    var_19 = var_2;
    var_20 = (!var_11);
    #pragma endscop
}
