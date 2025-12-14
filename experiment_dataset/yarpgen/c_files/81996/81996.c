/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 81996
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=81996 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/81996
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 &= var_6;
    var_21 = var_16;
    var_22 = var_17;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 21;i_1 += 1)
        {
            {
                var_23 = (min((((((0 ? 1 : 1))) ? var_18 : ((1 ? var_18 : var_5)))), 105));
                var_24 = (min(var_24, ((min(var_12, ((((min(105, 1))) ? ((var_3 ? 8915 : var_2)) : var_8)))))));
                arr_5 [i_0] [i_1 + 2] [i_1] = 1;
            }
        }
    }
    var_25 = 61346;
    #pragma endscop
}
