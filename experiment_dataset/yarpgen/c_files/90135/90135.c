/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 90135
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=90135 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/90135
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 ^= (max(((var_5 ? (var_8 ^ var_11) : -5983540502105341422)), 1111449573));
    var_14 = (((1 ? 10 : 1185975734)));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            {
                var_15 |= 1999;
                var_16 &= (((((-(~2023)))) ? (((-2024 || (arr_0 [i_1] [4])))) : -1999));
            }
        }
    }
    var_17 = (max(var_17, (~var_11)));
    var_18 = (min(var_18, var_4));
    #pragma endscop
}
