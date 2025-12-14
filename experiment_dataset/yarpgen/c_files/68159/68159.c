/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 68159
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=68159 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/68159
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = ((((((var_6 ? var_10 : var_6)))) ? var_10 : var_9));
    var_21 = ((((min(var_9, var_10))) ? ((((max(var_9, var_11))) ? ((var_15 ? var_12 : var_14)) : ((var_5 ? var_13 : var_6)))) : ((-(max(var_17, var_5))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            {
                var_22 *= (min(((var_4 ? ((var_0 ? var_8 : var_3)) : var_19)), (min(((min(var_7, var_16))), ((var_8 ? var_13 : var_7))))));
                var_23 = ((-(min(var_13, ((var_19 ? var_14 : var_7))))));
                var_24 = (min(var_9, var_13));
            }
        }
    }
    #pragma endscop
}
