/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 95524
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=95524 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/95524
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (max(((-(~49))), 140));
    var_19 = 11053;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 14;i_0 += 1) /* same iter space */
    {
        arr_4 [i_0] = var_0;
        var_20 ^= ((var_14 <= (var_16 | var_7)));
        arr_5 [i_0] = ((-(54483 - 19919)));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 14;i_1 += 1) /* same iter space */
    {
        var_21 = (131163502 % var_11);
        var_22 = (!var_9);
        var_23 *= (-9223372036854775807 - 1);
    }
    /* vectorizable */
    for (int i_2 = 0; i_2 < 1;i_2 += 1)
    {
        var_24 = var_10;
        arr_12 [i_2] [6] = ((var_11 ? -46 : var_17));
        var_25 ^= var_15;
    }
    var_26 = var_3;
    #pragma endscop
}
