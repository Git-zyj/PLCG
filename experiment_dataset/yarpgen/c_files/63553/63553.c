/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 63553
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=63553 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/63553
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (-(((((var_17 ? var_12 : var_10))) & ((var_14 ? var_9 : var_4)))));

    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        var_20 *= (max(var_14, (((~var_11) - (arr_1 [i_0])))));
        var_21 = ((var_5 ? var_4 : (!-1)));
    }
    var_22 = (-var_7 / var_0);
    #pragma endscop
}
