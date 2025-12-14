/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 87724
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=87724 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/87724
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 15;i_1 += 1)
        {
            {
                arr_6 [i_0] [11] [i_1] = -1299441638;
                var_15 *= -498149263058590508;
            }
        }
    }
    var_16 -= 56;
    var_17 = ((((min((2 + -2676145416727549173), (1299441612 - var_12)))) ? var_12 : -var_8));
    #pragma endscop
}
