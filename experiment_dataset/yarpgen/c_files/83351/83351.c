/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 83351
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=83351 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/83351
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_14;
    var_21 = var_18;

    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        var_22 = (-9223372036854775807 - 1);
        var_23 = var_6;
        var_24 = -57446;
    }
    /* vectorizable */
    for (int i_1 = 1; i_1 < 13;i_1 += 1)
    {
        arr_6 [i_1 - 1] [i_1 - 1] |= (((arr_2 [i_1 - 1]) != var_11));
        var_25 = (arr_4 [i_1]);
    }
    var_26 = (-9223372036854775807 - 1);
    #pragma endscop
}
