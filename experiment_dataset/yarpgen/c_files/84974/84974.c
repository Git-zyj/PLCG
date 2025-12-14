/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 84974
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=84974 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/84974
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 16;i_1 += 1)
        {
            {
                var_17 = (((((((arr_0 [i_1 + 1]) ? 24354 : (arr_1 [15] [i_1 - 1]))))) + var_4));
                var_18 = var_8;
            }
        }
    }
    var_19 ^= var_7;
    var_20 *= var_10;
    #pragma endscop
}
