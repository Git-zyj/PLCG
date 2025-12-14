/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 68442
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=68442 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/68442
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 += var_7;

    /* vectorizable */
    for (int i_0 = 2; i_0 < 14;i_0 += 1)
    {
        var_18 = var_9;
        var_19 += (!var_6);
        arr_4 [i_0] = var_11;
        arr_5 [i_0] [i_0] = 53;
    }
    #pragma endscop
}
