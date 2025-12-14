/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 93410
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=93410 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/93410
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (max(var_15, 9223372036854775807));
    var_16 *= (min((((((9223372036854775807 ? 1 : 9223372036854775807))) ? ((min(0, var_9))) : 16368)), var_14));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 8;i_1 += 1)
        {
            {
                arr_7 [i_0] = ((var_12 ? var_13 : -9203286533262717865));
                var_17 -= (arr_5 [i_0] [3]);
            }
        }
    }
    var_18 = var_2;
    #pragma endscop
}
