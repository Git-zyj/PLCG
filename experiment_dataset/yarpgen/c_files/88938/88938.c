/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 88938
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=88938 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/88938
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 |= var_14;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {
                var_21 = (min((((!var_4) ? ((min(var_5, 216))) : var_3)), var_2));
                var_22 = (min(var_22, (((-959518015 ? ((((max((arr_5 [i_0]), 2240699477))) ? ((var_3 ? var_1 : var_8)) : var_17)) : (arr_4 [i_0] [i_1] [i_1]))))));
                var_23 = ((var_3 ? (max(var_15, (max((arr_1 [i_1]), var_10)))) : ((max(var_12, var_1)))));
            }
        }
    }
    var_24 = (min(((((var_16 ^ var_9) >> ((((2147483647 ? -84 : var_17)) + 106))))), (min(var_5, var_4))));
    #pragma endscop
}
