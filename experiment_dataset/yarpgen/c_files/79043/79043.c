/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 79043
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=79043 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/79043
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 ^= (!var_8);
    var_12 ^= (((~4294967295) ? (((0 << (var_9 - 1381838297)))) : (max(var_8, ((var_10 ? 1 : 7139428869582813082))))));

    /* vectorizable */
    for (int i_0 = 1; i_0 < 23;i_0 += 1)
    {
        arr_4 [23] = var_10;
        arr_5 [4] |= (((((arr_0 [i_0]) ? var_2 : var_8)) > (!1)));
    }
    #pragma endscop
}
