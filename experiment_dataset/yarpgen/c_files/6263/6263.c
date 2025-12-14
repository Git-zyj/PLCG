/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 6263
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=6263 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/6263
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 20;i_2 += 1)
            {
                {
                    arr_10 [i_0] [i_1] [i_0] [i_0] = (((~36028792723996672) ^ (((((arr_3 [i_1 - 1] [i_1 + 4]) <= (arr_8 [i_0] [i_1 + 1] [i_2] [18])))))));
                    var_16 |= (arr_8 [7] [i_1] [i_2] [i_2]);
                    var_17 ^= (arr_3 [i_2] [i_1 + 1]);
                }
            }
        }
    }
    var_18 = var_7;
    var_19 ^= var_15;
    var_20 = (min(var_20, 4294967295));
    #pragma endscop
}
