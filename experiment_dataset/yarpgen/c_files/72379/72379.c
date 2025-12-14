/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 72379
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=72379 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/72379
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (((((((min(var_16, var_8))) ? (((var_11 ? var_13 : var_10))) : 18446744073709551615))) ? var_6 : (!var_18)));
    var_20 = (!var_5);

    /* vectorizable */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        arr_3 [i_0] = var_0;
        arr_4 [i_0] = (((arr_1 [i_0] [i_0]) ? ((14 ? (-127 - 1) : (-127 - 1))) : (arr_2 [i_0])));
        arr_5 [i_0] [i_0] = (((arr_0 [i_0] [i_0]) ? var_16 : (arr_1 [i_0] [i_0])));
    }
    var_21 = var_17;
    var_22 = var_18;
    #pragma endscop
}
