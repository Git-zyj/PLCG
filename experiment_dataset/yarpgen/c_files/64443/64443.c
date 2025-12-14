/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 64443
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=64443 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/64443
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 8;i_0 += 1)
    {
        arr_3 [i_0 - 1] = (((((((var_9 ? -6359049482462641590 : var_2)) + (1 + var_9)))) ? (var_3 < var_12) : (min((max((arr_0 [i_0]), 4)), (min(var_1, var_12))))));
        arr_4 [i_0] [i_0 - 1] = ((max(((var_9 ? var_6 : (arr_0 [i_0 + 1]))), (var_5 / var_5))));
    }
    var_14 = (~var_12);
    var_15 = (max(var_15, ((~(((var_3 ^ var_3) ? ((var_5 ? var_8 : 3068754241430272206)) : (-3068754241430272222 ^ 3068754241430272189)))))));
    var_16 = var_0;
    var_17 = var_13;
    #pragma endscop
}
