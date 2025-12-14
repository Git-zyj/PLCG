/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 68562
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=68562 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/68562
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 0;i_0 += 1)
    {
        var_14 -= (((arr_1 [i_0 + 1]) ? var_11 : (var_4 | var_3)));
        var_15 -= ((16 ? -19 : 1));
    }
    var_16 = (min(var_16, var_10));
    var_17 &= var_6;
    var_18 = (((min(var_3, var_0)) + 3676058190));
    #pragma endscop
}
