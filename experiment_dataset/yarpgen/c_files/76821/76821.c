/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 76821
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=76821 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/76821
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 &= var_11;
    var_14 = ((((((max(9223372036854775807, 9223372036854775807)) | -83))) ? (min((!var_9), (2702518409196957096 | var_6))) : var_0));

    /* vectorizable */
    for (int i_0 = 3; i_0 < 14;i_0 += 1)
    {
        arr_2 [i_0] = (arr_1 [i_0] [i_0]);
        arr_3 [i_0] = (((arr_1 [i_0] [i_0]) ? 53793 : ((var_2 ? (arr_0 [i_0]) : 2047))));
    }
    #pragma endscop
}
