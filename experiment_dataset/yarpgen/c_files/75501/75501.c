/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 75501
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=75501 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/75501
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = ((var_2 ? var_7 : var_8));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 15;i_2 += 1)
            {
                {
                    var_12 ^= ((((var_0 ? ((var_8 ? var_9 : var_5)) : (max(var_1, var_10))))) ? (max(((min(237, 237))), var_1)) : ((var_4 ? var_6 : var_8)));
                    var_13 = ((22 ? (max(((min(var_9, var_0))), var_4)) : var_2));
                    var_14 = var_3;
                    var_15 = var_3;
                    var_16 = (max(var_16, 4269448510));
                }
            }
        }
    }
    var_17 = -973877671933534282;
    #pragma endscop
}
