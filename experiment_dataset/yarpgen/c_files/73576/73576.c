/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 73576
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=73576 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/73576
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = var_2;
    var_11 = (-77 ? var_7 : var_9);
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 22;i_1 += 1)
        {
            {
                var_12 = ((((min((arr_2 [i_1] [i_1] [i_0 - 1]), 18))) ? var_4 : 0));
                var_13 = (-8 && var_3);
                var_14 = ((1 ? ((min(18676, -8))) : 1));
            }
        }
    }
    #pragma endscop
}
