/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 65416
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=65416 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/65416
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = ((~(~-32087)));
    var_17 = (max((((-(min(var_5, var_3))))), (-30165 / var_9)));
    var_18 = (max(var_18, (((((var_4 ? (min(var_9, 30165)) : var_4))) ? ((((!(((var_14 ? 790178023 : var_8))))))) : ((((var_4 ? var_0 : 13377)) + (((-30165 ? -13377 : -30165)))))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 17;i_1 += 1)
        {
            {
                arr_6 [i_0] [i_0] [i_1] = max(-13378, (arr_3 [i_0] [i_0]));
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 19;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 19;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 18;i_4 += 1)
                        {
                            {
                                var_19 = (((((max(2665887395, -6103504515314430570))) ? (~30164) : (((arr_2 [i_0]) ? var_0 : 4294967293)))));
                                var_20 = -30166;
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
