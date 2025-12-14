/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 92324
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=92324 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/92324
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 1; i_0 < 9;i_0 += 1)
    {
        var_17 = (var_8 * var_14);
        arr_3 [i_0] = -var_16;
    }

    for (int i_1 = 0; i_1 < 1;i_1 += 1)
    {
        var_18 = var_12;
        var_19 = ((!((min(var_3, var_2)))));
    }
    var_20 -= (max(var_10, (((~((min(var_1, var_11))))))));
    #pragma endscop
}
