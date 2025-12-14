/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 82728
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=82728 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/82728
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 9;i_1 += 1)
        {
            {
                var_10 = -1040842174;
                arr_4 [i_0] = var_3;
            }
        }
    }
    var_11 = var_9;
    var_12 += (min(3664, 165));
    #pragma endscop
}
