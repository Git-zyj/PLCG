/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 96844
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=96844 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/96844
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 19;i_1 += 1)
        {
            {
                arr_7 [i_0] [i_1 + 3] [i_1 - 2] &= 237;
                var_14 = -18;
            }
        }
    }
    var_15 = (min(147, var_1));
    var_16 = var_9;
    var_17 = var_0;
    var_18 = var_0;
    #pragma endscop
}
