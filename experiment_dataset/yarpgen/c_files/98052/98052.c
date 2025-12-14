/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 98052
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=98052 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/98052
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (max(((max(var_6, var_16))), ((((min(var_14, var_11))) ? ((var_3 ? var_4 : var_5)) : (((max(199, 21744))))))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_19 = (((-21750 ? 4 : (arr_0 [0]))));
        var_20 = (((arr_1 [i_0]) > (arr_1 [i_0])));
    }
    for (int i_1 = 0; i_1 < 10;i_1 += 1)
    {
        var_21 = ((9 || (arr_1 [i_1])));
        var_22 |= (min((var_4 / var_15), var_10));
        var_23 = ((max((arr_5 [i_1]), (arr_1 [i_1]))));
    }
    var_24 = var_14;
    var_25 -= max((max(var_9, var_10)), var_11);
    #pragma endscop
}
