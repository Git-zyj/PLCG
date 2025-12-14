/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 72624
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=72624 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/72624
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 ^= ((var_11 ? -124 : (max(var_2, (~-124)))));
    var_14 = (3015809392 | ((((((112 ? (-2147483647 - 1) : -3192932249305257140)) < 3015809367)))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 4; i_2 < 18;i_2 += 1)
            {
                {
                    var_15 = var_3;
                    var_16 = var_1;
                }
            }
        }
    }
    #pragma endscop
}
