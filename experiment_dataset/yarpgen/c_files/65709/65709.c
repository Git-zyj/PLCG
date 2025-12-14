/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 65709
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=65709 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/65709
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (min((!var_0), (min(3247696294897839135, (min(10, var_10))))));
    var_17 = ((-22955 ? var_0 : var_5));

    for (int i_0 = 2; i_0 < 17;i_0 += 1)
    {
        var_18 |= (((arr_2 [i_0] [i_0]) || ((max((!-22960), 17)))));
        var_19 = 26767;
    }
    #pragma endscop
}
