/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 87762
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=87762 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/87762
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
                var_19 = -1762983029482354421;
                var_20 = var_12;
            }
        }
    }
    var_21 |= ((var_8 ? (((-1762983029482354417 ? 33688 : 1362157978))) : (((30398 ? (16 % var_15) : (-9125251364088487478 || 232))))));
    var_22 = (!1);
    var_23 = -1985860256566413426;
    #pragma endscop
}
