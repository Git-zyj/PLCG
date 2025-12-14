/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 85381
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=85381 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/85381
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 20;i_1 += 1)
        {
            {
                arr_6 [i_1] = -15;
                var_12 = var_5;
            }
        }
    }
    var_13 = var_9;
    #pragma endscop
}
