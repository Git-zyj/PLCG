/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 84645
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=84645 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/84645
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = var_2;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 20;i_1 += 1)
        {
            {
                var_19 = (min((min((arr_1 [i_1 + 2]), 13504682128624392550)), -var_9));
                arr_4 [i_0] [i_1] [i_1] = (!47677);
                /* LoopNest 2 */
                for (int i_2 = 3; i_2 < 19;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 22;i_3 += 1)
                    {
                        {
                            arr_10 [i_3] [i_3] [i_1] [i_3] [i_0] |= ((((17858 / (min(50, -7973036317017168771)))) >= var_8));
                            var_20 -= (min((((arr_2 [i_1] [i_1 + 1] [i_1 + 1]) + (arr_6 [i_0] [i_3] [i_3] [i_3]))), (~var_7)));
                            arr_11 [i_1] [i_1] [i_2] [i_3] = -7973036317017168760;
                        }
                    }
                }
                var_21 = var_2;
            }
        }
    }
    #pragma endscop
}
