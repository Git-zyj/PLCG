/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 89437
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=89437 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/89437
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 4; i_2 < 23;i_2 += 1)
            {
                {
                    var_12 = min((max((arr_0 [i_1 - 1] [i_1 - 1]), (arr_6 [i_2] [i_2 - 4] [i_2] [i_1 - 1]))), 1);
                    var_13 = ((((((arr_6 [i_2 + 1] [i_2] [1] [i_2]) ? var_5 : var_6))) ? (arr_6 [i_2 + 1] [i_2] [i_2] [i_2 - 1]) : ((var_7 ? (arr_6 [i_2 + 1] [i_2] [i_2] [i_2 + 1]) : var_6))));
                    var_14 -= (max((arr_4 [i_1 + 1] [i_0]), ((max(var_2, (arr_6 [19] [i_0] [i_2 - 4] [i_1 + 1]))))));
                    var_15 = 1861181461453064430;
                    /* LoopNest 2 */
                    for (int i_3 = 3; i_3 < 21;i_3 += 1)
                    {
                        for (int i_4 = 4; i_4 < 23;i_4 += 1)
                        {
                            {
                                var_16 = (((arr_9 [i_0] [i_3] [i_3 + 2] [i_2 - 1]) ? (((arr_0 [i_2] [i_3 - 3]) ^ ((min(var_5, var_5))))) : ((max((arr_3 [i_2 - 1] [i_1 - 1]), var_5)))));
                                arr_12 [i_0] [i_0] [i_3] [i_0] [i_0] = (max((((((arr_9 [i_0] [i_3] [i_1] [i_0]) | 166)))), (((-(arr_6 [i_0] [i_1] [i_1] [i_3 - 2]))))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_17 = (((var_4 ? var_3 : var_7)));
    #pragma endscop
}
