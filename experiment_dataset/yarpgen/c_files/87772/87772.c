/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 87772
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=87772 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/87772
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 *= var_12;
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 18;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 18;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 18;i_4 += 1)
                        {
                            {
                                var_15 = var_3;
                                arr_17 [i_0] [i_1] [i_2] [i_3] [i_4] = (min((min(var_6, ((min(var_8, var_8))))), (min(var_6, var_13))));
                                var_16 = (min((min(var_2, var_3)), var_12));
                                var_17 = (min(var_17, var_12));
                            }
                        }
                    }
                }
                arr_18 [i_0 - 2] [i_0] = (min((min(var_12, var_11)), ((min(var_1, var_13)))));
            }
        }
    }
    var_18 = var_9;
    var_19 = var_0;
    #pragma endscop
}
