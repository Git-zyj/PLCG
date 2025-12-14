/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 87795
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=87795 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/87795
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 4; i_0 < 20;i_0 += 1)
    {
        arr_2 [i_0] = (((arr_0 [i_0 + 1]) ^ 6013));
        var_15 = -2722;
    }
    var_16 = var_5;
    var_17 -= ((var_5 ? ((~((min(var_0, var_12))))) : var_10));
    #pragma endscop
}
