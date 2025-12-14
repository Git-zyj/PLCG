/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 76870
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=76870 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/76870
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = var_0;
    var_14 = (min(var_14, var_3));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        arr_3 [i_0] = ((3 ? var_8 : (arr_2 [i_0])));
        arr_4 [i_0] [i_0] = 4;
        var_15 *= 2147483647;
        arr_5 [i_0] = (arr_2 [i_0]);
        var_16 = (((65535 ? var_10 : var_6)));
    }
    #pragma endscop
}
