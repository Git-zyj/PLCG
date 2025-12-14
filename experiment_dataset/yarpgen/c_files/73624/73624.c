/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 73624
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=73624 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/73624
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = 49;
    var_19 &= ((var_5 ? var_12 : (((-((0 ? var_9 : 0)))))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 19;i_1 += 1)
        {
            {
                var_20 = ((((((~0) ^ (((~(arr_0 [i_0]))))))) ? ((var_4 % (arr_1 [i_0 + 3]))) : var_8));
                var_21 = ((((arr_0 [i_0]) ? 222 : (-4505907167907562200 && 0))));
            }
        }
    }
    var_22 = (max(var_22, var_16));
    #pragma endscop
}
