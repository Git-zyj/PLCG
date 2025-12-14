/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 64389
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=64389 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/64389
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        var_17 = (max(var_17, (((((var_0 ? 856 : (arr_2 [5] [i_0]))) != (~64680))))));
        var_18 = (max(var_18, (((var_0 ? (~var_8) : ((var_11 ? var_16 : (arr_1 [i_0]))))))));
    }
    var_19 -= (var_12 * var_13);
    var_20 = var_16;
    var_21 = (min(var_21, var_5));
    #pragma endscop
}
