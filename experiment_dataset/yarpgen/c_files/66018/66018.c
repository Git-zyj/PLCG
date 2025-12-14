/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 66018
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=66018 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/66018
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 15;i_1 += 1)
        {
            {
                arr_6 [i_0] [4] = var_1;
                var_12 = ((var_1 ? (((((1 ? var_4 : 171))) ? ((min(var_1, var_5))) : var_3)) : ((((min(var_9, (arr_4 [i_0] [i_1])))) ? (arr_1 [8]) : ((var_10 ? (arr_2 [i_0]) : var_9))))));
                var_13 = ((((((var_8 ? 1 : var_5)) ? var_0 : var_9))));
                /* LoopNest 3 */
                for (int i_2 = 2; i_2 < 14;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 13;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 16;i_4 += 1)
                        {
                            {
                                arr_15 [i_0] [i_0] [i_0] [7] [i_0] [i_3] [i_0] = ((((((arr_4 [i_3 - 1] [i_1 - 3]) ? var_11 : (arr_4 [i_3 + 2] [i_1 + 1])))) ? ((var_5 ? var_2 : 17592186044415)) : (((max((arr_5 [i_3 - 1] [i_2 + 2] [i_1 - 1]), var_6))))));
                                var_14 = (min(var_14, (arr_12 [i_0] [i_0] [1] [i_0] [i_0])));
                            }
                        }
                    }
                }
            }
        }
    }
    var_15 = (max((-2147483647 - 1), -1983));
    var_16 = (((((((var_11 ? var_5 : (-2147483647 - 1))) + -16015))) ? var_10 : ((1 ? (-789141061234546823 || 50) : ((min(var_5, var_9)))))));
    var_17 = (min(((var_8 ? 0 : ((var_2 ? var_8 : 0)))), (((-(max(var_4, var_6)))))));
    var_18 = var_1;
    #pragma endscop
}
