/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 63554
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=63554 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/63554
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (min(var_12, var_11));

    /* vectorizable */
    for (int i_0 = 1; i_0 < 17;i_0 += 1)
    {
        var_13 = (min(var_13, var_4));
        var_14 = ((var_9 ? var_1 : var_7));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 1;i_1 += 1)
    {
        var_15 = (min(var_15, (((0 >> (((arr_0 [10]) - 14098)))))));
        var_16 = (min(var_16, ((5242081755714189311 ? var_10 : var_11))));
    }
    /* vectorizable */
    for (int i_2 = 0; i_2 < 12;i_2 += 1)
    {
        var_17 = 5;
        arr_7 [i_2] [i_2] = 255;
    }
    var_18 = (((((var_3 ? var_7 : (61949 << 9)))) ? (max(var_7, (var_5 / 4294967291))) : 9223372036854775807));
    #pragma endscop
}
