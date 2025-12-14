/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 86647
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=86647 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/86647
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (max(var_17, (((((((0 % var_10) ? (~-51) : (var_10 | var_4)))) ? (((var_10 == (var_6 * 0)))) : ((var_6 ? ((max(var_12, var_11))) : 1)))))));
    var_18 = (~var_10);
    var_19 = ((462233013 ? (min((max((-9223372036854775807 - 1), var_14)), ((137438951424 ? 496 : -137438951425)))) : var_11));

    /* vectorizable */
    for (int i_0 = 1; i_0 < 23;i_0 += 1)
    {
        arr_4 [i_0 - 1] = var_16;
        arr_5 [i_0] = ((((var_1 ? 29987 : 2777267262910973928)) - (arr_2 [i_0 + 1])));
    }
    var_20 = -1;
    #pragma endscop
}
