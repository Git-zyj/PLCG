/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 79400
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=79400 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/79400
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (((((var_7 ? var_1 : ((var_2 ? var_10 : var_8))))) ? ((var_6 ? -1 : (min(-213852859, 1623653402)))) : -172));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    arr_7 [i_2] [i_1] [i_0] = ((-793 ? (var_1 | var_8) : (max((min(var_0, (arr_2 [i_2]))), 8617))));
                    var_16 = (arr_3 [8]);
                    var_17 = (min(var_17, -9524384375598454545));
                }
            }
        }
    }
    #pragma endscop
}
