/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 777
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=777 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/777
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_9;
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 22;i_1 += 1)
        {
            {
                arr_7 [i_1] [i_1] = var_15;
                var_18 ^= (arr_1 [i_0]);
            }
        }
    }
    #pragma endscop
}
