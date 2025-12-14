/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 83897
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=83897 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/83897
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = var_14;

    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        arr_2 [i_0] = 1;
        var_16 = (-(arr_0 [i_0] [i_0]));
        var_17 = var_14;
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 21;i_1 += 1)
    {
        arr_7 [i_1] = 30723;
        arr_8 [i_1] [i_1] = ((0 ? (((arr_5 [i_1]) * 1)) : -49));
        var_18 = (min(var_18, 249));
        var_19 |= 15;
    }
    var_20 = ((((min((min(1, 25622)), 1148))) ? (((min(50, -30354)))) : ((-1 - (((-570822312 ? var_12 : var_8)))))));
    #pragma endscop
}
