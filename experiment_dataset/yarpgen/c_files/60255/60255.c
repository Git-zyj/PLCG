/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 60255
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=60255 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/60255
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (((((max(var_10, -677546010)))) ? (min((min(var_5, var_4)), (((-677546010 ? 0 : var_16))))) : (((((var_8 ? var_1 : var_10)))))));
    var_18 = (((max(1, (~var_9)))) ? ((var_8 ? -10841 : var_11)) : (!var_16));
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 21;i_2 += 1)
            {
                {
                    var_19 = var_8;
                    arr_10 [20] [i_0] [i_1] = (min(-1195425807, 255));
                }
            }
        }
    }
    #pragma endscop
}
