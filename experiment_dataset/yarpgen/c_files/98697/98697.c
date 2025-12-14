/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 98697
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=98697 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/98697
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (max(var_8, var_3));
    var_15 = var_11;

    /* vectorizable */
    for (int i_0 = 1; i_0 < 14;i_0 += 1)
    {
        var_16 = (((((var_0 ? var_0 : var_4))) ? var_7 : var_1));
        var_17 *= ((var_1 ? var_3 : var_13));
    }
    var_18 = ((var_3 ? var_0 : var_5));
    #pragma endscop
}
