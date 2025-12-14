/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 71395
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=71395 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/71395
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 20;i_2 += 1)
            {
                {

                    for (int i_3 = 3; i_3 < 19;i_3 += 1)
                    {
                        arr_13 [i_0] [i_1] [i_1] [i_3] = (((arr_5 [i_0] [i_1 - 3]) * var_2));
                        arr_14 [i_0] [i_0] [i_2] [i_0] = ((255 == (min(((3595699214 >> (var_2 + 9673))), (min(var_9, (arr_11 [i_0] [15] [i_0] [i_3])))))));
                    }
                    for (int i_4 = 1; i_4 < 18;i_4 += 1)
                    {
                        arr_17 [i_4 + 2] [i_0] [i_0] [i_0] = (((min((min((arr_15 [i_1 - 4] [i_0]), (arr_11 [i_4] [i_2] [i_0] [i_0]))), (var_5 && var_11))) << ((((min(4195936285, -8370986292917481851))) + 8370986292917481855))));
                        arr_18 [i_0] [i_1] [i_0] [15] [i_4] [i_0] = ((8370986292917481850 ? ((((arr_8 [i_0] [i_1 - 3] [i_2] [i_4 + 2]) ? var_4 : (arr_3 [i_0] [i_4 - 1])))) : (((var_0 ? var_0 : 8370986292917481850)))));
                    }
                    var_14 = (min(var_14, var_8));
                    var_15 = (arr_1 [i_0 - 1]);
                    arr_19 [i_0] [i_0] [i_2] = (((arr_4 [17] [i_1 - 4]) / 8370986292917481864));
                }
            }
        }
    }
    var_16 = (max(var_9, (min(var_8, (!var_8)))));
    #pragma endscop
}
