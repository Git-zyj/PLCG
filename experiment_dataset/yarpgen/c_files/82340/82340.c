/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 82340
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=82340 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/82340
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
                var_10 = ((~var_9) | -39890);
                var_11 = var_4;
                var_12 += (~var_9);
            }
        }
    }
    var_13 = (var_7 && var_5);
    #pragma endscop
}
