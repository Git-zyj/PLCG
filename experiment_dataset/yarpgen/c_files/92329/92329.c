/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 92329
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=92329 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/92329
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = ((var_12 > -var_6) ? ((((min(15337, var_2))) ? -var_7 : var_12)) : ((var_2 ? (15337 != 49) : (max(var_0, var_10)))));
    var_15 = ((!((max(((var_8 ? var_0 : var_13)), var_9)))));
    var_16 = (min(var_16, ((max(206, (max((var_13 % 1), var_8)))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            {
                var_17 = (max(-var_9, (~var_9)));
                var_18 = ((~((min(var_4, var_6)))));
            }
        }
    }
    var_19 = (max(((max(var_7, 0))), var_4));
    #pragma endscop
}
