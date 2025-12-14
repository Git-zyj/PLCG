/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 95937
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=95937 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/95937
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (max((max(var_18, var_4)), -11));
    var_21 = (max(var_21, (((max(-13237, (max(var_19, var_18))))))));
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {
                var_22 = (max(var_22, ((max((((var_10 + 9223372036854775807) >> 0)), (((var_12 << (((20 - var_17) - 655506003))))))))));
                var_23 = var_9;
            }
        }
    }
    var_24 = ((~(!var_8)));
    #pragma endscop
}
