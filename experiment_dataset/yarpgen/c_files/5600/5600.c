/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 5600
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=5600 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/5600
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (((((((var_6 ? var_15 : var_13))) || (((var_8 ? var_15 : var_9))))) ? 1695149030 : 26631));
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 12;i_1 += 1)
        {
            {
                var_21 = (((32767 ? -32767 : 567522260)) >= 32767);
                var_22 ^= (0 - 56977);
            }
        }
    }
    #pragma endscop
}
