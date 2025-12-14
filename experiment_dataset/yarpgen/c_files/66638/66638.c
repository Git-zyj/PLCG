/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 66638
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=66638 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/66638
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            {
                var_17 = -13491;
                var_18 = (max(var_18, ((((17450896482522989410 >= var_16) >= (14390641918111756428 && 14390641918111756428))))));
            }
        }
    }
    var_19 = (var_4 != var_6);
    #pragma endscop
}
