/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 73767
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=73767 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/73767
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 |= var_19;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 14;i_1 += 1)
        {
            {
                var_21 = ((-(~var_7)));
                var_22 = (~var_15);
            }
        }
    }
    var_23 = var_3;
    var_24 = (~var_0);
    var_25 = (min(var_25, (((-(~-1783085376547814000))))));
    #pragma endscop
}
