/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 98100
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=98100 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/98100
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 10;i_2 += 1)
            {
                {
                    var_20 = 426786308;
                    var_21 = var_18;
                }
            }
        }
    }
    var_22 = ((var_5 ? (min(((49391 ? 3868180976 : var_4)), var_10)) : (((((3868180959 | var_19) > var_0))))));
    var_23 = (max((65535 | 1), ((((var_18 << (var_11 - 64260))) << (((-32756 + 32778) - 14))))));
    #pragma endscop
}
