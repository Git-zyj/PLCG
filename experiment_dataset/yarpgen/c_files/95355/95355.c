/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 95355
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=95355 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/95355
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        var_13 = 12288;
        var_14 = ((~(((arr_0 [9]) ? (arr_2 [i_0]) : var_6))));
        arr_3 [10] = (arr_0 [i_0]);
        var_15 *= 13099;
    }
    /* vectorizable */
    for (int i_1 = 2; i_1 < 13;i_1 += 1)
    {
        var_16 = (~-12305);
        var_17 = var_4;
    }
    var_18 += ((((((var_5 ? var_7 : var_3)) ? (max(3903676502945673047, var_4)) : var_12))));
    #pragma endscop
}
