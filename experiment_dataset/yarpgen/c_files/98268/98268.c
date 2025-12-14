/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 98268
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=98268 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/98268
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = var_3;
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 16;i_2 += 1)
            {
                {
                    var_19 *= ((((((arr_0 [3]) ? (~255) : (arr_1 [i_0 - 1])))) ? ((-(((arr_2 [i_0]) / var_8)))) : (((arr_7 [i_0 + 2] [i_0 + 2] [i_1] [i_0 + 2]) / (arr_7 [i_0 + 2] [i_0 + 2] [i_0 + 2] [10])))));
                    var_20 = ((((((arr_0 [i_0 + 1]) + (arr_0 [i_0 + 1])))) ? (max((arr_0 [i_0 + 1]), (arr_0 [i_0 + 1]))) : (((arr_0 [i_0 + 1]) ? 253 : (arr_0 [i_0 + 1])))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 16;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 16;i_4 += 1)
                        {
                            {
                                arr_16 [i_4] [i_4] [i_4] [i_2] [i_4] [3] [3] = ((var_13 | ((var_9 ? ((var_8 ^ (arr_9 [i_0] [i_0] [i_3] [i_4]))) : (arr_5 [i_0] [i_1] [i_3] [i_4])))));
                                arr_17 [11] [i_1] [i_4] [i_3] [i_4] = (max((max((arr_12 [i_0] [i_0 + 1] [i_0] [i_0 - 1] [i_0 + 1] [i_0] [i_0 + 2]), (arr_12 [i_0] [i_0 + 1] [i_0] [i_0] [i_0] [14] [i_0 + 2]))), ((60 ? var_16 : 1702147478))));
                                var_21 = (min(var_21, var_6));
                            }
                        }
                    }
                }
            }
        }
    }
    var_22 = (max((max(((max(var_0, (-127 - 1)))), (~var_13))), ((var_6 ? (var_14 ^ 78) : (var_8 & var_1)))));
    var_23 = (max(var_23, var_14));
    #pragma endscop
}
