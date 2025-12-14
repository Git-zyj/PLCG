/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 66682
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=66682 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/66682
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            {
                var_13 = 1091490517836805679;
                var_14 = ((1143433370 ? -758409058 : 205));
            }
        }
    }
    var_15 = (min(((var_4 ? var_8 : (max(var_1, var_3)))), (((~var_1) ? (((var_10 ? 758409046 : -94))) : (var_0 ^ var_10)))));
    var_16 = var_8;
    var_17 = var_10;
    #pragma endscop
}
