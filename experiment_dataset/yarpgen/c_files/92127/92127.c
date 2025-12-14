/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 92127
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=92127 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/92127
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            {
                arr_6 [i_0 + 2] [i_1] = arr_0 [i_0];
                arr_7 [i_1] [i_0 + 3] [i_0] = ((1 ? (max((max(-5875871075961067871, -5867574480726726585)), (5867574480726726584 || 5875871075961067870))) : (arr_0 [i_0 + 3])));
            }
        }
    }
    var_17 = ((-34680 ? var_12 : (max((((var_3 ? var_12 : var_9))), 5875871075961067870))));
    var_18 = ((3723630514 ? -5867574480726726584 : -5875871075961067871));
    #pragma endscop
}
