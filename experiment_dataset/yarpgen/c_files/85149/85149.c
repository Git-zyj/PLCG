/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 85149
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=85149 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/85149
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (((((max(2090, var_15)) | ((var_13 ? var_15 : var_11))))));
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 3; i_3 < 15;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 16;i_4 += 1)
                        {
                            {
                                arr_11 [i_0] [i_4] [i_4] [i_3] [i_0] [i_1] = (min(1, ((var_14 ? (arr_2 [i_1] [i_0]) : (((((arr_4 [i_0]) && (arr_8 [3] [3] [i_2] [i_3 - 2] [i_3 - 2] [i_2])))))))));
                                var_20 = (arr_10 [i_4] [i_4] [i_3 - 1] [i_0 + 1]);
                            }
                        }
                    }
                    var_21 = (arr_5 [0] [i_1] [i_0 + 2] [i_0]);
                    arr_12 [i_2] [i_0] [i_0] [4] = var_9;
                }
            }
        }
    }
    var_22 = (var_0 < var_7);
    #pragma endscop
}
