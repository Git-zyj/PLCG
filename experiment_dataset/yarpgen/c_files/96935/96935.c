/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 96935
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=96935 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/96935
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 17;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 17;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 17;i_4 += 1)
                        {
                            {
                                var_13 = (min(var_13, var_11));
                                arr_12 [8] [i_0] [i_0] [i_0] = var_8;
                                arr_13 [i_0] [i_1] [i_2] [i_0] [8] = (4294967293 && 133);
                            }
                        }
                    }
                    var_14 = (min(118, var_4));
                }
            }
        }
    }
    var_15 = (!var_2);
    var_16 *= var_2;
    var_17 = (!var_5);
    var_18 = (max((((!((min(36, 0)))))), -3404997007099214876));
    #pragma endscop
}
