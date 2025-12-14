/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 9833
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=9833 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/9833
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 21;i_1 += 1)
        {
            {
                var_20 -= -4987279946109334254;
                var_21 = 1;
            }
        }
    }
    var_22 |= var_16;
    var_23 = ((var_7 ? ((var_3 ? ((var_11 ? var_6 : var_9)) : var_4)) : var_9));
    var_24 = var_2;
    #pragma endscop
}
