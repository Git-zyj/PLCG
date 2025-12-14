/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 57299
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=57299 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/57299
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (((min((((-9223372036854775807 - 1) ? 1 : -5501862194478020284)), 0)) * ((((((70 ? var_1 : var_0)) >= var_7))))));
    var_14 = ((0 ? var_2 : ((((min(0, var_11))) ? ((0 ? 1 : var_11)) : var_5))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        arr_2 [i_0] = ((1 ? 17675 : 255));
        var_15 = (arr_0 [i_0]);
        var_16 = (max(var_16, (arr_1 [i_0])));
    }
    #pragma endscop
}
