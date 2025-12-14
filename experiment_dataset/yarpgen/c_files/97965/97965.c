/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 97965
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=97965 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/97965
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            {
                var_15 = 3503571001183940160;
                var_16 = 86;
            }
        }
    }
    var_17 = 12402;
    var_18 = (~160);
    #pragma endscop
}
