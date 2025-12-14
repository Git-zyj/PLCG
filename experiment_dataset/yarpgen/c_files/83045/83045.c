/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 83045
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=83045 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/83045
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_10;
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 16;i_2 += 1)
            {
                {
                    var_15 = ((!(arr_4 [i_0 - 2] [i_0 + 2] [i_0])));
                    var_16 ^= (var_8 ? ((1 ? 4611685984067649536 : var_9)) : (((-27022 ? -12 : 961709230))));
                }
            }
        }
    }
    #pragma endscop
}
