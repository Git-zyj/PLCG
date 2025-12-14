/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 96883
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=96883 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/96883
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 14;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 13;i_3 += 1)
                    {
                        {
                            var_20 = (arr_4 [i_2] [i_1] [i_2] [i_0]);
                            var_21 *= ((-(max(12641585255491409243, 5805158818218142375))));
                            var_22 = ((-100 * (!19048)));
                        }
                    }
                }
                arr_8 [i_0] = ((12641585255491409244 * (((~(var_18 - 1315196695))))));
            }
        }
    }
    var_23 = 5805158818218142392;
    #pragma endscop
}
