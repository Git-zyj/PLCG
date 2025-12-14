/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 79612
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=79612 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/79612
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            {
                var_17 = 44709;
                var_18 += ((((44709 << (var_1 - 76211300))) > 240));
            }
        }
    }
    var_19 = 293201530;
    #pragma endscop
}
