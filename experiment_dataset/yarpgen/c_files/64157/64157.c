/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 64157
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=64157 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/64157
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    arr_6 [i_2] = 1;
                    arr_7 [i_2] [i_1] [i_2] = ((~(((((arr_5 [i_2] [i_2] [i_2] [i_0 - 1]) + 2147483647)) >> (var_8 + 29839)))));
                }
            }
        }
    }
    var_13 ^= var_9;
    var_14 = (min((max(var_6, var_12)), (!var_2)));
    var_15 = var_10;
    #pragma endscop
}
