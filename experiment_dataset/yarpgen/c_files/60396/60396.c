/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 60396
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=60396 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/60396
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 4; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 16;i_2 += 1)
            {
                {
                    arr_8 [i_0] [i_0] = ((((~((0 ? 206 : var_11)))) & (((min((arr_1 [i_0 - 1] [i_1 - 1]), (arr_1 [i_0 - 4] [i_2])))))));
                    var_14 *= (min(2808, -2808));
                }
            }
        }
    }
    var_15 ^= (min(0, ((var_7 ? (max(48, var_9)) : var_9))));
    var_16 = var_9;
    #pragma endscop
}
