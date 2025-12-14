/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 97689
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=97689 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/97689
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (min(var_11, var_6));
    var_12 = (max(var_0, var_6));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        var_13 = var_3;
        arr_2 [i_0] = ((var_8 * (arr_0 [i_0])));
        var_14 -= (((arr_1 [i_0] [i_0]) ? (arr_0 [i_0]) : var_10));
    }
    var_15 = (min(1, (((((4294967290 ? 19 : var_7))) >= var_3))));
    #pragma endscop
}
