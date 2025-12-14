/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 94009
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=94009 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/94009
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            {
                var_14 *= (arr_0 [i_0 + 2]);
                var_15 = (min(var_15, (((((var_8 ^ 23558) | ((var_13 ? var_13 : (arr_2 [i_0]))))) * (8188 | -23558)))));
            }
        }
    }
    var_16 = var_10;
    var_17 = 81;
    var_18 ^= var_0;
    #pragma endscop
}
