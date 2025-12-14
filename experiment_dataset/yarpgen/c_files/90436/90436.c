/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 90436
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=90436 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/90436
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            {
                var_20 *= var_14;
                arr_6 [i_0] = (var_7 * -49);
            }
        }
    }
    var_21 = (((((~16320) + 2147483647)) >> ((((var_2 != var_16) && var_18)))));
    var_22 = ((var_17 + ((((min(var_5, var_14))) ? var_0 : (max(var_11, var_17))))));
    #pragma endscop
}
