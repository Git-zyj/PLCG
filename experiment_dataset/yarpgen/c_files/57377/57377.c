/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 57377
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=57377 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/57377
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            {
                var_14 = ((((min((((var_5 ? var_4 : var_2))), (arr_1 [i_1] [i_1])))) ? ((min(var_12, var_4))) : (((-9223372036854775807 - 1) ? (-9223372036854775807 - 1) : 8444))));
                var_15 = (min(var_15, ((-(max(0, 3007708405))))));
            }
        }
    }
    var_16 = ((((((~var_1) | (~var_13)))) ? var_3 : var_4));
    #pragma endscop
}
