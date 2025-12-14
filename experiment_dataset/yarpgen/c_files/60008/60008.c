/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 60008
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=60008 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/60008
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = ((1 ? (min((!var_8), var_17)) : ((var_12 ? var_6 : 1))));
    var_19 = var_12;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        arr_4 [i_0] = ((1 ? 8 : 1));
        var_20 ^= (arr_0 [i_0]);
    }
    #pragma endscop
}
