/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 66281
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=66281 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/66281
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 |= var_15;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 18;i_2 += 1)
            {
                {
                    var_17 = arr_9 [11] [i_1] [i_0];
                    var_18 = (arr_9 [7] [i_2] [i_2 + 2]);
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 17;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 19;i_4 += 1)
                        {
                            {
                                var_19 = (arr_3 [i_3 + 3] [i_4 - 1]);
                                var_20 = (arr_9 [i_3 - 1] [i_1] [i_0]);
                                arr_17 [i_3] [i_3] [i_3] = (arr_12 [i_3] [i_3] [i_3] [i_0]);
                            }
                        }
                    }
                }
            }
        }
    }
    var_21 = ((var_1 ? (!var_2) : ((var_11 ? (!var_3) : var_8))));
    var_22 = var_8;
    var_23 = var_10;
    #pragma endscop
}
