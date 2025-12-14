/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 7306
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=7306 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/7306
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (178 ? -106 : 178);
    var_14 -= 1548457002;
    var_15 = (min(var_12, var_2));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 19;i_2 += 1)
            {
                {
                    var_16 ^= (((((var_7 ? var_3 : var_3))) ? ((var_12 ? 13108490268352084285 : 8)) : (((94 ? 64 : 254)))));
                    var_17 ^= ((((((((64 ? 992147860 : 4064))) ? -30 : ((64 ? -992147875 : 107))))) ? ((((127 ? 13 : var_3)))) : 865564941031611864));
                }
            }
        }
    }
    var_18 = var_8;
    #pragma endscop
}
