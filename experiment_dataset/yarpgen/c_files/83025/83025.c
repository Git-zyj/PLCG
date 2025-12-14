/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 83025
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=83025 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/83025
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (var_9 ^ var_5);
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 17;i_2 += 1)
            {
                {
                    arr_8 [i_0] = (max((arr_3 [i_0 + 1] [i_1]), (((arr_3 [i_2] [i_0]) ? (arr_3 [i_0 - 2] [i_2]) : (arr_3 [i_0 + 1] [i_1])))));
                    var_16 ^= ((-var_1 ? var_2 : ((699269105685556509 ? (arr_2 [i_0 + 1]) : (arr_2 [i_2])))));
                }
            }
        }
    }
    var_17 = (min((max((max(23, -23638)), var_6)), ((((699269105685556511 ? 23 : 1)) >> (((min(17747474968023995107, var_1)) - 2879657787))))));
    var_18 += (min(var_8, (min((!var_9), ((var_6 ? var_10 : var_11))))));
    #pragma endscop
}
