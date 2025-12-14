/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 78562
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=78562 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/78562
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (min(((min(var_9, ((var_0 ? var_12 : var_1))))), (min(((var_8 ? var_10 : var_7)), var_3))));
    var_15 = (var_4 ? 18211120105748449134 : 199);
    var_16 = (((!var_12) ? (min(((min(68, var_6))), (min(var_0, var_8)))) : var_8));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_17 = (~var_12);
                var_18 = var_10;
            }
        }
    }
    #pragma endscop
}
