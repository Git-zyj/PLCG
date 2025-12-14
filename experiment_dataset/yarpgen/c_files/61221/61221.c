/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 61221
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=61221 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/61221
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_16 = (((~var_0) && var_7));
                arr_5 [21] [21] = (max((((11891558734429362893 & var_11) ? (max(var_0, (-2147483647 - 1))) : -681597426)), var_5));
                arr_6 [i_0] [i_0] = -850196190;
                var_17 = -285903306;
                var_18 *= (max(((((max(var_15, 59))) ? (~var_1) : var_9)), -var_11));
            }
        }
    }
    var_19 = ((28 >= ((~(-2147483647 - 1)))));
    #pragma endscop
}
