/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 73539
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=73539 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/73539
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        arr_2 [6] &= (218 ? ((43 ? (arr_1 [0]) : -30304)) : -30304);
        var_20 = ((30302 >> (var_13 - 36862)));
        var_21 |= 8746336647548954563;
    }
    for (int i_1 = 0; i_1 < 16;i_1 += 1)
    {
        var_22 = ((8746336647548954563 ? -30303 : 22));
        arr_6 [3] = var_19;
    }
    var_23 = var_15;
    var_24 = (((!var_9) ? var_15 : var_6));
    #pragma endscop
}
