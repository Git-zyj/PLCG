/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 90603
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=90603 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/90603
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            {
                var_16 -= (max(var_11, var_6));
                var_17 = var_11;
                var_18 |= (min(-8, -22451));
            }
        }
    }
    var_19 = (min((min(127, var_13)), var_6));
    #pragma endscop
}
