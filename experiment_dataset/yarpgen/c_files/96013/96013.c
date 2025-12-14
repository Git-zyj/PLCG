/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 96013
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=96013 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/96013
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = var_9;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 19;i_2 += 1)
            {
                {
                    var_14 = (max(((max(var_1, 65535))), (((!(arr_1 [i_2]))))));
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 17;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 19;i_4 += 1)
                        {
                            {
                                arr_13 [i_0] [i_0] [i_0] [i_0] [i_2] [i_0] [i_0] = (max((~0), (((arr_9 [i_4] [i_4] [i_3 - 1] [i_3] [i_3 - 1]) ? 14680 : 8739931563391888528))));
                                var_15 = ((var_8 ? (((!var_8) ? var_9 : (~var_9))) : ((var_5 ? ((min(var_1, var_5))) : (255 * var_3)))));
                            }
                        }
                    }
                    arr_14 [i_0] [i_2] [i_0] [i_1] = (((-(arr_12 [i_0] [i_1] [i_0] [i_2] [i_2]))));
                    arr_15 [i_2] [i_2] [i_2] [i_0] = (min((arr_10 [i_0] [i_0] [i_1] [i_0]), (min(((-30882 ? (arr_11 [i_0] [i_0] [i_0] [i_0]) : 1666304620)), (((arr_11 [i_0] [i_2] [i_2] [i_0]) ? 26 : var_3))))));
                }
            }
        }
    }
    #pragma endscop
}
