/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 57409
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=57409 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/57409
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (max(var_15, (min(((var_12 ? var_6 : (var_1 - var_1))), (max((min(4294967275, 1)), -var_4))))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            {
                var_16 = (((((max(-72055439, (arr_2 [i_1]))))) != (((((-(arr_0 [i_0] [i_0])))) ? (arr_1 [i_0 - 1]) : var_6))));
                var_17 ^= (~var_9);
            }
        }
    }
    #pragma endscop
}
