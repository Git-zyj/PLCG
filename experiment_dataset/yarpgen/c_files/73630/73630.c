/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 73630
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=73630 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/73630
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (((((var_10 ? (!1) : (!var_9)))) ? var_6 : ((min(((min(var_5, 29457))), (min(var_13, var_11)))))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 1;i_2 += 1)
            {
                {
                    var_18 = (max(var_18, (((min((min(3873492533, -29457)), 62))))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 24;i_4 += 1)
                        {
                            {
                                arr_16 [i_0] [i_1] [i_1] [i_3] [i_4] = (max((((((max(var_4, var_8)))) * ((var_12 ? var_10 : 29457)))), var_10));
                                var_19 = var_8;
                                arr_17 [8] [i_4] [i_2] [i_3] [i_4] [1] [23] = var_16;
                                var_20 = (!var_14);
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
