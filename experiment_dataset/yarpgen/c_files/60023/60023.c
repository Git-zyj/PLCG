/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 60023
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=60023 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/60023
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 14;i_2 += 1)
            {
                {
                    var_10 = 9512099678456987782;
                    arr_8 [5] [1] [i_2 - 1] [i_0] = 252;
                }
            }
        }
    }
    var_11 = -1121626372;
    var_12 |= 2646767113;
    #pragma endscop
}
