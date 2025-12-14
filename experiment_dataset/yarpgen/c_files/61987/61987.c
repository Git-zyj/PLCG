/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 61987
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=61987 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/61987
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = ((+(((0 | var_15) ? var_4 : ((1 ? var_8 : var_16))))));

    for (int i_0 = 2; i_0 < 19;i_0 += 1)
    {
        arr_4 [i_0 - 2] [i_0] |= (arr_3 [i_0 - 1] [i_0]);
        var_21 *= 89;
    }
    var_22 = var_13;
    #pragma endscop
}
