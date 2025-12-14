/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 68238
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=68238 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/68238
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = ((((max(var_0, (6501622047297943287 - 55536)))) ? ((39 ? ((min(var_5, -1246515467))) : (max(var_9, -6301408736094406454)))) : var_3));
    var_14 = ((-(max(-var_8, 1246515467))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            {
                arr_4 [i_0] [i_0] = 112;
                arr_5 [i_0] [i_0] [i_0] = (((!((min(1, -982433153))))) ? (((max((arr_1 [i_1] [i_0]), 1246515448)) ^ (!-1246515452))) : 42580);
            }
        }
    }
    #pragma endscop
}
