/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 79303
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=79303 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/79303
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 -= (((((0 ^ 10775783320263170290) ? (max(var_12, 32012)) : (1 <= var_10))) >= (((-31996 >= (((-9223372036854775807 - 1) ? -1710873300 : 250)))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 12;i_1 += 1)
        {
            {
                var_19 += 31996;
                arr_6 [i_1] [5] = var_9;
            }
        }
    }
    var_20 &= ((9223372036854775807 ? 0 : ((31996 ? var_0 : (0 - 0)))));

    /* vectorizable */
    for (int i_2 = 1; i_2 < 14;i_2 += 1)
    {
        arr_11 [i_2 + 1] = (((var_10 & 31998) ? 6331422985718558477 : -var_2));
        var_21 = (~-838);
    }
    #pragma endscop
}
