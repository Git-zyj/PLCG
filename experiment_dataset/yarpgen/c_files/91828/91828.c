/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 91828
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=91828 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/91828
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 -= (max((max(((min(var_12, var_5))), (max(var_6, var_16)))), var_15));
    var_18 = (min((max(var_14, var_10)), ((max(1831909567, 56745)))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 15;i_1 += 1)
        {
            {
                var_19 = (max((max((min(var_3, var_5)), var_15)), ((min(var_10, var_14)))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 16;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 16;i_3 += 1)
                    {
                        {
                            var_20 -= (max((min((min(var_8, var_2)), ((min(var_1, var_12))))), (max(var_6, (max(var_11, var_9))))));
                            var_21 = var_9;
                            var_22 = var_11;
                            var_23 = (max((max(((min(var_6, var_13))), (max(var_4, var_3)))), var_14));
                        }
                    }
                }

                for (int i_4 = 1; i_4 < 15;i_4 += 1)
                {
                    var_24 = var_16;
                    var_25 = (min(((max(-245616834, -1831909568))), (max(var_13, var_7))));
                    var_26 = (min(-27890, 1831909583));
                }
            }
        }
    }
    #pragma endscop
}
