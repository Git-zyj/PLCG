/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 79232
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=79232 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/79232
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = var_5;
    var_11 = (((((1166089510 ? var_2 : var_2))) > (((((max(var_9, 4))) <= (~var_9))))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 19;i_2 += 1)
            {
                {
                    var_12 = (min(var_12, ((max((((arr_7 [i_2 + 2] [i_1] [i_0]) / var_7)), (((arr_7 [i_0] [i_1] [i_2 - 1]) / (arr_7 [i_0] [i_0] [i_0]))))))));
                    /* LoopNest 2 */
                    for (int i_3 = 3; i_3 < 20;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 22;i_4 += 1)
                        {
                            {
                                arr_12 [i_2] = ((arr_9 [i_0] [i_0] [i_1] [i_2] [i_3] [9]) && ((max(var_1, 2388520994538839960))));
                                var_13 = (~11);
                                var_14 = var_1;
                            }
                        }
                    }
                }
            }
        }
    }
    var_15 = var_4;
    #pragma endscop
}
