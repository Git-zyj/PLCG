/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 75742
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=75742 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/75742
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        var_16 = (min(var_16, (((65534 ? -33 : -93)))));
        var_17 = ((arr_0 [i_0] [i_0]) ? (arr_1 [i_0] [i_0]) : (arr_1 [i_0] [i_0]));
    }

    for (int i_1 = 0; i_1 < 15;i_1 += 1)
    {
        arr_4 [i_1] = (!var_14);
        arr_5 [i_1] [i_1] = var_2;
    }
    var_18 = ((var_15 <= ((var_2 ? var_8 : 1))));
    var_19 = var_7;
    #pragma endscop
}
