/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 83052
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=83052 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/83052
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            {
                var_14 ^= ((min(2048, (arr_0 [i_1]))));
                arr_5 [0] [i_1] [i_1] = (max((((((min(1073217536, 1073217536))) ^ (min(0, var_2))))), (min(-5479355124819897934, 0))));
            }
        }
    }
    var_15 = -var_13;
    #pragma endscop
}
