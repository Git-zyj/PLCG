/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 73577
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=73577 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/73577
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (-var_2 * var_0);
    var_16 = (max(var_16, (((max(var_11, var_4))))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        arr_3 [i_0] = (var_12 * -var_0);
        var_17 = (min(var_17, var_13));
    }
    #pragma endscop
}
