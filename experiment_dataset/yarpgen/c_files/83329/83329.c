/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 83329
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=83329 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/83329
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = var_6;
    var_12 = var_10;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 12;i_1 += 1)
        {
            {
                var_13 ^= (min((arr_3 [i_1]), 2835600766369854485));
                var_14 = -1598103305;
            }
        }
    }
    var_15 |= (~-2133);
    #pragma endscop
}
