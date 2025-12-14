/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 73470
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=73470 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/73470
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (max(((var_13 ? var_6 : (37114 * var_10))), var_3));
    var_15 = (((!var_10) ? var_5 : var_0));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 18;i_1 += 1)
        {
            {
                var_16 = var_5;
                var_17 ^= ((-(((!var_12) ? -var_10 : -var_7))));
                var_18 = (min(var_18, (((60084 ? 10 : 9)))));
                /* LoopNest 3 */
                for (int i_2 = 4; i_2 < 21;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 22;i_3 += 1)
                    {
                        for (int i_4 = 3; i_4 < 21;i_4 += 1)
                        {
                            {
                                var_19 ^= (!-37114);
                                arr_11 [i_4] [19] [i_2] [i_1] [i_0] = ((var_11 > (!13633714906994469467)));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
