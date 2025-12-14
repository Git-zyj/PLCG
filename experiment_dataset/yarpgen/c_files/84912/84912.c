/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 84912
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=84912 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/84912
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_0;
    var_21 = -51;
    var_22 = var_18;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 8;i_1 += 1)
        {
            {
                arr_8 [i_1] = var_13;
                arr_9 [i_1] = var_3;
            }
        }
    }
    var_23 = var_19;
    #pragma endscop
}
