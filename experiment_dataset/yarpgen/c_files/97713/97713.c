/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 97713
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=97713 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/97713
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 1; i_0 < 20;i_0 += 1)
    {
        var_20 = (((62765 / 9223372036854775807) - (arr_0 [i_0 + 1])));
        var_21 = var_3;
    }
    var_22 = (max(var_6, ((2784 ? 2784 : var_13))));
    var_23 = (min(var_23, (((-((var_1 ? (var_11 / var_7) : ((62765 ? 62765 : 0)))))))));
    #pragma endscop
}
