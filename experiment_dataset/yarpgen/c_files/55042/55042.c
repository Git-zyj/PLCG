/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 55042
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=55042 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/55042
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = var_4;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 20;i_2 += 1)
            {
                {
                    var_11 = (((arr_3 [i_0] [i_1 - 1] [i_1 - 1]) ? (arr_1 [i_0] [i_0]) : (max(14, var_0))));

                    for (int i_3 = 4; i_3 < 19;i_3 += 1)
                    {
                        var_12 = (min(var_12, ((max(var_1, 2052589007)))));
                        arr_10 [i_0] [i_1 - 1] [i_2] [i_1 - 1] [i_3] [i_0] = (((~0) ? (max((arr_8 [i_0] [i_2]), (max((arr_3 [i_2] [i_1] [i_0]), 22)))) : ((((arr_6 [i_3] [i_2] [i_1] [i_0]) ? ((var_0 ? var_7 : 849731381)) : (arr_8 [i_0] [i_3]))))));
                        arr_11 [i_2] = 8885220010056283160;
                    }
                }
            }
        }
    }
    #pragma endscop
}
