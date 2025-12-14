/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 79113
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=79113 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/79113
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = var_9;
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 21;i_2 += 1)
            {
                {
                    arr_8 [i_1] [14] [i_1] [i_2 - 3] = 3;
                    var_17 = ((((max(33423360, 33423360))) ? var_8 : 1708443617689628898));
                }
            }
        }
    }
    #pragma endscop
}
