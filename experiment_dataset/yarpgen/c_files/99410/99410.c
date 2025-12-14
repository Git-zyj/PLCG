/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 99410
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=99410 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/99410
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            {
                var_11 = (((~164) <= ((((arr_0 [i_0]) != (arr_0 [i_0]))))));
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 21;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 20;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 21;i_4 += 1)
                        {
                            {
                                var_12 = ((min(((138 ? -1688854097 : 16), -1688854103))));
                                var_13 = ((((((~-1688854097) <= 1688854103))) + -1688854099));
                            }
                        }
                    }
                }
            }
        }
    }
    var_14 = var_6;
    var_15 = var_5;
    #pragma endscop
}
