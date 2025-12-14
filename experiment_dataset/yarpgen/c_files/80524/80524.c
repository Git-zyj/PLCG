/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 80524
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=80524 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/80524
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 *= max((((((var_13 ? var_3 : var_16))) ? (((5180253639181237279 ? var_15 : var_0))) : (max(5180253639181237293, var_0)))), var_7);
    var_20 = (var_1 ? (max((max(var_5, var_16)), 2)) : var_6);
    var_21 = var_2;
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 21;i_1 += 1)
        {
            {
                var_22 = (arr_4 [i_0 - 1] [i_0]);
                var_23 = (arr_1 [i_1]);
            }
        }
    }
    var_24 = var_0;
    #pragma endscop
}
